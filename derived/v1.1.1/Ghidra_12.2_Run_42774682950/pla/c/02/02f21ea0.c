/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f21ea0; name: FUN_02f21ea0
 */


void FUN_02f21ea0(long *param_1,float *param_2,long *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  char cVar9;
  ushort uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  float *pfVar16;
  float *pfVar17;
  uint uVar18;
  ulong uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auStack_98 [8];
  undefined1 auStack_88 [8];
  
  bVar3 = *(byte *)(param_1 + 1);
  uVar10 = *(ushort *)((long)param_1 + 0x12);
  uVar19 = (ulong)uVar10;
  uVar18 = (uint)uVar10;
  if (*(char *)((long)param_2 + 0xb) != '\0') {
    *(undefined1 *)((long)param_2 + 0xb) = 0;
    if (*(char *)(param_2 + 3) == '\0') {
      if ((0.1 < *param_2) || (0.1 < param_2[1])) {
        cVar9 = '\0';
        *(undefined1 *)((long)param_2 + 10) = 0;
      }
      else {
        cVar9 = '\x01';
      }
      if (cVar9 != *(char *)((long)param_2 + 0xd)) {
        *(undefined1 *)((long)param_2 + 0xe) = 0;
      }
      *(char *)((long)param_2 + 0xd) = cVar9;
      uVar4 = DAT_042ab26c;
      if (cVar9 == '\0') {
        uVar4 = 0;
      }
      *(ushort *)(param_2 + 2) = uVar4;
      cVar9 = *(char *)((long)param_2 + 0xd);
      goto joined_r0x02f224ac;
    }
    fVar23 = param_2[1];
    *(undefined1 *)(param_2 + 3) = 0;
    *param_2 = fVar23;
    *(ushort *)(param_2 + 2) = DAT_042ab26c;
    if (0.1 < fVar23) {
      *(undefined1 *)((long)param_2 + 10) = 0;
    }
    if (fVar23 <= 0.1 != (bool)*(char *)((long)param_2 + 0xd)) {
      *(undefined1 *)((long)param_2 + 0xe) = 0;
    }
    *(bool *)((long)param_2 + 0xd) = fVar23 <= 0.1;
    if (0.1 < fVar23) {
      fVar23 = 100.0 - fVar23;
      if (30.0 <= fVar23) {
        uVar8 = (uint)(fVar23 * -1042939.94 + 1.1696472e+09);
        fVar23 = (float)(uVar8 & 0x7fffff | 0x3f800000);
        fVar23 = (float)(uVar8 & 0xff800000) * 16.797443 *
                 (fVar23 * (fVar23 * 0.32518977 + 0.020805772) + 0.65304345);
      }
      else {
        fVar23 = fVar23 * -433.33334 + 20000.0;
      }
      fVar24 = (float)NEON_ucvtf(DAT_042ab258);
      fVar22 = fVar24 * 0.45;
      if (fVar23 <= fVar24 * 0.45) {
        fVar22 = fVar23;
      }
      fVar23 = tanf((fVar22 * 3.1415927) / fVar24);
      fVar20 = fVar23 * fVar23 + 1.0;
      fVar22 = 1.0 / (fVar20 + fVar23 * 1.4142135);
      fVar24 = fVar22 * -2.0;
      FUN_02e09ab0(fVar22,fVar24,fVar22,fVar24 - fVar24 * fVar23 * fVar23,
                   fVar22 * (fVar20 - fVar23 * 1.4142135),param_3);
      cVar9 = *(char *)((long)param_2 + 0xd);
      goto joined_r0x02f224ac;
    }
  }
  cVar9 = *(char *)((long)param_2 + 0xd);
joined_r0x02f224ac:
  if (cVar9 == '\0') {
    uVar10 = *(ushort *)(param_2 + 2);
    if (uVar10 < DAT_042ab26c) {
      if (uVar18 != 0) {
        fVar23 = *param_2;
        fVar22 = param_2[1];
        uVar8 = 0;
        do {
          uVar2 = DAT_042ab264;
          if (uVar18 - uVar8 <= DAT_042ab264) {
            uVar2 = uVar18 - uVar8;
          }
          if (uVar10 < DAT_042ab26c) {
            fVar20 = (100.0 - fVar23) -
                     ((fVar22 - fVar23) * (float)(ushort)(uVar10 + 1)) / (float)DAT_042ab26c;
            uVar7 = (uint)(fVar20 * -1042939.94 + 1.1696472e+09);
            *(ushort *)(param_2 + 2) = uVar10 + 1;
            fVar24 = (float)(uVar7 & 0x7fffff | 0x3f800000);
            fVar24 = (float)(uVar7 & 0xff800000) * 16.797443 *
                     (fVar24 * (fVar24 * 0.32518977 + 0.020805772) + 0.65304345);
            if (fVar20 < 30.0) {
              fVar24 = fVar20 * -433.33334 + 20000.0;
            }
            fVar21 = (float)NEON_ucvtf(DAT_042ab258);
            fVar20 = fVar21 * 0.45;
            if (fVar24 <= fVar21 * 0.45) {
              fVar20 = fVar24;
            }
            fVar24 = tanf((fVar20 * 3.1415927) / fVar21);
            fVar25 = fVar24 * fVar24 + 1.0;
            fVar20 = 1.0 / (fVar25 + fVar24 * 1.4142135);
            fVar21 = fVar20 * -2.0;
            FUN_02e09ab0(fVar20,fVar21,fVar20,fVar21 - fVar21 * fVar24 * fVar24,
                         fVar20 * (fVar25 - fVar24 * 1.4142135),param_3);
          }
          FUN_02e09c70(param_3,*param_1 + (ulong)uVar8 * 4,uVar2,(short)param_1[2],auStack_88);
          uVar10 = *(ushort *)(param_2 + 2);
          uVar8 = uVar2 + uVar8;
        } while (uVar8 < uVar18);
      }
      if ((DAT_042ab26c <= uVar10) && (*param_2 = param_2[1], param_2[1] <= 0.1)) {
        *(undefined1 *)((long)param_2 + 10) = 4;
      }
    }
    else {
      FUN_02e09c70(param_3,*param_1,uVar19,(short)param_1[2],auStack_98);
      uVar18 = (int)*(char *)((long)param_2 + 10) - 1;
      if ((0 < *(char *)((long)param_2 + 10)) &&
         (*(char *)((long)param_2 + 10) = (char)uVar18, (uVar18 & 0xff) == 0)) {
        if (*(char *)((long)param_2 + 0xd) != '\x01') {
          *(undefined1 *)((long)param_2 + 0xe) = 0;
        }
        *(undefined1 *)((long)param_2 + 0xd) = 1;
      }
    }
  }
  else if (1 < uVar10) {
    uVar8 = (uint)bVar3;
    if (*(char *)((long)param_2 + 0xe) == '\0') {
      *(undefined1 *)((long)param_2 + 0xe) = 1;
      if (uVar8 == 0) {
        return;
      }
      uVar14 = 0;
      do {
        uVar2 = *(uint *)((long)param_3 + 0x1c);
        lVar15 = *param_1;
        uVar4 = *(ushort *)(param_1 + 2);
        iVar5 = (int)(uVar14 >> 2);
        uVar7 = (uint)uVar14;
        if (uVar2 - 1 == uVar7 && (uVar2 & 1) != 0) {
          pfVar16 = (float *)(*param_3 +
                             (ulong)((iVar5 + (uint)(1 < (uVar7 & 3) && uVar2 != 1)) * 0x10) * 4);
          pfVar17 = pfVar16 + 2;
        }
        else {
          pfVar16 = (float *)(*param_3 + (ulong)(uint)(iVar5 << 4) * 4 + (ulong)(uVar7 & 3) * 4);
          pfVar17 = pfVar16 + 8;
        }
        fVar23 = *pfVar17 - *pfVar16;
        fVar22 = fVar23 * (1.0 / (float)uVar10);
        if (uVar19 - 1 < 3) {
          lVar11 = 0;
        }
        else {
          lVar11 = 0;
          pfVar16 = (float *)(lVar15 + uVar4 * uVar14 * 4 + 8);
          do {
            fVar24 = (fVar23 - fVar22) - fVar22;
            pfVar16[-2] = pfVar16[-2] + (fVar23 - fVar22);
            fVar23 = fVar24 - fVar22;
            pfVar16[-1] = pfVar16[-1] + fVar24;
            *pfVar16 = *pfVar16 + fVar23;
            fVar23 = fVar23 - fVar22;
            lVar11 = lVar11 + 4;
            pfVar16[1] = pfVar16[1] + fVar23;
            pfVar16 = pfVar16 + 4;
          } while (uVar19 - (uVar19 & 3) != lVar11);
        }
        if ((uVar10 & 3) != 0) {
          pfVar16 = (float *)(lVar15 + uVar4 * uVar14 * 4 + lVar11 * 4);
          uVar14 = uVar19 & 3;
          do {
            fVar23 = fVar23 - fVar22;
            *pfVar16 = *pfVar16 + fVar23;
            uVar14 = uVar14 - 1;
            pfVar16 = pfVar16 + 1;
          } while (uVar14 != 0);
        }
        uVar2 = uVar7 + 1 & 0xffff;
        uVar14 = (ulong)uVar2;
      } while (uVar2 < uVar8);
    }
    if (uVar8 != 0) {
      lVar13 = *param_1;
      lVar11 = (ulong)(uVar18 - 1) * 4;
      lVar12 = (ulong)(uVar18 - 2) * 4;
      bVar6 = *(int *)((long)param_3 + 0x1c) != 1;
      *(undefined4 *)*param_3 = *(undefined4 *)(lVar13 + lVar11);
      lVar15 = 4;
      if (bVar6) {
        lVar15 = 0x10;
      }
      *(undefined4 *)(*param_3 + lVar15) = *(undefined4 *)(lVar13 + lVar12);
      lVar15 = 8;
      if (bVar6) {
        lVar15 = 0x20;
      }
      *(undefined4 *)(*param_3 + lVar15) = *(undefined4 *)(lVar13 + lVar11);
      lVar15 = 0xc;
      if (bVar6) {
        lVar15 = 0x30;
      }
      *(undefined4 *)(*param_3 + lVar15) = *(undefined4 *)(lVar13 + lVar12);
      if (1 < uVar8) {
        lVar15 = *param_1 + (ulong)*(ushort *)(param_1 + 2) * 4;
        *(undefined4 *)(*param_3 + 4) = *(undefined4 *)(lVar15 + lVar11);
        *(undefined4 *)(*param_3 + 0x14) = *(undefined4 *)(lVar15 + lVar12);
        *(undefined4 *)(*param_3 + 0x24) = *(undefined4 *)(lVar15 + lVar11);
        *(undefined4 *)(*param_3 + 0x34) = *(undefined4 *)(lVar15 + lVar12);
        if (2 < uVar8) {
          uVar19 = 2;
          do {
            uVar2 = *(uint *)((long)param_3 + 0x1c);
            uVar7 = (uint)uVar19;
            lVar15 = *param_1 + uVar19 * *(ushort *)(param_1 + 2) * 4;
            puVar1 = (undefined4 *)(lVar15 + (ulong)(uVar18 - 2) * 4);
            uVar14 = (ulong)(uVar7 & 3);
            if (uVar2 - 1 == uVar7 && (uVar2 & 1) != 0) {
              uVar14 = (ulong)(((uVar7 >> 2) + (uint)(1 < (uVar7 & 3) && uVar2 != 1)) * 0x10);
              lVar12 = uVar14 * 4;
              *(undefined4 *)(*param_3 + lVar12) = *(undefined4 *)(lVar15 + lVar11);
              *(undefined4 *)(*param_3 + lVar12 + 4) = *puVar1;
              *(undefined4 *)(*param_3 + lVar12 + 8) = *(undefined4 *)(lVar15 + lVar11);
              lVar15 = *param_3 + 0xc;
            }
            else {
              lVar13 = uVar14 * 4;
              lVar12 = (ulong)((uVar7 >> 2) << 4) * 4;
              *(undefined4 *)(*param_3 + lVar12 + lVar13) = *(undefined4 *)(lVar15 + lVar11);
              *(undefined4 *)(*param_3 + lVar12 + lVar13 + 0x10) = *puVar1;
              *(undefined4 *)(*param_3 + lVar12 + lVar13 + 0x20) = *(undefined4 *)(lVar15 + lVar11);
              lVar15 = *param_3 + lVar12 + 0x30;
            }
            uVar2 = uVar7 + 1 & 0xffff;
            uVar19 = (ulong)uVar2;
            *(undefined4 *)(lVar15 + uVar14 * 4) = *puVar1;
          } while (uVar2 < uVar8);
        }
      }
    }
  }
  return;
}


