/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f765b4; name: FUN_02f765b4
 */


void FUN_02f765b4(long param_1,long param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 *puVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  puVar5 = *(undefined8 **)(param_1 + 0x20);
  local_70 = *puVar5;
  uStack_68 = puVar5[1];
  local_60 = puVar5[2];
  uStack_58 = puVar5[3];
  local_50 = puVar5[4];
  uStack_48 = puVar5[5];
  uStack_38 = SUB168(*(undefined1 (*) [16])(puVar5 + 6),8);
  local_40 = SUB168(*(undefined1 (*) [16])(puVar5 + 6),0);
  FUN_032cc384(&local_b0,&local_70,param_1 + 0x50);
  local_40._0_4_ = (float)local_40 + (float)local_b0;
  local_40._4_4_ = local_40._4_4_ + local_b0._4_4_;
  uStack_38 = CONCAT44(uStack_38._4_4_ + uStack_a8._4_4_,(float)uStack_38 + (float)uStack_a8);
  fVar1 = *(float *)(param_1 + 0x40);
  fVar2 = *(float *)(param_1 + 0x44);
  fVar3 = *(float *)(param_1 + 0x48);
  local_70._0_4_ = (float)local_70 * fVar1;
  local_70._4_4_ = local_70._4_4_ * fVar1;
  uStack_68 = CONCAT44(uStack_68._4_4_ * fVar1,(float)uStack_68 * fVar1);
  local_60._0_4_ = (float)local_60 * fVar2;
  local_60._4_4_ = local_60._4_4_ * fVar2;
  local_50._0_4_ = (float)local_50 * fVar3;
  local_50._4_4_ = local_50._4_4_ * fVar3;
  uStack_58 = CONCAT44(uStack_58._4_4_ * fVar2,(float)uStack_58 * fVar2);
  uStack_48 = CONCAT44(uStack_48._4_4_ * fVar3,(float)uStack_48 * fVar3);
  puVar5 = *(undefined8 **)(param_2 + 0x20);
  local_b0 = *puVar5;
  uStack_a8 = puVar5[1];
  local_a0 = puVar5[2];
  uStack_98 = puVar5[3];
  local_90 = puVar5[4];
  uStack_88 = puVar5[5];
  local_80 = puVar5[6];
  uStack_78 = puVar5[7];
  auVar6 = *(undefined1 (*) [16])(param_2 + 0x40);
  auVar7 = NEON_frecpe(auVar6,4);
  auVar9 = NEON_frecps(auVar6,auVar7,4);
  auVar8._0_4_ = auVar7._0_4_ * auVar9._0_4_;
  auVar8._4_4_ = auVar7._4_4_ * auVar9._4_4_;
  auVar8._8_4_ = auVar7._8_4_ * auVar9._8_4_;
  auVar8._12_4_ = auVar7._12_4_ * auVar9._12_4_;
  auVar6 = NEON_frecps(auVar6,auVar8,4);
  auVar7._0_8_ = CONCAT44(auVar8._4_4_ * auVar6._4_4_,auVar8._0_4_ * auVar6._0_4_);
  auVar7._8_4_ = auVar8._8_4_ * auVar6._8_4_;
  auVar7._12_4_ = auVar8._12_4_ * auVar6._12_4_;
  *(long *)(param_4 + 2) = auVar7._8_8_;
  *(undefined8 *)param_4 = auVar7._0_8_;
  FUN_032ca3b4(&local_b0,&local_b0);
  fVar1 = *param_4;
  fVar2 = param_4[1];
  fVar3 = param_4[2];
  fVar4 = param_4[3];
  local_a0._0_4_ = fVar1 * (float)local_a0;
  local_a0._4_4_ = fVar2 * local_a0._4_4_;
  uStack_98._0_4_ = fVar3 * (float)uStack_98;
  uStack_98._4_4_ = fVar4 * uStack_98._4_4_;
  local_b0._0_4_ = fVar1 * (float)local_b0;
  local_b0._4_4_ = fVar2 * local_b0._4_4_;
  uStack_a8._0_4_ = fVar3 * (float)uStack_a8;
  uStack_a8._4_4_ = fVar4 * uStack_a8._4_4_;
  fVar10 = fVar1 * (float)local_90;
  fVar11 = fVar2 * (float)((ulong)local_90 >> 0x20);
  fVar12 = fVar3 * (float)uStack_88;
  fVar13 = fVar4 * (float)((ulong)uStack_88 >> 0x20);
  fVar15 = (float)uStack_48;
  fVar14 = (float)uStack_38;
  uVar17 = *(undefined8 *)(param_2 + 0x58);
  uVar16 = *(undefined8 *)(param_2 + 0x50);
  *(ulong *)(param_3 + 10) =
       CONCAT44(fVar13 * fVar15 +
                uStack_a8._4_4_ * (float)local_50 + uStack_98._4_4_ * local_50._4_4_,
                fVar12 * fVar15 +
                (float)uStack_a8 * (float)local_50 + (float)uStack_98 * local_50._4_4_);
  *(ulong *)(param_3 + 8) =
       CONCAT44(fVar11 * fVar15 + local_b0._4_4_ * (float)local_50 + local_a0._4_4_ * local_50._4_4_
                ,fVar10 * fVar15 +
                 (float)local_b0 * (float)local_50 + (float)local_a0 * local_50._4_4_);
  fVar15 = (float)uStack_58;
  *(ulong *)(param_3 + 6) =
       CONCAT44(fVar13 * fVar15 +
                uStack_a8._4_4_ * (float)local_60 + uStack_98._4_4_ * local_60._4_4_,
                fVar12 * fVar15 +
                (float)uStack_a8 * (float)local_60 + (float)uStack_98 * local_60._4_4_);
  *(ulong *)(param_3 + 4) =
       CONCAT44(fVar11 * fVar15 + local_b0._4_4_ * (float)local_60 + local_a0._4_4_ * local_60._4_4_
                ,fVar10 * fVar15 +
                 (float)local_b0 * (float)local_60 + (float)local_a0 * local_60._4_4_);
  fVar15 = (float)uStack_68;
  param_3[0xe] = fVar3 * ((float)uStack_78 - (float)uVar17) +
                 fVar12 * fVar14 +
                 (float)uStack_a8 * (float)local_40 + (float)uStack_98 * local_40._4_4_;
  param_3[0xf] = fVar4 * ((float)((ulong)uStack_78 >> 0x20) - (float)((ulong)uVar17 >> 0x20)) +
                 fVar13 * fVar14 +
                 uStack_a8._4_4_ * (float)local_40 + uStack_98._4_4_ * local_40._4_4_;
  param_3[0xc] = fVar1 * ((float)local_80 - (float)uVar16) +
                 fVar10 * fVar14 +
                 (float)local_b0 * (float)local_40 + (float)local_a0 * local_40._4_4_;
  param_3[0xd] = fVar2 * ((float)((ulong)local_80 >> 0x20) - (float)((ulong)uVar16 >> 0x20)) +
                 fVar11 * fVar14 +
                 local_b0._4_4_ * (float)local_40 + local_a0._4_4_ * local_40._4_4_;
  param_3[2] = fVar12 * fVar15 +
               (float)uStack_a8 * (float)local_70 + (float)uStack_98 * local_70._4_4_;
  param_3[3] = fVar13 * fVar15 +
               uStack_a8._4_4_ * (float)local_70 + uStack_98._4_4_ * local_70._4_4_;
  *param_3 = fVar10 * fVar15 + (float)local_b0 * (float)local_70 + (float)local_a0 * local_70._4_4_;
  param_3[1] = fVar11 * fVar15 + local_b0._4_4_ * (float)local_70 + local_a0._4_4_ * local_70._4_4_;
  return;
}


