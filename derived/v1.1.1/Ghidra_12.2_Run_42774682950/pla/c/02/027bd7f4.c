/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027bd7f4; name: FUN_027bd7f4
 */


void FUN_027bd7f4(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 local_18;
  
  local_18 = param_2;
  plVar1 = (long *)FUN_0120ca1c();
  lVar2 = *plVar1;
  *(long *)PTR_DAT_0437e8f8 = lVar2;
  if (lVar2 != 0) {
    FUN_027bd830(lVar2,&local_18);
  }
  return;
}


