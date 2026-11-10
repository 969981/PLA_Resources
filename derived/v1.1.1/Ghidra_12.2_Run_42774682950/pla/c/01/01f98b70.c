/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f98b70; name: FUN_01f98b70
 */


int FUN_01f98b70(char *param_1,char *param_2,char *param_3,char *param_4,long *param_5)

{
  char *__dest;
  char *__dest_00;
  bool bVar1;
  char cVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  int iVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auStack_1e0 [8];
  undefined1 auStack_1d8 [207];
  undefined1 auStack_109 [169];
  
  iVar12 = FUN_01f984d0();
  uVar13 = *(undefined8 *)(*param_5 + 0x198);
  fVar16 = (float)uVar13;
  fVar17 = (float)((ulong)uVar13 >> 0x20);
  uVar13 = *(undefined8 *)(*param_5 + 400);
  fVar14 = (float)uVar13;
  fVar15 = (float)((ulong)uVar13 >> 0x20);
  fVar18 = fVar14 - (float)*(undefined8 *)(param_4 + 0xc0);
  fVar19 = fVar15 - (float)((ulong)*(undefined8 *)(param_4 + 0xc0) >> 0x20);
  fVar20 = fVar16 - (float)*(undefined8 *)(param_4 + 200);
  fVar21 = fVar17 - (float)((ulong)*(undefined8 *)(param_4 + 200) >> 0x20);
  fVar18 = fVar18 * fVar18;
  fVar19 = fVar19 * fVar19;
  fVar20 = fVar20 * fVar20;
  fVar21 = fVar21 * fVar21;
  auVar22._4_4_ = fVar19;
  auVar22._0_4_ = fVar18;
  auVar22._8_4_ = fVar20;
  auVar22._12_4_ = fVar21;
  auVar7._4_4_ = fVar19;
  auVar7._0_4_ = fVar18;
  auVar7._8_4_ = fVar20;
  auVar7._12_4_ = fVar21;
  auVar22 = NEON_ext(auVar22,auVar7,8,1);
  fVar14 = fVar14 - *(float *)(param_3 + 0xc0);
  fVar15 = fVar15 - *(float *)(param_3 + 0xc4);
  fVar16 = fVar16 - *(float *)(param_3 + 200);
  fVar17 = fVar17 - *(float *)(param_3 + 0xcc);
  fVar14 = fVar14 * fVar14;
  fVar15 = fVar15 * fVar15;
  fVar16 = fVar16 * fVar16;
  fVar17 = fVar17 * fVar17;
  auVar23._4_4_ = fVar15;
  auVar23._0_4_ = fVar14;
  auVar23._8_4_ = fVar16;
  auVar23._12_4_ = fVar17;
  auVar24._4_4_ = fVar15;
  auVar24._0_4_ = fVar14;
  auVar24._8_4_ = fVar16;
  auVar24._12_4_ = fVar17;
  auVar23 = NEON_ext(auVar23,auVar24,8,1);
  if (SQRT(auVar22._0_4_ + fVar18 + auVar22._4_4_ + fVar19) <
      SQRT(auVar23._0_4_ + fVar14 + auVar23._4_4_ + fVar15)) {
    cVar2 = *param_3;
    bVar1 = cVar2 == '\0';
    if (!bVar1) {
      memcpy(auStack_109,param_3 + 0x10,0xa0);
    }
    uVar13 = *(undefined8 *)(param_3 + 0xb0);
    memcpy(auStack_1e0,param_3 + 0xb8,200);
    if (cVar2 == '\0') {
      if (*param_4 != '\0') {
        memcpy(param_3 + 0x10,param_4 + 0x10,0xa0);
        *param_3 = '\x01';
      }
    }
    else if (*param_4 == '\0') {
      *param_3 = '\0';
    }
    else {
      memcpy(param_3 + 0x10,param_4 + 0x10,0x98);
    }
    __dest = param_3 + 0xc0;
    *(undefined8 *)(param_3 + 0xb0) = *(undefined8 *)(param_4 + 0xb0);
    memcpy(__dest,param_4 + 0xc0,0xc0);
    if (*param_4 == '\0') {
      if (!bVar1) {
        memcpy(param_4 + 0x10,auStack_109,0xa0);
        *param_4 = '\x01';
      }
    }
    else if (bVar1) {
      *param_4 = '\0';
    }
    else {
      memcpy(param_4 + 0x10,auStack_109,0x98);
    }
    *(undefined8 *)(param_4 + 0xb0) = uVar13;
    memcpy(param_4 + 0xc0,auStack_1d8,0xc0);
    uVar13 = *(undefined8 *)(*param_5 + 0x198);
    fVar16 = (float)uVar13;
    fVar17 = (float)((ulong)uVar13 >> 0x20);
    uVar13 = *(undefined8 *)(*param_5 + 400);
    fVar14 = (float)uVar13;
    fVar15 = (float)((ulong)uVar13 >> 0x20);
    fVar18 = fVar14 - (float)*(undefined8 *)(param_3 + 0xc0);
    fVar19 = fVar15 - (float)((ulong)*(undefined8 *)(param_3 + 0xc0) >> 0x20);
    fVar20 = fVar16 - (float)*(undefined8 *)(param_3 + 200);
    fVar21 = fVar17 - (float)((ulong)*(undefined8 *)(param_3 + 200) >> 0x20);
    fVar18 = fVar18 * fVar18;
    fVar19 = fVar19 * fVar19;
    fVar20 = fVar20 * fVar20;
    fVar21 = fVar21 * fVar21;
    auVar8._4_4_ = fVar19;
    auVar8._0_4_ = fVar18;
    auVar8._8_4_ = fVar20;
    auVar8._12_4_ = fVar21;
    auVar9._4_4_ = fVar19;
    auVar9._0_4_ = fVar18;
    auVar9._8_4_ = fVar20;
    auVar9._12_4_ = fVar21;
    auVar23 = NEON_ext(auVar8,auVar9,8,1);
    fVar14 = fVar14 - *(float *)(param_2 + 0xc0);
    fVar15 = fVar15 - *(float *)(param_2 + 0xc4);
    fVar16 = fVar16 - *(float *)(param_2 + 200);
    fVar17 = fVar17 - *(float *)(param_2 + 0xcc);
    fVar14 = fVar14 * fVar14;
    fVar15 = fVar15 * fVar15;
    fVar16 = fVar16 * fVar16;
    fVar17 = fVar17 * fVar17;
    auVar3._4_4_ = fVar15;
    auVar3._0_4_ = fVar14;
    auVar3._8_4_ = fVar16;
    auVar3._12_4_ = fVar17;
    auVar4._4_4_ = fVar15;
    auVar4._0_4_ = fVar14;
    auVar4._8_4_ = fVar16;
    auVar4._12_4_ = fVar17;
    auVar24 = NEON_ext(auVar3,auVar4,8,1);
    if (SQRT(auVar24._0_4_ + fVar14 + auVar24._4_4_ + fVar15) <=
        SQRT(auVar23._0_4_ + fVar18 + auVar23._4_4_ + fVar19)) {
      iVar12 = iVar12 + 1;
    }
    else {
      cVar2 = *param_2;
      bVar1 = cVar2 == '\0';
      if (!bVar1) {
        memcpy(auStack_109,param_2 + 0x10,0xa0);
      }
      uVar13 = *(undefined8 *)(param_2 + 0xb0);
      memcpy(auStack_1e0,param_2 + 0xb8,200);
      if (cVar2 == '\0') {
        if (*param_3 != '\0') {
          memcpy(param_2 + 0x10,param_3 + 0x10,0xa0);
          *param_2 = '\x01';
        }
      }
      else if (*param_3 == '\0') {
        *param_2 = '\0';
      }
      else {
        memcpy(param_2 + 0x10,param_3 + 0x10,0x98);
      }
      __dest_00 = param_2 + 0xc0;
      *(undefined8 *)(param_2 + 0xb0) = *(undefined8 *)(param_3 + 0xb0);
      memcpy(__dest_00,__dest,0xc0);
      if (*param_3 == '\0') {
        if (!bVar1) {
          memcpy(param_3 + 0x10,auStack_109,0xa0);
          *param_3 = '\x01';
        }
      }
      else if (bVar1) {
        *param_3 = '\0';
      }
      else {
        memcpy(param_3 + 0x10,auStack_109,0x98);
      }
      *(undefined8 *)(param_3 + 0xb0) = uVar13;
      memcpy(__dest,auStack_1d8,0xc0);
      uVar13 = *(undefined8 *)(*param_5 + 0x198);
      fVar16 = (float)uVar13;
      fVar17 = (float)((ulong)uVar13 >> 0x20);
      uVar13 = *(undefined8 *)(*param_5 + 400);
      fVar14 = (float)uVar13;
      fVar15 = (float)((ulong)uVar13 >> 0x20);
      fVar18 = fVar14 - (float)*(undefined8 *)(param_2 + 0xc0);
      fVar19 = fVar15 - (float)((ulong)*(undefined8 *)(param_2 + 0xc0) >> 0x20);
      fVar20 = fVar16 - (float)*(undefined8 *)(param_2 + 200);
      fVar21 = fVar17 - (float)((ulong)*(undefined8 *)(param_2 + 200) >> 0x20);
      fVar18 = fVar18 * fVar18;
      fVar19 = fVar19 * fVar19;
      fVar20 = fVar20 * fVar20;
      fVar21 = fVar21 * fVar21;
      auVar10._4_4_ = fVar19;
      auVar10._0_4_ = fVar18;
      auVar10._8_4_ = fVar20;
      auVar10._12_4_ = fVar21;
      auVar11._4_4_ = fVar19;
      auVar11._0_4_ = fVar18;
      auVar11._8_4_ = fVar20;
      auVar11._12_4_ = fVar21;
      auVar23 = NEON_ext(auVar10,auVar11,8,1);
      fVar14 = fVar14 - *(float *)(param_1 + 0xc0);
      fVar15 = fVar15 - *(float *)(param_1 + 0xc4);
      fVar16 = fVar16 - *(float *)(param_1 + 200);
      fVar17 = fVar17 - *(float *)(param_1 + 0xcc);
      fVar14 = fVar14 * fVar14;
      fVar15 = fVar15 * fVar15;
      fVar16 = fVar16 * fVar16;
      fVar17 = fVar17 * fVar17;
      auVar5._4_4_ = fVar15;
      auVar5._0_4_ = fVar14;
      auVar5._8_4_ = fVar16;
      auVar5._12_4_ = fVar17;
      auVar6._4_4_ = fVar15;
      auVar6._0_4_ = fVar14;
      auVar6._8_4_ = fVar16;
      auVar6._12_4_ = fVar17;
      auVar24 = NEON_ext(auVar5,auVar6,8,1);
      if (SQRT(auVar24._0_4_ + fVar14 + auVar24._4_4_ + fVar15) <=
          SQRT(auVar23._0_4_ + fVar18 + auVar23._4_4_ + fVar19)) {
        iVar12 = iVar12 + 2;
      }
      else {
        cVar2 = *param_1;
        bVar1 = cVar2 == '\0';
        if (!bVar1) {
          memcpy(auStack_109,param_1 + 0x10,0xa0);
        }
        uVar13 = *(undefined8 *)(param_1 + 0xb0);
        memcpy(auStack_1e0,param_1 + 0xb8,200);
        if (cVar2 == '\0') {
          if (*param_2 != '\0') {
            memcpy(param_1 + 0x10,param_2 + 0x10,0xa0);
            *param_1 = '\x01';
          }
        }
        else if (*param_2 == '\0') {
          *param_1 = '\0';
        }
        else {
          memcpy(param_1 + 0x10,param_2 + 0x10,0x98);
        }
        *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0xb0);
        memcpy(param_1 + 0xc0,__dest_00,0xc0);
        if (*param_2 == '\0') {
          if (!bVar1) {
            memcpy(param_2 + 0x10,auStack_109,0xa0);
            *param_2 = '\x01';
          }
        }
        else if (bVar1) {
          *param_2 = '\0';
        }
        else {
          memcpy(param_2 + 0x10,auStack_109,0x98);
        }
        *(undefined8 *)(param_2 + 0xb0) = uVar13;
        memcpy(__dest_00,auStack_1d8,0xc0);
        iVar12 = iVar12 + 3;
      }
    }
  }
  return iVar12;
}


