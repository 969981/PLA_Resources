/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032dd938; name: FUN_032dd938
 */


ulong * FUN_032dd938(ulong *param_1)

{
  ulong *puVar1;
  uint uVar2;
  
  for (; (param_1 != (ulong *)0x0 && ((*param_1 & 1) == 0)); param_1 = (ulong *)param_1[1]) {
  }
  puVar1 = param_1;
  do {
    uVar2 = (uint)*puVar1;
    if ((uVar2 >> 0xf & 1) != 0) {
      uVar2 = (uVar2 & 0x7fff) - (uVar2 >> 1 & 0x1555);
      uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333);
      if (((long *)puVar1[(ulong)((uVar2 + (uVar2 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2] ==
           (long *)0x0) ||
         (puVar1 = *(ulong **)
                    puVar1[(ulong)((uVar2 + (uVar2 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2],
         puVar1 == (ulong *)0x0)) {
        return param_1;
      }
      return puVar1;
    }
    if ((*puVar1 & 9) != 0) {
      return param_1;
    }
    puVar1 = (ulong *)puVar1[1];
  } while (puVar1 != (ulong *)0x0);
  return param_1;
}


