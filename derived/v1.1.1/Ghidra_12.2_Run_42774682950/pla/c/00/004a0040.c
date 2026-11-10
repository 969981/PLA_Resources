/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004a0040; name: FUN_004a0040
 */


void FUN_004a0040(void)

{
  long in_x5;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(in_x5 + 8) + 0x60);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    FUN_0049fcc0();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004a005c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


