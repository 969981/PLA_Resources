/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f24a00; name: FUN_02f24a00
 */


void FUN_02f24a00(long *param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  byte bVar4;
  char cVar5;
  byte bVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  bool bVar15;
  ulong *puVar16;
  long lVar17;
  undefined8 *puVar18;
  long *plVar19;
  float *pfVar20;
  long lVar21;
  ulong uVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  long local_c0;
  char local_ac [4];
  undefined8 local_a8;
  
  lVar21 = param_1[1];
  if ((*(byte *)(lVar21 + 0xef) & 1) == 0) {
    fVar30 = 0.0;
  }
  else {
    fVar30 = (float)(**(code **)(*param_1 + 0x78))(param_1);
  }
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0xc5800000;
  fVar32 = *(float *)(param_1 + 2);
  local_a8 = 1;
  if (*(long *)(lVar21 + 0x50) == 0) {
    fVar31 = 1.0;
    puVar23 = (undefined8 *)param_1[5];
  }
  else {
    fVar31 = (float)FUN_02ec6fa8(*(long *)(lVar21 + 0x50),&local_a8);
    puVar23 = (undefined8 *)param_1[5];
  }
  if (puVar23 != (undefined8 *)0x0) {
    puVar25 = (undefined8 *)0x0;
    do {
      while( true ) {
        puVar24 = puVar23;
        uVar22 = puVar24[0x1a];
        iVar2 = *(int *)((long)puVar24 + 0x164);
        lVar7 = *(long *)(lVar21 + 0x140);
        if (iVar2 != 0) break;
        fVar26 = *(float *)(lVar21 + 0x8c);
        if (fVar26 == *(float *)(lVar21 + 0x188)) {
          fVar33 = *(float *)(lVar21 + 0x184);
          if ((*(byte *)(lVar21 + 0x10c) >> 3 & 1) == 0) goto LAB_02f24acc;
LAB_02f24c2c:
          uVar8 = *(uint *)(lVar21 + 0x148);
          fVar26 = 0.0;
          if (uVar8 != 0) {
            if ((uVar22 != *(ulong *)(lVar7 + 0x50)) ||
               (fVar26 = *(float *)(lVar7 + 0x30), fVar26 <= 0.0)) {
              fVar26 = 0.0;
            }
            if (uVar8 != 1) {
              if ((uVar22 == *(ulong *)(lVar7 + 0xb8)) && (fVar26 < *(float *)(lVar7 + 0x98))) {
                fVar26 = *(float *)(lVar7 + 0x98);
              }
              if (uVar8 != 2) {
                if ((uVar22 == *(ulong *)(lVar7 + 0x120)) && (fVar26 < *(float *)(lVar7 + 0x100))) {
                  fVar26 = *(float *)(lVar7 + 0x100);
                }
                if (uVar8 != 3) {
                  lVar9 = (ulong)uVar8 * 0x68 + -0x138;
                  puVar16 = (ulong *)(lVar7 + 0x188);
                  do {
                    if ((uVar22 == *puVar16) && (fVar26 < *(float *)(puVar16 + -4))) {
                      fVar26 = *(float *)(puVar16 + -4);
                    }
                    lVar9 = lVar9 + -0x68;
                    puVar16 = puVar16 + 0xd;
                  } while (lVar9 != 0);
                }
              }
            }
          }
          if (((*(uint *)(*(long *)(lVar21 + 0x10) + 0x40) < 2) ||
              (lVar7 = *(long *)(*(long *)(*(long *)(lVar21 + 0x10) + 0x38) + 8), lVar7 == 0)) &&
             (lVar7 = DAT_0440a410, DAT_0440a410 == 0)) {
            FUN_02e43d1c();
            cVar5 = *(char *)(DAT_0440a410 + 0xb8);
            lVar7 = DAT_0440a410;
          }
          else {
            cVar5 = *(char *)(lVar7 + 0xb8);
          }
          lVar9 = DAT_0440a410;
          if (cVar5 == '\0') {
            while( true ) {
              if (lVar9 == 0) {
                FUN_02e43d1c();
                cVar5 = *(char *)(DAT_0440a410 + 0xb8);
                lVar7 = DAT_0440a410;
              }
              else {
                cVar5 = *(char *)(lVar9 + 0xb8);
                lVar7 = lVar9;
              }
              if (cVar5 != '\0') break;
              lVar9 = lVar7;
            }
          }
          uVar8 = *(uint *)(lVar7 + 0x40);
          fVar29 = 1.0;
          if (uVar8 != 0) {
            lVar7 = *(long *)(lVar7 + 0x38);
            iVar10 = 0;
            do {
              iVar1 = iVar10 + (uVar8 >> 1);
              puVar16 = (ulong *)(lVar7 + (long)iVar1 * 0x18);
              uVar14 = *puVar16;
              if (uVar14 == uVar22 && (int)puVar16[1] == 0) {
                fVar29 = 1.0;
                if (lVar7 + (long)iVar1 * 0x18 != 0) {
                  fVar29 = *(float *)(lVar7 + (long)iVar1 * 0x18 + 0x10);
                }
                goto LAB_02f24d38;
              }
              if (uVar14 < uVar22) {
                iVar10 = iVar1 + 1;
              }
              uVar8 = uVar8 - (uVar14 < uVar22) >> 1;
            } while (uVar8 != 0);
            fVar29 = 1.0;
          }
LAB_02f24d38:
          fVar33 = fVar29 * fVar33;
        }
        else {
          fVar33 = 0.0;
          *(float *)(lVar21 + 0x188) = fVar26;
          if (-37.0 <= fVar26 * 0.05) {
            uVar8 = (uint)(fVar26 * 1393317.6 + 1.0653532e+09);
            fVar33 = (float)(uVar8 & 0x7fffff | 0x3f800000);
            fVar33 = (fVar33 * (fVar33 * 0.32518977 + 0.020805772) + 0.65304345) *
                     (float)(uVar8 & 0xff800000);
          }
          *(float *)(lVar21 + 0x184) = fVar33;
          if ((*(byte *)(lVar21 + 0x10c) >> 3 & 1) != 0) goto LAB_02f24c2c;
LAB_02f24acc:
          fVar26 = 1.0;
        }
        *(undefined4 *)(puVar24 + 0x1b) = *(undefined4 *)(lVar21 + 0x94);
        *(undefined4 *)((long)puVar24 + 0xdc) = *(undefined4 *)(lVar21 + 0x90);
LAB_02f24ae0:
        fVar29 = DAT_042ac98c;
        fVar27 = fVar31 * fVar32 * fVar26 * fVar33;
        if (fVar27 <= 0.0) {
          *(undefined4 *)((long)puVar24 + 0x15c) = 0xc5800000;
          *(float *)(puVar24 + 0x2b) = fVar33;
          bVar6 = *(byte *)(puVar24 + 0x2d);
LAB_02f24d6c:
          *(undefined4 *)(puVar24 + 2) = *(undefined4 *)((long)puVar24 + 0x14);
          *(undefined4 *)((long)puVar24 + 0x14) = 0;
          *(byte *)(puVar24 + 0x2d) = bVar6 & 0xfc | (bVar6 & 1) << 1 | -4096.0 <= fVar29;
          uVar3 = *(undefined4 *)((long)puVar24 + 0x1c);
          *(float *)((long)puVar24 + 0x1c) = fVar26;
          *(undefined4 *)(puVar24 + 3) = uVar3;
        }
        else {
          fVar29 = (float)((uint)fVar27 & 0x7fffff | 0x3f800000);
          fVar28 = fVar29 + 1.0;
          bVar4 = *(byte *)(puVar24 + 0x2d);
          bVar6 = (bVar4 & 1) << 1;
          fVar29 = *(float *)(puVar24[0xb] + 0x14) +
                   ((float)((uint)fVar27 >> 0x17 & 0xff) * 0.30103 + -38.230812 +
                   (fVar29 * fVar29 * fVar29 * 1.1581186 + -1.1581186) / (fVar28 * fVar28 * fVar28))
                   * 20.0;
          *(byte *)(puVar24 + 0x2d) = bVar4 & 0xfc | bVar4 & 1 | bVar6;
          *(byte *)(puVar24 + 0x2d) =
               ((param_2 & 1) != 0 && fVar29 <= DAT_042ac98c) | bVar4 & 0xfc | bVar6;
          *(undefined4 *)(puVar24 + 2) = *(undefined4 *)((long)puVar24 + 0x14);
          *(undefined4 *)((long)puVar24 + 0x14) = 0;
          uVar3 = *(undefined4 *)((long)puVar24 + 0x1c);
          *(float *)((long)puVar24 + 0x15c) = fVar29;
          *(float *)(puVar24 + 0x2b) = fVar33;
          *(float *)((long)puVar24 + 0x1c) = fVar26;
          *(undefined4 *)(puVar24 + 3) = uVar3;
          if (*(float *)((long)param_1 + 0x14) < fVar29) {
            *(float *)((long)param_1 + 0x14) = fVar29;
          }
          local_c0 = puVar24[0xc];
          if ((local_c0 != 0) && (*(char *)(lVar21 + 0x180) < '\0')) {
            if ((-fVar30 < *(float *)(lVar21 + 0x98)) &&
               (*(float *)(local_c0 + 0x350) < fVar29 + fVar30)) {
              *(float *)(local_c0 + 0x350) = fVar29 + fVar30;
              local_c0 = puVar24[0xc];
            }
            lVar7 = FUN_02f252e4(param_1 + 8,local_c0,local_ac);
            fVar29 = DAT_042ac98c;
            if (lVar7 == 0) {
              bVar6 = *(byte *)(puVar24 + 0x2d);
              puVar24[0x2b] = 0xc580000000000000;
              goto LAB_02f24d6c;
            }
            fVar33 = *(float *)(local_c0 + 0x360) + *(float *)(local_c0 + 0x14);
            fVar26 = *(float *)((long)puVar24 + 0x15c) - fVar33;
            if (0.0 < fVar26) {
              fVar33 = fVar33 + fVar26 * *(float *)(local_c0 + 0x364);
            }
            if ((local_ac[0] == '\0') || (*(float *)(lVar7 + 8) < fVar33)) {
              *(float *)(lVar7 + 8) = fVar33;
            }
          }
        }
        if (((iVar2 != 3) && ((~*(byte *)(puVar24 + 0x2d) & 3) != 0)) &&
           (*(int *)(lVar21 + 0x148) != 0)) {
          FUN_02e737b0(lVar21,(long *)(lVar21 + 0x140),puVar24);
        }
        puVar23 = (undefined8 *)puVar24[9];
        puVar25 = puVar24;
        if ((undefined8 *)puVar24[9] == (undefined8 *)0x0) {
          return;
        }
      }
      uVar8 = *(uint *)(param_1 + 7);
      if (uVar8 != 0) {
        lVar9 = puVar24[0xb];
        plVar19 = (long *)param_1[6];
        lVar11 = *(long *)(lVar9 + 0x68);
        if (lVar11 == 0) {
          if ((int)plVar19[1] == 0) goto LAB_02f24df4;
LAB_02f252a4:
          fVar29 = 0.0;
          fVar33 = 0.0;
          bVar15 = false;
          fVar26 = 0.0;
        }
        else {
          if ((int)plVar19[1] != *(int *)(lVar11 + 0x10)) goto LAB_02f252a4;
LAB_02f24df4:
          if (*plVar19 != *(long *)(lVar9 + 0x70)) goto LAB_02f252a4;
          fVar29 = *(float *)((long)plVar19 + 0x14);
          fVar26 = *(float *)(plVar19 + 3);
          bVar15 = true;
          fVar33 = *(float *)((long)plVar19 + 0xc);
        }
        fVar27 = fVar26;
        if (uVar8 != 1) {
          lVar17 = (ulong)uVar8 * 0x20 + -0x20;
          pfVar20 = (float *)(plVar19 + 7);
          fVar28 = fVar29;
          do {
            if (lVar11 == 0) {
              if (pfVar20[-4] == 0.0) goto LAB_02f24e40;
            }
            else if (pfVar20[-4] == *(float *)(lVar11 + 0x10)) {
LAB_02f24e40:
              if (*(long *)(pfVar20 + -6) == *(long *)(lVar9 + 0x70)) {
                fVar26 = *pfVar20 + fVar26;
                fVar29 = pfVar20[-1] + fVar28;
                fVar33 = pfVar20[-3] + fVar33;
                bVar15 = true;
                fVar27 = fVar26;
                fVar28 = fVar29;
              }
            }
            lVar17 = lVar17 + -0x20;
            pfVar20 = pfVar20 + 8;
          } while (lVar17 != 0);
        }
        if (!bVar15) goto LAB_02f24e8c;
LAB_02f24db0:
        *(float *)(puVar24 + 0x1b) = fVar29;
        *(float *)((long)puVar24 + 0xdc) = fVar27;
        if ((*(byte *)(lVar21 + 0x10c) >> 3 & 1) == 0) {
LAB_02f24dbc:
          fVar26 = 1.0;
        }
        else if (iVar2 == 2) {
          lVar9 = *(long *)(lVar21 + 0x140) + (ulong)*(uint *)(lVar21 + 0x148) * 0x68;
          if (lVar7 == lVar9) {
            fVar26 = 0.0;
          }
          else {
            fVar26 = 0.0;
            if (uVar22 == *(ulong *)(lVar7 + 0x50)) {
              fVar26 = 0.0;
              if (0.0 < *(float *)(lVar7 + 0x38)) {
                fVar26 = *(float *)(lVar7 + 0x38);
              }
            }
            while (lVar11 = lVar7, lVar7 = lVar11 + 0x68, lVar7 != lVar9) {
              if ((uVar22 == *(ulong *)(lVar11 + 0xb8)) && (fVar26 < *(float *)(lVar11 + 0xa0))) {
                fVar26 = *(float *)(lVar11 + 0xa0);
              }
            }
          }
        }
        else {
          if (iVar2 != 1) goto LAB_02f24dbc;
          fVar26 = 0.0;
          for (; lVar7 != *(long *)(lVar21 + 0x140) + (ulong)*(uint *)(lVar21 + 0x148) * 0x68;
              lVar7 = lVar7 + 0x68) {
            if ((uVar22 == *(ulong *)(lVar7 + 0x50)) && (fVar26 < *(float *)(lVar7 + 0x34))) {
              fVar26 = *(float *)(lVar7 + 0x34);
            }
          }
        }
        goto LAB_02f24ae0;
      }
      fVar27 = 0.0;
      fVar29 = 0.0;
LAB_02f24e8c:
      fVar33 = 0.0;
      if ((*(byte *)(puVar24 + 0x2d) & 1) == 0) goto LAB_02f24db0;
      if (param_1[1] != 0) {
        *(undefined4 *)(param_1[1] + 0x110) = 0x42ca0000;
      }
      if ((*(byte *)(param_1 + 10) >> 2 & 1) != 0) {
        DAT_0440ae44 = 1;
      }
      lVar7 = puVar24[0xb];
      puVar18 = *(undefined8 **)(lVar7 + 0x20);
      puVar23 = puVar18 + 8;
      puVar13 = (undefined8 *)0x0;
      puVar12 = puVar18;
      if ((puVar18 == (undefined8 *)0x0) || (puVar24 == puVar18)) {
joined_r0x02f2508c:
        if (puVar12 != (undefined8 *)0x0) {
          puVar18 = (undefined8 *)(lVar7 + 0x20);
          if (*(undefined8 **)(lVar7 + 0x20) != puVar12) {
            puVar18 = puVar13 + 8;
          }
          *puVar18 = *puVar23;
          if (*(undefined8 **)(lVar7 + 0x18) == puVar12) {
            *(undefined8 **)(lVar7 + 0x18) = puVar13;
          }
        }
      }
      else {
        puVar12 = (undefined8 *)*puVar23;
        puVar23 = puVar12 + 8;
        if (puVar12 != (undefined8 *)0x0) {
          puVar13 = puVar18;
          if (puVar24 != puVar12) {
            do {
              puVar13 = puVar12;
              puVar12 = (undefined8 *)*puVar23;
              puVar23 = puVar12 + 8;
            } while (puVar12 != (undefined8 *)0x0 && puVar24 != puVar12);
          }
          goto joined_r0x02f2508c;
        }
      }
      plVar19 = param_1 + 5;
      puVar23 = (undefined8 *)puVar24[9];
      if ((undefined8 *)*plVar19 != puVar24) {
        plVar19 = puVar25 + 9;
      }
      *plVar19 = (long)puVar23;
      (**(code **)*puVar24)(puVar24);
      (*DAT_0442d158)(5,puVar24);
    } while (puVar23 != (undefined8 *)0x0);
  }
  return;
}


