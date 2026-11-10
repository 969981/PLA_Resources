/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007e5dd4; name: FUN_007e5dd4
 */


void FUN_007e5dd4(long *param_1)

{
  *param_1 = (long)(PTR_DAT_04377450 + 0x10);
  if ((param_1[3] != 0) && (param_1[4] != 0)) {
    if (*(long *)PTR_DAT_04377458 != 0) {
      FUN_007e8a48(*(long *)PTR_DAT_04377458,param_1);
      return;
    }
  }
  return;
}


