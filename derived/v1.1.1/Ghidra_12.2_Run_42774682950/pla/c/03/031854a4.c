/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031854a4; name: FUN_031854a4
 */


void FUN_031854a4(long param_1,float *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5,undefined8 *param_6)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  char cVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar15;
  float fVar16;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  uStack_58 = *(undefined8 *)(param_1 + 0x48);
  local_60 = *(undefined8 *)(param_1 + 0x40);
  fVar6 = ABS((float)((ulong)local_60 >> 0x20));
  uVar8 = CONCAT44(fVar6,ABS((float)local_60));
  fVar7 = ABS((float)uStack_58);
  uVar8 = NEON_fmaxp(uVar8,uVar8,4);
  uVar8 = NEON_fmax(CONCAT44(fVar7,fVar7),uVar8,4);
  bVar3 = (&DAT_03aadfd0)
          [(-(uint)((float)((ulong)uVar8 >> 0x20) <= fVar6) & 2) +
           (uint)((float)uVar8 <= ABS((float)local_60)) | -(uint)((float)uVar8 <= fVar7) & 4];
  lVar1 = (long)(char)bVar3;
  if (2 < bVar3) {
    lVar1 = 3;
  }
  *(undefined4 *)((long)&local_60 + lVar1 * 4) = 0;
  fVar6 = ABS((float)((ulong)local_60 >> 0x20));
  uVar8 = CONCAT44(fVar6,ABS((float)local_60));
  fVar7 = ABS((float)uStack_58);
  uVar8 = NEON_fmaxp(uVar8,uVar8,4);
  uVar8 = NEON_fmax(CONCAT44(fVar7,fVar7),uVar8,4);
  cVar4 = (&DAT_03aadfd0)
          [(-(uint)((float)((ulong)uVar8 >> 0x20) <= fVar6) & 2) +
           (uint)((float)uVar8 <= ABS((float)local_60)) | -(uint)((float)uVar8 <= fVar7) & 4];
  FUN_03185640(param_1,(long)(char)bVar3,&local_60,&local_70);
  FUN_03185640(param_1,(int)cVar4,&uStack_80,&local_90);
  fVar9 = (float)uStack_80 - (float)local_90;
  fVar10 = (float)((ulong)uStack_80 >> 0x20) - (float)((ulong)local_90 >> 0x20);
  fVar11 = (float)uStack_78 - (float)uStack_88;
  fVar6 = *param_2;
  fVar7 = param_2[1];
  fVar5 = param_2[2];
  fVar12 = (float)local_60 - (float)local_70;
  fVar15 = (float)((ulong)local_60 >> 0x20) - (float)((ulong)local_70 >> 0x20);
  fVar16 = (float)uStack_58 - (float)uStack_68;
  fVar18 = fVar9 * fVar6;
  fVar20 = fVar10 * fVar7;
  fVar21 = fVar11 * fVar5;
  fVar22 = fVar12 * fVar6;
  fVar23 = fVar15 * fVar7;
  fVar24 = fVar16 * fVar5;
  fVar19 = fVar18 + fVar20 + fVar21;
  fVar21 = fVar18 + fVar20 + fVar21;
  fVar20 = fVar22 + fVar23 + fVar24;
  fVar24 = fVar22 + fVar23 + fVar24;
  fVar9 = fVar9 - fVar6 * fVar19;
  fVar10 = fVar10 - fVar7 * fVar21;
  fVar11 = fVar11 - fVar5 * fVar19;
  fVar18 = ((float)((ulong)uStack_78 >> 0x20) - (float)((ulong)uStack_88 >> 0x20)) -
           param_2[3] * fVar21;
  fVar12 = fVar12 - fVar6 * fVar20;
  fVar15 = fVar15 - fVar7 * fVar24;
  fVar16 = fVar16 - fVar5 * fVar20;
  fVar6 = ((float)((ulong)uStack_58 >> 0x20) - (float)((ulong)uStack_68 >> 0x20)) -
          param_2[3] * fVar24;
  fVar9 = fVar9 * fVar9;
  fVar10 = fVar10 * fVar10;
  fVar11 = fVar11 * fVar11;
  fVar18 = fVar18 * fVar18;
  auVar14._4_4_ = fVar10;
  auVar14._0_4_ = fVar9;
  auVar14._8_4_ = fVar11;
  auVar14._12_4_ = fVar18;
  auVar17._4_4_ = fVar10;
  auVar17._0_4_ = fVar9;
  auVar17._8_4_ = fVar11;
  auVar17._12_4_ = fVar18;
  auVar17 = NEON_ext(auVar14,auVar17,8,1);
  auVar13._0_4_ = fVar12 * fVar12;
  auVar13._4_4_ = fVar15 * fVar15;
  auVar13._8_4_ = fVar16 * fVar16;
  auVar13._12_4_ = fVar6 * fVar6;
  auVar14 = NEON_ext(auVar13,auVar13,8,1);
  fVar6 = fVar9 + fVar10 + auVar17._0_4_;
  fVar7 = auVar13._0_4_ + auVar13._4_4_ + auVar14._0_4_;
  puVar2 = param_3;
  if (fVar6 <= fVar7) {
    puVar2 = param_5;
  }
  puVar2[1] = uStack_58;
  *puVar2 = local_60;
  puVar2 = param_4;
  if (fVar6 <= fVar7) {
    puVar2 = param_6;
  }
  puVar2[1] = uStack_68;
  *puVar2 = local_70;
  if (fVar6 <= fVar7) {
    param_5 = param_3;
  }
  param_5[1] = uStack_78;
  *param_5 = uStack_80;
  if (fVar6 <= fVar7) {
    param_6 = param_4;
  }
  param_6[1] = uStack_88;
  *param_6 = local_90;
  return;
}


