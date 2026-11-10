/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ee2c64; name: FUN_02ee2c64
 */


void FUN_02ee2c64(long *param_1,uint param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long *plVar12;
  uint uVar13;
  long *plVar14;
  ulong uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  long *plVar24;
  uint *puVar25;
  uint *puVar26;
  
  uVar13 = *(uint *)(param_1 + 1);
  if (uVar13 != 0) {
    uVar8 = 0;
    if (uVar13 != 0) {
      uVar8 = param_2 / uVar13;
    }
    puVar25 = *(uint **)(*param_1 + (ulong)(param_2 - uVar8 * uVar13) * 8);
    if (puVar25 != (uint *)0x0) {
      while (*puVar25 != param_2) {
        puVar25 = *(uint **)(puVar25 + 2);
        if (puVar25 == (uint *)0x0) {
          return;
        }
      }
      uVar15 = (ulong)puVar25[0x14];
      if (puVar25[0x14] == 0) {
        plVar24 = (long *)0x0;
      }
      else {
        plVar14 = *(long **)(puVar25 + 0x12);
        plVar12 = plVar14 + uVar15;
        plVar18 = (long *)0x0;
        do {
          uVar13 = (uint)uVar15;
          plVar24 = (long *)*plVar14;
          if (((((plVar24[3] == *param_3) && ((int)plVar24[4] == (int)param_3[1])) &&
               ((int)plVar24[5] == (int)param_3[2])) &&
              (((char)plVar24[6] == (char)param_3[3] && ((char)plVar24[7] == (char)param_3[4])))) &&
             (plVar24[8] == param_3[5])) {
            if (plVar14 < plVar12 + -1) {
              uVar21 = (long)plVar12 + (-9 - (long)plVar14);
              uVar13 = ((uint)(uVar21 >> 3) & 0x1fffffff) + 1;
              uVar15 = (ulong)uVar13 & 7;
              if ((uVar13 & 7) == 0) {
                plVar20 = plVar14;
              }
              else {
                plVar19 = plVar14;
                do {
                  plVar20 = plVar19 + 1;
                  *plVar19 = *plVar20;
                  uVar15 = uVar15 - 1;
                  plVar19 = plVar20;
                } while (uVar15 != 0);
              }
              if (0x37 < uVar21) {
                do {
                  *plVar20 = plVar20[1];
                  plVar20[1] = plVar20[2];
                  plVar20[2] = plVar20[3];
                  plVar20[3] = plVar20[4];
                  plVar20[4] = plVar20[5];
                  plVar20[5] = plVar20[6];
                  plVar20[6] = plVar20[7];
                  plVar19 = plVar20 + 8;
                  plVar20[7] = *plVar19;
                  plVar20 = plVar19;
                } while (plVar19 < plVar12 + -1);
              }
              uVar13 = puVar25[0x14];
            }
            puVar25[0x14] = uVar13 - 1;
            if (plVar18 == (long *)0x0) {
              plVar24[2] = 0;
            }
            else {
              plVar24[2] = (long)plVar18;
            }
          }
          else {
            plVar14 = plVar14 + 1;
            plVar24 = plVar18;
          }
          uVar15 = (ulong)puVar25[0x14];
          plVar12 = (long *)(*(long *)(puVar25 + 0x12) + uVar15 * 8);
          plVar18 = plVar24;
        } while (plVar12 != plVar14);
      }
      uVar15 = (ulong)puVar25[0x18];
      if (puVar25[0x18] != 0) {
        plVar14 = *(long **)(puVar25 + 0x16);
        plVar12 = plVar14 + uVar15;
        plVar18 = plVar24;
        do {
          uVar13 = (uint)uVar15;
          plVar24 = (long *)*plVar14;
          if (((plVar24[3] == *param_3) && ((int)plVar24[4] == (int)param_3[1])) &&
             (((int)plVar24[5] == (int)param_3[2] &&
              ((((char)plVar24[6] == (char)param_3[3] && ((char)plVar24[7] == (char)param_3[4])) &&
               (plVar24[8] == param_3[5])))))) {
            if (plVar14 < plVar12 + -1) {
              uVar21 = (long)plVar12 + (-9 - (long)plVar14);
              uVar13 = ((uint)(uVar21 >> 3) & 0x1fffffff) + 1;
              uVar15 = (ulong)uVar13 & 7;
              if ((uVar13 & 7) == 0) {
                plVar20 = plVar14;
              }
              else {
                plVar19 = plVar14;
                do {
                  plVar20 = plVar19 + 1;
                  *plVar19 = *plVar20;
                  uVar15 = uVar15 - 1;
                  plVar19 = plVar20;
                } while (uVar15 != 0);
              }
              if (0x37 < uVar21) {
                do {
                  *plVar20 = plVar20[1];
                  plVar20[1] = plVar20[2];
                  plVar20[2] = plVar20[3];
                  plVar20[3] = plVar20[4];
                  plVar20[4] = plVar20[5];
                  plVar20[5] = plVar20[6];
                  plVar20[6] = plVar20[7];
                  plVar19 = plVar20 + 8;
                  plVar20[7] = *plVar19;
                  plVar20 = plVar19;
                } while (plVar19 < plVar12 + -1);
              }
              uVar13 = puVar25[0x18];
            }
            puVar25[0x18] = uVar13 - 1;
            if (plVar18 == (long *)0x0) {
              plVar24[2] = 0;
            }
            else {
              plVar24[2] = (long)plVar18;
            }
          }
          else {
            plVar14 = plVar14 + 1;
            plVar24 = plVar18;
          }
          uVar15 = (ulong)puVar25[0x18];
          plVar12 = (long *)(*(long *)(puVar25 + 0x16) + uVar15 * 8);
          plVar18 = plVar24;
        } while (plVar12 != plVar14);
      }
      lVar23 = *param_3;
      if ((((lVar23 == 0) && ((int)param_3[1] == 0)) &&
          (((int)param_3[2] == 0 && (((char)param_3[3] == -1 && ((char)param_3[4] == -1)))))) &&
         (param_3[5] == 0)) {
        puVar26 = puVar25 + 0x10;
        puVar16 = *(undefined8 **)puVar26;
        puVar11 = puVar16;
        if (puVar16 != (undefined8 *)0x0) {
          do {
            puVar25 = puVar26;
            if (puVar11 != puVar16) {
              puVar25 = (uint *)&DAT_00000008;
            }
            *(undefined8 *)puVar25 = puVar16[1];
            lVar23 = puVar16[2];
            *puVar16 = &PTR_LAB_042aaa60;
            if (lVar23 != 0) {
              puVar17 = *(undefined8 **)(lVar23 + 0x28);
              uVar13 = *(uint *)(lVar23 + 0x30);
              puVar11 = puVar17 + uVar13;
              if ((uVar13 != 0) && ((undefined8 *)*puVar17 != puVar16)) {
                lVar22 = (ulong)uVar13 * 8;
                puVar10 = puVar17;
                do {
                  lVar22 = lVar22 + -8;
                  puVar2 = puVar10 + 1;
                  puVar17 = puVar11;
                  if (lVar22 == 0) break;
                  puVar1 = puVar10 + 1;
                  puVar10 = puVar2;
                  puVar17 = puVar2;
                } while ((undefined8 *)*puVar1 != puVar16);
              }
              if (puVar11 != puVar17) {
                if (1 < uVar13) {
                  *puVar17 = puVar11[-1];
                  uVar13 = *(uint *)(lVar23 + 0x30);
                }
                *(uint *)(lVar23 + 0x30) = uVar13 - 1;
                if (uVar13 - 1 == 0) {
                  *(undefined4 *)(lVar23 + 0x3c) = 6;
                }
              }
            }
            (*DAT_0442d150)(0,puVar16);
            puVar11 = *(undefined8 **)puVar26;
          } while( true );
        }
      }
      else {
        puVar26 = puVar25 + 0x10;
        puVar11 = *(undefined8 **)puVar26;
        if (puVar11 != (undefined8 *)0x0) {
          iVar4 = (int)param_3[1];
          iVar5 = (int)param_3[2];
          cVar6 = (char)param_3[3];
          cVar7 = (char)param_3[4];
          lVar22 = param_3[5];
          puVar16 = puVar11;
          puVar17 = (undefined8 *)0x0;
          if (lVar23 == 0) {
            do {
              puVar10 = puVar16;
              if (((((iVar4 == 0) || (*(int *)(puVar10 + 5) == iVar4)) &&
                   ((iVar5 == 0 || (*(int *)(puVar10 + 6) == iVar5)))) &&
                  ((cVar6 == -1 || (*(char *)(puVar10 + 7) == cVar6)))) &&
                 (((cVar7 == -1 || (*(char *)(puVar10 + 8) == cVar7)) &&
                  ((lVar22 == 0 || (puVar10[9] == lVar22)))))) goto LAB_02ee2ef0;
              puVar16 = (undefined8 *)puVar10[1];
              puVar17 = puVar10;
            } while ((undefined8 *)puVar10[1] != (undefined8 *)0x0);
          }
          else {
            do {
              puVar10 = puVar16;
              if ((((puVar10[4] == lVar23) && ((iVar4 == 0 || (*(int *)(puVar10 + 5) == iVar4)))) &&
                  ((iVar5 == 0 || (*(int *)(puVar10 + 6) == iVar5)))) &&
                 ((((cVar6 == -1 || (*(char *)(puVar10 + 7) == cVar6)) &&
                   ((cVar7 == -1 || (*(char *)(puVar10 + 8) == cVar7)))) &&
                  ((lVar22 == 0 || (puVar10[9] == lVar22)))))) goto LAB_02ee2ef0;
              puVar16 = (undefined8 *)puVar10[1];
              puVar17 = puVar10;
            } while ((undefined8 *)puVar10[1] != (undefined8 *)0x0);
          }
        }
      }
LAB_02ee2d6c:
      FUN_02edf160(puVar25 + 8,param_3);
      while (plVar24 != (long *)0x0) {
        plVar14 = (long *)plVar24[2];
        uVar13 = *(uint *)(param_1 + 4);
        if (uVar13 != 0) {
          uVar8 = (int)plVar24[1] + (int)*plVar24;
          uVar9 = 0;
          if (uVar13 != 0) {
            uVar9 = uVar8 / uVar13;
          }
          plVar12 = (long *)(param_1[3] + (ulong)(uVar8 - uVar9 * uVar13) * 8);
          if ((long *)*plVar12 != (long *)0x0) {
            plVar18 = (long *)0x0;
            plVar20 = (long *)*plVar12;
            do {
              if ((*plVar20 == *plVar24) && ((int)plVar20[1] == (int)plVar24[1])) {
                if (plVar18 != (long *)0x0) {
                  plVar12 = plVar18 + 2;
                }
                *plVar12 = plVar20[2];
                *(int *)(param_1 + 5) = (int)param_1[5] + -1;
                break;
              }
              plVar19 = plVar20 + 2;
              plVar18 = plVar20;
              plVar20 = (long *)*plVar19;
            } while ((long *)*plVar19 != (long *)0x0);
          }
        }
        FUN_02ec55d0(DAT_0440a180,plVar24,0);
        if (plVar24[10] != 0) {
          *(undefined4 *)(plVar24 + 0xb) = 0;
          (*DAT_0442d150)(0);
          plVar24[10] = 0;
          *(undefined4 *)((long)plVar24 + 0x5c) = 0;
        }
        (*DAT_0442d150)(0,plVar24);
        plVar24 = plVar14;
      }
    }
  }
  return;
LAB_02ee2ef0:
  puVar3 = puVar26;
  if (puVar11 != puVar10) {
    puVar3 = (uint *)(puVar17 + 1);
  }
  *(undefined8 *)puVar3 = puVar10[1];
  lVar23 = puVar10[2];
  *puVar10 = &PTR_LAB_042aaa60;
  if (lVar23 != 0) {
    puVar16 = *(undefined8 **)(lVar23 + 0x28);
    uVar13 = *(uint *)(lVar23 + 0x30);
    puVar11 = puVar16 + uVar13;
    if ((uVar13 != 0) && ((undefined8 *)*puVar16 != puVar10)) {
      lVar22 = (ulong)uVar13 * 8;
      puVar17 = puVar16;
      do {
        lVar22 = lVar22 + -8;
        if (lVar22 == 0) goto LAB_02ee2f10;
        puVar16 = puVar17 + 1;
        puVar2 = puVar17 + 1;
        puVar17 = puVar16;
      } while ((undefined8 *)*puVar2 != puVar10);
    }
    if (puVar11 != puVar16) {
      if (1 < uVar13) {
        *puVar16 = puVar11[-1];
        uVar13 = *(uint *)(lVar23 + 0x30);
      }
      *(uint *)(lVar23 + 0x30) = uVar13 - 1;
      if (uVar13 - 1 == 0) {
        *(undefined4 *)(lVar23 + 0x3c) = 6;
      }
    }
  }
LAB_02ee2f10:
  (*DAT_0442d150)(0);
  puVar11 = *(undefined8 **)puVar26;
  if (puVar11 == (undefined8 *)0x0) goto LAB_02ee2d6c;
  iVar4 = (int)param_3[1];
  iVar5 = (int)param_3[2];
  cVar6 = (char)param_3[3];
  cVar7 = (char)param_3[4];
  lVar23 = param_3[5];
  puVar16 = puVar11;
  puVar17 = (undefined8 *)0x0;
  if (*param_3 == 0) {
    while ((((puVar10 = puVar16, iVar4 != 0 && (*(int *)(puVar10 + 5) != iVar4)) ||
            ((iVar5 != 0 && (*(int *)(puVar10 + 6) != iVar5)))) ||
           ((((cVar6 != -1 && (*(char *)(puVar10 + 7) != cVar6)) ||
             ((cVar7 != -1 && (*(char *)(puVar10 + 8) != cVar7)))) ||
            ((lVar23 != 0 && (puVar10[9] != lVar23))))))) {
      puVar16 = (undefined8 *)puVar10[1];
      puVar17 = puVar10;
      if ((undefined8 *)puVar10[1] == (undefined8 *)0x0) goto LAB_02ee2d6c;
    }
  }
  else {
    while ((((puVar10 = puVar16, puVar10[4] != *param_3 ||
             ((iVar4 != 0 && (*(int *)(puVar10 + 5) != iVar4)))) ||
            ((iVar5 != 0 && (*(int *)(puVar10 + 6) != iVar5)))) ||
           ((((cVar6 != -1 && (*(char *)(puVar10 + 7) != cVar6)) ||
             ((cVar7 != -1 && (*(char *)(puVar10 + 8) != cVar7)))) ||
            ((lVar23 != 0 && (puVar10[9] != lVar23))))))) {
      puVar16 = (undefined8 *)puVar10[1];
      puVar17 = puVar10;
      if ((undefined8 *)puVar10[1] == (undefined8 *)0x0) goto LAB_02ee2d6c;
    }
  }
  goto LAB_02ee2ef0;
}


