/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e224d0; name: FUN_02e224d0
 */


void FUN_02e224d0(long param_1)

{
  long *plVar1;
  ulong uVar2;
  
  plVar1 = (long *)*DAT_044094f8;
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar2 = 0;
    do {
      (**(code **)(*plVar1 + 0x18))(plVar1,*(undefined8 *)(*(long *)(param_1 + 0x10) + uVar2 * 8));
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x18));
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    (**(code **)(*(long *)*DAT_044094f8 + 0x18))();
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    (**(code **)(*plVar1 + 0x18))(plVar1);
  }
  if (*(long **)(param_1 + 8) == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02e22580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x10))();
  return;
}


