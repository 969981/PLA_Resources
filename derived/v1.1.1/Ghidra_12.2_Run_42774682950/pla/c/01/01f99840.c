/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f99840; name: FUN_01f99840
 */


bool FUN_01f99840(char *param_1,char *param_2,long *param_3)

{
  bool bVar1;
  char cVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 uVar13;
  char *pcVar14;
  undefined8 uVar15;
  char *pcVar16;
  undefined8 uVar17;
  long lVar18;
  char *pcVar19;
  int iVar20;
  long lVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auStack_1e0 [8];
  undefined1 auStack_1d8 [207];
  undefined1 auStack_109 [169];
  
  switch(((long)param_2 - (long)param_1 >> 7) * -0x5555555555555555) {
  case 0:
  case 1:
    break;
  case 2:
    uVar17 = *(undefined8 *)(*param_3 + 0x198);
    fVar24 = (float)uVar17;
    fVar25 = (float)((ulong)uVar17 >> 0x20);
    uVar17 = *(undefined8 *)(*param_3 + 400);
    fVar22 = (float)uVar17;
    fVar23 = (float)((ulong)uVar17 >> 0x20);
    fVar26 = fVar22 - (float)*(undefined8 *)(param_2 + -0xc0);
    fVar27 = fVar23 - (float)((ulong)*(undefined8 *)(param_2 + -0xc0) >> 0x20);
    fVar28 = fVar24 - (float)*(undefined8 *)(param_2 + -0xb8);
    fVar29 = fVar25 - (float)((ulong)*(undefined8 *)(param_2 + -0xb8) >> 0x20);
    fVar26 = fVar26 * fVar26;
    fVar27 = fVar27 * fVar27;
    fVar28 = fVar28 * fVar28;
    fVar29 = fVar29 * fVar29;
    auVar11._4_4_ = fVar27;
    auVar11._0_4_ = fVar26;
    auVar11._8_4_ = fVar28;
    auVar11._12_4_ = fVar29;
    auVar12._4_4_ = fVar27;
    auVar12._0_4_ = fVar26;
    auVar12._8_4_ = fVar28;
    auVar12._12_4_ = fVar29;
    auVar33 = NEON_ext(auVar11,auVar12,8,1);
    fVar22 = fVar22 - *(float *)(param_1 + 0xc0);
    fVar23 = fVar23 - *(float *)(param_1 + 0xc4);
    fVar24 = fVar24 - *(float *)(param_1 + 200);
    fVar25 = fVar25 - *(float *)(param_1 + 0xcc);
    fVar22 = fVar22 * fVar22;
    fVar23 = fVar23 * fVar23;
    fVar24 = fVar24 * fVar24;
    fVar25 = fVar25 * fVar25;
    auVar5._4_4_ = fVar23;
    auVar5._0_4_ = fVar22;
    auVar5._8_4_ = fVar24;
    auVar5._12_4_ = fVar25;
    auVar6._4_4_ = fVar23;
    auVar6._0_4_ = fVar22;
    auVar6._8_4_ = fVar24;
    auVar6._12_4_ = fVar25;
    auVar34 = NEON_ext(auVar5,auVar6,8,1);
    if (SQRT(auVar33._0_4_ + fVar26 + auVar33._4_4_ + fVar27) <
        SQRT(auVar34._0_4_ + fVar22 + auVar34._4_4_ + fVar23)) {
      cVar2 = *param_1;
      bVar1 = cVar2 == '\0';
      if (!bVar1) {
        memcpy(auStack_109,param_1 + 0x10,0xa0);
      }
      uVar17 = *(undefined8 *)(param_1 + 0xb0);
      memcpy(auStack_1e0,param_1 + 0xb8,200);
      pcVar16 = param_2 + -0x180;
      if (cVar2 == '\0') {
        if (*pcVar16 != '\0') {
          memcpy(param_1 + 0x10,param_2 + -0x170,0xa0);
          *param_1 = '\x01';
        }
      }
      else if (*pcVar16 == '\0') {
        *param_1 = '\0';
      }
      else {
        memcpy(param_1 + 0x10,param_2 + -0x170,0x98);
      }
      *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + -0xd0);
      memcpy(param_1 + 0xc0,param_2 + -0xc0,0xc0);
      if (*pcVar16 == '\0') {
        if (!bVar1) {
          memcpy(param_2 + -0x170,auStack_109,0xa0);
          *pcVar16 = '\x01';
        }
      }
      else if (bVar1) {
        *pcVar16 = '\0';
      }
      else {
        memcpy(param_2 + -0x170,auStack_109,0x98);
      }
      *(undefined8 *)(param_2 + -0xd0) = uVar17;
      memcpy(param_2 + -0xc0,auStack_1d8,0xc0);
    }
    break;
  case 3:
    FUN_01f984d0(param_1,param_1 + 0x180,param_2 + -0x180,param_3);
    break;
  case 4:
    FUN_01f98b70(param_1,param_1 + 0x180,param_1 + 0x300,param_2 + -0x180,param_3);
    break;
  case 5:
    FUN_01f98fe0(param_1,param_1 + 0x180,param_1 + 0x300,param_1 + 0x480,param_2 + -0x180,param_3);
    break;
  default:
    FUN_01f984d0(param_1,param_1 + 0x180,param_1 + 0x300,param_3);
    if (param_1 + 0x480 == param_2) {
      return true;
    }
    lVar18 = 0;
    iVar20 = 0;
    pcVar16 = param_1 + 0x480;
    pcVar19 = param_1 + 0x300;
    do {
      pcVar14 = pcVar16;
      uVar17 = *(undefined8 *)(*param_3 + 0x198);
      fVar24 = (float)uVar17;
      fVar25 = (float)((ulong)uVar17 >> 0x20);
      uVar17 = *(undefined8 *)(*param_3 + 400);
      fVar22 = (float)uVar17;
      fVar23 = (float)((ulong)uVar17 >> 0x20);
      uVar13 = *(undefined8 *)(pcVar14 + 200);
      fVar30 = (float)((ulong)uVar13 >> 0x20);
      uVar17 = *(undefined8 *)(pcVar14 + 0xc0);
      fVar27 = (float)((ulong)uVar17 >> 0x20);
      fVar26 = fVar22 - (float)uVar17;
      fVar28 = fVar23 - fVar27;
      fVar29 = fVar24 - (float)uVar13;
      fVar31 = fVar25 - fVar30;
      fVar26 = fVar26 * fVar26;
      fVar28 = fVar28 * fVar28;
      fVar29 = fVar29 * fVar29;
      fVar31 = fVar31 * fVar31;
      auVar32._4_4_ = fVar28;
      auVar32._0_4_ = fVar26;
      auVar32._8_4_ = fVar29;
      auVar32._12_4_ = fVar31;
      auVar8._4_4_ = fVar28;
      auVar8._0_4_ = fVar26;
      auVar8._8_4_ = fVar29;
      auVar8._12_4_ = fVar31;
      auVar32 = NEON_ext(auVar32,auVar8,8,1);
      fVar22 = fVar22 - *(float *)(pcVar19 + 0xc0);
      fVar23 = fVar23 - *(float *)(pcVar19 + 0xc4);
      fVar24 = fVar24 - *(float *)(pcVar19 + 200);
      fVar25 = fVar25 - *(float *)(pcVar19 + 0xcc);
      fVar22 = fVar22 * fVar22;
      fVar23 = fVar23 * fVar23;
      fVar24 = fVar24 * fVar24;
      fVar25 = fVar25 * fVar25;
      auVar33._4_4_ = fVar23;
      auVar33._0_4_ = fVar22;
      auVar33._8_4_ = fVar24;
      auVar33._12_4_ = fVar25;
      auVar34._4_4_ = fVar23;
      auVar34._0_4_ = fVar22;
      auVar34._8_4_ = fVar24;
      auVar34._12_4_ = fVar25;
      auVar33 = NEON_ext(auVar33,auVar34,8,1);
      if (SQRT(auVar32._0_4_ + fVar26 + auVar32._4_4_ + fVar28) <
          SQRT(auVar33._0_4_ + fVar22 + auVar33._4_4_ + fVar23)) {
        cVar2 = *pcVar14;
        bVar1 = cVar2 == '\0';
        if (!bVar1) {
          memcpy(auStack_109,pcVar14 + 0x10,0xa0);
        }
        uVar15 = *(undefined8 *)(pcVar14 + 0xb0);
        memcpy(auStack_1e0,pcVar14 + 0xd0,0xb0);
        lVar21 = lVar18;
        while( true ) {
          if (cVar2 == '\0') {
            if (param_1[lVar21 + 0x300] != '\0') {
              memcpy(param_1 + lVar21 + 0x490,param_1 + lVar21 + 0x310,0xa0);
              param_1[lVar21 + 0x480] = '\x01';
            }
          }
          else if (param_1[lVar21 + 0x300] == '\0') {
            param_1[lVar21 + 0x480] = '\0';
          }
          else {
            memcpy(param_1 + lVar21 + 0x490,param_1 + lVar21 + 0x310,0x98);
          }
          *(undefined8 *)(param_1 + lVar21 + 0x530) = *(undefined8 *)(param_1 + lVar21 + 0x3b0);
          memcpy(param_1 + lVar21 + 0x540,param_1 + lVar21 + 0x3c0,0xc0);
          if (lVar21 == -0x300) {
            pcVar16 = param_1;
            goto LAB_01f99c08;
          }
          uVar7 = *(undefined8 *)(*param_3 + 0x198);
          fVar24 = (float)uVar7;
          fVar25 = (float)((ulong)uVar7 >> 0x20);
          uVar7 = *(undefined8 *)(*param_3 + 400);
          fVar22 = (float)uVar7;
          fVar23 = (float)((ulong)uVar7 >> 0x20);
          fVar26 = fVar22 - (float)uVar17;
          fVar28 = fVar23 - fVar27;
          fVar29 = fVar24 - (float)uVar13;
          fVar31 = fVar25 - fVar30;
          fVar26 = fVar26 * fVar26;
          fVar28 = fVar28 * fVar28;
          fVar29 = fVar29 * fVar29;
          fVar31 = fVar31 * fVar31;
          auVar9._4_4_ = fVar28;
          auVar9._0_4_ = fVar26;
          auVar9._8_4_ = fVar29;
          auVar9._12_4_ = fVar31;
          auVar10._4_4_ = fVar28;
          auVar10._0_4_ = fVar26;
          auVar10._8_4_ = fVar29;
          auVar10._12_4_ = fVar31;
          auVar33 = NEON_ext(auVar9,auVar10,8,1);
          fVar22 = fVar22 - *(float *)(param_1 + lVar21 + 0x240);
          fVar23 = fVar23 - *(float *)(param_1 + lVar21 + 0x244);
          fVar24 = fVar24 - *(float *)(param_1 + lVar21 + 0x248);
          fVar25 = fVar25 - *(float *)(param_1 + lVar21 + 0x24c);
          fVar22 = fVar22 * fVar22;
          fVar23 = fVar23 * fVar23;
          fVar24 = fVar24 * fVar24;
          fVar25 = fVar25 * fVar25;
          auVar3._4_4_ = fVar23;
          auVar3._0_4_ = fVar22;
          auVar3._8_4_ = fVar24;
          auVar3._12_4_ = fVar25;
          auVar4._4_4_ = fVar23;
          auVar4._0_4_ = fVar22;
          auVar4._8_4_ = fVar24;
          auVar4._12_4_ = fVar25;
          auVar34 = NEON_ext(auVar3,auVar4,8,1);
          if (SQRT(auVar34._0_4_ + fVar22 + auVar34._4_4_ + fVar23) <=
              SQRT(auVar33._0_4_ + fVar26 + auVar33._4_4_ + fVar28)) break;
          cVar2 = param_1[lVar21 + 0x300];
          lVar21 = lVar21 + -0x180;
        }
        pcVar16 = param_1 + lVar21 + 0x300;
LAB_01f99c08:
        if (*pcVar16 == '\0') {
          if (!bVar1) {
            memcpy(pcVar16 + 0x10,auStack_109,0xa0);
            *pcVar16 = '\x01';
          }
        }
        else if (bVar1) {
          *pcVar16 = '\0';
        }
        else {
          memcpy(pcVar16 + 0x10,auStack_109,0x98);
        }
        *(undefined8 *)(pcVar16 + 0xb0) = uVar15;
        *(undefined8 *)(pcVar16 + 200) = uVar13;
        *(undefined8 *)(pcVar16 + 0xc0) = uVar17;
        memcpy(pcVar16 + 0xd0,auStack_1e0,0xb0);
        iVar20 = iVar20 + 1;
        if (iVar20 == 8) {
          return pcVar14 + 0x180 == param_2;
        }
      }
      lVar18 = lVar18 + 0x180;
      pcVar16 = pcVar14 + 0x180;
      pcVar19 = pcVar14;
    } while (pcVar14 + 0x180 != param_2);
  }
  return true;
}


