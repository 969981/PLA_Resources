/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007f8670; name: FUN_007f8670
 */


void FUN_007f8670(long param_1)

{
  if (*(long **)(param_1 + 0x1b8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x1b8) + 0x28))();
  }
  if (*(long **)(param_1 + 400) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 400) + 0x28))();
  }
  if (*(long **)(param_1 + 0x188) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x188) + 0x28))();
  }
  if (*(long **)(param_1 + 0x1158) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x1158) + 0x28))();
  }
  if (*(long *)(param_1 + 0x180) != 0) {
    FUN_008000a8();
  }
  if (*(long **)(param_1 + 0x170) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x170) + 0x28))();
  }
  if (*(long **)(param_1 + 0x178) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x178) + 0x28))();
  }
  if (*(long **)(param_1 + 0x168) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x168) + 0x28))();
  }
  if (*(long **)(param_1 + 0x160) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x160) + 0x28))();
  }
  if (*(long **)(param_1 + 0x158) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x158) + 0x28))();
  }
  if (*(long **)(param_1 + 0x150) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x150) + 0x28))();
  }
  if (*(long **)(param_1 + 0x148) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x148) + 0x28))();
  }
  if (*(long **)(param_1 + 0x140) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x140) + 0x28))();
  }
  if (*(long **)(param_1 + 0x138) == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x007f8788. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x138) + 0x28))();
  return;
}


