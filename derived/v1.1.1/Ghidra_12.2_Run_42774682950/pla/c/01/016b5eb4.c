/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016b5eb4; name: FUN_016b5eb4
 */


void FUN_016b5eb4(long param_1,long *param_2)

{
  long *plVar1;
  
  *(long **)(param_1 + 0x50) = param_2;
  *(undefined8 *)(param_1 + 0x60) = 0x70;
  plVar1 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x70,8);
  *(long **)(param_1 + 0x58) = plVar1;
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x016b5f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x50) + 0xb8))();
    return;
  }
  FUN_0094b1c0(plVar1,0x3e8000,param_2,1);
  *(long **)(param_1 + 0x48) = plVar1;
                    /* WARNING: Could not recover jumptable at 0x016b5f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0xb0))(plVar1,"MemoryID::LUA_UNFOLD_RESOURCE");
  return;
}


