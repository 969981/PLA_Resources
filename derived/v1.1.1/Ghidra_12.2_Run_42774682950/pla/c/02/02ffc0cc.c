/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ffc0cc; name: FUN_02ffc0cc
 */


int FUN_02ffc0cc(long param_1,undefined8 *param_2,float *param_3)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [12];
  undefined *puVar5;
  int iVar6;
  float fVar7;
  undefined1 auVar8 [16];
  float fVar9;
  undefined1 auVar10 [16];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  
  local_e0 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_60 = *param_2;
  uStack_58 = CONCAT44(*(undefined4 *)(param_2 + 1),*(undefined4 *)(param_2 + 1));
  local_90 = *(undefined8 *)((long)param_2 + 0xc);
  uStack_88 = CONCAT44(*(undefined4 *)((long)param_2 + 0x14),*(undefined4 *)((long)param_2 + 0x14));
  local_f0 = param_2[3];
  uStack_e8 = CONCAT44(*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 4));
  iVar6 = FUN_0328f204(&local_60,&local_90,&local_f0,&local_e0);
  if ((float)local_e0 == 0.0) {
    iVar6 = -0x7ffbfe00;
  }
  else if (-1 < iVar6) {
    *(undefined8 *)(param_3 + 6) = uStack_c8;
    *(undefined8 *)(param_3 + 4) = local_d0;
    *param_3 = (float)local_e0;
    param_3[1] = local_e0._4_4_;
    local_80 = local_b0;
    uStack_78 = (undefined4)uStack_a8;
    uStack_74 = (undefined4)((ulong)uStack_a8 >> 0x20);
    local_70 = local_a0;
    uStack_68 = (undefined4)uStack_98;
    uStack_64 = (undefined4)((ulong)uStack_98 >> 0x20);
    local_90 = local_c0;
    uStack_88 = uStack_b8;
    FUN_032911c0(&local_90,&local_60);
    auVar10._8_8_ = uStack_88;
    auVar10._0_8_ = local_90;
    auVar1._8_4_ = uStack_78;
    auVar1._0_8_ = local_80;
    *(undefined8 *)(param_3 + 10) = uStack_88;
    *(undefined8 *)(param_3 + 8) = local_90;
    puVar5 = PTR_DAT_043723a0;
    auVar1._12_4_ = uStack_74;
    auVar10 = auVar10 ^ (auVar10 ^ auVar1) & *(undefined1 (*) [16])(PTR_DAT_043723a0 + 0x20);
    *(long *)(param_3 + 10) = auVar10._8_8_;
    *(long *)(param_3 + 8) = auVar10._0_8_;
    auVar4._8_4_ = uStack_68;
    auVar4._0_8_ = local_70;
    auVar8._0_12_ =
         auVar10._0_12_ ^
         (auVar10._0_12_ ^ auVar4) & SUB1612(*(undefined1 (*) [16])(puVar5 + 0x40),0);
    auVar8._12_4_ = (float)local_e0;
    *(long *)(param_3 + 10) = auVar8._8_8_;
    *(long *)(param_3 + 8) = auVar8._0_8_;
    FUN_032cb060(param_3 + 0xc,&local_60);
    fVar7 = *(float *)(param_1 + 0x20);
    if (fVar7 < 0.0) {
      fVar7 = -(*param_3 * fVar7);
    }
    fVar9 = *(float *)(param_1 + 0x1c);
    param_3[1] = fVar7;
    fVar9 = fVar9 * fVar7;
    uVar3 = *(undefined8 *)(param_3 + 10);
    uVar2 = *(undefined8 *)(param_3 + 8);
    param_3[10] = (float)uVar3 * fVar9;
    param_3[0xb] = (float)((ulong)uVar3 >> 0x20) * fVar9;
    param_3[8] = (float)uVar2 * fVar9;
    param_3[9] = (float)((ulong)uVar2 >> 0x20) * fVar9;
  }
  return iVar6;
}


