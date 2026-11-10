/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a47440; name: FUN_02a47440
 */


void FUN_02a47440(undefined8 param_1)

{
  if (0x3ff < DAT_043eeed0) {
                    /* WARNING: Subroutine does not return */
    FUN_02a47540();
  }
  *(undefined8 *)(&DAT_043eced0 + (long)(int)DAT_043eeed0 * 8) = param_1;
  DAT_043eeed0 = DAT_043eeed0 + 1;
  return;
}


