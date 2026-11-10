/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00947958; name: FUN_00947958
 */


void FUN_00947958(long param_1,long *param_2)

{
  long *plVar1;
  
  *(long **)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x20) = 0x128;
  plVar1 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x128,8);
  *(long **)(param_1 + 0x18) = plVar1;
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00947a0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x10) + 0xb8))();
    return;
  }
  FUN_0094801c(plVar1,0x19000,param_2,1);
  *plVar1 = (long)&PTR_LAB_041c29d8;
  plVar1[1] = (long)&PTR_LAB_041c2ab8;
  FUN_02bcf75c(plVar1 + 0xe,param_2);
  *(long **)(param_1 + 8) = plVar1;
                    /* WARNING: Could not recover jumptable at 0x009479f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0xb0))(plVar1,"MemoryID::File");
  return;
}


