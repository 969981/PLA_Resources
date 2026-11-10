/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008344fc; name: FUN_008344fc
 */


void FUN_008344fc(long param_1)

{
  if (*(long *)(param_1 + 0xa0) != 0) {
    FUN_0083c854();
    (**(code **)(**(long **)(param_1 + 0xa0) + 0x10))(*(long **)(param_1 + 0xa0),0);
  }
  if (*(long *)(param_1 + 0xa8) != 0) {
    FUN_0083ad78();
    (**(code **)(**(long **)(param_1 + 0xa8) + 0x10))(*(long **)(param_1 + 0xa8),0);
  }
  if (*(long *)(param_1 + 0xb0) != 0) {
    FUN_0083b9e4();
    (**(code **)(**(long **)(param_1 + 0xb0) + 0x10))(*(long **)(param_1 + 0xb0),0);
  }
  if (*(long *)(param_1 + 0xb8) != 0) {
    FUN_0083eff8();
    (**(code **)(**(long **)(param_1 + 0xb8) + 0x10))(*(long **)(param_1 + 0xb8),0);
  }
  if (*(long *)(param_1 + 0xc0) == 0) {
    return;
  }
  FUN_0083c01c();
                    /* WARNING: Could not recover jumptable at 0x008345a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xc0) + 0x10))(*(long **)(param_1 + 0xc0),0);
  return;
}


