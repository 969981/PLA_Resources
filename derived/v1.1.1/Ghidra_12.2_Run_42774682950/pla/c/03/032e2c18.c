/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032e2c18; name: FUN_032e2c18
 */


ulong FUN_032e2c18(long *param_1)

{
  ulong *puVar1;
  uint uVar2;
  
  puVar1 = (ulong *)*param_1;
  while( true ) {
    if (puVar1 == (ulong *)0x0) {
      return 0;
    }
    uVar2 = (uint)*puVar1;
    if ((uVar2 >> 0x10 & 1) != 0) break;
    if ((*puVar1 & 1) != 0) {
      return 0;
    }
    puVar1 = (ulong *)puVar1[1];
  }
  uVar2 = (uVar2 & 0xffff) - (uVar2 >> 1 & 0x5555);
  uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333);
  return puVar1[(ulong)((uVar2 + (uVar2 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2];
}


