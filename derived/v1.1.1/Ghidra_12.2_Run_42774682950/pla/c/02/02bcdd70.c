/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bcdd70; name: FUN_02bcdd70
 */


void FUN_02bcdd70(long *param_1)

{
  DAT_043f17a0 = param_1;
                    /* WARNING: Could not recover jumptable at 0x02bcdd88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb0))(param_1,"DebugHeap");
  return;
}


