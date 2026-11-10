/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030de930; name: FUN_030de930
 */


void FUN_030de930(long param_1,float *param_2,float *param_3,char *param_4,undefined8 param_5,
                 undefined8 param_6,float *param_7,uint param_8,float *param_9,undefined8 param_10,
                 long param_11,float *param_12)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  char cVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  char *pcVar10;
  short sVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  ushort *puVar16;
  ulong uVar17;
  float *pfVar18;
  int *piVar19;
  long lVar20;
  ulong uVar21;
  int *piVar22;
  ulong uVar23;
  long lVar24;
  int iVar25;
  ulong uVar26;
  long lVar27;
  long lVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  int local_250;
  char local_184 [4];
  float local_180;
  undefined1 local_17c [4];
  int local_178 [6];
  char local_160 [8];
  char local_158 [8];
  int local_150 [6];
  float afStack_138 [6];
  float local_120 [6];
  float local_108 [38];
  
  uVar26 = (ulong)param_8;
  iVar12 = 0;
  if ((int)param_8 < 1) {
    iVar7 = 1;
  }
  else {
    puVar16 = (ushort *)(param_11 + 0xea);
    piVar19 = local_178;
    piVar22 = local_150;
    uVar17 = uVar26;
    pcVar10 = param_4;
    pfVar6 = param_3;
    pfVar9 = param_9;
    pfVar18 = param_2;
    iVar8 = 1;
    do {
      *piVar22 = (uint)*puVar16 << 0x10;
      cVar4 = *pcVar10;
      iVar7 = iVar8;
      if (cVar4 != '\0') {
        *piVar19 = iVar8;
        if (cVar4 == '\x03') {
          iVar3 = iVar8;
          if (*pfVar18 <= 0.0) {
            iVar3 = 0;
          }
          iVar25 = iVar8 * 2;
          iVar7 = iVar8 * 3;
          if (0.0 <= *pfVar6) {
            iVar25 = 0;
          }
          iVar12 = iVar3 + iVar12 + iVar25;
        }
        else {
          iVar7 = iVar8 << 1;
          if (*pfVar9 * *pfVar18 <= 0.0) {
            iVar8 = 0;
          }
          iVar12 = iVar8 + iVar12;
        }
      }
      uVar17 = uVar17 - 1;
      pfVar18 = pfVar18 + 1;
      pfVar9 = pfVar9 + 1;
      pfVar6 = pfVar6 + 1;
      piVar19 = piVar19 + 1;
      pcVar10 = pcVar10 + 1;
      piVar22 = piVar22 + 1;
      puVar16 = puVar16 + 8;
      iVar8 = iVar7;
    } while (uVar17 != 0);
  }
  local_17c[0] = 1;
  local_250 = *(ushort *)(param_11 + 0xdc) - 1;
  if (*(ushort *)(param_11 + 0xdc) != 0) {
    iVar12 = local_250;
  }
  if (0 < iVar7) {
    lVar14 = (long)(int)param_8;
    iVar8 = 0;
    lVar27 = uVar26 - (uVar26 & 1);
    uVar17 = -(ulong)(param_8 >> 0x1f) & 0xfffffffc00000000 | uVar26 << 2;
    fVar32 = 1.8446726e+19;
    do {
      local_180 = 1.8446726e+19;
      iVar3 = 0;
      if (iVar7 != 0) {
        iVar3 = (iVar8 + iVar12) / iVar7;
      }
      iVar3 = (iVar8 + iVar12) - iVar3 * iVar7;
      FUN_030df320(iVar3,uVar26,local_178,param_4,local_160,local_17c,local_158);
      if (0 < (int)param_8) {
        lVar15 = 0;
        lVar28 = 0;
        uVar23 = 0;
        pfVar18 = (float *)(param_1 + 4);
        do {
          if (local_160[uVar23] == '\0') {
            memset(local_108 + uVar23 * lVar14,0,uVar26 << 2);
            if (uVar26 == 1) {
              fVar29 = 0.0;
              lVar24 = 0;
            }
            else {
              fVar29 = 0.0;
              lVar24 = 0;
              pfVar6 = pfVar18;
              pfVar9 = param_7 + 1;
              do {
                fVar31 = 0.0;
                if (local_160[lVar24] == '\0') {
                  fVar31 = pfVar6[-1] * pfVar9[-1];
                }
                fVar30 = 0.0;
                if (local_160[lVar24 + 1] == '\0') {
                  fVar30 = *pfVar6 * *pfVar9;
                }
                fVar29 = fVar29 + fVar31 + fVar30;
                lVar24 = lVar24 + 2;
                pfVar9 = pfVar9 + 2;
                pfVar6 = pfVar6 + 2;
              } while (lVar27 != lVar24);
            }
            if ((param_8 & 1) != 0) {
              fVar31 = 0.0;
              if (local_160[lVar24] == '\0') {
                fVar31 = *(float *)(param_1 + (lVar24 + lVar28) * 4) * param_7[lVar24];
              }
              fVar29 = fVar29 + fVar31;
            }
            local_108[lVar28 + (int)uVar23] = 1.0;
            local_120[uVar23] = param_2[uVar23] - fVar29;
            pfVar9 = afStack_138;
            pfVar6 = param_3;
          }
          else {
            fVar29 = 0.0;
            pcVar10 = local_160;
            pfVar9 = param_7;
            uVar13 = uVar26;
            lVar24 = lVar15;
            do {
              lVar20 = lVar24 >> 0x20;
              if (*pcVar10 == '\0') {
                local_108[lVar20] = 0.0;
                fVar31 = *(float *)(param_1 + lVar20 * 4) * *pfVar9;
              }
              else {
                fVar31 = 0.0;
                local_108[lVar20] = *(float *)(param_1 + lVar20 * 4);
              }
              fVar29 = fVar29 + fVar31;
              lVar24 = lVar24 + 0x100000000;
              uVar13 = uVar13 - 1;
              pfVar9 = pfVar9 + 1;
              pcVar10 = pcVar10 + 1;
            } while (uVar13 != 0);
            pfVar9 = local_120;
            pfVar6 = param_2;
            if (local_158[uVar23] != '\0') {
              pfVar6 = param_3;
            }
          }
          uVar13 = uVar23 + 1;
          lVar28 = lVar28 + lVar14;
          lVar15 = lVar15 + (uVar26 << 0x20);
          pfVar18 = (float *)((long)pfVar18 + uVar17);
          pfVar9[uVar23] = pfVar6[uVar23] - fVar29;
          uVar23 = uVar13;
        } while (uVar13 != uVar26);
      }
      FUN_030df130(uVar26,local_108,local_184);
      if (local_184[0] == '\0') {
        *param_12 = local_120[0];
        if (0 < (int)param_8) {
          lVar15 = 0;
          lVar28 = 0;
          fVar29 = 0.0;
          uVar23 = 0;
          pfVar18 = local_108 + 2;
          while( true ) {
            uVar13 = uVar23;
            uVar23 = uVar13 + 1;
            lVar28 = lVar28 + lVar14;
            lVar15 = lVar15 + -1;
            pfVar18 = (float *)((long)pfVar18 + uVar17);
            param_12[uVar13] = local_120[uVar13] - fVar29;
            if (uVar23 == uVar26) break;
            fVar29 = 0.0;
            if (uVar23 != 0) {
              uVar21 = uVar23 & 3;
              if (uVar13 < 3) {
                lVar24 = 0;
                fVar29 = 0.0;
              }
              else {
                fVar29 = 0.0;
                lVar24 = 0;
                pfVar9 = param_12 + 2;
                pfVar6 = pfVar18;
                do {
                  lVar24 = lVar24 + -4;
                  fVar29 = fVar29 + pfVar6[-2] * pfVar9[-2] + pfVar6[-1] * pfVar9[-1] +
                           *pfVar6 * *pfVar9 + pfVar6[1] * pfVar9[1];
                  pfVar9 = pfVar9 + 4;
                  pfVar6 = pfVar6 + 4;
                } while (lVar15 + uVar21 != lVar24);
                lVar24 = -lVar24;
              }
              if (uVar21 != 0) {
                pfVar9 = param_12 + lVar24;
                pfVar6 = local_108 + lVar24 + lVar28;
                do {
                  uVar21 = uVar21 - 1;
                  fVar29 = fVar29 + *pfVar6 * *pfVar9;
                  pfVar9 = pfVar9 + 1;
                  pfVar6 = pfVar6 + 1;
                } while (uVar21 != 0);
              }
            }
          }
          lVar24 = 0;
          uVar13 = 0;
          uVar23 = 1;
          pfVar18 = (float *)((long)param_12 + uVar17 + 8);
          lVar28 = lVar14;
          iVar25 = param_8 * param_8 + -1;
          lVar15 = lVar14;
          do {
            lVar15 = lVar15 + -1;
            lVar28 = lVar28 + -1;
            fVar29 = 0.0;
            if (1 < (ulong)(lVar14 - lVar28)) {
              uVar21 = uVar13 & 3;
              if (uVar13 - 1 < 3) {
                lVar20 = 1;
                fVar29 = 0.0;
              }
              else {
                fVar29 = 0.0;
                pfVar9 = local_108 + 2 + iVar25;
                lVar20 = 0;
                pfVar6 = pfVar18;
                do {
                  pfVar2 = pfVar9 + -1;
                  lVar20 = lVar20 + -4;
                  fVar31 = *pfVar9;
                  pfVar5 = pfVar9 + 1;
                  pfVar1 = pfVar9 + 2;
                  pfVar9 = pfVar9 + 4;
                  fVar29 = fVar29 + *pfVar2 * pfVar6[-2] + fVar31 * pfVar6[-1] + *pfVar5 * *pfVar6 +
                           *pfVar1 * pfVar6[1];
                  pfVar6 = pfVar6 + 4;
                } while (lVar24 + uVar21 != lVar20);
                lVar20 = 1 - lVar20;
              }
              if (uVar21 != 0) {
                pfVar9 = param_12 + lVar20 + lVar15;
                pfVar6 = local_108 + lVar20 + iVar25;
                do {
                  uVar21 = uVar21 - 1;
                  fVar29 = fVar29 + *pfVar6 * *pfVar9;
                  pfVar9 = pfVar9 + 1;
                  pfVar6 = pfVar6 + 1;
                } while (uVar21 != 0);
              }
            }
            uVar23 = uVar23 + 1;
            uVar13 = uVar13 + 1;
            lVar24 = lVar24 + -1;
            iVar25 = iVar25 + ~param_8;
            pfVar18 = pfVar18 + -1;
            param_12[lVar28] =
                 (param_12[lVar28] - fVar29) * local_108[(int)((int)lVar28 + (int)lVar28 * param_8)]
            ;
          } while (uVar23 != param_8 + 1);
          lVar28 = 0;
          if (uVar26 != 1) {
            lVar28 = 0;
            cVar4 = *param_4;
            pfVar18 = param_7 + 1;
            pfVar9 = param_12 + 1;
            while( true ) {
              if ((cVar4 != '\0') && (local_160[lVar28] == '\0')) {
                pfVar9[-1] = pfVar18[-1];
              }
              if ((param_4[lVar28 + 1] != '\0') && (local_160[lVar28 + 1] == '\0')) {
                *pfVar9 = *pfVar18;
              }
              lVar28 = lVar28 + 2;
              pfVar18 = pfVar18 + 2;
              pfVar9 = pfVar9 + 2;
              if (lVar27 == lVar28) break;
              cVar4 = param_4[lVar28];
            }
          }
          if ((((param_8 & 1) != 0) && (param_4[lVar28] != '\0')) && (local_160[lVar28] == '\0')) {
            param_12[lVar28] = param_7[lVar28];
          }
        }
        fVar29 = (float)FUN_030df3c0(uVar26,param_12,param_7,param_9,local_160,local_120,afStack_138
                                     ,param_4,&local_180,param_5,param_6,param_10,local_150,
                                     local_17c[0],local_158);
        if (fVar29 != 0.0) {
          sVar11 = (short)iVar3 + 1;
          goto LAB_030df0f0;
        }
        if ((iVar8 == 0) || (local_180 < fVar32)) {
          fVar29 = local_180;
          if (fVar32 <= local_180) {
            fVar29 = fVar32;
          }
          local_250 = iVar3 + 1;
          fVar32 = fVar29;
        }
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 != iVar7);
  }
  FUN_030df690(param_1,param_2,param_3,param_4,param_7,param_9,uVar26,param_12);
  sVar11 = (short)local_250;
LAB_030df0f0:
  *(short *)(param_11 + 0xdc) = sVar11;
  return;
}


