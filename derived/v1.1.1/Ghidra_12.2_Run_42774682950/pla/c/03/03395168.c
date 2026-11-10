/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03395168; name: FUN_03395168
 */


undefined4 FUN_03395168(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_3 + 0x18))(param_3);
  (**(code **)(*param_3 + 0x28))(param_3,uVar1);
  uVar1 = FUN_033923e0(param_1,param_2,uVar1,1,param_3);
  return uVar1;
}


