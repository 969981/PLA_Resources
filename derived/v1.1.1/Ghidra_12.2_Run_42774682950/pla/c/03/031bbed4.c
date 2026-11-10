/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031bbed4; name: FUN_031bbed4
 */


bool FUN_031bbed4(long param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  char cVar1;
  undefined1 auVar2 [16];
  int iVar3;
  int iVar4;
  undefined1 (*pauVar5) [16];
  float fVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  float fVar13;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  
  local_38 = param_3[5];
  uStack_48 = param_3[3];
  uStack_58 = param_3[1];
  local_60 = *param_3;
  local_50 = param_3[2];
  pauVar5 = (undefined1 (*) [16])(param_3 + 4);
  local_40 = *(undefined8 *)*pauVar5;
  local_68 = param_2[5];
  uStack_78 = param_2[3];
  local_88 = param_2[1];
  local_90 = *param_2;
  local_80 = param_2[2];
  local_70 = param_2[4];
  FUN_031bb3f8(param_1,&local_90,&local_60);
  fVar16 = (float)local_50 - (float)local_80;
  fVar17 = local_50._4_4_ - local_80._4_4_;
  fVar18 = (float)uStack_48 - (float)uStack_78;
  fVar19 = uStack_48._4_4_ - uStack_78._4_4_;
  auVar10 = *(undefined1 (*) [16])(param_1 + 0x90);
  auVar8 = NEON_ext(auVar10,auVar10,8,1);
  uVar7 = NEON_ext(auVar10._0_8_,auVar8._0_8_,4,1);
  auVar8._4_4_ = fVar17;
  auVar8._0_4_ = fVar16;
  auVar8._8_4_ = fVar18;
  auVar8._12_4_ = fVar19;
  auVar2._4_4_ = fVar17;
  auVar2._0_4_ = fVar16;
  auVar2._8_4_ = fVar18;
  auVar2._12_4_ = fVar19;
  auVar8 = NEON_ext(auVar8,auVar2,4,1);
  cVar1 = *(char *)((long)param_3 + 4);
  fVar6 = auVar10._0_4_ * auVar8._0_4_ - fVar16 * (float)uVar7;
  fVar13 = auVar10._4_4_ * auVar8._4_4_ - fVar17 * (float)((ulong)uVar7 >> 0x20);
  auVar9._0_8_ = CONCAT44(fVar13,fVar6);
  auVar9._8_4_ = auVar10._8_4_ * fVar16 - fVar18 * auVar10._0_4_;
  auVar9._12_4_ = auVar10._12_4_ * fVar17 - fVar19 * auVar10._4_4_;
  auVar8 = NEON_ext(auVar9,auVar9,4,1);
  auVar15._0_8_ = auVar8._0_8_;
  auVar15._8_8_ = auVar9._0_8_;
  auVar14[0] = -(cVar1 == '\x01');
  auVar14[1] = auVar14[0];
  auVar14[2] = auVar14[0];
  auVar14[3] = auVar14[0];
  auVar14[4] = auVar14[0];
  auVar14[5] = auVar14[0];
  auVar14[6] = auVar14[0];
  auVar14[7] = auVar14[0];
  auVar14[8] = auVar14[0];
  auVar14[9] = auVar14[0];
  auVar14[10] = auVar14[0];
  auVar14[0xb] = auVar14[0];
  auVar14[0xc] = auVar14[0];
  auVar14[0xd] = auVar14[0];
  auVar14[0xe] = auVar14[0];
  auVar14[0xf] = auVar14[0];
  auVar10._0_4_ = -auVar8._0_4_;
  auVar10._4_4_ = -auVar8._4_4_;
  auVar10._8_4_ = -fVar6;
  auVar10._12_4_ = -fVar13;
  auVar15 = auVar15 ^ (auVar15 ^ auVar10) & auVar14;
  auVar8 = *pauVar5;
  auVar11._0_8_ =
       CONCAT44(*(float *)((long)param_3 + 0x24) + auVar15._4_4_,*(float *)*pauVar5 + auVar15._0_4_)
  ;
  auVar11._8_4_ = *(float *)(param_3 + 5) + auVar15._8_4_;
  auVar11._12_4_ = *(float *)((long)param_3 + 0x2c) + auVar15._12_4_;
  uStack_58 = auVar11._8_8_;
  local_60 = auVar11._0_8_;
  iVar3 = FUN_031babf0(param_1,pauVar5,&local_60,param_4 + 0x20);
  auVar12._0_8_ = CONCAT44(auVar8._4_4_ - fVar17,auVar8._0_4_ - fVar16);
  auVar12._8_4_ = auVar8._8_4_ - fVar18;
  auVar12._12_4_ = auVar8._12_4_ - fVar19;
  local_88 = *(undefined8 *)(param_4 + 0x28);
  local_90 = *(undefined8 *)(param_4 + 0x20);
  uStack_58 = auVar12._8_8_;
  local_60 = auVar12._0_8_;
  iVar4 = FUN_031babf0(param_1,&local_60,pauVar5,&local_90);
  return iVar3 == cVar1 || iVar4 == cVar1;
}


