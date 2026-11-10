/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00211b04; name: FUN_00211b04
 */


undefined8 FUN_00211b04(long param_1,int param_2,int param_3)

{
  long lVar1;
  int iVar2;
  
  lVar1 = ((long)param_2 - (long)param_3) + (long)*(int *)(param_1 + 0xcc);
  iVar2 = (int)lVar1;
  if (lVar1 == iVar2) {
    *(int *)(param_1 + 0xcc) = iVar2;
    return 0;
  }
  return 0xffffffff;
}


