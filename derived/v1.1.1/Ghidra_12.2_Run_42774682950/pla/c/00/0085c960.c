/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0085c960; name: FUN_0085c960
 */


void FUN_0085c960(long param_1)

{
  FUN_007f5abc();
  FUN_0085c7b4(param_1);
  FUN_0085c990(param_1);
                    /* WARNING: Could not recover jumptable at 0x0085c98c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x1318) + 0x20))();
  return;
}


