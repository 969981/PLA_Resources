/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0015b160; name: FUN_0015b160
 */


void FUN_0015b160(long param_1)

{
  short sVar1;
  int iVar2;
  
  *(short *)(param_1 + 0xc4) = *(short *)(param_1 + 0xc4) + 1;
  sVar1 = *(short *)(param_1 + 0xc6);
  *(short *)(param_1 + 0xc6) = sVar1 + 1;
  if (199 < (ushort)(sVar1 + 1U)) {
    if ((ushort)(sVar1 + 1U) == 200) {
                    /* WARNING: Subroutine does not return */
      FUN_001599d0(param_1,"C stack overflow");
    }
    if (0xe0 < (ushort)(sVar1 + 1U)) {
                    /* WARNING: Subroutine does not return */
      FUN_0015a320(param_1,6);
    }
  }
  iVar2 = FUN_0015abc0(param_1);
  if (iVar2 == 0) {
    FUN_001766f0(param_1);
  }
  *(short *)(param_1 + 0xc6) = *(short *)(param_1 + 0xc6) + -1;
  *(short *)(param_1 + 0xc4) = *(short *)(param_1 + 0xc4) + -1;
  return;
}


