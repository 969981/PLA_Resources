/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001f2798; name: FUN_001f2798
 */


int FUN_001f2798(long *param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *param_1;
  *(undefined8 *)(lVar2 + 0xf78) = 0;
  iVar1 = FUN_001f27f0();
  if (iVar1 == 0) {
    if (((*(byte *)(lVar2 + 0xfac) >> 4 & 1) == 0) && ((*(byte *)(lVar2 + 0x10fc) & 1) == 0)) {
      FUN_001e674c(*(undefined8 *)(lVar2 + 0x668),&DAT_0396725e);
    }
    *(undefined4 *)(lVar2 + 0x10f8) = 0;
  }
  return iVar1;
}


