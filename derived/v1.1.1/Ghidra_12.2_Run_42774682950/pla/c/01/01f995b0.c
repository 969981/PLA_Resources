/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f995b0; name: FUN_01f995b0
 */


void FUN_01f995b0(char *param_1,char *param_2,long *param_3)

{
  bool bVar1;
  char cVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 uVar10;
  char *pcVar11;
  undefined8 uVar12;
  char *pcVar13;
  char *pcVar14;
  long lVar15;
  long lVar16;
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
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auStack_1d0 [199];
  undefined1 auStack_109 [169];
  
  FUN_01f984d0(param_1,param_1 + 0x180,param_1 + 0x300,param_3);
  if (param_1 + 0x480 != param_2) {
    lVar15 = 0;
    pcVar13 = param_1 + 0x480;
    pcVar14 = param_1 + 0x300;
    do {
      pcVar11 = pcVar13;
      uVar5 = *(undefined8 *)(*param_3 + 0x198);
      fVar19 = (float)uVar5;
      fVar20 = (float)((ulong)uVar5 >> 0x20);
      uVar5 = *(undefined8 *)(*param_3 + 400);
      fVar17 = (float)uVar5;
      fVar18 = (float)((ulong)uVar5 >> 0x20);
      uVar10 = *(undefined8 *)(pcVar11 + 200);
      fVar25 = (float)((ulong)uVar10 >> 0x20);
      uVar5 = *(undefined8 *)(pcVar11 + 0xc0);
      fVar22 = (float)((ulong)uVar5 >> 0x20);
      fVar21 = fVar17 - (float)uVar5;
      fVar23 = fVar18 - fVar22;
      fVar24 = fVar19 - (float)uVar10;
      fVar26 = fVar20 - fVar25;
      fVar21 = fVar21 * fVar21;
      fVar23 = fVar23 * fVar23;
      fVar24 = fVar24 * fVar24;
      fVar26 = fVar26 * fVar26;
      auVar27._4_4_ = fVar23;
      auVar27._0_4_ = fVar21;
      auVar27._8_4_ = fVar24;
      auVar27._12_4_ = fVar26;
      auVar7._4_4_ = fVar23;
      auVar7._0_4_ = fVar21;
      auVar7._8_4_ = fVar24;
      auVar7._12_4_ = fVar26;
      auVar27 = NEON_ext(auVar27,auVar7,8,1);
      fVar17 = fVar17 - *(float *)(pcVar14 + 0xc0);
      fVar18 = fVar18 - *(float *)(pcVar14 + 0xc4);
      fVar19 = fVar19 - *(float *)(pcVar14 + 200);
      fVar20 = fVar20 - *(float *)(pcVar14 + 0xcc);
      fVar17 = fVar17 * fVar17;
      fVar18 = fVar18 * fVar18;
      fVar19 = fVar19 * fVar19;
      fVar20 = fVar20 * fVar20;
      auVar28._4_4_ = fVar18;
      auVar28._0_4_ = fVar17;
      auVar28._8_4_ = fVar19;
      auVar28._12_4_ = fVar20;
      auVar29._4_4_ = fVar18;
      auVar29._0_4_ = fVar17;
      auVar29._8_4_ = fVar19;
      auVar29._12_4_ = fVar20;
      auVar28 = NEON_ext(auVar28,auVar29,8,1);
      if (SQRT(auVar27._0_4_ + fVar21 + auVar27._4_4_ + fVar23) <
          SQRT(auVar28._0_4_ + fVar17 + auVar28._4_4_ + fVar18)) {
        cVar2 = *pcVar11;
        bVar1 = cVar2 == '\0';
        if (!bVar1) {
          memcpy(auStack_109,pcVar11 + 0x10,0xa0);
        }
        uVar12 = *(undefined8 *)(pcVar11 + 0xb0);
        memcpy(auStack_1d0,pcVar11 + 0xd0,0xb0);
        lVar16 = lVar15;
        while( true ) {
          if (cVar2 == '\0') {
            if (param_1[lVar16 + 0x300] != '\0') {
              memcpy(param_1 + lVar16 + 0x490,param_1 + lVar16 + 0x310,0xa0);
              param_1[lVar16 + 0x480] = '\x01';
            }
          }
          else if (param_1[lVar16 + 0x300] == '\0') {
            param_1[lVar16 + 0x480] = '\0';
          }
          else {
            memcpy(param_1 + lVar16 + 0x490,param_1 + lVar16 + 0x310,0x98);
          }
          *(undefined8 *)(param_1 + lVar16 + 0x530) = *(undefined8 *)(param_1 + lVar16 + 0x3b0);
          memcpy(param_1 + lVar16 + 0x540,param_1 + lVar16 + 0x3c0,0xc0);
          if (lVar16 == -0x300) {
            pcVar13 = param_1;
            goto LAB_01f99790;
          }
          uVar6 = *(undefined8 *)(*param_3 + 0x198);
          fVar19 = (float)uVar6;
          fVar20 = (float)((ulong)uVar6 >> 0x20);
          uVar6 = *(undefined8 *)(*param_3 + 400);
          fVar17 = (float)uVar6;
          fVar18 = (float)((ulong)uVar6 >> 0x20);
          fVar21 = fVar17 - (float)uVar5;
          fVar23 = fVar18 - fVar22;
          fVar24 = fVar19 - (float)uVar10;
          fVar26 = fVar20 - fVar25;
          fVar21 = fVar21 * fVar21;
          fVar23 = fVar23 * fVar23;
          fVar24 = fVar24 * fVar24;
          fVar26 = fVar26 * fVar26;
          auVar8._4_4_ = fVar23;
          auVar8._0_4_ = fVar21;
          auVar8._8_4_ = fVar24;
          auVar8._12_4_ = fVar26;
          auVar9._4_4_ = fVar23;
          auVar9._0_4_ = fVar21;
          auVar9._8_4_ = fVar24;
          auVar9._12_4_ = fVar26;
          auVar28 = NEON_ext(auVar8,auVar9,8,1);
          fVar17 = fVar17 - *(float *)(param_1 + lVar16 + 0x240);
          fVar18 = fVar18 - *(float *)(param_1 + lVar16 + 0x244);
          fVar19 = fVar19 - *(float *)(param_1 + lVar16 + 0x248);
          fVar20 = fVar20 - *(float *)(param_1 + lVar16 + 0x24c);
          fVar17 = fVar17 * fVar17;
          fVar18 = fVar18 * fVar18;
          fVar19 = fVar19 * fVar19;
          fVar20 = fVar20 * fVar20;
          auVar3._4_4_ = fVar18;
          auVar3._0_4_ = fVar17;
          auVar3._8_4_ = fVar19;
          auVar3._12_4_ = fVar20;
          auVar4._4_4_ = fVar18;
          auVar4._0_4_ = fVar17;
          auVar4._8_4_ = fVar19;
          auVar4._12_4_ = fVar20;
          auVar29 = NEON_ext(auVar3,auVar4,8,1);
          if (SQRT(auVar29._0_4_ + fVar17 + auVar29._4_4_ + fVar18) <=
              SQRT(auVar28._0_4_ + fVar21 + auVar28._4_4_ + fVar23)) break;
          cVar2 = param_1[lVar16 + 0x300];
          lVar16 = lVar16 + -0x180;
        }
        pcVar13 = param_1 + lVar16 + 0x300;
LAB_01f99790:
        if (*pcVar13 == '\0') {
          if (!bVar1) {
            memcpy(pcVar13 + 0x10,auStack_109,0xa0);
            *pcVar13 = '\x01';
          }
        }
        else if (bVar1) {
          *pcVar13 = '\0';
        }
        else {
          memcpy(pcVar13 + 0x10,auStack_109,0x98);
        }
        *(undefined8 *)(pcVar13 + 0xb0) = uVar12;
        *(undefined8 *)(pcVar13 + 200) = uVar10;
        *(undefined8 *)(pcVar13 + 0xc0) = uVar5;
        memcpy(pcVar13 + 0xd0,auStack_1d0,0xb0);
      }
      lVar15 = lVar15 + 0x180;
      pcVar13 = pcVar11 + 0x180;
      pcVar14 = pcVar11;
    } while (pcVar11 + 0x180 != param_2);
  }
  return;
}


