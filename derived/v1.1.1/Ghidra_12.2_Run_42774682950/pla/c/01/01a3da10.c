/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a3da10; name: FUN_01a3da10
 */


void FUN_01a3da10(float param_1,float param_2,long param_3,float *param_4,float *param_5)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  bool bVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 *puVar10;
  ulong uVar11;
  undefined1 *puVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  undefined1 *puVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long lVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  
  *param_4 = 0.0;
  *param_5 = 0.0;
  if (*(char *)(param_3 + 0xecd8) == '\0') {
    return;
  }
  if (((*PTR_DAT_043796b8 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_043796b8), iVar7 != 0))
  {
    FUN_00100250(PTR_LAB_04379c58,PTR_DAT_043796c0,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_043796b8);
  }
  lVar20 = *(long *)PTR_DAT_043796c0;
  *(long *)PTR_DAT_043796c8 = lVar20;
  if (lVar20 == 0) {
    return;
  }
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379558), iVar7 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar9 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar9;
  plVar19 = *(long **)(lVar9 + 0x230);
  if (plVar19 != (long *)0x0) {
    lVar9 = plVar19[0xb];
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar8;
    }
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  fVar25 = 0.0;
  if ((*(uint *)(plVar19 + 0xd) & 0xc00000) != 0) {
    uVar4 = *(uint *)(plVar19 + 0xd) >> 0x16 & 3;
    if (uVar4 == 3) {
      if (((*PTR_DAT_04379660 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379660), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379660);
      }
      lVar9 = *(long *)PTR_DAT_04379668;
      *(long *)PTR_DAT_04379670 = lVar9;
      puVar10 = *(undefined1 **)(lVar9 + 0x60);
      if (puVar10 != (undefined1 *)0x0) {
        uVar11 = (long)puVar10 - ((ulong)puVar10 >> 1 & 0x5555555555555555);
        uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
        uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar11 < 2) {
          puVar12 = (undefined1 *)((ulong)(puVar10 + -1) & 0xf976cfc5b993016e);
        }
        else if (&DAT_f976cfc5b993016e < puVar10) {
          puVar12 = &DAT_f976cfc5b993016e;
        }
        else {
          uVar13 = 0;
          if (puVar10 != (undefined1 *)0x0) {
            uVar13 = 0xf976cfc5b993016e / (ulong)puVar10;
          }
          puVar12 = &DAT_f976cfc5b993016e + -(uVar13 * (long)puVar10);
        }
        plVar15 = *(long **)(*(long *)(lVar9 + 0x58) + (long)puVar12 * 8);
        if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
          if (uVar11 < 2) {
            do {
              if ((undefined1 *)plVar15[1] == &DAT_f976cfc5b993016e) {
                if ((undefined1 *)plVar15[2] == &DAT_f976cfc5b993016e) goto LAB_01a3e0fc;
              }
              else if ((undefined1 *)((ulong)plVar15[1] & (ulong)(puVar10 + -1)) != puVar12) break;
              plVar15 = (long *)*plVar15;
            } while (plVar15 != (long *)0x0);
          }
          else {
            do {
              puVar16 = (undefined1 *)plVar15[1];
              if (puVar16 == &DAT_f976cfc5b993016e) {
                if ((undefined1 *)plVar15[2] == &DAT_f976cfc5b993016e) goto LAB_01a3e0fc;
              }
              else {
                if (puVar10 <= puVar16) {
                  uVar11 = 0;
                  if (puVar10 != (undefined1 *)0x0) {
                    uVar11 = (ulong)puVar16 / (ulong)puVar10;
                  }
                  puVar16 = puVar16 + -(uVar11 * (long)puVar10);
                }
                if (puVar16 != puVar12) break;
              }
              plVar15 = (long *)*plVar15;
            } while (plVar15 != (long *)0x0);
          }
        }
      }
    }
    else if (uVar4 == 2) {
      if (((*PTR_DAT_04379660 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379660), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379660);
      }
      lVar9 = *(long *)PTR_DAT_04379668;
      *(long *)PTR_DAT_04379670 = lVar9;
      puVar10 = *(undefined1 **)(lVar9 + 0x60);
      if (puVar10 != (undefined1 *)0x0) {
        uVar11 = (long)puVar10 - ((ulong)puVar10 >> 1 & 0x5555555555555555);
        uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
        uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar11 < 2) {
          puVar12 = (undefined1 *)((ulong)(puVar10 + -1) & 0xf976cfc5b993016e);
        }
        else if (&DAT_f976cfc5b993016e < puVar10) {
          puVar12 = &DAT_f976cfc5b993016e;
        }
        else {
          uVar13 = 0;
          if (puVar10 != (undefined1 *)0x0) {
            uVar13 = 0xf976cfc5b993016e / (ulong)puVar10;
          }
          puVar12 = &DAT_f976cfc5b993016e + -(uVar13 * (long)puVar10);
        }
        plVar15 = *(long **)(*(long *)(lVar9 + 0x58) + (long)puVar12 * 8);
        if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
          if (uVar11 < 2) {
            do {
              if ((undefined1 *)plVar15[1] == &DAT_f976cfc5b993016e) {
                if ((undefined1 *)plVar15[2] == &DAT_f976cfc5b993016e) goto LAB_01a3df64;
              }
              else if ((undefined1 *)((ulong)plVar15[1] & (ulong)(puVar10 + -1)) != puVar12) break;
              plVar15 = (long *)*plVar15;
            } while (plVar15 != (long *)0x0);
          }
          else {
            do {
              puVar16 = (undefined1 *)plVar15[1];
              if (puVar16 == &DAT_f976cfc5b993016e) {
                if ((undefined1 *)plVar15[2] == &DAT_f976cfc5b993016e) goto LAB_01a3df64;
              }
              else {
                if (puVar10 <= puVar16) {
                  uVar11 = 0;
                  if (puVar10 != (undefined1 *)0x0) {
                    uVar11 = (ulong)puVar16 / (ulong)puVar10;
                  }
                  puVar16 = puVar16 + -(uVar11 * (long)puVar10);
                }
                if (puVar16 != puVar12) break;
              }
              plVar15 = (long *)*plVar15;
            } while (plVar15 != (long *)0x0);
          }
        }
      }
    }
    else if (uVar4 == 1) {
      if (((*PTR_DAT_04379660 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379660), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379660);
      }
      lVar9 = *(long *)PTR_DAT_04379668;
      *(long *)PTR_DAT_04379670 = lVar9;
      puVar10 = *(undefined1 **)(lVar9 + 0x60);
      if (puVar10 != (undefined1 *)0x0) {
        uVar11 = (long)puVar10 - ((ulong)puVar10 >> 1 & 0x5555555555555555);
        uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
        uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar11 < 2) {
          puVar12 = (undefined1 *)((ulong)(puVar10 + -1) & 0xf976cfc5b993016e);
        }
        else if (&DAT_f976cfc5b993016e < puVar10) {
          puVar12 = &DAT_f976cfc5b993016e;
        }
        else {
          uVar13 = 0;
          if (puVar10 != (undefined1 *)0x0) {
            uVar13 = 0xf976cfc5b993016e / (ulong)puVar10;
          }
          puVar12 = &DAT_f976cfc5b993016e + -(uVar13 * (long)puVar10);
        }
        plVar15 = *(long **)(*(long *)(lVar9 + 0x58) + (long)puVar12 * 8);
        if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
          if (uVar11 < 2) {
            do {
              if ((undefined1 *)plVar15[1] == &DAT_f976cfc5b993016e) {
                if ((undefined1 *)plVar15[2] == &DAT_f976cfc5b993016e) goto LAB_01a3ddcc;
              }
              else if ((undefined1 *)((ulong)plVar15[1] & (ulong)(puVar10 + -1)) != puVar12) break;
              plVar15 = (long *)*plVar15;
            } while (plVar15 != (long *)0x0);
          }
          else {
            do {
              puVar16 = (undefined1 *)plVar15[1];
              if (puVar16 == &DAT_f976cfc5b993016e) {
                if ((undefined1 *)plVar15[2] == &DAT_f976cfc5b993016e) goto LAB_01a3ddcc;
              }
              else {
                if (puVar10 <= puVar16) {
                  uVar11 = 0;
                  if (puVar10 != (undefined1 *)0x0) {
                    uVar11 = (ulong)puVar16 / (ulong)puVar10;
                  }
                  puVar16 = puVar16 + -(uVar11 * (long)puVar10);
                }
                if (puVar16 != puVar12) break;
              }
              plVar15 = (long *)*plVar15;
            } while (plVar15 != (long *)0x0);
          }
        }
      }
    }
  }
joined_r0x01a3e560:
  if (plVar19 != (long *)0x0) {
    lVar9 = plVar19[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*plVar19 + 0x20))(plVar19);
    }
  }
  if (fVar25 <= 0.0) {
    return;
  }
  if (((*PTR_DAT_04379660 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379660), iVar7 != 0))
  {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar9 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar9;
  puVar10 = *(undefined1 **)(lVar9 + 0x60);
  fVar26 = 0.0;
  if (puVar10 != (undefined1 *)0x0) {
    uVar11 = (long)puVar10 - ((ulong)puVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      puVar12 = (undefined1 *)((ulong)(puVar10 + -1) & 0xf976cfc5b993016e);
    }
    else if (&DAT_f976cfc5b993016e < puVar10) {
      puVar12 = &DAT_f976cfc5b993016e;
    }
    else {
      uVar13 = 0;
      if (puVar10 != (undefined1 *)0x0) {
        uVar13 = 0xf976cfc5b993016e / (ulong)puVar10;
      }
      puVar12 = &DAT_f976cfc5b993016e + -(uVar13 * (long)puVar10);
    }
    plVar19 = *(long **)(*(long *)(lVar9 + 0x58) + (long)puVar12 * 8);
    if ((plVar19 != (long *)0x0) && (plVar19 = (long *)*plVar19, plVar19 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if ((undefined1 *)plVar19[1] == &DAT_f976cfc5b993016e) {
            if ((undefined1 *)plVar19[2] == &DAT_f976cfc5b993016e) goto LAB_01a3dc18;
          }
          else if ((undefined1 *)((ulong)plVar19[1] & (ulong)(puVar10 + -1)) != puVar12) break;
          plVar19 = (long *)*plVar19;
        } while (plVar19 != (long *)0x0);
      }
      else {
        do {
          puVar16 = (undefined1 *)plVar19[1];
          if (puVar16 == &DAT_f976cfc5b993016e) {
            if ((undefined1 *)plVar19[2] == &DAT_f976cfc5b993016e) goto LAB_01a3dc18;
          }
          else {
            if (puVar10 <= puVar16) {
              uVar11 = 0;
              if (puVar10 != (undefined1 *)0x0) {
                uVar11 = (ulong)puVar16 / (ulong)puVar10;
              }
              puVar16 = puVar16 + -(uVar11 * (long)puVar10);
            }
            if (puVar16 != puVar12) break;
          }
          plVar19 = (long *)*plVar19;
        } while (plVar19 != (long *)0x0);
      }
    }
  }
LAB_01a3e258:
  lVar20 = FUN_00da99ac(lVar20 + 0x4d0,1);
  if ((*(byte *)(lVar20 + 0x58) & 1) == 0) {
    return;
  }
  uVar8 = *(undefined8 *)(lVar20 + 0x1c);
  fVar22 = (float)uVar8;
  fVar21 = *(float *)(lVar20 + 0x24);
  if (fVar26 < ABS(fVar22) - fVar26) {
    fVar24 = 1.0 - fVar26;
    if (fVar22 <= fVar26) {
      fVar23 = 0.0;
      if ((0.0 < fVar24) && (fVar22 < -fVar26)) {
        fVar22 = fVar26 + fVar22;
        goto LAB_01a3e2c4;
      }
    }
    else if (fVar24 <= 0.0) {
      fVar23 = 0.0;
    }
    else {
      fVar22 = fVar22 - fVar26;
LAB_01a3e2c4:
      fVar23 = fVar22 / fVar24;
    }
    *param_5 = fVar25 * fVar23 * param_1;
  }
  fVar21 = (float)((ulong)uVar8 >> 0x20) + fVar21;
  if (ABS(fVar21) - fVar26 <= fVar26) {
    return;
  }
  fVar22 = 1.0 - fVar26;
  if (fVar21 <= fVar26) {
    fVar24 = 0.0;
    if ((fVar22 <= 0.0) || (-fVar26 <= fVar21)) goto LAB_01a3e32c;
    fVar21 = fVar26 + fVar21;
  }
  else {
    if (fVar22 <= 0.0) {
      fVar24 = 0.0;
      goto LAB_01a3e32c;
    }
    fVar21 = fVar21 - fVar26;
  }
  fVar24 = fVar21 / fVar22;
LAB_01a3e32c:
  *param_4 = fVar25 * fVar24 * param_2;
  return;
LAB_01a3e0fc:
  plVar15 = (long *)plVar15[3];
  if (plVar15 != (long *)0x0) {
    plVar17 = plVar15 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar3) {
        *(int *)plVar17 = (int)*plVar17 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar11 = plVar15[0x21];
    fVar25 = 0.0;
    if (uVar11 != 0) {
      uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
      uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
      uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar13 < 2) {
        uVar14 = uVar11 - 1 & 0xf9e2c8bc917788ac;
      }
      else if (uVar11 < 0xf9e2c8bc917788ad) {
        uVar14 = 0;
        if (uVar11 != 0) {
          uVar14 = 0xf9e2c8bc917788ac / uVar11;
        }
        uVar14 = 0xf9e2c8bc917788ac - uVar14 * uVar11;
      }
      else {
        uVar14 = 0xf9e2c8bc917788ac;
      }
      plVar18 = *(long **)(plVar15[0x20] + uVar14 * 8);
      if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
        if (uVar13 < 2) {
          do {
            if (plVar18[1] == 0xf9e2c8bc917788ac) {
              if (plVar18[2] == -0x61d37436e887754) goto LAB_01a3e4ec;
            }
            else if ((plVar18[1] & uVar11 - 1) != uVar14) break;
            plVar18 = (long *)*plVar18;
          } while (plVar18 != (long *)0x0);
        }
        else {
          do {
            uVar13 = plVar18[1];
            if (uVar13 == 0xf9e2c8bc917788ac) {
              if (plVar18[2] == -0x61d37436e887754) goto LAB_01a3e4ec;
            }
            else {
              if (uVar11 <= uVar13) {
                uVar5 = 0;
                if (uVar11 != 0) {
                  uVar5 = uVar13 / uVar11;
                }
                uVar13 = uVar13 - uVar5 * uVar11;
              }
              if (uVar13 != uVar14) break;
            }
            plVar18 = (long *)*plVar18;
          } while (plVar18 != (long *)0x0);
        }
      }
    }
    goto LAB_01a3e4f0;
  }
  goto joined_r0x01a3e560;
LAB_01a3e4ec:
  fVar25 = *(float *)(plVar18 + 6);
LAB_01a3e4f0:
  do {
    iVar7 = (int)*plVar17 + -1;
    bVar6 = iVar7 == 0;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar3) {
      *(int *)plVar17 = iVar7;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  goto LAB_01a3e550;
LAB_01a3df64:
  plVar15 = (long *)plVar15[3];
  if (plVar15 != (long *)0x0) {
    plVar17 = plVar15 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar3) {
        *(int *)plVar17 = (int)*plVar17 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar11 = plVar15[0x21];
    fVar25 = 0.0;
    if (uVar11 != 0) {
      uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
      uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
      uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar13 < 2) {
        uVar14 = uVar11 - 1 & 0xf9e2c9bc91778a5f;
      }
      else if (uVar11 < 0xf9e2c9bc91778a60) {
        uVar14 = 0;
        if (uVar11 != 0) {
          uVar14 = 0xf9e2c9bc91778a5f / uVar11;
        }
        uVar14 = 0xf9e2c9bc91778a5f - uVar14 * uVar11;
      }
      else {
        uVar14 = 0xf9e2c9bc91778a5f;
      }
      plVar18 = *(long **)(plVar15[0x20] + uVar14 * 8);
      if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
        if (uVar13 < 2) {
          do {
            if (plVar18[1] == 0xf9e2c9bc91778a5f) {
              if (plVar18[2] == -0x61d36436e8875a1) goto LAB_01a3e49c;
            }
            else if ((plVar18[1] & uVar11 - 1) != uVar14) break;
            plVar18 = (long *)*plVar18;
          } while (plVar18 != (long *)0x0);
        }
        else {
          do {
            uVar13 = plVar18[1];
            if (uVar13 == 0xf9e2c9bc91778a5f) {
              if (plVar18[2] == -0x61d36436e8875a1) goto LAB_01a3e49c;
            }
            else {
              if (uVar11 <= uVar13) {
                uVar5 = 0;
                if (uVar11 != 0) {
                  uVar5 = uVar13 / uVar11;
                }
                uVar13 = uVar13 - uVar5 * uVar11;
              }
              if (uVar13 != uVar14) break;
            }
            plVar18 = (long *)*plVar18;
          } while (plVar18 != (long *)0x0);
        }
      }
    }
    goto LAB_01a3e4a0;
  }
  goto joined_r0x01a3e560;
LAB_01a3e49c:
  fVar25 = *(float *)(plVar18 + 6);
LAB_01a3e4a0:
  do {
    iVar7 = (int)*plVar17 + -1;
    bVar6 = iVar7 == 0;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar3) {
      *(int *)plVar17 = iVar7;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  goto LAB_01a3e550;
LAB_01a3ddcc:
  plVar15 = (long *)plVar15[3];
  if (plVar15 != (long *)0x0) {
    plVar17 = plVar15 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar3) {
        *(int *)plVar17 = (int)*plVar17 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar11 = plVar15[0x21];
    fVar25 = 0.0;
    if (uVar11 != 0) {
      uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
      uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
      uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar13 < 2) {
        uVar14 = uVar11 - 1 & 0xf9e2cabc91778c12;
      }
      else if (uVar11 < 0xf9e2cabc91778c13) {
        uVar14 = 0;
        if (uVar11 != 0) {
          uVar14 = 0xf9e2cabc91778c12 / uVar11;
        }
        uVar14 = 0xf9e2cabc91778c12 - uVar14 * uVar11;
      }
      else {
        uVar14 = 0xf9e2cabc91778c12;
      }
      plVar18 = *(long **)(plVar15[0x20] + uVar14 * 8);
      if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
        if (uVar13 < 2) {
          do {
            if (plVar18[1] == 0xf9e2cabc91778c12) {
              if (plVar18[2] == -0x61d35436e8873ee) goto LAB_01a3e53c;
            }
            else if ((plVar18[1] & uVar11 - 1) != uVar14) break;
            plVar18 = (long *)*plVar18;
          } while (plVar18 != (long *)0x0);
        }
        else {
          do {
            uVar13 = plVar18[1];
            if (uVar13 == 0xf9e2cabc91778c12) {
              if (plVar18[2] == -0x61d35436e8873ee) goto LAB_01a3e53c;
            }
            else {
              if (uVar11 <= uVar13) {
                uVar5 = 0;
                if (uVar11 != 0) {
                  uVar5 = uVar13 / uVar11;
                }
                uVar13 = uVar13 - uVar5 * uVar11;
              }
              if (uVar13 != uVar14) break;
            }
            plVar18 = (long *)*plVar18;
          } while (plVar18 != (long *)0x0);
        }
      }
    }
    goto LAB_01a3e540;
  }
  goto joined_r0x01a3e560;
LAB_01a3e53c:
  fVar25 = *(float *)(plVar18 + 6);
LAB_01a3e540:
  do {
    iVar7 = (int)*plVar17 + -1;
    bVar6 = iVar7 == 0;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar3) {
      *(int *)plVar17 = iVar7;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_01a3e550:
  if (bVar6) {
    (**(code **)(*plVar15 + 0x10))();
  }
  goto joined_r0x01a3e560;
LAB_01a3dc18:
  plVar19 = (long *)plVar19[3];
  if (plVar19 != (long *)0x0) {
    plVar15 = plVar19 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar3) {
        *(int *)plVar15 = (int)*plVar15 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar11 = plVar19[0x21];
    fVar26 = 0.0;
    if (uVar11 != 0) {
      uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
      uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
      uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar13 < 2) {
        uVar14 = uVar11 - 1 & 0x11e5cdd0b2869af;
      }
      else if (uVar11 < 0x11e5cdd0b2869b0) {
        uVar14 = 0;
        if (uVar11 != 0) {
          uVar14 = 0x11e5cdd0b2869af / uVar11;
        }
        uVar14 = 0x11e5cdd0b2869af - uVar14 * uVar11;
      }
      else {
        uVar14 = 0x11e5cdd0b2869af;
      }
      plVar17 = *(long **)(plVar19[0x20] + uVar14 * 8);
      if ((plVar17 != (long *)0x0) && (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0)) {
        if (uVar13 < 2) {
          do {
            if (plVar17[1] == 0x11e5cdd0b2869af) {
              if (plVar17[2] == 0x11e5cdd0b2869af) goto LAB_01a3e240;
            }
            else if ((plVar17[1] & uVar11 - 1) != uVar14) break;
            plVar17 = (long *)*plVar17;
          } while (plVar17 != (long *)0x0);
        }
        else {
          do {
            uVar13 = plVar17[1];
            if (uVar13 == 0x11e5cdd0b2869af) {
              if (plVar17[2] == 0x11e5cdd0b2869af) goto LAB_01a3e240;
            }
            else {
              if (uVar11 <= uVar13) {
                uVar5 = 0;
                if (uVar11 != 0) {
                  uVar5 = uVar13 / uVar11;
                }
                uVar13 = uVar13 - uVar5 * uVar11;
              }
              if (uVar13 != uVar14) break;
            }
            plVar17 = (long *)*plVar17;
          } while (plVar17 != (long *)0x0);
        }
      }
    }
    goto LAB_01a3e244;
  }
  goto LAB_01a3e258;
LAB_01a3e240:
  fVar26 = *(float *)(plVar17 + 6);
LAB_01a3e244:
  do {
    iVar7 = (int)*plVar15 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar3) {
      *(int *)plVar15 = iVar7;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar7 == 0) {
    (**(code **)(*plVar19 + 0x10))();
  }
  goto LAB_01a3e258;
}


