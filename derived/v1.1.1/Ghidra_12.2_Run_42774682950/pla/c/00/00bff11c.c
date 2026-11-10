/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00bff11c; name: FUN_00bff11c
 */


void FUN_00bff11c(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4)

{
  bool bVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  
  local_60._0_8_ = param_2;
  local_70 = FUN_00bff7f4(param_1,param_2,0x3e800000);
  local_80 = FUN_00bfe2c4(param_3,local_70,local_60);
  bVar1 = (param_4 & 1) == 0;
  uVar2 = 0x3e800000;
  if (bVar1) {
    uVar2 = 0x3f800000;
  }
  uVar4 = 0x3f000000;
  if (bVar1) {
    uVar4 = 0x3f800000;
  }
  uVar5 = 0x3f400000;
  if (bVar1) {
    uVar5 = 0x3f800000;
  }
  FUN_00bfe204(uVar2,param_3,local_80,*(undefined4 *)(param_3 + 0x188));
  local_60 = local_70;
  auVar3 = FUN_00bff7f4(param_1,param_2,0x3f000000);
  local_70 = auVar3;
  auVar3 = FUN_00bfe2c4(param_3,local_70,local_60);
  local_80 = auVar3;
  FUN_00bfe204(uVar4,param_3,local_80,*(undefined4 *)(param_3 + 0x188));
  local_60 = local_70;
  auVar3 = FUN_00bff7f4(param_1,param_2,0x3f400000);
  local_70 = auVar3;
  auVar3 = FUN_00bfe2c4(param_3,local_70,local_60);
  local_80 = auVar3;
  FUN_00bfe204(uVar5,param_3,local_80,*(undefined4 *)(param_3 + 0x188));
  local_60 = local_70;
  auVar3 = FUN_00bff7f4(param_1,param_2,0x3f800000);
  local_70 = auVar3;
  auVar3 = FUN_00bfe2c4(param_3,local_70,local_60);
  local_80 = auVar3;
  FUN_00bfe204(0x3f800000,param_3,local_80,*(undefined4 *)(param_3 + 0x188));
  return;
}


