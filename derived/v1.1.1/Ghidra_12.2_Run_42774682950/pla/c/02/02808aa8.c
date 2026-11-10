/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02808aa8; name: FUN_02808aa8
 */


void FUN_02808aa8(long param_1)

{
  if (*(long **)(param_1 + 0x158) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x158) + 0x20))();
  }
  if (*(long **)(param_1 + 0x138) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x138) + 0x20))();
  }
  if (*(long **)(param_1 + 0x118) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x118) + 0x20))();
  }
  if (*(long **)(param_1 + 0xf8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xf8) + 0x20))();
  }
  if (*(long **)(param_1 + 0xd8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xd8) + 0x20))();
  }
  if (*(long **)(param_1 + 0xb8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xb8) + 0x20))();
  }
  if (*(long **)(param_1 + 0x98) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x98) + 0x20))();
  }
  if (*(long **)(param_1 + 0x78) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x78) + 0x20))();
  }
  if (*(long **)(param_1 + 0x58) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x58) + 0x20))();
  }
  if (*(long **)(param_1 + 0x38) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x38) + 0x20))();
  }
  if (*(long **)(param_1 + 0x18) == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02808b98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x20))();
  return;
}


