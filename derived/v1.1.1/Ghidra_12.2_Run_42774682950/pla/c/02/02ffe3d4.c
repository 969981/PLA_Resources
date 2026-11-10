/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ffe3d4; name: FUN_02ffe3d4
 */


void FUN_02ffe3d4(undefined8 param_1,undefined8 *param_2,long param_3,undefined8 param_4,
                 long param_5,undefined8 param_6)

{
  float fVar1;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar2 [16];
  undefined1 auVar6 [16];
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 *local_1a0;
  undefined8 uStack_198;
  undefined1 local_190;
  undefined8 local_18c;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined2 local_150;
  undefined8 local_14c;
  undefined4 local_144;
  undefined1 local_140;
  undefined2 local_13f;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_128;
  undefined *local_120;
  long *local_118;
  undefined1 *puStack_110;
  undefined4 local_108;
  undefined1 auStack_100 [144];
  undefined1 local_70 [16];
  undefined1 auStack_60 [16];
  
  (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(param_3 + 0x18) * 0x200 + 0x18))
            (param_3,*(undefined8 *)(param_5 + 0x20),local_70);
  auVar2 = *(undefined1 (*) [16])(param_2 + 6);
  auVar6 = NEON_fmin(auVar2,auStack_60,4);
  auVar6 = NEON_fmax(auVar6,local_70,4);
  fVar1 = auVar6._0_4_ - auVar2._0_4_;
  fVar3 = auVar6._4_4_ - auVar2._4_4_;
  fVar4 = auVar6._8_4_ - auVar2._8_4_;
  fVar5 = auVar6._12_4_ - auVar2._12_4_;
  auVar2._0_4_ = fVar1 * fVar1;
  auVar2._4_4_ = fVar3 * fVar3;
  auVar2._8_4_ = fVar4 * fVar4;
  auVar2._12_4_ = fVar5 * fVar5;
  auVar6 = NEON_ext(auVar2,auVar2,8,1);
  if (auVar2._0_4_ + auVar2._4_4_ + auVar6._0_4_ <=
      *(float *)(param_2 + 8) * *(float *)(param_2 + 8)) {
    puStack_110 = auStack_100;
    local_118 = (long *)0x0;
    local_108 = 0x90;
    local_120 = PTR_DAT_043887d0 + 0x10;
    uStack_1b8 = FUN_02fd8ea4(&local_120);
    local_13f = 0xfb00;
    local_128 = 0;
    auVar2 = NEON_fmov(0x3f800000,4);
    local_130 = *(undefined4 *)(param_2 + 8);
    local_158 = param_2[1];
    local_160 = *param_2;
    local_150 = *(undefined2 *)(param_2 + 2);
    local_14c = *(undefined8 *)((long)param_2 + 0x14);
    local_144 = *(undefined4 *)((long)param_2 + 0x1c);
    local_140 = *(undefined1 *)(param_2 + 4);
    local_1c0 = 0;
    local_190 = 0;
    local_18c = 0;
    uStack_178 = auVar2._8_8_;
    local_180 = auVar2._0_8_;
    local_170 = 0;
    uStack_168 = 0;
    local_1b0 = 0;
    uStack_1a8 = 0xffffffff;
    local_1a0 = &DAT_03aae430;
    uStack_198 = 0;
    local_138 = uStack_1b8;
    FUN_02ffa204(param_1,&local_160,&local_1c0,param_3,param_4,param_5,param_6);
    local_120 = PTR_DAT_043724f0 + 0x10;
    if (local_118 != (long *)0x0) {
      (**(code **)(*local_118 + 8))();
    }
  }
  return;
}


