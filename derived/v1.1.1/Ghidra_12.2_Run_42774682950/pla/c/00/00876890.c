/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00876890; name: FUN_00876890
 */


undefined8 FUN_00876890(long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_6c8 [16];
  int local_6b8 [4];
  undefined *local_6a8;
  undefined1 *local_6a0;
  undefined8 uStack_698;
  undefined4 local_690;
  undefined *local_688;
  undefined1 auStack_680 [520];
  undefined *local_478;
  undefined1 *local_470;
  undefined8 local_468;
  undefined4 local_460;
  undefined *local_458;
  undefined1 auStack_450 [1032];
  int local_48 [4];
  undefined4 local_38 [2];
  
  local_690 = 0;
  local_6a8 = PTR_DAT_04378110 + 0x10;
  local_688 = PTR_DAT_04378110 + 0x68;
  local_6a0 = auStack_680;
  uStack_698 = 0x200;
  uVar2 = FUN_007ec9d0(&local_6a8,&DAT_03996322,1);
  FUN_0086d738(local_48,&local_6a8,&DAT_03996322,uVar2,1);
  local_460 = 0;
  local_478 = PTR_DAT_04377468 + 0x10;
  local_458 = PTR_DAT_04377468 + 0x68;
  local_470 = auStack_450;
  local_468 = 0x400;
  uVar2 = FUN_007ec9d0(&local_478,&DAT_03996322,1);
  FUN_007e6544(local_48,&local_478,&DAT_03996322,uVar2,1);
  (**(code **)(**(long **)(param_1 + 0x4b8) + 0x28))
            (local_48,*(long **)(param_1 + 0x4b8),&local_6a8);
  local_6b8[0] = 0x10408;
  local_38[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_6b8 | 4),(Result *)local_38);
  if (local_48[0] == local_6b8[0]) {
    uVar3 = 5;
  }
  else if (local_48[0] == 0) {
    (**(code **)(**(long **)(param_1 + 0x4b8) + 0x10))
              (local_6b8,*(long **)(param_1 + 0x4b8),param_1 + 0x60,param_1 + 0x490);
    FUN_007ee660(local_48,local_6b8);
    puVar1 = PTR_FUN_04378450;
    uVar3 = 7;
    *(char **)(param_1 + 0x40) = "TurnJob::StepResolveServerAddress";
    *(undefined **)(param_1 + 0x30) = puVar1;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x58);
    FUN_007ee578(auStack_6c8,local_48);
    FUN_007e5cac(uVar3,auStack_6c8);
    uVar3 = 1;
  }
  return uVar3;
}


