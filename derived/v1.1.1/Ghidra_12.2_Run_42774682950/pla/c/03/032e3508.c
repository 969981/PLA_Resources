/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032e3508; name: FUN_032e3508
 */


ulong FUN_032e3508(ulong *param_1)

{
  ulong uVar1;
  
  do {
    uVar1 = *param_1;
    if (((uint)uVar1 >> 2 & 1) != 0) {
      return param_1[(uVar1 >> 1 & 1) + (uVar1 & 1) + 2];
    }
    param_1 = (ulong *)param_1[1];
  } while (param_1 != (ulong *)0x0);
  return 0;
}


