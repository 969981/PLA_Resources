/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a474d4; name: FUN_02a474d4
 */


void FUN_02a474d4(void)

{
  long lVar1;
  
  lVar1 = (long)DAT_043eeed0;
  if (0 < DAT_043eeed0) {
    do {
      lVar1 = lVar1 + -1;
      if (0x3ff < (uint)lVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_02a47540();
      }
      (**(code **)(**(long **)(&DAT_043eced0 + lVar1 * 8) + 8))();
    } while (lVar1 != 0);
  }
  DAT_043eeed0 = 0;
  return;
}


