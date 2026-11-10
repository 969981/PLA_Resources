/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00947aa8; name: FUN_00947aa8
 */


void FUN_00947aa8(long param_1,long *param_2)

{
  long *plVar1;
  
  *(long **)(param_1 + 0x30) = param_2;
  *(undefined8 *)(param_1 + 0x40) = 0x128;
  plVar1 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x128,8);
  *(long **)(param_1 + 0x38) = plVar1;
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00947b3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x30) + 0xb8))();
    return;
  }
  FUN_0094b17c(plVar1,0x300000,param_2,param_2);
  *(long **)(param_1 + 0x28) = plVar1;
                    /* WARNING: Could not recover jumptable at 0x00947b20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0xb0))(plVar1,"MemoryID::Unfold");
  return;
}


