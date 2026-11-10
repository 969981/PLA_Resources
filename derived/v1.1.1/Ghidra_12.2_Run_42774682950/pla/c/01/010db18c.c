/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010db18c; name: FUN_010db18c
 */


undefined4 FUN_010db18c(undefined8 param_1,uint param_2)

{
  if (param_2 < 3) {
    return *(undefined4 *)(&DAT_03a78e10 + (long)(int)param_2 * 4);
  }
  return 0;
}


