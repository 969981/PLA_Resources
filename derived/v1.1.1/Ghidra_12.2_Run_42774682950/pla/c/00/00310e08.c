/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00310e08; name: FUN_00310e08
 */


long FUN_00310e08(long *param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  
  if ((char)param_1[7] != '\0') {
    return param_2;
  }
  iVar2 = FUN_00310abc();
  if (iVar2 != 0) {
    (**(code **)(*(long *)param_1[6] + 0x18))((long *)param_1[6],iVar2);
  }
  plVar1 = param_1 + 2;
  *param_1 = (long)plVar1;
  param_1[1] = (long)plVar1;
  return (long)plVar1;
}


