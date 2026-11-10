/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003e4830; name: FUN_003e4830
 */


undefined8 FUN_003e4830(long *param_1,long param_2,long param_3,long param_4)

{
  undefined8 *__ptr;
  long *plVar1;
  
  __ptr = (undefined8 *)FUN_002ebd50(0x10);
  *__ptr = param_1;
  __ptr[1] = param_1;
  plVar1 = (long *)FUN_002ebd50(0x28);
  *plVar1 = *param_1;
  plVar1[1] = (long)param_1;
  *param_1 = (long)plVar1;
  *(long **)(*plVar1 + 8) = plVar1;
  plVar1[2] = param_2;
  plVar1[3] = param_3;
  plVar1[4] = param_4;
  free(__ptr);
  return 1;
}


