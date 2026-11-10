/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032cedf0; name: FUN_032cedf0
 */


void FUN_032cedf0(long param_1,long param_2,ulong param_3)

{
  if (param_2 == 0) {
    return;
  }
  if (*(ulong *)(param_1 + 0x10) < param_3) {
    *(int *)(*(long *)(param_1 + 8) + 0x20) = *(int *)(*(long *)(param_1 + 8) + 0x20) + -1;
                    /* WARNING: Could not recover jumptable at 0x032cee44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x40) + 0x18))();
    return;
  }
  if (*(long *)(param_1 + 0x18) == (param_3 + 0xf & 0xfffffffffffffff0) + param_2) {
    *(long *)(param_1 + 0x18) = param_2;
    FUN_032ce944();
    return;
  }
  FUN_032ceaf0();
  return;
}


