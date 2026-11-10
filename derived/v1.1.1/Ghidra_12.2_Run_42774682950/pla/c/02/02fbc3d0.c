/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fbc3d0; name: FUN_02fbc3d0
 */


void FUN_02fbc3d0(long param_1,long param_2,undefined8 param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  undefined8 *puVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  float local_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  
  pfVar5 = *(float **)(param_1 + 0x20);
  fStack_64 = *(float *)(param_1 + 0x40);
  fStack_54 = *(float *)(param_1 + 0x44);
  fStack_44 = *(float *)(param_1 + 0x48);
  local_70 = *pfVar5 * fStack_64;
  fStack_6c = pfVar5[1] * fStack_64;
  fStack_68 = pfVar5[2] * fStack_64;
  fStack_64 = pfVar5[3] * fStack_64;
  local_60 = pfVar5[4] * fStack_54;
  fStack_5c = pfVar5[5] * fStack_54;
  fStack_58 = pfVar5[6] * fStack_54;
  fStack_54 = pfVar5[7] * fStack_54;
  local_50 = pfVar5[8] * fStack_44;
  fStack_4c = pfVar5[9] * fStack_44;
  fStack_48 = pfVar5[10] * fStack_44;
  fStack_44 = pfVar5[0xb] * fStack_44;
  local_40 = pfVar5[0xc] + *(float *)(param_1 + 0x50);
  fStack_3c = pfVar5[0xd] + *(float *)(param_1 + 0x54);
  fStack_38 = pfVar5[0xe] + *(float *)(param_1 + 0x58);
  fStack_34 = pfVar5[0xf] + *(float *)(param_1 + 0x5c);
  puVar6 = *(undefined8 **)(param_2 + 0x20);
  local_b0 = *puVar6;
  uStack_a8 = puVar6[1];
  local_a0 = puVar6[2];
  uStack_98 = puVar6[3];
  local_90 = puVar6[4];
  uStack_88 = puVar6[5];
  local_80 = puVar6[6];
  uStack_78 = puVar6[7];
  auVar7 = *(undefined1 (*) [16])(param_2 + 0x40);
  auVar8 = NEON_frecpe(auVar7,4);
  auVar10 = NEON_frecps(auVar7,auVar8,4);
  auVar9._0_4_ = auVar8._0_4_ * auVar10._0_4_;
  auVar9._4_4_ = auVar8._4_4_ * auVar10._4_4_;
  auVar9._8_4_ = auVar8._8_4_ * auVar10._8_4_;
  auVar9._12_4_ = auVar8._12_4_ * auVar10._12_4_;
  auVar7 = NEON_frecps(auVar7,auVar9,4);
  auVar8._0_8_ = CONCAT44(auVar9._4_4_ * auVar7._4_4_,auVar9._0_4_ * auVar7._0_4_);
  auVar8._8_4_ = auVar9._8_4_ * auVar7._8_4_;
  auVar8._12_4_ = auVar9._12_4_ * auVar7._12_4_;
  *(long *)(param_4 + 2) = auVar8._8_8_;
  *(undefined8 *)param_4 = auVar8._0_8_;
  FUN_032ca3b4(&local_b0,&local_b0);
  fVar1 = *param_4;
  fVar2 = param_4[1];
  fVar3 = param_4[2];
  fVar4 = param_4[3];
  uStack_a8 = CONCAT44(fVar4 * uStack_a8._4_4_,fVar3 * (float)uStack_a8);
  local_b0 = CONCAT44(fVar2 * local_b0._4_4_,fVar1 * (float)local_b0);
  uStack_88 = CONCAT44(fVar4 * uStack_88._4_4_,fVar3 * (float)uStack_88);
  local_90 = CONCAT44(fVar2 * local_90._4_4_,fVar1 * (float)local_90);
  uStack_98 = CONCAT44(fVar4 * uStack_98._4_4_,fVar3 * (float)uStack_98);
  local_a0 = CONCAT44(fVar2 * local_a0._4_4_,fVar1 * (float)local_a0);
  auVar7 = *(undefined1 (*) [16])(param_2 + 0x50);
  auVar10._0_8_ =
       CONCAT44(fVar2 * (local_80._4_4_ - auVar7._4_4_),fVar1 * ((float)local_80 - auVar7._0_4_));
  auVar10._8_4_ = fVar3 * ((float)uStack_78 - auVar7._8_4_);
  auVar10._12_4_ = fVar4 * (uStack_78._4_4_ - auVar7._12_4_);
  uStack_78 = auVar10._8_8_;
  local_80 = auVar10._0_8_;
  FUN_032ca410(param_3,&local_b0,&local_70);
  return;
}


