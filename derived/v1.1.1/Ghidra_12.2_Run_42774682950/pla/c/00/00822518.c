/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00822518; name: FUN_00822518
 */


undefined8 FUN_00822518(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  FUN_0082497c(&DAT_043a4918);
  local_28 = 0;
  FUN_00821ea4(param_1,param_2);
  (**(code **)(DAT_043a4958 + 0x18))();
  local_38 = PTR_DAT_043773d0 + 0x10;
  uStack_30 = DAT_043a4960;
  thunk_FUN_0081f510(&local_28,&local_38,0xffffffff);
  uVar1 = local_28;
  FUN_00824984(&DAT_043a4918);
  return uVar1;
}


