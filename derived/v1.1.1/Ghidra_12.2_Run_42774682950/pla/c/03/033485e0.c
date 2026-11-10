/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033485e0; name: FUN_033485e0
 */


void FUN_033485e0(long param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = -param_2;
  if (-1 < param_3) {
    iVar1 = param_2;
  }
  iVar2 = -param_3;
  if (-1 < param_3) {
    iVar2 = param_3;
  }
  iVar3 = -iVar1;
  if (-1 < iVar1) {
    iVar3 = iVar1;
  }
  *(byte *)(param_1 + 0x20) = (byte)((uint)iVar1 >> 0x1f);
  FUN_03348630(param_1,iVar3);
  FUN_03348630(param_1 + 0x10,iVar2);
  return;
}


