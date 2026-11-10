/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0107c8b8; name: FUN_0107c8b8
 */


void FUN_0107c8b8(long param_1,long *param_2)

{
  long *plVar1;
  
  *(long **)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x20) = 0x800000;
  plVar1 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x800000,0x10);
  *(long **)(param_1 + 0x18) = plVar1;
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0107c940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x10) + 0xb8))();
    return;
  }
  FUN_02bc5450(plVar1,plVar1 + 10,&LAB_007fffb0);
  *(long **)(param_1 + 8) = plVar1;
                    /* WARNING: Could not recover jumptable at 0x0107c928. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0xb0))(plVar1,"MemoryID::LUA_DEFAULT_NEW");
  return;
}


