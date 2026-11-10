/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00784874; name: FUN_00784874
 */


undefined1  [16] FUN_00784874(long param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined *local_a0;
  undefined8 ******local_98;
  undefined8 ******ppppppuStack_90;
  MultiWaitHolderType aMStack_80 [64];
  undefined1 *local_40;
  undefined8 uStack_38;
  
  local_98 = &local_98;
  local_40 = (undefined1 *)0x0;
  uStack_38 = 0;
  local_a0 = PTR_DAT_04373170 + 0x10;
  ppppppuStack_90 = local_98;
  nn::os::InitializeMultiWaitHolder(aMStack_80,*(EventType **)(param_1 + 0x40));
  local_40 = (undefined1 *)&local_a0;
  FUN_00783298(param_1,&local_a0);
  if (param_2 != (undefined1 *)0x0) {
    FUN_00783298(param_1,param_2);
  }
  puVar1 = (undefined1 *)FUN_00783364(param_1);
  if (&local_a0 == (undefined **)puVar1) {
    uVar3 = 0;
    uVar2 = 0;
  }
  else if (puVar1 == param_2) {
    uVar2 = 0;
    uVar3 = 1;
  }
  else {
    uVar2 = *(undefined8 *)(puVar1 + 0x18);
    uVar3 = 2;
  }
  if (param_2 != (undefined1 *)0x0) {
    FUN_00783064(param_1,param_2);
  }
  FUN_00783064(param_1,&local_a0);
  FUN_00782f18(&local_a0);
  auVar4._8_8_ = uVar2;
  auVar4._0_8_ = uVar3;
  return auVar4;
}


