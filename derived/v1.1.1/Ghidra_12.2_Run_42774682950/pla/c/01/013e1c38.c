/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013e1c38; name: FUN_013e1c38
 */


ulong FUN_013e1c38(ulong param_1)

{
  ulong uVar1;
  uint uVar2;
  
  if ((int)param_1 != 1) {
    param_1 = param_1 & 0xffffffff;
    do {
      uVar2 = (uint)param_1;
      if ((uVar2 < 9) && ((0x183U >> (ulong)(uVar2 & 0x1f) & 1) != 0)) {
        param_1 = 6;
      }
      else {
        param_1 = (ulong)(uVar2 - 1);
      }
      uVar1 = FUN_013e19d0(param_1);
      if ((uVar1 & 1) != 0) {
        return 0;
      }
    } while ((int)param_1 != 0);
    param_1 = 1;
  }
  return param_1;
}


