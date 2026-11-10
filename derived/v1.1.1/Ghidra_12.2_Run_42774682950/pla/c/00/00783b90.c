/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00783b90; name: FUN_00783b90
 */


void FUN_00783b90(SystemEventType *param_1)

{
  undefined *puVar1;
  undefined *local_98;
  undefined *puStack_90;
  undefined8 ***local_88;
  undefined8 ***pppuStack_80;
  MultiWaitHolderType aMStack_70 [64];
  undefined **local_30;
  undefined8 uStack_28;
  
  local_88 = &local_88;
  puVar1 = PTR_DAT_04373168 + 0x10;
  puStack_90 = PTR_DAT_04373170 + 0x10;
  local_30 = (undefined **)0x0;
  uStack_28 = 0;
  local_98 = puVar1;
  pppuStack_80 = local_88;
  nn::os::InitializeMultiWaitHolder(aMStack_70,param_1);
  local_30 = &puStack_90;
  FUN_00783af0(&local_98);
  local_98 = puVar1;
  FUN_00782f18(&puStack_90);
  return;
}


