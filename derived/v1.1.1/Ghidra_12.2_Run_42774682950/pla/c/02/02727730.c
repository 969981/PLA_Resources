/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02727730; name: FUN_02727730
 */


void FUN_02727730(long param_1,long *param_2)

{
  long *plVar1;
  
  *(long **)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x20) = 0x70;
  plVar1 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x70,8);
  *(long **)(param_1 + 0x18) = plVar1;
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x027277c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x10) + 0xb8))();
    return;
  }
  FUN_0094b1c0(plVar1,0x600000,param_2,1);
  *(long **)(param_1 + 8) = plVar1;
                    /* WARNING: Could not recover jumptable at 0x027277ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0xb0))(plVar1,"gfl::engine::MemoryResourceId::JobScheduler");
  return;
}


