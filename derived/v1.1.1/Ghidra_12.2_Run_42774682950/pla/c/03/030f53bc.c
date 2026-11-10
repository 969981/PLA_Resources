/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030f53bc; name: FUN_030f53bc
 */


void FUN_030f53bc(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  long *plVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  plVar2 = (long *)FUN_030f5640(*(undefined8 *)(param_1 + 0x20),uVar1);
  (**(code **)(*plVar2 + 0x40))(plVar2,param_1,param_2,param_3,param_4);
  *(undefined4 *)(param_1 + 0x28) = param_2;
  *(undefined4 *)(param_1 + 0x50) = 0;
  plVar2 = (long *)FUN_030f5640(*(undefined8 *)(param_1 + 0x20),param_2);
                    /* WARNING: Could not recover jumptable at 0x030f5448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x38))(plVar2,param_1,uVar1,param_3,param_4);
  return;
}


