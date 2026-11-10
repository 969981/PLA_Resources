/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a153e0; name: FUN_01a153e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a153e0(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                 long param_4,int param_5,int param_6,uint param_7)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 uVar10;
  bool bVar11;
  int iVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  undefined1 *puVar16;
  ulong uVar17;
  ulong uVar18;
  undefined1 *puVar19;
  long *plVar20;
  ulong uVar21;
  undefined1 *puVar22;
  long *plVar23;
  float extraout_s0;
  float fVar24;
  float extraout_var;
  float fVar25;
  float extraout_var_00;
  float extraout_var_01;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auVar35 [12];
  float fVar33;
  undefined8 uVar34;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined4 uVar39;
  undefined8 *local_b0 [2];
  long *local_a0;
  long *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long *local_48;
  undefined8 local_38;
  
  fVar33 = param_3._12_4_;
  fVar32 = param_3._8_4_;
  fVar31 = param_3._4_4_;
  fVar30 = param_3._0_4_;
  fVar29 = param_2._12_4_;
  fVar28 = param_2._8_4_;
  fVar27 = param_2._4_4_;
  fVar26 = param_2._0_4_;
  param_4 = param_4 + (long)param_5 * 0x40;
  *(int *)(param_4 + 0xed00) = param_6;
  *(uint *)(param_4 + 0xed04) = param_7;
  *(undefined8 *)(param_4 + 0xed10) = 0;
  *(undefined8 *)(param_4 + 0xed18) = 0;
  *(undefined4 *)(param_4 + 0xed30) = 0x40400000;
  *(undefined1 *)(param_4 + 0xed34) = 0;
  if (((*PTR_DAT_04379578 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_04379578), iVar12 != 0)) {
    FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379578);
  }
  lVar14 = *(long *)PTR_DAT_04379580;
  *(long *)PTR_DAT_04379588 = lVar14;
  if (param_6 == 2) {
    lVar14 = *(long *)(lVar14 + 200);
    local_90 = CONCAT71(local_90._1_7_,(char)param_7);
    FUN_00995ec4(&local_48,lVar14,&local_90);
    if (local_48 != (long *)0x0) {
      uVar15 = *(ulong *)(lVar14 + 0x70);
      if (uVar15 != 0) {
        uVar17 = uVar15 - (uVar15 >> 1 & 0x5555555555555555);
        uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
        uVar21 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        uVar17 = (ulong)(param_7 & 0xff);
        if (uVar21 < 2) {
          uVar18 = (ulong)((int)uVar15 - 1U & param_7 & 0xff);
        }
        else {
          uVar18 = uVar17;
          if (uVar15 <= uVar17) {
            uVar18 = 0;
            if (uVar15 != 0) {
              uVar18 = uVar17 / uVar15;
            }
            uVar18 = uVar17 - uVar18 * uVar15;
          }
        }
        plVar20 = *(long **)(*(long *)(lVar14 + 0x68) + uVar18 * 8);
        if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
          if (uVar21 < 2) {
            do {
              if (plVar20[1] == uVar17) {
                if ((uint)*(byte *)(plVar20 + 2) == (param_7 & 0xff)) goto LAB_01a15570;
              }
              else if ((plVar20[1] & uVar15 - 1) != uVar18) break;
              plVar20 = (long *)*plVar20;
            } while (plVar20 != (long *)0x0);
          }
          else {
            do {
              uVar21 = plVar20[1];
              if (uVar21 == uVar17) {
                if ((uint)*(byte *)(plVar20 + 2) == (param_7 & 0xff)) goto LAB_01a15570;
              }
              else {
                if (uVar15 <= uVar21) {
                  uVar5 = 0;
                  if (uVar15 != 0) {
                    uVar5 = uVar21 / uVar15;
                  }
                  uVar21 = uVar21 - uVar5 * uVar15;
                }
                if (uVar21 != uVar18) break;
              }
              plVar20 = (long *)*plVar20;
            } while (plVar20 != (long *)0x0);
          }
        }
      }
      goto switchD_01a15590_caseD_1;
    }
  }
  uVar13 = 0;
  uVar15 = 0;
  goto LAB_01a15f38;
LAB_01a15570:
  switch(*(undefined1 *)((long)plVar20 + 0x24)) {
  case 0:
    if (((*PTR_DAT_04379660 & 1) == 0) &&
       (iVar12 = __cxa_guard_acquire(PTR_DAT_04379660), iVar12 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    lVar14 = *(long *)PTR_DAT_04379668;
    *(long *)PTR_DAT_04379670 = lVar14;
    puVar16 = *(undefined1 **)(lVar14 + 0x60);
    uVar39 = 0;
    if (puVar16 != (undefined1 *)0x0) {
      uVar15 = (long)puVar16 - ((ulong)puVar16 >> 1 & 0x5555555555555555);
      uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
      uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar15 < 2) {
        puVar19 = (undefined1 *)((ulong)(puVar16 + -1) & 0x8013c350d279d9f9);
      }
      else if (&DAT_8013c350d279d9f9 < puVar16) {
        puVar19 = &DAT_8013c350d279d9f9;
      }
      else {
        uVar17 = 0;
        if (puVar16 != (undefined1 *)0x0) {
          uVar17 = 0x8013c350d279d9f9 / (ulong)puVar16;
        }
        puVar19 = &DAT_8013c350d279d9f9 + -(uVar17 * (long)puVar16);
      }
      plVar20 = *(long **)(*(long *)(lVar14 + 0x58) + (long)puVar19 * 8);
      if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
        if (uVar15 < 2) {
          do {
            if ((undefined1 *)plVar20[1] == &DAT_8013c350d279d9f9) {
              if ((undefined1 *)plVar20[2] == &DAT_8013c350d279d9f9) goto LAB_01a157f0;
            }
            else if ((undefined1 *)((ulong)plVar20[1] & (ulong)(puVar16 + -1)) != puVar19) break;
            plVar20 = (long *)*plVar20;
          } while (plVar20 != (long *)0x0);
        }
        else {
          do {
            puVar22 = (undefined1 *)plVar20[1];
            if (puVar22 == &DAT_8013c350d279d9f9) {
              if ((undefined1 *)plVar20[2] == &DAT_8013c350d279d9f9) goto LAB_01a157f0;
            }
            else {
              if (puVar16 <= puVar22) {
                uVar15 = 0;
                if (puVar16 != (undefined1 *)0x0) {
                  uVar15 = (ulong)puVar22 / (ulong)puVar16;
                }
                puVar22 = puVar22 + -(uVar15 * (long)puVar16);
              }
              if (puVar22 != puVar19) break;
            }
            plVar20 = (long *)*plVar20;
          } while (plVar20 != (long *)0x0);
        }
      }
    }
    break;
  case 1:
switchD_01a15590_caseD_1:
    if (((*PTR_DAT_04379660 & 1) == 0) &&
       (iVar12 = __cxa_guard_acquire(PTR_DAT_04379660), iVar12 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    lVar14 = *(long *)PTR_DAT_04379668;
    *(long *)PTR_DAT_04379670 = lVar14;
    puVar16 = *(undefined1 **)(lVar14 + 0x60);
    uVar39 = 0;
    if (puVar16 != (undefined1 *)0x0) {
      uVar15 = (long)puVar16 - ((ulong)puVar16 >> 1 & 0x5555555555555555);
      uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
      uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar15 < 2) {
        puVar19 = (undefined1 *)((ulong)(puVar16 + -1) & 0x8013c350d279d9f9);
      }
      else if (&DAT_8013c350d279d9f9 < puVar16) {
        puVar19 = &DAT_8013c350d279d9f9;
      }
      else {
        uVar17 = 0;
        if (puVar16 != (undefined1 *)0x0) {
          uVar17 = 0x8013c350d279d9f9 / (ulong)puVar16;
        }
        puVar19 = &DAT_8013c350d279d9f9 + -(uVar17 * (long)puVar16);
      }
      plVar20 = *(long **)(*(long *)(lVar14 + 0x58) + (long)puVar19 * 8);
      if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
        if (uVar15 < 2) {
          do {
            if ((undefined1 *)plVar20[1] == &DAT_8013c350d279d9f9) {
              if ((undefined1 *)plVar20[2] == &DAT_8013c350d279d9f9) goto LAB_01a15654;
            }
            else if ((undefined1 *)((ulong)plVar20[1] & (ulong)(puVar16 + -1)) != puVar19) break;
            plVar20 = (long *)*plVar20;
          } while (plVar20 != (long *)0x0);
        }
        else {
          do {
            puVar22 = (undefined1 *)plVar20[1];
            if (puVar22 == &DAT_8013c350d279d9f9) {
              if ((undefined1 *)plVar20[2] == &DAT_8013c350d279d9f9) goto LAB_01a15654;
            }
            else {
              if (puVar16 <= puVar22) {
                uVar15 = 0;
                if (puVar16 != (undefined1 *)0x0) {
                  uVar15 = (ulong)puVar22 / (ulong)puVar16;
                }
                puVar22 = puVar22 + -(uVar15 * (long)puVar16);
              }
              if (puVar22 != puVar19) break;
            }
            plVar20 = (long *)*plVar20;
          } while (plVar20 != (long *)0x0);
        }
      }
    }
    break;
  case 2:
    if (((*PTR_DAT_04379660 & 1) == 0) &&
       (iVar12 = __cxa_guard_acquire(PTR_DAT_04379660), iVar12 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    lVar14 = *(long *)PTR_DAT_04379668;
    *(long *)PTR_DAT_04379670 = lVar14;
    puVar16 = *(undefined1 **)(lVar14 + 0x60);
    uVar39 = 0;
    if (puVar16 != (undefined1 *)0x0) {
      uVar15 = (long)puVar16 - ((ulong)puVar16 >> 1 & 0x5555555555555555);
      uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
      uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar15 < 2) {
        puVar19 = (undefined1 *)((ulong)(puVar16 + -1) & 0x8013c350d279d9f9);
      }
      else if (&DAT_8013c350d279d9f9 < puVar16) {
        puVar19 = &DAT_8013c350d279d9f9;
      }
      else {
        uVar17 = 0;
        if (puVar16 != (undefined1 *)0x0) {
          uVar17 = 0x8013c350d279d9f9 / (ulong)puVar16;
        }
        puVar19 = &DAT_8013c350d279d9f9 + -(uVar17 * (long)puVar16);
      }
      plVar20 = *(long **)(*(long *)(lVar14 + 0x58) + (long)puVar19 * 8);
      if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
        if (uVar15 < 2) {
          do {
            if ((undefined1 *)plVar20[1] == &DAT_8013c350d279d9f9) {
              if ((undefined1 *)plVar20[2] == &DAT_8013c350d279d9f9) goto LAB_01a1598c;
            }
            else if ((undefined1 *)((ulong)plVar20[1] & (ulong)(puVar16 + -1)) != puVar19) break;
            plVar20 = (long *)*plVar20;
          } while (plVar20 != (long *)0x0);
        }
        else {
          do {
            puVar22 = (undefined1 *)plVar20[1];
            if (puVar22 == &DAT_8013c350d279d9f9) {
              if ((undefined1 *)plVar20[2] == &DAT_8013c350d279d9f9) goto LAB_01a1598c;
            }
            else {
              if (puVar16 <= puVar22) {
                uVar15 = 0;
                if (puVar16 != (undefined1 *)0x0) {
                  uVar15 = (ulong)puVar22 / (ulong)puVar16;
                }
                puVar22 = puVar22 + -(uVar15 * (long)puVar16);
              }
              if (puVar22 != puVar19) break;
            }
            plVar20 = (long *)*plVar20;
          } while (plVar20 != (long *)0x0);
        }
      }
    }
    break;
  case 3:
    if (((*PTR_DAT_04379660 & 1) == 0) &&
       (iVar12 = __cxa_guard_acquire(PTR_DAT_04379660), iVar12 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    lVar14 = *(long *)PTR_DAT_04379668;
    *(long *)PTR_DAT_04379670 = lVar14;
    puVar16 = *(undefined1 **)(lVar14 + 0x60);
    uVar39 = 0;
    if (puVar16 != (undefined1 *)0x0) {
      uVar15 = (long)puVar16 - ((ulong)puVar16 >> 1 & 0x5555555555555555);
      uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
      uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar15 < 2) {
        puVar19 = (undefined1 *)((ulong)(puVar16 + -1) & 0x8013c350d279d9f9);
      }
      else if (&DAT_8013c350d279d9f9 < puVar16) {
        puVar19 = &DAT_8013c350d279d9f9;
      }
      else {
        uVar17 = 0;
        if (puVar16 != (undefined1 *)0x0) {
          uVar17 = 0x8013c350d279d9f9 / (ulong)puVar16;
        }
        puVar19 = &DAT_8013c350d279d9f9 + -(uVar17 * (long)puVar16);
      }
      plVar20 = *(long **)(*(long *)(lVar14 + 0x58) + (long)puVar19 * 8);
      if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
        if (uVar15 < 2) {
          do {
            if ((undefined1 *)plVar20[1] == &DAT_8013c350d279d9f9) {
              if ((undefined1 *)plVar20[2] == &DAT_8013c350d279d9f9) goto LAB_01a15b70;
            }
            else if ((undefined1 *)((ulong)plVar20[1] & (ulong)(puVar16 + -1)) != puVar19) break;
            plVar20 = (long *)*plVar20;
          } while (plVar20 != (long *)0x0);
        }
        else {
          do {
            puVar22 = (undefined1 *)plVar20[1];
            if (puVar22 == &DAT_8013c350d279d9f9) {
              if ((undefined1 *)plVar20[2] == &DAT_8013c350d279d9f9) goto LAB_01a15b70;
            }
            else {
              if (puVar16 <= puVar22) {
                uVar15 = 0;
                if (puVar16 != (undefined1 *)0x0) {
                  uVar15 = (ulong)puVar22 / (ulong)puVar16;
                }
                puVar22 = puVar22 + -(uVar15 * (long)puVar16);
              }
              if (puVar22 != puVar19) break;
            }
            plVar20 = (long *)*plVar20;
          } while (plVar20 != (long *)0x0);
        }
      }
    }
    break;
  default:
    uVar39 = 0x40400000;
  }
  goto LAB_01a15d04;
LAB_01a15b70:
  plVar20 = (long *)plVar20[3];
  if (plVar20 != (long *)0x0) {
    plVar1 = plVar20 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar15 = plVar20[0x21];
    uVar39 = 0;
    if (uVar15 != 0) {
      uVar17 = uVar15 - (uVar15 >> 1 & 0x5555555555555555);
      uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
      uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar17 < 2) {
        uVar21 = uVar15 - 1 & 0xa1e78d29a6bea02f;
      }
      else if (uVar15 < 0xa1e78d29a6bea030) {
        uVar21 = 0;
        if (uVar15 != 0) {
          uVar21 = 0xa1e78d29a6bea02f / uVar15;
        }
        uVar21 = 0xa1e78d29a6bea02f - uVar21 * uVar15;
      }
      else {
        uVar21 = 0xa1e78d29a6bea02f;
      }
      plVar23 = *(long **)(plVar20[0x20] + uVar21 * 8);
      if ((plVar23 != (long *)0x0) && (plVar23 = (long *)*plVar23, plVar23 != (long *)0x0)) {
        if (uVar17 < 2) {
          do {
            if (plVar23[1] == 0xa1e78d29a6bea02f) {
              if (plVar23[2] == -0x5e1872d659415fd1) goto LAB_01a1604c;
            }
            else if ((plVar23[1] & uVar15 - 1) != uVar21) break;
            plVar23 = (long *)*plVar23;
          } while (plVar23 != (long *)0x0);
        }
        else {
          do {
            uVar17 = plVar23[1];
            if (uVar17 == 0xa1e78d29a6bea02f) {
              if (plVar23[2] == -0x5e1872d659415fd1) goto LAB_01a1604c;
            }
            else {
              if (uVar15 <= uVar17) {
                uVar18 = 0;
                if (uVar15 != 0) {
                  uVar18 = uVar17 / uVar15;
                }
                uVar17 = uVar17 - uVar18 * uVar15;
              }
              if (uVar17 != uVar21) break;
            }
            plVar23 = (long *)*plVar23;
          } while (plVar23 != (long *)0x0);
        }
      }
    }
    goto LAB_01a16050;
  }
  goto LAB_01a15d04;
LAB_01a1604c:
  uVar39 = (undefined4)plVar23[6];
LAB_01a16050:
  do {
    iVar12 = (int)*plVar1 + -1;
    bVar11 = iVar12 == 0;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar12;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  goto LAB_01a15d00;
LAB_01a1598c:
  plVar20 = (long *)plVar20[3];
  if (plVar20 != (long *)0x0) {
    plVar1 = plVar20 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar15 = plVar20[0x21];
    uVar39 = 0;
    if (uVar15 != 0) {
      uVar17 = uVar15 - (uVar15 >> 1 & 0x5555555555555555);
      uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
      uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar17 < 2) {
        uVar21 = uVar15 - 1 & 0x98cdbbb71efc51d9;
      }
      else if (uVar15 < 0x98cdbbb71efc51da) {
        uVar21 = 0;
        if (uVar15 != 0) {
          uVar21 = 0x98cdbbb71efc51d9 / uVar15;
        }
        uVar21 = 0x98cdbbb71efc51d9 - uVar21 * uVar15;
      }
      else {
        uVar21 = 0x98cdbbb71efc51d9;
      }
      plVar23 = *(long **)(plVar20[0x20] + uVar21 * 8);
      if ((plVar23 != (long *)0x0) && (plVar23 = (long *)*plVar23, plVar23 != (long *)0x0)) {
        if (uVar17 < 2) {
          do {
            if (plVar23[1] == 0x98cdbbb71efc51d9) {
              if (plVar23[2] == -0x67324448e103ae27) goto LAB_01a15fcc;
            }
            else if ((plVar23[1] & uVar15 - 1) != uVar21) break;
            plVar23 = (long *)*plVar23;
          } while (plVar23 != (long *)0x0);
        }
        else {
          do {
            uVar17 = plVar23[1];
            if (uVar17 == 0x98cdbbb71efc51d9) {
              if (plVar23[2] == -0x67324448e103ae27) goto LAB_01a15fcc;
            }
            else {
              if (uVar15 <= uVar17) {
                uVar18 = 0;
                if (uVar15 != 0) {
                  uVar18 = uVar17 / uVar15;
                }
                uVar17 = uVar17 - uVar18 * uVar15;
              }
              if (uVar17 != uVar21) break;
            }
            plVar23 = (long *)*plVar23;
          } while (plVar23 != (long *)0x0);
        }
      }
    }
    goto LAB_01a15fd0;
  }
  goto LAB_01a15d04;
LAB_01a15fcc:
  uVar39 = (undefined4)plVar23[6];
LAB_01a15fd0:
  do {
    iVar12 = (int)*plVar1 + -1;
    bVar11 = iVar12 == 0;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar12;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  goto LAB_01a15d00;
LAB_01a157f0:
  plVar20 = (long *)plVar20[3];
  if (plVar20 != (long *)0x0) {
    plVar1 = plVar20 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar15 = plVar20[0x21];
    uVar39 = 0;
    if (uVar15 != 0) {
      uVar17 = uVar15 - (uVar15 >> 1 & 0x5555555555555555);
      uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
      uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar17 < 2) {
        uVar21 = uVar15 - 1 & 0x98cdd4b71efc7c54;
      }
      else if (uVar15 < 0x98cdd4b71efc7c55) {
        uVar21 = 0;
        if (uVar15 != 0) {
          uVar21 = 0x98cdd4b71efc7c54 / uVar15;
        }
        uVar21 = 0x98cdd4b71efc7c54 - uVar21 * uVar15;
      }
      else {
        uVar21 = 0x98cdd4b71efc7c54;
      }
      plVar23 = *(long **)(plVar20[0x20] + uVar21 * 8);
      if ((plVar23 != (long *)0x0) && (plVar23 = (long *)*plVar23, plVar23 != (long *)0x0)) {
        if (uVar17 < 2) {
          do {
            if (plVar23[1] == 0x98cdd4b71efc7c54) {
              if (plVar23[2] == -0x67322b48e10383ac) goto LAB_01a15cec;
            }
            else if ((plVar23[1] & uVar15 - 1) != uVar21) break;
            plVar23 = (long *)*plVar23;
          } while (plVar23 != (long *)0x0);
        }
        else {
          do {
            uVar17 = plVar23[1];
            if (uVar17 == 0x98cdd4b71efc7c54) {
              if (plVar23[2] == -0x67322b48e10383ac) goto LAB_01a15cec;
            }
            else {
              if (uVar15 <= uVar17) {
                uVar18 = 0;
                if (uVar15 != 0) {
                  uVar18 = uVar17 / uVar15;
                }
                uVar17 = uVar17 - uVar18 * uVar15;
              }
              if (uVar17 != uVar21) break;
            }
            plVar23 = (long *)*plVar23;
          } while (plVar23 != (long *)0x0);
        }
      }
    }
    goto LAB_01a15cf0;
  }
  goto LAB_01a15d04;
LAB_01a15cec:
  uVar39 = (undefined4)plVar23[6];
LAB_01a15cf0:
  do {
    iVar12 = (int)*plVar1 + -1;
    bVar11 = iVar12 == 0;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar12;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  goto LAB_01a15d00;
LAB_01a15654:
  plVar20 = (long *)plVar20[3];
  if (plVar20 != (long *)0x0) {
    plVar1 = plVar20 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar15 = plVar20[0x21];
    uVar39 = 0;
    if (uVar15 != 0) {
      uVar17 = uVar15 - (uVar15 >> 1 & 0x5555555555555555);
      uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
      uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar17 < 2) {
        uVar21 = uVar15 - 1 & 0x98cdbab71efc5026;
      }
      else if (uVar15 < 0x98cdbab71efc5027) {
        uVar21 = 0;
        if (uVar15 != 0) {
          uVar21 = 0x98cdbab71efc5026 / uVar15;
        }
        uVar21 = 0x98cdbab71efc5026 - uVar21 * uVar15;
      }
      else {
        uVar21 = 0x98cdbab71efc5026;
      }
      plVar23 = *(long **)(plVar20[0x20] + uVar21 * 8);
      if ((plVar23 != (long *)0x0) && (plVar23 = (long *)*plVar23, plVar23 != (long *)0x0)) {
        if (uVar17 < 2) {
          do {
            if (plVar23[1] == 0x98cdbab71efc5026) {
              if (plVar23[2] == -0x67324548e103afda) goto LAB_01a15c90;
            }
            else if ((plVar23[1] & uVar15 - 1) != uVar21) break;
            plVar23 = (long *)*plVar23;
          } while (plVar23 != (long *)0x0);
        }
        else {
          do {
            uVar17 = plVar23[1];
            if (uVar17 == 0x98cdbab71efc5026) {
              if (plVar23[2] == -0x67324548e103afda) goto LAB_01a15c90;
            }
            else {
              if (uVar15 <= uVar17) {
                uVar18 = 0;
                if (uVar15 != 0) {
                  uVar18 = uVar17 / uVar15;
                }
                uVar17 = uVar17 - uVar18 * uVar15;
              }
              if (uVar17 != uVar21) break;
            }
            plVar23 = (long *)*plVar23;
          } while (plVar23 != (long *)0x0);
        }
      }
    }
    goto LAB_01a15c94;
  }
  goto LAB_01a15d04;
LAB_01a15c90:
  uVar39 = (undefined4)plVar23[6];
LAB_01a15c94:
  do {
    iVar12 = (int)*plVar1 + -1;
    bVar11 = iVar12 == 0;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar12;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_01a15d00:
  if (bVar11) {
    (**(code **)(*plVar20 + 0x10))();
  }
LAB_01a15d04:
  *(undefined4 *)(param_4 + 0xed30) = uVar39;
  local_70 = *(undefined8 *)(PTR_DAT_0437a518 + 0x20);
  uStack_68 = *(undefined8 *)(PTR_DAT_0437a518 + 0x28);
  local_60 = *(undefined8 *)(PTR_DAT_0437a518 + 0x30);
  uStack_58 = *(undefined8 *)(PTR_DAT_0437a518 + 0x38);
  local_90 = *(undefined8 *)PTR_DAT_0437a518;
  uStack_88 = *(undefined8 *)(PTR_DAT_0437a518 + 8);
  local_80 = *(undefined8 *)(PTR_DAT_0437a518 + 0x10);
  uStack_78 = *(undefined8 *)(PTR_DAT_0437a518 + 0x18);
  local_98 = local_48;
  if (local_48 == (long *)0x0) {
    FUN_00aa8338(&local_98,9,&local_90);
  }
  else {
    lVar14 = local_48[0xb];
    if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar14 + 0x10) == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
      *(undefined8 *)(lVar14 + 0x10) = uVar13;
    }
    plVar20 = local_98;
    piVar2 = (int *)(lVar14 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    FUN_00aa8338(&local_98,9,&local_90);
    if (plVar20 != (long *)0x0) {
      lVar14 = plVar20[0xb];
      piVar2 = (int *)(lVar14 + 0xc);
      do {
        iVar12 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar12 + -1 == 0) {
        *(undefined8 *)(lVar14 + 0x18) = 0;
        (**(code **)(*plVar20 + 0x20))(plVar20);
      }
    }
  }
  uVar10 = uStack_58;
  uVar13 = local_60;
  lVar14 = FUN_009b807c(local_48 + 0x1e,local_b0);
  if (lVar14 == 0) {
LAB_01a16064:
    auVar36._8_8_ = _UNK_03888fc8;
    auVar36._0_8_ = _DAT_03888fc0;
    auVar35 = auVar36._0_12_;
  }
  else {
    FUN_01a73650(local_b0);
    FUN_00956dac(&local_a0,local_b0);
    if (local_b0[0] != (undefined8 *)0x0) {
      piVar2 = (int *)(local_b0[0] + 1);
      do {
        iVar12 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar12 + -1 == 0) {
        local_b0[0][2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar14 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar14;
        local_38 = *local_b0[0];
        FUN_02a44274(lVar14 + 0xd8,&local_38);
      }
    }
    if (local_a0 == (long *)0x0) goto LAB_01a16064;
    (**(code **)(*local_a0 + 0x40))();
    (**(code **)(*local_a0 + 0x40))();
    (**(code **)(*local_a0 + 0x40))();
    fVar24 = extraout_s0 * extraout_s0;
    fVar25 = extraout_var * extraout_var;
    fVar26 = fVar26 * fVar26;
    fVar27 = fVar27 * fVar27;
    auVar37._4_4_ = fVar25;
    auVar37._0_4_ = fVar24;
    auVar37._8_4_ = extraout_var_00 * extraout_var_00;
    auVar37._12_4_ = extraout_var_01 * extraout_var_01;
    auVar38._4_4_ = fVar25;
    auVar38._0_4_ = fVar24;
    auVar38._8_4_ = extraout_var_00 * extraout_var_00;
    auVar38._12_4_ = extraout_var_01 * extraout_var_01;
    auVar36 = NEON_ext(auVar37,auVar38,8,1);
    fVar30 = fVar30 * fVar30;
    fVar31 = fVar31 * fVar31;
    auVar6._4_4_ = fVar27;
    auVar6._0_4_ = fVar26;
    auVar6._8_4_ = fVar28 * fVar28;
    auVar6._12_4_ = fVar29 * fVar29;
    auVar7._4_4_ = fVar27;
    auVar7._0_4_ = fVar26;
    auVar7._8_4_ = fVar28 * fVar28;
    auVar7._12_4_ = fVar29 * fVar29;
    auVar37 = NEON_ext(auVar6,auVar7,8,1);
    auVar8._4_4_ = fVar31;
    auVar8._0_4_ = fVar30;
    auVar8._8_4_ = fVar32 * fVar32;
    auVar8._12_4_ = fVar33 * fVar33;
    auVar9._4_4_ = fVar31;
    auVar9._0_4_ = fVar30;
    auVar9._8_4_ = fVar32 * fVar32;
    auVar9._12_4_ = fVar33 * fVar33;
    auVar38 = NEON_ext(auVar8,auVar9,8,1);
    uVar34 = CONCAT44(SQRT(auVar37._0_4_ + fVar26 + auVar37._4_4_ + fVar27),
                      SQRT(auVar36._0_4_ + fVar24 + auVar36._4_4_ + fVar25));
    fVar26 = SQRT(auVar38._0_4_ + fVar30 + auVar38._4_4_ + fVar31);
    auVar35._8_4_ = fVar26;
    auVar35._0_8_ = uVar34;
    if (local_a0 != (long *)0x0) {
      lVar14 = local_a0[0xb];
      piVar2 = (int *)(lVar14 + 0xc);
      do {
        iVar12 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar12 + -1 == 0) {
        *(undefined8 *)(lVar14 + 0x18) = 0;
        (**(code **)(*local_a0 + 0x20))();
      }
    }
  }
  uVar13 = CONCAT44((float)((ulong)uVar13 >> 0x20) * auVar35._4_4_,(float)uVar13 * auVar35._0_4_);
  uVar15 = (ulong)(uint)((float)uVar10 * auVar35._8_4_);
  if (local_48 != (long *)0x0) {
    lVar14 = local_48[0xb];
    piVar2 = (int *)(lVar14 + 0xc);
    do {
      iVar12 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar12 + -1 == 0) {
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*local_48 + 0x20))();
    }
  }
LAB_01a15f38:
  *(ulong *)(param_4 + 0xed28) = uVar15;
  *(undefined8 *)(param_4 + 0xed20) = uVar13;
  return;
}


