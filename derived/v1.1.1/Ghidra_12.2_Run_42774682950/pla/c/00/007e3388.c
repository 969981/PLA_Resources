/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007e3388; name: FUN_007e3388
 */


void FUN_007e3388(int param_1)

{
  if (param_1 - 2U < 0x13) {
    *(undefined4 *)PTR_DAT_04377400 = *(undefined4 *)(&DAT_03a715c0 + (long)(int)(param_1 - 2U) * 4)
    ;
    return;
  }
  *(undefined4 *)PTR_DAT_04377400 = 0x13;
  return;
}


