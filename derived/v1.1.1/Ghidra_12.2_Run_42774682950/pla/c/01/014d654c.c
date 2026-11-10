/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014d654c; name: FUN_014d654c
 */


void FUN_014d654c(long param_1,uint param_2)

{
  if (param_2 < 9) {
    *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(&DAT_03a7c134 + (long)(int)param_2 * 4);
  }
  return;
}


