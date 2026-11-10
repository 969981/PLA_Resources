/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 015102f4; name: FUN_015102f4
 */


undefined4 FUN_015102f4(long param_1,uint param_2)

{
  if (param_2 < *(uint *)(param_1 + 0xc60)) {
    return *(undefined4 *)(param_1 + (long)(int)param_2 * 0xc + 0x60);
  }
  return 0;
}


