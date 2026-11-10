/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031516cc; name: FUN_031516cc
 */


void FUN_031516cc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,long param_6)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  float fVar5;
  undefined1 auStack_480 [32];
  undefined1 auStack_460 [32];
  undefined1 auStack_440 [256];
  undefined1 auStack_340 [256];
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined1 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined1 local_178;
  undefined1 auStack_160 [32];
  undefined8 local_140;
  undefined8 uStack_138;
  float local_58;
  float fStack_54;
  
  lVar4 = tpidr_el0;
  if (*(long *)(lVar4 + 0x38d490) == 0) {
    lVar2 = FUN_0333d16c(0,1);
    *(long *)(lVar4 + 0x38d490) = lVar2;
    lVar2 = *(long *)(lVar2 + 0x10);
  }
  else {
    lVar2 = *(long *)(*(long *)(lVar4 + 0x38d490) + 0x10);
  }
  if (lVar2 != 0) {
    FUN_032d5af0(lVar2,"TtSimulateVehicle",0x11);
  }
  local_1d8 = 0;
  local_1e0 = 0;
  local_1e8 = 0;
  local_1f0 = 0;
  local_1f8 = 0;
  local_200 = 0;
  local_208 = 0;
  local_210 = 0;
  local_218 = 0;
  local_220 = 0;
  local_228 = 0;
  local_230 = 0;
  local_1d0 = 0;
  local_1c0 = 0;
  local_1c8 = 0;
  local_1b0 = 0;
  local_1b8 = 0;
  local_1a0 = 0;
  local_1a8 = 0;
  local_190 = 0;
  local_198 = 0;
  local_180 = 0;
  local_188 = 0;
  local_178 = 0;
  local_238 = 0xffffffffffffffff;
  local_240 = 0xffffffffffffffff;
  FUN_03150378(param_2,param_4,param_5,&local_240,&local_230,auStack_340,auStack_440);
  FUN_03150914(param_2,&local_230);
  FUN_03151228(param_1,param_2,param_3,&local_230);
  FUN_03151380(param_1,&local_230,*(undefined8 *)(param_2 + 0x88));
  FUN_0314fd58(param_1,param_2,param_4,&local_240,&local_230,param_6 + 0x70);
  FUN_031513d0(param_1,param_2,&local_240,&local_230,auStack_460,auStack_480);
  plVar1 = *(long **)(param_2 + 0x28);
  lVar2 = (**(code **)(*plVar1 + 0x80))(plVar1,*(undefined8 *)(param_2 + 0x20));
  uVar3 = (**(code **)(*plVar1 + 0x100))(plVar1,*(undefined4 *)(lVar2 + 0x80));
  FUN_0315161c(param_1,param_2,auStack_160,uVar3);
  lVar2 = *(long *)(param_2 + 0x38);
  local_58 = (float)param_1;
  if (*(float *)(lVar2 + 0x7c) != 0.0) {
    fVar5 = *(float *)(lVar2 + 0x7c) * *(float *)(param_2 + 0x114) * local_58;
    local_140 = CONCAT44((float)((ulong)local_140 >> 0x20) +
                         (float)((ulong)*(undefined8 *)(lVar2 + 0x1b0) >> 0x20) *
                         (float)((ulong)*(undefined8 *)(lVar2 + 0x40) >> 0x20) * fVar5,
                         (float)local_140 +
                         (float)*(undefined8 *)(lVar2 + 0x1b0) *
                         (float)*(undefined8 *)(lVar2 + 0x40) * fVar5);
    uStack_138 = CONCAT44((float)((ulong)uStack_138 >> 0x20) +
                          (float)((ulong)*(undefined8 *)(lVar2 + 0x1b8) >> 0x20) *
                          (float)((ulong)*(undefined8 *)(lVar2 + 0x48) >> 0x20) * fVar5,
                          (float)uStack_138 +
                          (float)*(undefined8 *)(lVar2 + 0x1b8) *
                          (float)*(undefined8 *)(lVar2 + 0x48) * fVar5);
  }
  fStack_54 = 1.0 / local_58;
  FUN_0314df40(&local_58,lVar2 + 0xc0,&local_230,param_2 + 0xa0);
  FUN_031509fc(param_2,auStack_160,param_6);
  FUN_03150acc(param_1,param_2,&local_230,&local_240,param_6,auStack_460,auStack_480);
  FUN_03150c6c(param_1,param_2,&local_240,&local_230);
  if (*(long *)(lVar4 + 0x38d490) == 0) {
    lVar2 = FUN_0333d16c(0,1);
    *(long *)(lVar4 + 0x38d490) = lVar2;
    lVar4 = *(long *)(lVar2 + 0x10);
  }
  else {
    lVar4 = *(long *)(*(long *)(lVar4 + 0x38d490) + 0x10);
  }
  if (lVar4 != 0) {
    FUN_032d5b34(lVar4,&DAT_0390f40e);
  }
  return;
}


