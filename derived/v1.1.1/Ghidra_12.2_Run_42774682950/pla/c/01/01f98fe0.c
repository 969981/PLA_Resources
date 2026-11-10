/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f98fe0; name: FUN_01f98fe0
 */


int FUN_01f98fe0(char *param_1,char *param_2,char *param_3,char *param_4,char *param_5,long *param_6
                )

{
  char *pcVar1;
  char *__dest;
  bool bVar2;
  char cVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  int iVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auStack_1e0 [8];
  undefined1 auStack_1d8 [207];
  undefined1 auStack_109 [169];
  
  iVar17 = FUN_01f98b70();
  uVar18 = *(undefined8 *)(*param_6 + 0x198);
  fVar21 = (float)uVar18;
  fVar22 = (float)((ulong)uVar18 >> 0x20);
  uVar18 = *(undefined8 *)(*param_6 + 400);
  fVar19 = (float)uVar18;
  fVar20 = (float)((ulong)uVar18 >> 0x20);
  fVar23 = fVar19 - (float)*(undefined8 *)(param_5 + 0xc0);
  fVar24 = fVar20 - (float)((ulong)*(undefined8 *)(param_5 + 0xc0) >> 0x20);
  fVar25 = fVar21 - (float)*(undefined8 *)(param_5 + 200);
  fVar26 = fVar22 - (float)((ulong)*(undefined8 *)(param_5 + 200) >> 0x20);
  fVar23 = fVar23 * fVar23;
  fVar24 = fVar24 * fVar24;
  fVar25 = fVar25 * fVar25;
  fVar26 = fVar26 * fVar26;
  auVar27._4_4_ = fVar24;
  auVar27._0_4_ = fVar23;
  auVar27._8_4_ = fVar25;
  auVar27._12_4_ = fVar26;
  auVar10._4_4_ = fVar24;
  auVar10._0_4_ = fVar23;
  auVar10._8_4_ = fVar25;
  auVar10._12_4_ = fVar26;
  auVar27 = NEON_ext(auVar27,auVar10,8,1);
  fVar19 = fVar19 - *(float *)(param_4 + 0xc0);
  fVar20 = fVar20 - *(float *)(param_4 + 0xc4);
  fVar21 = fVar21 - *(float *)(param_4 + 200);
  fVar22 = fVar22 - *(float *)(param_4 + 0xcc);
  fVar19 = fVar19 * fVar19;
  fVar20 = fVar20 * fVar20;
  fVar21 = fVar21 * fVar21;
  fVar22 = fVar22 * fVar22;
  auVar28._4_4_ = fVar20;
  auVar28._0_4_ = fVar19;
  auVar28._8_4_ = fVar21;
  auVar28._12_4_ = fVar22;
  auVar29._4_4_ = fVar20;
  auVar29._0_4_ = fVar19;
  auVar29._8_4_ = fVar21;
  auVar29._12_4_ = fVar22;
  auVar28 = NEON_ext(auVar28,auVar29,8,1);
  if (SQRT(auVar27._0_4_ + fVar23 + auVar27._4_4_ + fVar24) <
      SQRT(auVar28._0_4_ + fVar19 + auVar28._4_4_ + fVar20)) {
    cVar3 = *param_4;
    bVar2 = cVar3 == '\0';
    if (!bVar2) {
      memcpy(auStack_109,param_4 + 0x10,0xa0);
    }
    uVar18 = *(undefined8 *)(param_4 + 0xb0);
    memcpy(auStack_1e0,param_4 + 0xb8,200);
    if (cVar3 == '\0') {
      if (*param_5 != '\0') {
        memcpy(param_4 + 0x10,param_5 + 0x10,0xa0);
        *param_4 = '\x01';
      }
    }
    else if (*param_5 == '\0') {
      *param_4 = '\0';
    }
    else {
      memcpy(param_4 + 0x10,param_5 + 0x10,0x98);
    }
    pcVar1 = param_4 + 0xc0;
    *(undefined8 *)(param_4 + 0xb0) = *(undefined8 *)(param_5 + 0xb0);
    memcpy(pcVar1,param_5 + 0xc0,0xc0);
    if (*param_5 == '\0') {
      if (!bVar2) {
        memcpy(param_5 + 0x10,auStack_109,0xa0);
        *param_5 = '\x01';
      }
    }
    else if (bVar2) {
      *param_5 = '\0';
    }
    else {
      memcpy(param_5 + 0x10,auStack_109,0x98);
    }
    *(undefined8 *)(param_5 + 0xb0) = uVar18;
    memcpy(param_5 + 0xc0,auStack_1d8,0xc0);
    uVar18 = *(undefined8 *)(*param_6 + 0x198);
    fVar21 = (float)uVar18;
    fVar22 = (float)((ulong)uVar18 >> 0x20);
    uVar18 = *(undefined8 *)(*param_6 + 400);
    fVar19 = (float)uVar18;
    fVar20 = (float)((ulong)uVar18 >> 0x20);
    fVar23 = fVar19 - (float)*(undefined8 *)(param_4 + 0xc0);
    fVar24 = fVar20 - (float)((ulong)*(undefined8 *)(param_4 + 0xc0) >> 0x20);
    fVar25 = fVar21 - (float)*(undefined8 *)(param_4 + 200);
    fVar26 = fVar22 - (float)((ulong)*(undefined8 *)(param_4 + 200) >> 0x20);
    fVar23 = fVar23 * fVar23;
    fVar24 = fVar24 * fVar24;
    fVar25 = fVar25 * fVar25;
    fVar26 = fVar26 * fVar26;
    auVar11._4_4_ = fVar24;
    auVar11._0_4_ = fVar23;
    auVar11._8_4_ = fVar25;
    auVar11._12_4_ = fVar26;
    auVar12._4_4_ = fVar24;
    auVar12._0_4_ = fVar23;
    auVar12._8_4_ = fVar25;
    auVar12._12_4_ = fVar26;
    auVar28 = NEON_ext(auVar11,auVar12,8,1);
    fVar19 = fVar19 - *(float *)(param_3 + 0xc0);
    fVar20 = fVar20 - *(float *)(param_3 + 0xc4);
    fVar21 = fVar21 - *(float *)(param_3 + 200);
    fVar22 = fVar22 - *(float *)(param_3 + 0xcc);
    fVar19 = fVar19 * fVar19;
    fVar20 = fVar20 * fVar20;
    fVar21 = fVar21 * fVar21;
    fVar22 = fVar22 * fVar22;
    auVar4._4_4_ = fVar20;
    auVar4._0_4_ = fVar19;
    auVar4._8_4_ = fVar21;
    auVar4._12_4_ = fVar22;
    auVar5._4_4_ = fVar20;
    auVar5._0_4_ = fVar19;
    auVar5._8_4_ = fVar21;
    auVar5._12_4_ = fVar22;
    auVar29 = NEON_ext(auVar4,auVar5,8,1);
    if (SQRT(auVar29._0_4_ + fVar19 + auVar29._4_4_ + fVar20) <=
        SQRT(auVar28._0_4_ + fVar23 + auVar28._4_4_ + fVar24)) {
      iVar17 = iVar17 + 1;
    }
    else {
      cVar3 = *param_3;
      bVar2 = cVar3 == '\0';
      if (!bVar2) {
        memcpy(auStack_109,param_3 + 0x10,0xa0);
      }
      uVar18 = *(undefined8 *)(param_3 + 0xb0);
      memcpy(auStack_1e0,param_3 + 0xb8,200);
      if (cVar3 == '\0') {
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
      memcpy(__dest,pcVar1,0xc0);
      if (*param_4 == '\0') {
        if (!bVar2) {
          memcpy(param_4 + 0x10,auStack_109,0xa0);
          *param_4 = '\x01';
        }
      }
      else if (bVar2) {
        *param_4 = '\0';
      }
      else {
        memcpy(param_4 + 0x10,auStack_109,0x98);
      }
      *(undefined8 *)(param_4 + 0xb0) = uVar18;
      memcpy(pcVar1,auStack_1d8,0xc0);
      uVar18 = *(undefined8 *)(*param_6 + 0x198);
      fVar21 = (float)uVar18;
      fVar22 = (float)((ulong)uVar18 >> 0x20);
      uVar18 = *(undefined8 *)(*param_6 + 400);
      fVar19 = (float)uVar18;
      fVar20 = (float)((ulong)uVar18 >> 0x20);
      fVar23 = fVar19 - (float)*(undefined8 *)(param_3 + 0xc0);
      fVar24 = fVar20 - (float)((ulong)*(undefined8 *)(param_3 + 0xc0) >> 0x20);
      fVar25 = fVar21 - (float)*(undefined8 *)(param_3 + 200);
      fVar26 = fVar22 - (float)((ulong)*(undefined8 *)(param_3 + 200) >> 0x20);
      fVar23 = fVar23 * fVar23;
      fVar24 = fVar24 * fVar24;
      fVar25 = fVar25 * fVar25;
      fVar26 = fVar26 * fVar26;
      auVar13._4_4_ = fVar24;
      auVar13._0_4_ = fVar23;
      auVar13._8_4_ = fVar25;
      auVar13._12_4_ = fVar26;
      auVar14._4_4_ = fVar24;
      auVar14._0_4_ = fVar23;
      auVar14._8_4_ = fVar25;
      auVar14._12_4_ = fVar26;
      auVar28 = NEON_ext(auVar13,auVar14,8,1);
      fVar19 = fVar19 - *(float *)(param_2 + 0xc0);
      fVar20 = fVar20 - *(float *)(param_2 + 0xc4);
      fVar21 = fVar21 - *(float *)(param_2 + 200);
      fVar22 = fVar22 - *(float *)(param_2 + 0xcc);
      fVar19 = fVar19 * fVar19;
      fVar20 = fVar20 * fVar20;
      fVar21 = fVar21 * fVar21;
      fVar22 = fVar22 * fVar22;
      auVar6._4_4_ = fVar20;
      auVar6._0_4_ = fVar19;
      auVar6._8_4_ = fVar21;
      auVar6._12_4_ = fVar22;
      auVar7._4_4_ = fVar20;
      auVar7._0_4_ = fVar19;
      auVar7._8_4_ = fVar21;
      auVar7._12_4_ = fVar22;
      auVar29 = NEON_ext(auVar6,auVar7,8,1);
      if (SQRT(auVar29._0_4_ + fVar19 + auVar29._4_4_ + fVar20) <=
          SQRT(auVar28._0_4_ + fVar23 + auVar28._4_4_ + fVar24)) {
        iVar17 = iVar17 + 2;
      }
      else {
        cVar3 = *param_2;
        bVar2 = cVar3 == '\0';
        if (!bVar2) {
          memcpy(auStack_109,param_2 + 0x10,0xa0);
        }
        uVar18 = *(undefined8 *)(param_2 + 0xb0);
        memcpy(auStack_1e0,param_2 + 0xb8,200);
        if (cVar3 == '\0') {
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
        pcVar1 = param_2 + 0xc0;
        *(undefined8 *)(param_2 + 0xb0) = *(undefined8 *)(param_3 + 0xb0);
        memcpy(pcVar1,__dest,0xc0);
        if (*param_3 == '\0') {
          if (!bVar2) {
            memcpy(param_3 + 0x10,auStack_109,0xa0);
            *param_3 = '\x01';
          }
        }
        else if (bVar2) {
          *param_3 = '\0';
        }
        else {
          memcpy(param_3 + 0x10,auStack_109,0x98);
        }
        *(undefined8 *)(param_3 + 0xb0) = uVar18;
        memcpy(__dest,auStack_1d8,0xc0);
        uVar18 = *(undefined8 *)(*param_6 + 0x198);
        fVar21 = (float)uVar18;
        fVar22 = (float)((ulong)uVar18 >> 0x20);
        uVar18 = *(undefined8 *)(*param_6 + 400);
        fVar19 = (float)uVar18;
        fVar20 = (float)((ulong)uVar18 >> 0x20);
        fVar23 = fVar19 - (float)*(undefined8 *)(param_2 + 0xc0);
        fVar24 = fVar20 - (float)((ulong)*(undefined8 *)(param_2 + 0xc0) >> 0x20);
        fVar25 = fVar21 - (float)*(undefined8 *)(param_2 + 200);
        fVar26 = fVar22 - (float)((ulong)*(undefined8 *)(param_2 + 200) >> 0x20);
        fVar23 = fVar23 * fVar23;
        fVar24 = fVar24 * fVar24;
        fVar25 = fVar25 * fVar25;
        fVar26 = fVar26 * fVar26;
        auVar15._4_4_ = fVar24;
        auVar15._0_4_ = fVar23;
        auVar15._8_4_ = fVar25;
        auVar15._12_4_ = fVar26;
        auVar16._4_4_ = fVar24;
        auVar16._0_4_ = fVar23;
        auVar16._8_4_ = fVar25;
        auVar16._12_4_ = fVar26;
        auVar28 = NEON_ext(auVar15,auVar16,8,1);
        fVar19 = fVar19 - *(float *)(param_1 + 0xc0);
        fVar20 = fVar20 - *(float *)(param_1 + 0xc4);
        fVar21 = fVar21 - *(float *)(param_1 + 200);
        fVar22 = fVar22 - *(float *)(param_1 + 0xcc);
        fVar19 = fVar19 * fVar19;
        fVar20 = fVar20 * fVar20;
        fVar21 = fVar21 * fVar21;
        fVar22 = fVar22 * fVar22;
        auVar8._4_4_ = fVar20;
        auVar8._0_4_ = fVar19;
        auVar8._8_4_ = fVar21;
        auVar8._12_4_ = fVar22;
        auVar9._4_4_ = fVar20;
        auVar9._0_4_ = fVar19;
        auVar9._8_4_ = fVar21;
        auVar9._12_4_ = fVar22;
        auVar29 = NEON_ext(auVar8,auVar9,8,1);
        if (SQRT(auVar29._0_4_ + fVar19 + auVar29._4_4_ + fVar20) <=
            SQRT(auVar28._0_4_ + fVar23 + auVar28._4_4_ + fVar24)) {
          iVar17 = iVar17 + 3;
        }
        else {
          cVar3 = *param_1;
          bVar2 = cVar3 == '\0';
          if (!bVar2) {
            memcpy(auStack_109,param_1 + 0x10,0xa0);
          }
          uVar18 = *(undefined8 *)(param_1 + 0xb0);
          memcpy(auStack_1e0,param_1 + 0xb8,200);
          if (cVar3 == '\0') {
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
          memcpy(param_1 + 0xc0,pcVar1,0xc0);
          if (*param_2 == '\0') {
            if (!bVar2) {
              memcpy(param_2 + 0x10,auStack_109,0xa0);
              *param_2 = '\x01';
            }
          }
          else if (bVar2) {
            *param_2 = '\0';
          }
          else {
            memcpy(param_2 + 0x10,auStack_109,0x98);
          }
          *(undefined8 *)(param_2 + 0xb0) = uVar18;
          memcpy(pcVar1,auStack_1d8,0xc0);
          iVar17 = iVar17 + 4;
        }
      }
    }
  }
  return iVar17;
}


