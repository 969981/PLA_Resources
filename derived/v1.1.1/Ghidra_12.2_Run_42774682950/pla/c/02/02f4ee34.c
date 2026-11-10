/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f4ee34; name: FUN_02f4ee34
 */


bool FUN_02f4ee34(long param_1,undefined8 param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    return false;
  }
  iVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x18);
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + param_3;
  iVar1 = param_3;
  if (iVar2 <= param_3) {
    iVar1 = iVar2;
  }
  *param_4 = iVar1;
  return param_3 <= iVar2;
}


