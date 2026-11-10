/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0091efa4; name: FUN_0091efa4
 */


undefined4 FUN_0091efa4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  
  uStack_44 = FUN_0091f030();
  local_48 = 0;
  uStack_3c = FUN_0091f190(param_1,param_2,param_3,param_4);
  local_40 = 1;
  uStack_34 = FUN_0091f97c(param_1,param_2,param_3,param_4);
  local_38 = 2;
  FUN_00920a20(&local_48,(long)register0x00000008 + -0x30);
  return local_48;
}


