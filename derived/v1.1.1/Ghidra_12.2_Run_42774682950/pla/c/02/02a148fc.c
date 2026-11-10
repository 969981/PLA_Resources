/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a148fc; name: FUN_02a148fc
 */


void FUN_02a148fc(long param_1,byte param_2,short param_3)

{
  if (param_3 == 0) {
    param_3 = 1;
  }
  *(short *)(*(long *)(*(long *)(*(long *)(param_1 + 0x10) + 8) + (ulong)param_2 * 8 + 0x120) +
            0x366) = param_3;
  return;
}


