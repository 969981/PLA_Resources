/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032e20b0; name: FUN_032e20b0
 */


ulong * FUN_032e20b0(ulong *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  while( true ) {
    uVar2 = *param_1;
    if ((uVar2 & param_2) != 0) {
      if (param_1 == (ulong *)0x0) {
        return (ulong *)0x0;
      }
      uVar1 = param_2 - 1 & (uint)uVar2;
      uVar1 = uVar1 - (uVar1 >> 1 & 0x55555555);
      uVar1 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333);
      return param_1 + (ulong)((uVar1 + (uVar1 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2;
    }
    if ((uVar2 & 1) != 0) break;
    param_1 = (ulong *)param_1[1];
    if (param_1 == (ulong *)0x0) {
      return (ulong *)0x0;
    }
  }
  return (ulong *)0x0;
}


