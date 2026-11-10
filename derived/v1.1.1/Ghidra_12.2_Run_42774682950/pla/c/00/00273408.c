/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00273408; name: FUN_00273408
 */


void FUN_00273408(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 param_5,undefined8 param_6,long param_7,int param_8,undefined8 *param_9,
                 undefined8 *param_10)

{
  long lVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  uint uVar5;
  ushort uVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [12];
  undefined1 auVar14 [12];
  undefined1 auVar15 [12];
  long lVar16;
  code *pcVar17;
  long lVar18;
  undefined8 *puVar19;
  float fVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined1 auVar41 [16];
  float fVar42;
  undefined8 local_80;
  ulong uStack_78;
  undefined8 local_70;
  uint local_68;
  
  fVar23 = *(float *)(param_7 + 0x4c);
  fVar20 = fVar23 * *(float *)(*(long *)(param_7 + 0x1e8) + (long)param_8 * 0x10 + 0xc);
  uVar21 = *param_10;
  uVar22 = *param_9;
  param_3[1] = CONCAT44((float)((ulong)param_9[1] >> 0x20) +
                        (float)((ulong)param_10[1] >> 0x20) * fVar20,
                        (float)param_9[1] + (float)param_10[1] * fVar20);
  *param_3 = CONCAT44((float)((ulong)uVar22 >> 0x20) + (float)((ulong)uVar21 >> 0x20) * fVar20,
                      (float)uVar22 + (float)uVar21 * fVar20);
  fVar20 = *(float *)(*(long *)(*(long *)(param_7 + 0x238) + 0x18) + 0x70);
  if (fVar20 == 1.0) {
    param_4[1] = param_10[1];
    *param_4 = *param_10;
    fVar20 = *(float *)(param_7 + 0x69c);
  }
  else {
    fVar20 = powf(fVar20,fVar23);
    uVar21 = *param_10;
    param_4[1] = CONCAT44((float)((ulong)param_10[1] >> 0x20) * fVar20,(float)param_10[1] * fVar20);
    *param_4 = CONCAT44((float)((ulong)uVar21 >> 0x20) * fVar20,(float)uVar21 * fVar20);
    fVar20 = *(float *)(param_7 + 0x69c);
  }
  if (fVar20 <= 0.0) goto LAB_002736a4;
  lVar18 = *(long *)(param_7 + 0xa0);
  fVar31 = fVar20 * *(float *)(lVar18 + 0x818);
  fVar27 = fVar20 * *(float *)(lVar18 + 0x81c);
  fVar20 = fVar20 * *(float *)(lVar18 + 0x820);
  if (*(char *)(lVar18 + 0x7f1) == '\0') {
    fVar35 = fVar23 * fVar31 + (float)*param_4;
    fVar28 = fVar23 * fVar27 + (float)((ulong)*param_4 >> 0x20);
    fVar20 = fVar23 * fVar20 + (float)param_4[1];
  }
  else {
    if (*(char *)(lVar18 + 0x753) == '\x01') {
      lVar18 = (long)param_8 * 0x10;
      pfVar4 = (float *)(*(long *)(param_7 + 0x210) + lVar18);
      pfVar2 = (float *)(*(long *)(param_7 + 0x218) + lVar18);
      pfVar3 = (float *)(*(long *)(param_7 + 0x220) + lVar18);
      fVar32 = *pfVar4;
      fVar33 = *pfVar2;
      fVar34 = *pfVar3;
      fVar35 = fVar32 * fVar32;
      fVar37 = fVar33 * fVar33;
      fVar28 = pfVar4[1];
      auVar41._4_4_ = fVar37;
      auVar41._0_4_ = fVar35;
      auVar41._8_4_ = fVar34 * fVar34;
      auVar41._12_4_ = 0;
      auVar8._4_4_ = fVar37;
      auVar8._0_4_ = fVar35;
      auVar8._8_4_ = fVar34 * fVar34;
      auVar8._12_4_ = 0;
      auVar41 = NEON_ext(auVar41,auVar8,8,1);
      fVar29 = pfVar2[1];
      fVar30 = pfVar3[1];
      fVar42 = SQRT(auVar41._0_4_ + fVar35 + auVar41._4_4_ + fVar37);
      fVar35 = fVar28 * fVar28;
      fVar37 = fVar29 * fVar29;
      auVar9._4_4_ = fVar37;
      auVar9._0_4_ = fVar35;
      auVar9._8_4_ = fVar30 * fVar30;
      auVar9._12_4_ = 0;
      auVar10._4_4_ = fVar37;
      auVar10._0_4_ = fVar35;
      auVar10._8_4_ = fVar30 * fVar30;
      auVar10._12_4_ = 0;
      auVar41 = NEON_ext(auVar9,auVar10,8,1);
      fVar24 = pfVar4[2];
      fVar25 = pfVar2[2];
      fVar26 = pfVar3[2];
      fVar37 = SQRT(auVar41._0_4_ + fVar35 + auVar41._4_4_ + fVar37);
      fVar36 = fVar24 * fVar24;
      fVar38 = fVar25 * fVar25;
      auVar11._4_4_ = fVar38;
      auVar11._0_4_ = fVar36;
      auVar11._8_4_ = fVar26 * fVar26;
      auVar11._12_4_ = 0;
      auVar12._4_4_ = fVar38;
      auVar12._0_4_ = fVar36;
      auVar12._8_4_ = fVar26 * fVar26;
      auVar12._12_4_ = 0;
      auVar41 = NEON_ext(auVar11,auVar12,8,1);
      fVar40 = 0.0;
      fVar35 = 0.0;
      fVar39 = 0.0;
      fVar36 = SQRT(auVar41._0_4_ + fVar36 + auVar41._4_4_ + fVar38);
      if (0.0 < fVar42) {
        fVar42 = 1.0 / fVar42;
        fVar35 = fVar32 * fVar42;
        fVar39 = fVar33 * fVar42;
        fVar40 = fVar34 * fVar42;
        if (fVar37 <= 0.0) goto LAB_002735dc;
LAB_0027394c:
        fVar37 = 1.0 / fVar37;
        fVar28 = fVar28 * fVar37;
        fVar29 = fVar29 * fVar37;
        fVar30 = fVar30 * fVar37;
      }
      else {
        if (0.0 < fVar37) goto LAB_0027394c;
LAB_002735dc:
        fVar30 = 0.0;
        fVar29 = 0.0;
        fVar28 = 0.0;
      }
      fVar33 = 0.0;
      fVar37 = 0.0;
      fVar32 = 0.0;
      if (0.0 < fVar36) {
        fVar36 = 1.0 / fVar36;
        fVar32 = fVar24 * fVar36;
        fVar37 = fVar25 * fVar36;
        fVar33 = fVar26 * fVar36;
      }
    }
    else {
      auVar13 = *(undefined1 (*) [12])(param_7 + 0x380);
      auVar15 = *(undefined1 (*) [12])(param_7 + 0x390);
      auVar14 = *(undefined1 (*) [12])(param_7 + 0x3a0);
      fVar35 = auVar13._0_4_;
      fVar39 = auVar13._4_4_;
      fVar32 = auVar14._0_4_;
      fVar37 = auVar14._4_4_;
      fVar40 = SUB124(*(undefined1 (*) [12])(param_7 + 0x380),8);
      fVar33 = SUB124(*(undefined1 (*) [12])(param_7 + 0x3a0),8);
      fVar28 = auVar15._0_4_;
      fVar29 = auVar15._4_4_;
      fVar30 = SUB124(*(undefined1 (*) [12])(param_7 + 0x390),8);
    }
    fVar35 = (float)*param_4 + (fVar35 * fVar31 + fVar39 * fVar27 + fVar40 * fVar20) * fVar23;
    fVar28 = (float)((ulong)*param_4 >> 0x20) +
             (fVar28 * fVar31 + fVar29 * fVar27 + fVar30 * fVar20) * fVar23;
    fVar20 = (float)param_4[1] + (fVar32 * fVar31 + fVar37 * fVar27 + fVar33 * fVar20) * fVar23;
  }
  param_4[1] = (ulong)(uint)fVar20;
  *param_4 = CONCAT44(fVar28,fVar35);
LAB_002736a4:
  lVar18 = *(long *)(param_7 + 0x238);
  if (*(char *)(lVar18 + 3) != '\0') {
    lVar1 = param_7 + 0x1d0;
    if (*(long *)(lVar18 + 0x268) != 0) {
      FUN_002729a4(param_1);
      lVar18 = *(long *)(param_7 + 0x238);
    }
    lVar16 = *(long *)(lVar18 + 0x248);
    if (lVar16 != 0) {
      if (*(int *)(lVar16 + 0x3c) == 0) {
        local_70 = *(undefined8 *)(lVar16 + 4);
        local_68 = *(uint *)(lVar16 + 0xc);
      }
      else {
        FUN_00271d84(param_1);
      }
      local_80 = CONCAT44(*(undefined4 *)((ulong)&local_70 | 4),(undefined4)local_70);
      uStack_78 = (ulong)local_68;
      FUN_00275420(param_1,param_3,param_7,lVar1,param_8,&local_80);
      lVar18 = *(long *)(param_7 + 0x238);
    }
    puVar19 = *(undefined8 **)(lVar18 + 0x250);
    if (puVar19 != (undefined8 *)0x0) {
      if (*(int *)(puVar19 + 2) == 0) {
        local_80 = *puVar19;
        uStack_78 = CONCAT44(uStack_78._4_4_,*(undefined4 *)(puVar19 + 1));
      }
      else {
        FUN_00271d84(param_1);
      }
      uVar5 = *(uint *)((long)puVar19 + 0xc);
      uVar7 = 0;
      if (uVar5 != 0) {
        uVar7 = (uint)(int)(float)param_1 / uVar5;
      }
      if ((int)(float)param_1 == uVar7 * uVar5) {
        uVar6 = *(ushort *)(param_7 + 0xa8);
        lVar18 = *(long *)PTR_DAT_04372e60;
        *(ushort *)(param_7 + 0xa8) = uVar6 + 1;
        uVar22 = param_4[1];
        pfVar4 = (float *)(lVar18 + ((ulong)uVar6 & 0x1ff) * 0x10);
        fVar20 = (float)((ulong)*param_4 >> 0x20);
        fVar23 = (float)*param_4 + *pfVar4 * (float)local_80;
        param_4[1] = uVar22;
        *param_4 = CONCAT44(fVar20,fVar23);
        uVar21 = CONCAT44(fVar20 + pfVar4[1] * local_80._4_4_,fVar23);
        param_4[1] = uVar22;
        *param_4 = uVar21;
        param_4[1] = (ulong)(uint)((float)uVar22 + pfVar4[2] * (float)uStack_78);
        *param_4 = uVar21;
      }
      lVar18 = *(long *)(param_7 + 0x238);
    }
    if (*(long *)(lVar18 + 600) != 0) {
      FUN_00272088(param_1);
      lVar18 = *(long *)(param_7 + 0x238);
    }
    if (*(long *)(lVar18 + 0x260) != 0) {
      FUN_00272594(param_1);
      lVar18 = *(long *)(param_7 + 0x238);
    }
    if (*(long *)(lVar18 + 0x270) != 0) {
      FUN_00272cdc(param_1);
      lVar18 = *(long *)(param_7 + 0x238);
    }
    if (*(long *)(lVar18 + 0x280) != 0) {
      FUN_002764a0(param_3,param_4,param_7,lVar1,param_8);
      lVar18 = *(long *)(param_7 + 0x238);
    }
    if (*(long *)(lVar18 + 0x278) != 0) {
      FUN_00273164(param_1);
      lVar18 = *(long *)(param_7 + 0x238);
    }
    if ((*(long *)(lVar18 + 0x288) != 0) &&
       (pcVar17 = *(code **)(*(long *)(*(long *)(param_7 + 0x78) + 0x20) + 0x1200),
       pcVar17 != (code *)0x0)) {
      (*pcVar17)(param_3,param_4,param_6,param_5,param_7,lVar1,*(long *)(lVar18 + 0x288),param_8);
    }
  }
  return;
}


