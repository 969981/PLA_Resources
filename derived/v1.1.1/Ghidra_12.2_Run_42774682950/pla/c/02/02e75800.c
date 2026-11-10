/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e75800; name: FUN_02e75800
 */


ulong FUN_02e75800(void)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = FUN_02f0f6b4();
  uVar3 = (ulong)uVar1;
  if ((uVar1 == 1) && (DAT_0440a128 == 0)) {
    lVar2 = (*DAT_0442d138)(0x10,0xb8);
    if (lVar2 == 0) {
      DAT_0440a128 = 0;
      uVar3 = 0x34;
    }
    else {
      FUN_02e7d520();
      DAT_0440a128 = lVar2;
      uVar1 = FUN_02e7d5c4(lVar2);
      uVar3 = (ulong)uVar1;
      lVar2 = nn::os::GetSystemTickFrequency();
      DAT_0440a328 = (float)((double)lVar2 * 0.001);
      if (uVar1 == 1) {
        uVar3 = FUN_02e860a0(DAT_0440a128);
        return uVar3;
      }
    }
  }
  return uVar3;
}


