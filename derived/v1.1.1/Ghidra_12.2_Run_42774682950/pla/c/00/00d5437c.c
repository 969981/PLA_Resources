/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d5437c; name: FUN_00d5437c
 */


void FUN_00d5437c(long *param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  uint uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x170))();
  FUN_00d543c4(param_1,param_2,param_4,uVar1 & 1);
  return;
}


