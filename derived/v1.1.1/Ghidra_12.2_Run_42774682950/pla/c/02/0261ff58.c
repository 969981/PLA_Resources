/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0261ff58; name: FUN_0261ff58
 */


byte FUN_0261ff58(long param_1,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined4 extraout_s0;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 extraout_s0_00;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined8 extraout_var_01;
  undefined8 extraout_var_02;
  undefined1 auStack_278 [32];
  undefined1 auStack_258 [16];
  undefined1 auStack_248 [8];
  undefined1 auStack_240 [16];
  undefined1 auStack_230 [12];
  undefined4 local_224;
  undefined1 auStack_220 [16];
  undefined1 auStack_210 [8];
  undefined1 auStack_208 [8];
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined1 auStack_1f0 [8];
  undefined1 auStack_1e8 [32];
  undefined1 auStack_1c8 [32];
  undefined1 auStack_1a8 [32];
  undefined1 auStack_188 [32];
  undefined1 auStack_168 [32];
  undefined1 auStack_148 [32];
  undefined1 auStack_128 [8];
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined1 auStack_100 [64];
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [8];
  byte *local_50;
  long local_48;
  byte local_21;
  
  local_50 = param_2;
  local_48 = param_1;
  FUN_01a73640(auStack_68,param_1);
  FUN_0099c748(auStack_58,auStack_68);
  FUN_026204b8(auStack_68);
  FUN_01a71da0(auStack_70,param_1);
  FUN_026204dc(auStack_78,param_1 + 0x668);
  FUN_02620504(auStack_80,local_50 + 0x40);
  uVar3 = FUN_0262052c(auStack_80);
  if ((uVar3 & 1) == 0) {
    local_21 = 0;
    goto LAB_0262047c;
  }
  FUN_02620558(auStack_80);
  FUN_01a73640(auStack_98);
  FUN_0099c748(auStack_88,auStack_98);
  FUN_026204b8(auStack_98);
  uVar3 = FUN_02620570(auStack_58);
  if ((((uVar3 & 1) == 0) || (uVar3 = FUN_0262059c(auStack_70), (uVar3 & 1) == 0)) ||
     (uVar3 = FUN_026205c8(auStack_78), (uVar3 & 1) == 0)) {
LAB_0262005c:
    local_21 = 0;
  }
  else {
    uVar1 = FUN_026205f4(local_50 + 0xb0);
    uVar2 = FUN_02620570(auStack_88);
    if (((uVar1 | uVar2 ^ 0xffffffff) & 1) != 0) goto LAB_0262005c;
    uVar3 = FUN_02670a8c(param_1,local_50);
    if ((uVar3 & 1) == 0) {
      local_21 = 0;
    }
    else {
      FUN_02620620(auStack_78);
      local_a0 = FUN_02620638();
      uVar4 = FUN_02620620(auStack_78);
      local_21 = FUN_026206a4(uVar4,0);
      local_21 = local_21 & 1;
      uVar3 = FUN_02624c84(&local_a0);
      if ((uVar3 & 1) == 0) {
        FUN_02620620(auStack_78);
        local_a8 = FUN_02620638();
        FUN_02624c84(&local_a8);
      }
      if (local_21 == 0) {
        local_21 = 0;
      }
      else {
        if ((local_50[8] & 1) == 0) {
          puVar5 = (undefined8 *)FUN_02620740(local_50 + 0xb0);
          local_c0 = *puVar5;
          local_b8 = puVar5[1];
          FUN_02620764(auStack_70);
          FUN_0262077c(auStack_100);
          local_108 = local_b8;
          local_110 = local_c0;
          FUN_009c69bc(auStack_128,param_1);
          FUN_026207ac(auStack_128);
          FUN_00fa1c48();
          local_120 = CONCAT44(extraout_var,extraout_s0);
          uStack_118 = extraout_var_01;
          FUN_026207c4(auStack_128);
          fVar7 = (float)FUN_01008c4c(&local_120);
          fVar8 = (float)FUN_01008c4c(&local_110);
          FUN_02620888(auStack_148);
          FUN_026208d0(auStack_168);
          fVar9 = (float)FUN_026207fc(auStack_148,auStack_168);
          FUN_0094f52c(auStack_168);
          FUN_0094f52c(auStack_148);
          if (fVar8 + fVar9 < fVar7) {
            if ((*local_50 & 1) == 0) {
              fVar7 = (float)FUN_01008c4c(&local_120);
              FUN_02620888(auStack_1c8);
              FUN_02620978(auStack_1e8);
              fVar8 = (float)FUN_026207fc(auStack_1c8,auStack_1e8);
              FUN_01008c6c(fVar7 + fVar8,&local_120);
              FUN_0094f52c(auStack_1e8);
              FUN_0094f52c(auStack_1c8);
            }
            else {
              fVar7 = (float)FUN_01008c4c(&local_120);
              FUN_02620888(auStack_188);
              FUN_02620930(auStack_1a8);
              fVar8 = (float)FUN_026207fc(auStack_188,auStack_1a8);
              FUN_01008c6c(fVar7 + fVar8,&local_120);
              FUN_0094f52c(auStack_1a8);
              FUN_0094f52c(auStack_188);
            }
            plVar6 = (long *)FUN_02620918(auStack_58);
            (**(code **)(*plVar6 + 0x200))(0xbf800000);
          }
          else {
            uStack_118 = local_108;
            local_120 = local_110;
            plVar6 = (long *)FUN_02620918(auStack_58);
            (**(code **)(*plVar6 + 0x200))(0);
          }
          FUN_009c69bc(auStack_1f0,param_1);
          uVar4 = FUN_026207ac(auStack_1f0);
          FUN_00fa1c2c(uVar4,&local_120);
          FUN_026207c4(auStack_1f0);
          uVar4 = FUN_02620918(auStack_58);
          FUN_009c69bc(auStack_208,param_1);
          FUN_026207ac(auStack_208);
          FUN_00fa1a00();
          local_200 = CONCAT44(extraout_var_00,extraout_s0_00);
          uStack_1f8 = extraout_var_02;
          FUN_01a83770(uVar4,&local_120,&local_200);
          FUN_026207c4(auStack_208);
          FUN_026209c0(auStack_100);
        }
        FUN_02620558(auStack_80);
        FUN_01aef8c8(auStack_220);
        FUN_026209d0(auStack_210,auStack_220);
        FUN_026209f8(auStack_220);
        uVar3 = FUN_02620a1c(auStack_210);
        if ((uVar3 & 1) != 0) {
          uVar4 = FUN_02620a48(auStack_210);
          local_224 = 1;
          FUN_025ff7c0(uVar4,&local_224,1);
        }
        FUN_02620a60(auStack_210);
        FUN_02620918(auStack_58);
        FUN_01a82160(auStack_240);
        FUN_02620a98(auStack_230,auStack_240);
        FUN_02620afc(auStack_240);
        uVar3 = FUN_02620b20(auStack_230);
        if ((uVar3 & 1) != 0) {
          plVar6 = (long *)FUN_02620b4c(auStack_230);
          (**(code **)(*plVar6 + 0x3e0))();
        }
        FUN_02620b64(auStack_230);
        if ((local_50[8] & 1) == 0) {
          FUN_01a74a50(auStack_258,param_1);
          FUN_02620b9c(auStack_248,auStack_258);
          FUN_02620bc4(auStack_258);
          uVar3 = FUN_02620be8(auStack_248);
          if ((uVar3 & 1) != 0) {
            uVar4 = FUN_02620c14(auStack_248);
            FUN_02620c2c(auStack_278);
            FUN_0290b66c(uVar4,auStack_278,0);
            FUN_0094f52c(auStack_278);
          }
          FUN_02620c74(auStack_248);
        }
      }
    }
  }
  FUN_02620cac(auStack_88);
LAB_0262047c:
  FUN_02620ce4(auStack_80);
  FUN_02620d1c(auStack_78);
  FUN_02620d54(auStack_70);
  FUN_02620cac(auStack_58);
  return local_21;
}


