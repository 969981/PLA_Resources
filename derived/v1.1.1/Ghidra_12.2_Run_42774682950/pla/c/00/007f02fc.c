/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007f02fc; name: FUN_007f02fc
 */


int FUN_007f02fc(long param_1)

{
  int iVar1;
  ushort uVar2;
  
  uVar2 = *(ushort *)(param_1 + 0x48);
  iVar1 = uVar2 + 2;
  if ((uVar2 + 1 & 0x10000) == 0) {
    iVar1 = uVar2 + 1;
  }
  *(short *)(param_1 + 0x48) = (short)iVar1;
  return iVar1;
}


