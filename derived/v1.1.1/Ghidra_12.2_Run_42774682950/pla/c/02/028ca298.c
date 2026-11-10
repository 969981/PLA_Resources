/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028ca298; name: FUN_028ca298
 */


void FUN_028ca298(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  char *__s;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  undefined *puVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  size_t sVar9;
  long lVar10;
  int *piVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  byte *pbVar15;
  undefined1 *puVar16;
  ulong uVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  uint *puVar21;
  long *plVar22;
  undefined8 uVar23;
  
  *param_1 = param_2;
  plVar22 = param_1 + 1;
  *plVar22 = 0;
  param_1[2] = 0;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar5 = PTR_DAT_04379528, iVar7 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  lVar6 = DAT_043f1798;
  lVar10 = tpidr_el0;
  if ((((lVar8 == 0) || (*(long *)(lVar8 + 0x80) == 0)) ||
      (lVar8 = *(long *)(lVar8 + *(long *)(lVar8 + 0x80) * 8 + -8), lVar8 == 0)) &&
     (lVar8 = *(long *)(lVar10 + 0x20), *(long *)(lVar10 + 0x20) == 0)) {
    *(long *)(lVar10 + 0x20) = DAT_043f1798;
    lVar8 = lVar6;
  }
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[3] = lVar8;
  param_1[4] = 0x38e38e38e38e38e;
  param_1[7] = 0;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar5 = PTR_DAT_04379528, iVar7 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  lVar6 = DAT_043f1798;
  if ((((lVar8 == 0) || (*(long *)(lVar8 + 0x80) == 0)) ||
      (lVar8 = *(long *)(lVar8 + *(long *)(lVar8 + 0x80) * 8 + -8), lVar8 == 0)) &&
     (lVar8 = *(long *)(lVar10 + 0x20), *(long *)(lVar10 + 0x20) == 0)) {
    *(long *)(lVar10 + 0x20) = DAT_043f1798;
    lVar8 = lVar6;
  }
  param_1[8] = lVar8;
  param_1[9] = 0x38e38e38e38e38e;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0x3f800000;
  FUN_00bb8ef0(param_1 + 0xe);
  piVar11 = (int *)*param_1;
  if (((piVar11 != (int *)0x0) && (6 < *(ushort *)((long)piVar11 - (long)*piVar11))) &&
     (uVar14 = (ulong)((ushort *)((long)piVar11 - (long)*piVar11))[3], uVar14 != 0)) {
    puVar2 = (uint *)((long)piVar11 + uVar14);
    puVar2 = (uint *)((long)puVar2 + (ulong)*puVar2);
    if (*puVar2 != 0) {
      FUN_028ca9dc(plVar22,(long)((float)*puVar2 / *(float *)(param_1 + 0xd)));
      puVar21 = puVar2 + 1;
      if ((ulong)*puVar2 != 0) {
        puVar2 = puVar21 + *puVar2;
        plVar1 = param_1 + 7;
        do {
          puVar19 = &DAT_cbf29ce484222645;
          piVar11 = (int *)((long)puVar21 + (ulong)*puVar21);
          if ((*(ushort *)((long)piVar11 - (long)*piVar11) < 5) ||
             (uVar14 = (ulong)((ushort *)((long)piVar11 - (long)*piVar11))[2], uVar14 == 0)) {
            puVar18 = (undefined1 *)0x0;
          }
          else {
            puVar3 = (uint *)((long)piVar11 + uVar14);
            puVar18 = (undefined1 *)((long)puVar3 + (ulong)*puVar3);
          }
          __s = puVar18 + 4;
          sVar9 = strlen(__s);
          bVar4 = puVar18[4];
          if (bVar4 != 0) {
            pbVar15 = puVar18 + 5;
            do {
              puVar19 = (undefined1 *)(((ulong)puVar19 ^ (ulong)bVar4) * 0x100000001b3);
              bVar4 = *pbVar15;
              pbVar15 = pbVar15 + 1;
            } while (bVar4 != 0);
          }
          puVar20 = (undefined1 *)param_1[2];
          if (puVar20 == (undefined1 *)0x0) {
LAB_028ca610:
            plVar13 = (long *)(**(code **)(*(long *)param_1[8] + 0x10))((long *)param_1[8],0x58,8);
            if (plVar13 == (long *)0x0) {
              (**(code **)(*(long *)param_1[8] + 0xb8))();
            }
            uVar23 = param_1[8];
            if (((*PTR_DAT_04379520 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), iVar7 != 0)) {
              FUN_008a62a4(PTR_DAT_04379528);
              FUN_00100250(PTR_LAB_04379530,PTR_DAT_04379528,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379520);
            }
            lVar10 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
            if (lVar10 != 0) {
              if (0xf < *(ulong *)(lVar10 + 0x80)) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              *(undefined8 *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = uVar23;
              *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
            }
            plVar13[2] = (long)puVar19;
            plVar13[3] = (long)__s;
            plVar13[10] = 0;
            plVar13[4] = sVar9;
            plVar13[5] = 0;
            plVar13[6] = (long)piVar11;
            plVar13[7] = (long)puVar19;
            plVar13[8] = (long)__s;
            plVar13[9] = sVar9;
            if (lVar10 != 0) {
              *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
            }
            *plVar13 = 0;
            plVar13[1] = (long)puVar19;
            if ((puVar20 == (undefined1 *)0x0) ||
               (*(float *)(param_1 + 0xd) * (float)puVar20 < (float)(param_1[0xc] + 1))) {
              uVar14 = (ulong)(puVar20 < (undefined1 *)0x3 ||
                              ((ulong)puVar20 & (ulong)(puVar20 + -1)) != 0) | (long)puVar20 << 1;
              uVar17 = (ulong)((float)(param_1[0xc] + 1) / *(float *)(param_1 + 0xd));
              if (uVar17 <= uVar14) {
                uVar17 = uVar14;
              }
              FUN_028ca9dc(plVar22,uVar17);
              puVar20 = (undefined1 *)param_1[2];
              if (((ulong)puVar20 & (ulong)(puVar20 + -1)) == 0) {
                puVar18 = (undefined1 *)((ulong)(puVar20 + -1) & (ulong)puVar19);
              }
              else if (puVar19 < puVar20) {
                puVar18 = puVar19;
              }
              else {
                uVar14 = 0;
                if (puVar20 != (undefined1 *)0x0) {
                  uVar14 = (ulong)puVar19 / (ulong)puVar20;
                }
                puVar18 = puVar19 + -(uVar14 * (long)puVar20);
              }
            }
            plVar12 = *(long **)(*plVar22 + (long)puVar18 * 8);
            if (plVar12 == (long *)0x0) {
              *plVar13 = *plVar1;
              *plVar1 = (long)plVar13;
              *(long **)(*plVar22 + (long)puVar18 * 8) = plVar1;
              if (*plVar13 != 0) {
                puVar19 = *(undefined1 **)(*plVar13 + 8);
                if (((ulong)puVar20 & (ulong)(puVar20 + -1)) == 0) {
                  puVar19 = (undefined1 *)((ulong)puVar19 & (ulong)(puVar20 + -1));
                }
                else if (puVar20 <= puVar19) {
                  uVar14 = 0;
                  if (puVar20 != (undefined1 *)0x0) {
                    uVar14 = (ulong)puVar19 / (ulong)puVar20;
                  }
                  puVar19 = puVar19 + -(uVar14 * (long)puVar20);
                }
                plVar12 = (long *)(*plVar22 + (long)puVar19 * 8);
                goto LAB_028ca460;
              }
            }
            else {
              *plVar13 = *plVar12;
LAB_028ca460:
              *plVar12 = (long)plVar13;
            }
            param_1[0xc] = param_1[0xc] + 1;
          }
          else {
            uVar14 = (long)puVar20 - ((ulong)puVar20 >> 1 & 0x5555555555555555);
            uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
            uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
            if (uVar14 < 2) {
              puVar18 = (undefined1 *)((ulong)(puVar20 + -1) & (ulong)puVar19);
            }
            else {
              puVar18 = puVar19;
              if (puVar20 <= puVar19) {
                uVar17 = 0;
                if (puVar20 != (undefined1 *)0x0) {
                  uVar17 = (ulong)puVar19 / (ulong)puVar20;
                }
                puVar18 = puVar19 + -(uVar17 * (long)puVar20);
              }
            }
            plVar13 = *(long **)(*plVar22 + (long)puVar18 * 8);
            if (plVar13 == (long *)0x0) goto LAB_028ca610;
            if (uVar14 < 2) {
              do {
                plVar13 = (long *)*plVar13;
                if ((plVar13 == (long *)0x0) ||
                   ((undefined1 *)plVar13[1] != puVar19 &&
                    (undefined1 *)((ulong)plVar13[1] & (ulong)(puVar20 + -1)) != puVar18))
                goto LAB_028ca610;
              } while ((undefined1 *)plVar13[2] != puVar19);
            }
            else {
              do {
                plVar13 = (long *)*plVar13;
                if (plVar13 == (long *)0x0) goto LAB_028ca610;
                puVar16 = (undefined1 *)plVar13[1];
                if (puVar16 != puVar19) {
                  if (puVar20 <= puVar16) {
                    uVar14 = 0;
                    if (puVar20 != (undefined1 *)0x0) {
                      uVar14 = (ulong)puVar16 / (ulong)puVar20;
                    }
                    puVar16 = puVar16 + -(uVar14 * (long)puVar20);
                  }
                  if (puVar16 != puVar18) goto LAB_028ca610;
                }
              } while ((undefined1 *)plVar13[2] != puVar19);
            }
          }
          puVar21 = puVar21 + 1;
        } while (puVar21 != puVar2);
      }
    }
  }
  return;
}


