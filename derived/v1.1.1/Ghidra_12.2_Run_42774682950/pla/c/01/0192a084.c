/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0192a084; name: FUN_0192a084
 */


void FUN_0192a084(long param_1)

{
  *(undefined1 *)(param_1 + 0x2e8) = 1;
  *(undefined1 *)(param_1 + 0xfa) = 0;
                    /* WARNING: Could not recover jumptable at 0x0192a0a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x68) + 0x48))(*(long **)(param_1 + 0x68),0);
  return;
}


