/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032e8158; name: FUN_032e8158
 */


ulong FUN_032e8158(uint param_1,byte *param_2)

{
  long *plVar1;
  ulong uVar2;
  
  if ((((*param_2 >> 3 & 1) == 0) ||
      (plVar1 = (long *)FUN_032e2008(param_2,8), plVar1 == (long *)0x0)) || (*plVar1 == 0)) {
    return (ulong)param_1;
  }
  uVar2 = FUN_032e81b0(param_1);
  return uVar2;
}


