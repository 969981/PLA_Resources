/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0085aab4; name: FUN_0085aab4
 */


void FUN_0085aab4(long param_1)

{
  if (*(long *)(param_1 + 0x1398) == 0) {
    return;
  }
  FUN_0085b5f0();
                    /* WARNING: Could not recover jumptable at 0x0085aadc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x1398) + 0x10))(*(long **)(param_1 + 0x1398),0);
  return;
}


