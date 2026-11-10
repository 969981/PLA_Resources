/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f226c0; name: FUN_02f226c0
 */


void FUN_02f226c0(long *param_1,long *param_2,float *param_3,long *param_4)

{
  float *pfVar1;
  undefined4 *puVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  bool bVar7;
  float *pfVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  char cVar12;
  ushort uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  float *pfVar18;
  ulong uVar19;
  ulong uVar20;
  uint uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  long local_88;
  
  bVar3 = *(byte *)(param_1 + 1);
  uVar4 = *(ushort *)((long)param_1 + 0x12);
  uVar19 = (ulong)uVar4;
  if (*(char *)((long)param_3 + 0xb) != '\0') {
    *(undefined1 *)((long)param_3 + 0xb) = 0;
    if (*(char *)(param_3 + 3) == '\0') {
      if ((0.1 < *param_3) || (0.1 < param_3[1])) {
        cVar12 = '\0';
        *(undefined1 *)((long)param_3 + 10) = 0;
      }
      else {
        cVar12 = '\x01';
      }
      if (cVar12 != *(char *)((long)param_3 + 0xd)) {
        *(undefined1 *)((long)param_3 + 0xe) = 0;
      }
      *(char *)((long)param_3 + 0xd) = cVar12;
      uVar13 = DAT_042ab26c;
      if (cVar12 == '\0') {
        uVar13 = 0;
      }
      *(ushort *)(param_3 + 2) = uVar13;
      cVar12 = *(char *)((long)param_3 + 0xd);
      goto joined_r0x02f22d08;
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
      if (30.0 <= fVar22) {
        uVar10 = (uint)(fVar22 * -1042939.94 + 1.1696472e+09);
        fVar22 = (float)(uVar10 & 0x7fffff | 0x3f800000);
        fVar22 = (float)(uVar10 & 0xff800000) * 16.797443 *
                 (fVar22 * (fVar22 * 0.32518977 + 0.020805772) + 0.65304345);
      }
      else {
        fVar22 = fVar22 * -433.33334 + 20000.0;
      }
      fVar23 = (float)NEON_ucvtf(DAT_042ab258);
      fVar26 = fVar23 * 0.45;
      if (fVar22 <= fVar23 * 0.45) {
        fVar26 = fVar22;
      }
      fVar22 = tanf((fVar26 * 3.1415927) / fVar23);
      fVar22 = 1.0 / fVar22;
      fVar23 = fVar22 * fVar22;
      fVar26 = 1.0 / (fVar22 * 1.4142135 + 1.0 + fVar23);
      FUN_02e09ab0(fVar26,fVar26 + fVar26,fVar26,fVar26 * (2.0 - fVar23 * 2.0),
                   fVar26 * ((1.0 - fVar22 * 1.4142135) + fVar23),param_4);
      cVar12 = *(char *)((long)param_3 + 0xd);
      goto joined_r0x02f22d08;
    }
  }
  cVar12 = *(char *)((long)param_3 + 0xd);
joined_r0x02f22d08:
  if (cVar12 == '\0') {
    uVar13 = *(ushort *)(param_3 + 2);
    if (uVar13 < DAT_042ab26c) {
      if (uVar4 != 0) {
        fVar26 = *param_3;
        fVar22 = param_3[1];
        uVar10 = 0;
        do {
          uVar9 = uVar4 - uVar10;
          uVar21 = DAT_042ab264;
          if (uVar9 <= DAT_042ab264) {
            uVar21 = uVar9;
          }
          if (uVar13 < DAT_042ab26c) {
            fVar23 = ((fVar22 - fVar26) * (float)(ushort)(uVar13 + 1)) / (float)DAT_042ab26c +
                     fVar26;
            *(ushort *)(param_3 + 2) = uVar13 + 1;
            if (30.0 <= fVar23) {
              uVar9 = (uint)(fVar23 * -1042939.94 + 1.1696472e+09);
              fVar23 = (float)(uVar9 & 0x7fffff | 0x3f800000);
              fVar23 = (float)(uVar9 & 0xff800000) * 16.797443 *
                       (fVar23 * (fVar23 * 0.32518977 + 0.020805772) + 0.65304345);
            }
            else {
              fVar23 = fVar23 * -433.33334 + 20000.0;
            }
            fVar25 = (float)NEON_ucvtf(DAT_042ab258);
            fVar24 = fVar25 * 0.45;
            if (fVar23 <= fVar25 * 0.45) {
              fVar24 = fVar23;
            }
            fVar23 = tanf((fVar24 * 3.1415927) / fVar25);
            fVar23 = 1.0 / fVar23;
            fVar25 = fVar23 * fVar23;
            fVar24 = 1.0 / (fVar23 * 1.4142135 + 1.0 + fVar25);
            FUN_02e09ab0(fVar24,fVar24 + fVar24,fVar24,fVar24 * (2.0 - fVar25 * 2.0),
                         fVar24 * ((1.0 - fVar23 * 1.4142135) + fVar25),param_4);
          }
          local_88 = *param_2 + (ulong)uVar10 * 4;
          FUN_02f23d9c(param_4,*param_1 + (ulong)uVar10 * 4,uVar21,(short)param_1[2],&local_88);
          uVar13 = *(ushort *)(param_3 + 2);
          uVar10 = uVar21 + uVar10;
        } while (uVar10 < uVar4);
      }
      if ((DAT_042ab26c <= uVar13) && (*param_3 = param_3[1], param_3[1] <= 0.1)) {
        *(undefined1 *)((long)param_3 + 10) = 4;
      }
    }
    else {
      local_88 = *param_2;
      FUN_02f23d9c(param_4,*param_1,uVar19,(short)param_1[2],&local_88);
      uVar10 = (int)*(char *)((long)param_3 + 10) - 1;
      if ((0 < *(char *)((long)param_3 + 10)) &&
         (*(char *)((long)param_3 + 10) = (char)uVar10, (uVar10 & 0xff) == 0)) {
        if (*(char *)((long)param_3 + 0xd) != '\x01') {
          *(undefined1 *)((long)param_3 + 0xe) = 0;
        }
        *(undefined1 *)((long)param_3 + 0xd) = 1;
      }
    }
  }
  else {
    uVar10 = (uint)uVar4;
    if (1 < uVar10) {
      uVar21 = (uint)bVar3;
      if (*(char *)((long)param_3 + 0xe) == '\0') {
        *(undefined1 *)((long)param_3 + 0xe) = 1;
        if (uVar21 == 0) {
          return;
        }
        uVar20 = 0;
        do {
          iVar6 = (int)(uVar20 >> 2);
          uVar11 = (uint)uVar20;
          uVar9 = *(uint *)((long)param_4 + 0x1c);
          lVar14 = *param_1;
          uVar13 = *(ushort *)(param_1 + 2);
          lVar15 = *param_2;
          uVar5 = *(ushort *)(param_2 + 2);
          if (uVar9 - 1 == uVar11 && (uVar9 & 1) != 0) {
            pfVar18 = (float *)(*param_4 +
                               (ulong)((iVar6 + (uint)(1 < (uVar11 & 3) && uVar9 != 1)) * 0x10) * 4)
            ;
            pfVar8 = pfVar18 + 2;
          }
          else {
            pfVar18 = (float *)(*param_4 + (ulong)(uint)(iVar6 << 4) * 4 + (ulong)(uVar11 & 3) * 4);
            pfVar8 = pfVar18 + 8;
          }
          fVar22 = *pfVar8 - *pfVar18;
          fVar26 = fVar22 * (1.0 / (float)uVar10);
          if (uVar19 - 1 < 3) {
            lVar16 = 0;
          }
          else {
            lVar16 = 0;
            pfVar18 = (float *)(lVar14 + uVar13 * uVar20 * 4 + 8);
            pfVar8 = (float *)(lVar15 + uVar5 * uVar20 * 4 + 8);
            do {
              pfVar8[-2] = pfVar18[-2] - fVar22;
              fVar23 = fVar22 + fVar26 + fVar26;
              pfVar8[-1] = pfVar18[-1] - (fVar22 + fVar26);
              fVar24 = fVar23 + fVar26;
              *pfVar8 = *pfVar18 - fVar23;
              pfVar1 = pfVar18 + 1;
              pfVar18 = pfVar18 + 4;
              fVar22 = fVar24 + fVar26;
              lVar16 = lVar16 + 4;
              pfVar8[1] = *pfVar1 - fVar24;
              pfVar8 = pfVar8 + 4;
            } while (uVar19 - (uVar19 & 3) != lVar16);
          }
          if ((uVar4 & 3) != 0) {
            pfVar18 = (float *)(lVar14 + lVar16 * 4 + uVar13 * uVar20 * 4);
            pfVar8 = (float *)(lVar15 + lVar16 * 4 + uVar5 * uVar20 * 4);
            uVar20 = uVar19 & 3;
            do {
              fVar23 = *pfVar18 - fVar22;
              fVar22 = fVar22 + fVar26;
              uVar20 = uVar20 - 1;
              *pfVar8 = fVar23;
              pfVar18 = pfVar18 + 1;
              pfVar8 = pfVar8 + 1;
            } while (uVar20 != 0);
          }
          uVar9 = uVar11 + 1 & 0xffff;
          uVar20 = (ulong)uVar9;
        } while (uVar9 < uVar21);
      }
      else {
        if (uVar21 == 0) {
          return;
        }
        memcpy((void *)*param_2,(void *)*param_1,uVar19 << 2);
        if (1 < uVar21) {
          uVar20 = 1;
          do {
            lVar14 = (uVar20 & 0xffff) * 4;
            memcpy((void *)(*param_2 + lVar14 * (ulong)*(ushort *)(param_2 + 2)),
                   (void *)(*param_1 + lVar14 * (ulong)*(ushort *)(param_1 + 2)),uVar19 << 2);
            uVar9 = (int)uVar20 + 1;
            uVar20 = (ulong)uVar9;
          } while ((uVar9 & 0xffff) < uVar21);
        }
      }
      lVar16 = *param_1;
      lVar15 = (ulong)(uVar10 - 1) * 4;
      lVar17 = (ulong)(uVar10 - 2) * 4;
      bVar7 = *(int *)((long)param_4 + 0x1c) != 1;
      *(undefined4 *)*param_4 = *(undefined4 *)(lVar16 + lVar15);
      lVar14 = 4;
      if (bVar7) {
        lVar14 = 0x10;
      }
      *(undefined4 *)(*param_4 + lVar14) = *(undefined4 *)(lVar16 + lVar17);
      lVar14 = 8;
      if (bVar7) {
        lVar14 = 0x20;
      }
      *(undefined4 *)(*param_4 + lVar14) = *(undefined4 *)(lVar16 + lVar15);
      lVar14 = 0xc;
      if (bVar7) {
        lVar14 = 0x30;
      }
      *(undefined4 *)(*param_4 + lVar14) = *(undefined4 *)(lVar16 + lVar17);
      if (1 < uVar21) {
        uVar19 = 1;
        do {
          uVar9 = *(uint *)((long)param_4 + 0x1c);
          uVar11 = (uint)uVar19;
          lVar14 = *param_1 + uVar19 * *(ushort *)(param_1 + 2) * 4;
          puVar2 = (undefined4 *)(lVar14 + (ulong)(uVar10 - 2) * 4);
          uVar20 = (ulong)(uVar11 & 3);
          if (uVar9 - 1 == uVar11 && (uVar9 & 1) != 0) {
            uVar20 = (ulong)(((uVar11 >> 2) + (uint)(1 < (uVar11 & 3) && uVar9 != 1)) * 0x10);
            lVar16 = uVar20 * 4;
            *(undefined4 *)(*param_4 + lVar16) = *(undefined4 *)(lVar14 + lVar15);
            *(undefined4 *)(*param_4 + lVar16 + 4) = *puVar2;
            *(undefined4 *)(*param_4 + lVar16 + 8) = *(undefined4 *)(lVar14 + lVar15);
            lVar14 = *param_4 + 0xc;
          }
          else {
            lVar17 = uVar20 * 4;
            lVar16 = (ulong)((uVar11 >> 2) << 4) * 4;
            *(undefined4 *)(*param_4 + lVar16 + lVar17) = *(undefined4 *)(lVar14 + lVar15);
            *(undefined4 *)(*param_4 + lVar16 + lVar17 + 0x10) = *puVar2;
            *(undefined4 *)(*param_4 + lVar16 + lVar17 + 0x20) = *(undefined4 *)(lVar14 + lVar15);
            lVar14 = *param_4 + lVar16 + 0x30;
          }
          uVar9 = uVar11 + 1 & 0xffff;
          uVar19 = (ulong)uVar9;
          *(undefined4 *)(lVar14 + uVar20 * 4) = *puVar2;
        } while (uVar9 < uVar21);
      }
    }
  }
  return;
}


