/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d48aa4; name: FUN_00d48aa4
 */


undefined4 FUN_00d48aa4(long param_1,uint param_2)

{
  if (param_2 < 7) {
    return *(undefined4 *)(param_1 + (ulong)param_2 * 4 + 0x2c);
  }
  return 0;
}


