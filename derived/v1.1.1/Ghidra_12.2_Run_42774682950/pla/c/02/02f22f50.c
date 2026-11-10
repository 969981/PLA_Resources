/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f22f50; name: FUN_02f22f50
 */


void FUN_02f22f50(long *param_1,long *param_2,float *param_3,long *param_4)

{
  float *pfVar1;
  undefined4 *puVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  float *pfVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ushort uVar11;
  long lVar12;
  float *pfVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  long local_88;
  
  bVar3 = *(byte *)(param_1 + 1);
  uVar11 = *(ushort *)((long)param_1 + 0x12);
  uVar18 = (ulong)uVar11;
  uVar17 = (uint)uVar11;
  if (*(char *)((long)param_3 + 0xb) != '\0') {
    *(undefined1 *)((long)param_3 + 0xb) = 0;
    if (*(char *)(param_3 + 3) == '\0') {
      if ((0.1 < *param_3) || (0.1 < param_3[1])) {
        cVar7 = '\0';
        *(undefined1 *)((long)param_3 + 10) = 0;
      }
      else {
        cVar7 = '\x01';
      }
      if (cVar7 != *(char *)((long)param_3 + 0xd)) {
        *(undefined1 *)((long)param_3 + 0xe) = 0;
      }
      *(char *)((long)param_3 + 0xd) = cVar7;
      uVar4 = DAT_042ab26c;
      if (cVar7 == '\0') {
        uVar4 = 0;
      }
      *(ushort *)(param_3 + 2) = uVar4;
      cVar7 = *(char *)((long)param_3 + 0xd);
      goto joined_r0x02f23740;
    }
    fVar22 = param_3[1];
    *(undefined1 *)(param_3 + 3) = 0;
    *param_3 = fVar22;
    *(ushort *)(param_3 + 2) = DAT_042ab26c;
    if (0.1 < fVar22) {
      *(undefined1 *)((long)param_3 + 10) = 0;
    }
    if (fVar22 <= 0.1 != (bool)*(char *)((long)param_3 + 0xd)) {
      *(undefined1 *)((long)param_3 + 0xe) = 0;
    }
    *(bool *)((long)param_3 + 0xd) = fVar22 <= 0.1;
    if (0.1 < fVar22) {
      fVar22 = 100.0 - fVar22;
      if (30.0 <= fVar22) {
        uVar10 = (uint)(fVar22 * -1042939.94 + 1.1696472e+09);
        fVar22 = (float)(uVar10 & 0x7fffff | 0x3f800000);
        fVar22 = (float)(uVar10 & 0xff800000) * 16.797443 *
                 (fVar22 * (fVar22 * 0.32518977 + 0.020805772) + 0.65304345);
      }
      else {
        fVar22 = fVar22 * -433.33334 + 20000.0;
      }
      fVar24 = (float)NEON_ucvtf(DAT_042ab258);
      fVar21 = fVar24 * 0.45;
      if (fVar22 <= fVar24 * 0.45) {
        fVar21 = fVar22;
      }
      fVar22 = tanf((fVar21 * 3.1415927) / fVar24);
      fVar23 = fVar22 * fVar22 + 1.0;
      fVar21 = 1.0 / (fVar23 + fVar22 * 1.4142135);
      fVar24 = fVar21 * -2.0;
      FUN_02e09ab0(fVar21,fVar24,fVar21,fVar24 - fVar24 * fVar22 * fVar22,
                   fVar21 * (fVar23 - fVar22 * 1.4142135),param_4);
      cVar7 = *(char *)((long)param_3 + 0xd);
      goto joined_r0x02f23740;
    }
  }
  cVar7 = *(char *)((long)param_3 + 0xd);
joined_r0x02f23740:
  if (cVar7 == '\0') {
    uVar11 = *(ushort *)(param_3 + 2);
    if (uVar11 < DAT_042ab26c) {
      if (uVar17 != 0) {
        fVar22 = *param_3;
        fVar21 = param_3[1];
        uVar18 = 0;
        do {
          uVar9 = uVar17 - (int)uVar18;
          uVar10 = DAT_042ab264;
          if (uVar9 <= DAT_042ab264) {
            uVar10 = uVar9;
          }
          if (uVar11 < DAT_042ab26c) {
            fVar23 = (100.0 - fVar22) -
                     ((fVar21 - fVar22) * (float)(ushort)(uVar11 + 1)) / (float)DAT_042ab26c;
            uVar9 = (uint)(fVar23 * -1042939.94 + 1.1696472e+09);
            *(ushort *)(param_3 + 2) = uVar11 + 1;
            fVar24 = (float)(uVar9 & 0x7fffff | 0x3f800000);
            fVar24 = (float)(uVar9 & 0xff800000) * 16.797443 *
                     (fVar24 * (fVar24 * 0.32518977 + 0.020805772) + 0.65304345);
            if (fVar23 < 30.0) {
              fVar24 = fVar23 * -433.33334 + 20000.0;
            }
            fVar20 = (float)NEON_ucvtf(DAT_042ab258);
            fVar23 = fVar20 * 0.45;
            if (fVar24 <= fVar20 * 0.45) {
              fVar23 = fVar24;
            }
            fVar24 = tanf((fVar23 * 3.1415927) / fVar20);
            fVar25 = fVar24 * fVar24 + 1.0;
            fVar23 = 1.0 / (fVar25 + fVar24 * 1.4142135);
            fVar20 = fVar23 * -2.0;
            FUN_02e09ab0(fVar23,fVar20,fVar23,fVar20 - fVar20 * fVar24 * fVar24,
                         fVar23 * (fVar25 - fVar24 * 1.4142135),param_4);
          }
          local_88 = *param_2 + uVar18 * 4;
          FUN_02f23d9c(param_4,*param_1 + uVar18 * 4,uVar10,(short)param_1[2],&local_88);
          uVar11 = *(ushort *)(param_3 + 2);
          uVar10 = uVar10 + (int)uVar18;
          uVar18 = (ulong)uVar10;
        } while (uVar10 < uVar17);
      }
      if ((DAT_042ab26c <= uVar11) && (*param_3 = param_3[1], param_3[1] <= 0.1)) {
        *(undefined1 *)((long)param_3 + 10) = 4;
      }
    }
    else {
      local_88 = *param_2;
      FUN_02f23d9c(param_4,*param_1,uVar18,(short)param_1[2],&local_88);
      uVar17 = (int)*(char *)((long)param_3 + 10) - 1;
      if ((0 < *(char *)((long)param_3 + 10)) &&
         (*(char *)((long)param_3 + 10) = (char)uVar17, (uVar17 & 0xff) == 0)) {
        if (*(char *)((long)param_3 + 0xd) != '\x01') {
          *(undefined1 *)((long)param_3 + 0xe) = 0;
        }
        *(undefined1 *)((long)param_3 + 0xd) = 1;
      }
    }
  }
  else if (1 < uVar11) {
    uVar10 = (uint)bVar3;
    if (*(char *)((long)param_3 + 0xe) == '\0') {
      *(undefined1 *)((long)param_3 + 0xe) = 1;
      if (uVar10 == 0) {
        return;
      }
      uVar19 = 0;
      do {
        uVar9 = *(uint *)((long)param_4 + 0x1c);
        lVar12 = *param_1;
        uVar4 = *(ushort *)(param_1 + 2);
        lVar14 = *param_2;
        uVar5 = *(ushort *)(param_2 + 2);
        uVar8 = (uint)uVar19;
        if (uVar9 - 1 == uVar8 && (uVar9 & 1) != 0) {
          pfVar13 = (float *)(*param_4 +
                             (ulong)(((uVar8 >> 2) + (uint)(1 < (uVar8 & 3) && uVar9 != 1)) * 0x10)
                             * 4);
          pfVar6 = pfVar13 + 2;
        }
        else {
          pfVar13 = (float *)(*param_4 + (ulong)((uVar8 >> 2) << 4) * 4 + (ulong)(uVar8 & 3) * 4);
          pfVar6 = pfVar13 + 8;
        }
        fVar22 = *pfVar6 - *pfVar13;
        fVar21 = fVar22 * (1.0 / (float)uVar11);
        if (uVar18 - 1 < 3) {
          lVar15 = 0;
        }
        else {
          lVar15 = 0;
          pfVar13 = (float *)(lVar12 + uVar4 * uVar19 * 4 + 8);
          pfVar6 = (float *)(lVar14 + uVar5 * uVar19 * 4 + 8);
          do {
            pfVar6[-2] = pfVar13[-2] - fVar22;
            fVar24 = fVar22 + fVar21 + fVar21;
            pfVar6[-1] = pfVar13[-1] - (fVar22 + fVar21);
            fVar23 = fVar24 + fVar21;
            *pfVar6 = *pfVar13 - fVar24;
            pfVar1 = pfVar13 + 1;
            pfVar13 = pfVar13 + 4;
            fVar22 = fVar23 + fVar21;
            lVar15 = lVar15 + 4;
            pfVar6[1] = *pfVar1 - fVar23;
            pfVar6 = pfVar6 + 4;
          } while (uVar18 - (uVar18 & 3) != lVar15);
        }
        if ((uVar11 & 3) != 0) {
          pfVar13 = (float *)(lVar12 + lVar15 * 4 + uVar4 * uVar19 * 4);
          pfVar6 = (float *)(lVar14 + lVar15 * 4 + uVar5 * uVar19 * 4);
          uVar19 = uVar18 & 3;
          do {
            fVar24 = *pfVar13 - fVar22;
            fVar22 = fVar22 + fVar21;
            uVar19 = uVar19 - 1;
            *pfVar6 = fVar24;
            pfVar13 = pfVar13 + 1;
            pfVar6 = pfVar6 + 1;
          } while (uVar19 != 0);
        }
        uVar9 = uVar8 + 1 & 0xffff;
        uVar19 = (ulong)uVar9;
      } while (uVar9 < uVar10);
    }
    else {
      if (uVar10 == 0) {
        return;
      }
      uVar19 = 0;
      do {
        lVar12 = (uVar19 & 0xffff) * 4;
        memcpy((void *)(*param_2 + lVar12 * (ulong)*(ushort *)(param_2 + 2)),
               (void *)(*param_1 + lVar12 * (ulong)*(ushort *)(param_1 + 2)),uVar18 << 2);
        uVar9 = (int)uVar19 + 1;
        uVar19 = (ulong)uVar9;
      } while ((uVar9 & 0xffff) < uVar10);
    }
    uVar18 = 0;
    lVar12 = (ulong)(uVar17 - 1) * 4;
    do {
      uVar9 = *(uint *)((long)param_4 + 0x1c);
      uVar8 = (uint)uVar18;
      lVar14 = *param_1 + uVar18 * *(ushort *)(param_1 + 2) * 4;
      puVar2 = (undefined4 *)(lVar14 + (ulong)(uVar17 - 2) * 4);
      uVar19 = (ulong)(uVar8 & 3);
      if (uVar9 - 1 == uVar8 && (uVar9 & 1) != 0) {
        uVar19 = (ulong)(((uVar8 >> 2) + (uint)(1 < (uVar8 & 3) && uVar9 != 1)) * 0x10);
        lVar15 = uVar19 * 4;
        *(undefined4 *)(*param_4 + lVar15) = *(undefined4 *)(lVar14 + lVar12);
        *(undefined4 *)(*param_4 + lVar15 + 4) = *puVar2;
        *(undefined4 *)(*param_4 + lVar15 + 8) = *(undefined4 *)(lVar14 + lVar12);
        lVar14 = *param_4 + 0xc;
      }
      else {
        lVar16 = uVar19 * 4;
        lVar15 = (ulong)((uVar8 >> 2) << 4) * 4;
        *(undefined4 *)(*param_4 + lVar15 + lVar16) = *(undefined4 *)(lVar14 + lVar12);
        *(undefined4 *)(*param_4 + lVar15 + lVar16 + 0x10) = *puVar2;
        *(undefined4 *)(*param_4 + lVar15 + lVar16 + 0x20) = *(undefined4 *)(lVar14 + lVar12);
        lVar14 = *param_4 + lVar15 + 0x30;
      }
      uVar9 = uVar8 + 1 & 0xffff;
      uVar18 = (ulong)uVar9;
      *(undefined4 *)(lVar14 + uVar19 * 4) = *puVar2;
    } while (uVar9 < uVar10);
  }
  return;
}


