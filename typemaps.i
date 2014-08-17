%typemap(in,numinputs=0) unsigned char *OUTPUT (unsigned char temp)
	{
		$1=&temp;
	}
%typemap(argout) unsigned char *OUTPUT
	{
		PyObject *o, *o2, *o3;
    o = PyInt_FromLong(*$1);
    if ((!$result) || ($result == Py_None))
		{
			$result = o;
    }
		else
		{
      if(!PyTuple_Check($result)) //build a tuple
			 {
            PyObject *o2 = $result;
            $result = PyTuple_New(1);
            PyTuple_SetItem($result,0,o2);
        }
				o3 = PyTuple_New(1);
        PyTuple_SetItem(o3,0,o);
        o2 = $result;
        $result = PySequence_Concat(o2,o3);
        Py_DECREF(o2);
        Py_DECREF(o3);
    }
	}
%typemap(freearg) unsigned char **
	{
		free((unsigned char *) $1);
	}