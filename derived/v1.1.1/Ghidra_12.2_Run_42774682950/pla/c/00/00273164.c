/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00273164; name: FUN_00273164
 */


void FUN_00273164(undefined8 param_1,undefined8 *param_2,long param_3,long param_4,int param_5)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  char cVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  long lVar13;
  char *pcVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auVar31 [16];
  float fVar32;
  float fVar33;
  float fVar34;
  undefined8 local_60;
  float local_58;
  
  pcVar14 = *(char **)(*(long *)(param_3 + 0x238) + 0x278);
  fVar33 = *(float *)(param_3 + 0x4c);
  fVar34 = *(float *)(*(long *)(param_4 + 0x18) + (long)param_5 * 0x10 + 0xc);
  if (*(int *)(pcVar14 + 0x10) == 0) {
    local_60 = *(undefined8 *)(pcVar14 + 4);
    local_58 = *(float *)(pcVar14 + 0xc);
    cVar4 = *pcVar14;
  }
  else {
    FUN_00271d84(param_1,&local_60,param_3,pcVar14 + 0x10,param_5);
    cVar4 = *pcVar14;
  }
  local_60._4_4_ = (float)((ulong)local_60 >> 0x20);
  if (cVar4 == '\0') {
    fVar25 = (float)*param_2 + fVar33 * fVar34 * (float)local_60;
    fVar20 = (float)((ulong)*param_2 >> 0x20) + fVar33 * fVar34 * local_60._4_4_;
    fVar33 = (float)param_2[1] + fVar33 * fVar34 * local_58;
    goto LAB_002733ac;
  }
  fVar15 = fVar33 * fVar34 * (float)local_60;
  fVar16 = fVar33 * fVar34 * local_60._4_4_;
  fVar33 = fVar33 * fVar34 * local_58;
  if (*(char *)(*(long *)(param_3 + 0xa0) + 0x753) == '\x01') {
    lVar13 = (long)param_5 * 0x10;
    pfVar1 = (float *)(*(long *)(param_4 + 0x40) + lVar13);
    pfVar2 = (float *)(*(long *)(param_4 + 0x48) + lVar13);
    pfVar3 = (float *)(*(long *)(param_4 + 0x50) + lVar13);
    fVar22 = *pfVar1;
    fVar23 = *pfVar2;
    fVar24 = *pfVar3;
    fVar34 = pfVar1[1];
    fVar25 = fVar22 * fVar22;
    fVar27 = fVar23 * fVar23;
    auVar31._4_4_ = fVar27;
    auVar31._0_4_ = fVar25;
    auVar31._8_4_ = fVar24 * fVar24;
    auVar31._12_4_ = 0;
    auVar5._4_4_ = fVar27;
    auVar5._0_4_ = fVar25;
    auVar5._8_4_ = fVar24 * fVar24;
    auVar5._12_4_ = 0;
    auVar31 = NEON_ext(auVar31,auVar5,8,1);
    fVar20 = pfVar2[1];
    fVar21 = pfVar3[1];
    fVar32 = SQRT(auVar31._0_4_ + fVar25 + auVar31._4_4_ + fVar27);
    fVar25 = fVar34 * fVar34;
    fVar27 = fVar20 * fVar20;
    auVar6._4_4_ = fVar27;
    auVar6._0_4_ = fVar25;
    auVar6._8_4_ = fVar21 * fVar21;
    auVar6._12_4_ = 0;
    auVar7._4_4_ = fVar27;
    auVar7._0_4_ = fVar25;
    auVar7._8_4_ = fVar21 * fVar21;
    auVar7._12_4_ = 0;
    auVar31 = NEON_ext(auVar6,auVar7,8,1);
    fVar17 = pfVar1[2];
    fVar18 = pfVar2[2];
    fVar19 = pfVar3[2];
    fVar27 = SQRT(auVar31._0_4_ + fVar25 + auVar31._4_4_ + fVar27);
    fVar26 = fVar17 * fVar17;
    fVar28 = fVar18 * fVar18;
    auVar8._4_4_ = fVar28;
    auVar8._0_4_ = fVar26;
    auVar8._8_4_ = fVar19 * fVar19;
    auVar8._12_4_ = 0;
    auVar9._4_4_ = fVar28;
    auVar9._0_4_ = fVar26;
    auVar9._8_4_ = fVar19 * fVar19;
    auVar9._12_4_ = 0;
    auVar31 = NEON_ext(auVar8,auVar9,8,1);
    fVar30 = 0.0;
    fVar25 = 0.0;
    fVar29 = 0.0;
    fVar26 = SQRT(auVar31._0_4_ + fVar26 + auVar31._4_4_ + fVar28);
    if (0.0 < fVar32) {
      fVar32 = 1.0 / fVar32;
      fVar25 = fVar22 * fVar32;
      fVar29 = fVar23 * fVar32;
      fVar30 = fVar24 * fVar32;
      if (0.0 < fVar27) goto LAB_002733f0;
LAB_002732d8:
      fVar21 = 0.0;
      fVar20 = 0.0;
      fVar34 = 0.0;
    }
    else {
      if (fVar27 <= 0.0) goto LAB_002732d8;
LAB_002733f0:
      fVar27 = 1.0 / fVar27;
      fVar34 = fVar34 * fVar27;
      fVar20 = fVar20 * fVar27;
      fVar21 = fVar21 * fVar27;
    }
    fVar23 = 0.0;
    fVar27 = 0.0;
    fVar22 = 0.0;
    if (0.0 < fVar26) {
      fVar26 = 1.0 / fVar26;
      fVar22 = fVar17 * fVar26;
      fVar27 = fVar18 * fVar26;
      fVar23 = fVar19 * fVar26;
    }
  }
  else {
    auVar10 = *(undefined1 (*) [12])(param_3 + 0x380);
    auVar12 = *(undefined1 (*) [12])(param_3 + 0x390);
    auVar11 = *(undefined1 (*) [12])(param_3 + 0x3a0);
    fVar25 = auVar10._0_4_;
    fVar29 = auVar10._4_4_;
    fVar22 = auVar11._0_4_;
    fVar27 = auVar11._4_4_;
    fVar30 = SUB124(*(undefined1 (*) [12])(param_3 + 0x380),8);
    fVar23 = SUB124(*(undefined1 (*) [12])(param_3 + 0x3a0),8);
    fVar34 = auVar12._0_4_;
    fVar20 = auVar12._4_4_;
    fVar21 = SUB124(*(undefined1 (*) [12])(param_3 + 0x390),8);
  }
  fVar25 = fVar25 * fVar15 + fVar29 * fVar16 + fVar30 * fVar33 + (float)*param_2;
  fVar20 = fVar34 * fVar15 + fVar20 * fVar16 + fVar21 * fVar33 + (float)((ulong)*param_2 >> 0x20);
  fVar33 = fVar22 * fVar15 + fVar27 * fVar16 + fVar23 * fVar33 + (float)param_2[1];
LAB_002733ac:
  param_2[1] = (ulong)(uint)fVar33;
  *param_2 = CONCAT44(fVar20,fVar25);
  return;
}


