/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d26630; name: FUN_00d26630
 */


void FUN_00d26630(long param_1,uint param_2,undefined8 param_3)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  
  plVar3 = (long *)(param_1 + (ulong)param_2 * 8 + 0x50);
  plVar1 = (long *)*plVar3;
  if (plVar1 != (long *)0x0) {
    uVar2 = (**(code **)(*plVar1 + 0x30))();
    if ((uVar2 & 1) != 0) {
      *(uint *)(param_1 + 0x60) = param_2;
      plVar3 = (long *)*plVar3;
                    /* WARNING: Could not recover jumptable at 0x00d26688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x70))(plVar3,param_3);
      return;
    }
  }
  return;
}


