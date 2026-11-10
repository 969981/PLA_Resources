/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025c7a90; name: FUN_025c7a90
 */


void FUN_025c7a90(long param_1,int *param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  bool bVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  long *plVar15;
  ulong uVar16;
  ulong uVar17;
  undefined1 *puVar18;
  long *plVar19;
  undefined4 uVar20;
  undefined8 *local_60;
  undefined8 uStack_58;
  long *local_50;
  long *local_48;
  long *local_40;
  long *local_38;
  undefined8 local_28;
  
  FUN_0099c748(&local_38,param_1 + 0x220);
  FUN_025caa60(&local_40,param_1);
  if ((local_38 == (long *)0x0) || (local_40 == (long *)0x0)) goto joined_r0x025c8160;
  if (*(long *)(param_1 + 0x240) == 0) {
    local_48 = (long *)0x0;
    goto joined_r0x025c8160;
  }
  FUN_00cfac20(&local_48);
  if (local_48 == (long *)0x0) goto joined_r0x025c8160;
  local_60 = (undefined8 *)0x0;
  uStack_58 = 0;
  FUN_00cf9db0(&local_60,local_48 + 0xf1);
  if (local_60 == (undefined8 *)0x0) {
    local_50 = (long *)0x0;
LAB_025c7b98:
    if (local_50 == (long *)0x0) goto LAB_025c87cc;
LAB_025c7ba0:
    uVar11 = FUN_02674b78();
    puVar7 = PTR_DAT_04379670;
    puVar6 = PTR_DAT_04379668;
    if (((uVar11 & 1) != 0) || (*(char *)(param_1 + 0x259) != '\0')) {
      if (((*PTR_DAT_04379660 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379660), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379660);
      }
      lVar12 = *(long *)PTR_DAT_04379668;
      *(long *)PTR_DAT_04379670 = lVar12;
      puVar13 = *(undefined1 **)(lVar12 + 0x60);
      if (puVar13 != (undefined1 *)0x0) {
        uVar11 = (long)puVar13 - ((ulong)puVar13 >> 1 & 0x5555555555555555);
        uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
        uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar11 < 2) {
          puVar14 = (undefined1 *)((ulong)(puVar13 + -1) & 0x7c08eae870e235e0);
        }
        else if (&DAT_7c08eae870e235e0 < puVar13) {
          puVar14 = &DAT_7c08eae870e235e0;
        }
        else {
          uVar16 = 0;
          if (puVar13 != (undefined1 *)0x0) {
            uVar16 = 0x7c08eae870e235e0 / (ulong)puVar13;
          }
          puVar14 = &DAT_7c08eae870e235e0 + -(uVar16 * (long)puVar13);
        }
        plVar15 = *(long **)(*(long *)(lVar12 + 0x58) + (long)puVar14 * 8);
        if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
          if (uVar11 < 2) {
            do {
              if ((undefined1 *)plVar15[1] == &DAT_7c08eae870e235e0) {
                if ((undefined1 *)plVar15[2] == &DAT_7c08eae870e235e0) goto LAB_025c7fc0;
              }
              else if ((undefined1 *)((ulong)plVar15[1] & (ulong)(puVar13 + -1)) != puVar14)
              goto LAB_025c9058;
              plVar15 = (long *)*plVar15;
              uVar20 = 0;
            } while (plVar15 != (long *)0x0);
            goto LAB_025c80fc;
          }
          do {
            puVar18 = (undefined1 *)plVar15[1];
            if (puVar18 == &DAT_7c08eae870e235e0) {
              if ((undefined1 *)plVar15[2] == &DAT_7c08eae870e235e0) goto LAB_025c7fc0;
            }
            else {
              if (puVar13 <= puVar18) {
                uVar11 = 0;
                if (puVar13 != (undefined1 *)0x0) {
                  uVar11 = (ulong)puVar18 / (ulong)puVar13;
                }
                puVar18 = puVar18 + -(uVar11 * (long)puVar13);
              }
              if (puVar18 != puVar14) break;
            }
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
      }
      goto LAB_025c9058;
    }
    if (*param_2 == 3) {
      if (((*PTR_DAT_04379660 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379660), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379660);
      }
      lVar12 = *(long *)PTR_DAT_04379668;
      *(long *)PTR_DAT_04379670 = lVar12;
      puVar13 = *(undefined1 **)(lVar12 + 0x60);
      if (puVar13 != (undefined1 *)0x0) {
        uVar11 = (long)puVar13 - ((ulong)puVar13 >> 1 & 0x5555555555555555);
        uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
        uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar11 < 2) {
          puVar14 = (undefined1 *)((ulong)(puVar13 + -1) & 0x7c08eae870e235e0);
        }
        else if (&DAT_7c08eae870e235e0 < puVar13) {
          puVar14 = &DAT_7c08eae870e235e0;
        }
        else {
          uVar16 = 0;
          if (puVar13 != (undefined1 *)0x0) {
            uVar16 = 0x7c08eae870e235e0 / (ulong)puVar13;
          }
          puVar14 = &DAT_7c08eae870e235e0 + -(uVar16 * (long)puVar13);
        }
        plVar15 = *(long **)(*(long *)(lVar12 + 0x58) + (long)puVar14 * 8);
        if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
          if (uVar11 < 2) {
            do {
              if ((undefined1 *)plVar15[1] == &DAT_7c08eae870e235e0) {
                if ((undefined1 *)plVar15[2] == &DAT_7c08eae870e235e0) goto LAB_025c8454;
              }
              else if ((undefined1 *)((ulong)plVar15[1] & (ulong)(puVar13 + -1)) != puVar14)
              goto LAB_025c9058;
              plVar15 = (long *)*plVar15;
              uVar20 = 0;
            } while (plVar15 != (long *)0x0);
            goto LAB_025c80fc;
          }
          do {
            puVar18 = (undefined1 *)plVar15[1];
            if (puVar18 == &DAT_7c08eae870e235e0) {
              if ((undefined1 *)plVar15[2] == &DAT_7c08eae870e235e0) goto LAB_025c8454;
            }
            else {
              if (puVar13 <= puVar18) {
                uVar11 = 0;
                if (puVar13 != (undefined1 *)0x0) {
                  uVar11 = (ulong)puVar18 / (ulong)puVar13;
                }
                puVar18 = puVar18 + -(uVar11 * (long)puVar13);
              }
              if (puVar18 != puVar14) break;
            }
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
      }
      goto LAB_025c9058;
    }
    if (*param_2 != 2) {
      if (((*PTR_DAT_04379660 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379660), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379660);
      }
      lVar12 = *(long *)puVar6;
      *(long *)puVar7 = lVar12;
      puVar13 = *(undefined1 **)(lVar12 + 0x60);
      if (puVar13 != (undefined1 *)0x0) {
        uVar11 = (long)puVar13 - ((ulong)puVar13 >> 1 & 0x5555555555555555);
        uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
        uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar11 < 2) {
          puVar14 = (undefined1 *)((ulong)(puVar13 + -1) & 0x7c08eae870e235e0);
        }
        else if (&DAT_7c08eae870e235e0 < puVar13) {
          puVar14 = &DAT_7c08eae870e235e0;
        }
        else {
          uVar16 = 0;
          if (puVar13 != (undefined1 *)0x0) {
            uVar16 = 0x7c08eae870e235e0 / (ulong)puVar13;
          }
          puVar14 = &DAT_7c08eae870e235e0 + -(uVar16 * (long)puVar13);
        }
        plVar15 = *(long **)(*(long *)(lVar12 + 0x58) + (long)puVar14 * 8);
        if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
          if (uVar11 < 2) {
            do {
              if ((undefined1 *)plVar15[1] == &DAT_7c08eae870e235e0) {
                if ((undefined1 *)plVar15[2] == &DAT_7c08eae870e235e0) goto LAB_025c85f8;
              }
              else if ((undefined1 *)((ulong)plVar15[1] & (ulong)(puVar13 + -1)) != puVar14)
              goto LAB_025c9058;
              plVar15 = (long *)*plVar15;
              uVar20 = 0;
            } while (plVar15 != (long *)0x0);
            goto LAB_025c80fc;
          }
          do {
            puVar18 = (undefined1 *)plVar15[1];
            if (puVar18 == &DAT_7c08eae870e235e0) {
              if ((undefined1 *)plVar15[2] == &DAT_7c08eae870e235e0) goto LAB_025c85f8;
            }
            else {
              if (puVar13 <= puVar18) {
                uVar11 = 0;
                if (puVar13 != (undefined1 *)0x0) {
                  uVar11 = (ulong)puVar18 / (ulong)puVar13;
                }
                puVar18 = puVar18 + -(uVar11 * (long)puVar13);
              }
              if (puVar18 != puVar14) break;
            }
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
      }
      goto LAB_025c9058;
    }
    if (((*PTR_DAT_04379660 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_04379660), iVar10 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    lVar12 = *(long *)puVar6;
    *(long *)puVar7 = lVar12;
    puVar13 = *(undefined1 **)(lVar12 + 0x60);
    if (puVar13 == (undefined1 *)0x0) goto LAB_025c9058;
    uVar11 = (long)puVar13 - ((ulong)puVar13 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      puVar14 = (undefined1 *)((ulong)(puVar13 + -1) & 0x7c08eae870e235e0);
    }
    else if (&DAT_7c08eae870e235e0 < puVar13) {
      puVar14 = &DAT_7c08eae870e235e0;
    }
    else {
      uVar16 = 0;
      if (puVar13 != (undefined1 *)0x0) {
        uVar16 = 0x7c08eae870e235e0 / (ulong)puVar13;
      }
      puVar14 = &DAT_7c08eae870e235e0 + -(uVar16 * (long)puVar13);
    }
    plVar15 = *(long **)(*(long *)(lVar12 + 0x58) + (long)puVar14 * 8);
    if ((plVar15 == (long *)0x0) || (plVar15 = (long *)*plVar15, plVar15 == (long *)0x0))
    goto LAB_025c9058;
    if (1 < uVar11) {
      do {
        puVar18 = (undefined1 *)plVar15[1];
        if (puVar18 == &DAT_7c08eae870e235e0) {
          if ((undefined1 *)plVar15[2] == &DAT_7c08eae870e235e0) goto LAB_025c82b0;
        }
        else {
          if (puVar13 <= puVar18) {
            uVar11 = 0;
            if (puVar13 != (undefined1 *)0x0) {
              uVar11 = (ulong)puVar18 / (ulong)puVar13;
            }
            puVar18 = puVar18 + -(uVar11 * (long)puVar13);
          }
          if (puVar18 != puVar14) break;
        }
        plVar15 = (long *)*plVar15;
      } while (plVar15 != (long *)0x0);
      goto LAB_025c9058;
    }
    do {
      if ((undefined1 *)plVar15[1] == &DAT_7c08eae870e235e0) {
        if ((undefined1 *)plVar15[2] == &DAT_7c08eae870e235e0) goto LAB_025c82b0;
      }
      else if ((undefined1 *)((ulong)plVar15[1] & (ulong)(puVar13 + -1)) != puVar14)
      goto LAB_025c9058;
      plVar15 = (long *)*plVar15;
      uVar20 = 0;
    } while (plVar15 != (long *)0x0);
    goto LAB_025c80fc;
  }
  FUN_00959eac(&local_50);
  puVar8 = local_60;
  if (local_60 == (undefined8 *)0x0) goto LAB_025c7b98;
  piVar1 = (int *)(local_60 + 1);
  do {
    iVar10 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar10 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar10 + -1 != 0) goto LAB_025c7b98;
  local_60[2] = 0;
  if (((*PTR_DAT_04379498 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379498);
  }
  lVar12 = *(long *)PTR_DAT_043794a0;
  *(long *)PTR_DAT_043794a8 = lVar12;
  local_28 = *puVar8;
  FUN_02a44274(lVar12 + 0xd8,&local_28);
  if (local_50 != (long *)0x0) goto LAB_025c7ba0;
LAB_025c87cc:
  plVar15 = local_40;
  uVar11 = FUN_01bf34a0(local_40);
  if (((uVar11 & 1) == 0) &&
     (((uVar11 = FUN_01bf34a0(plVar15), (uVar11 & 1) == 0 ||
       (uVar11 = FUN_01a5badc(plVar15,plVar15 + 499), (uVar11 & 0xff) == 0)) ||
      ((uVar11 & 0xffffffff00000000) != 0x200000000)))) {
    iVar10 = *param_2;
    if (iVar10 == 3) {
      if (((*PTR_DAT_04379660 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379660), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379660);
      }
      lVar12 = *(long *)PTR_DAT_04379668;
      *(long *)PTR_DAT_04379670 = lVar12;
      puVar13 = *(undefined1 **)(lVar12 + 0x60);
      if (puVar13 != (undefined1 *)0x0) {
        uVar11 = (long)puVar13 - ((ulong)puVar13 >> 1 & 0x5555555555555555);
        uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
        uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar11 < 2) {
          puVar14 = (undefined1 *)((ulong)(puVar13 + -1) & 0x7c08eae870e235e0);
        }
        else if (&DAT_7c08eae870e235e0 < puVar13) {
          puVar14 = &DAT_7c08eae870e235e0;
        }
        else {
          uVar16 = 0;
          if (puVar13 != (undefined1 *)0x0) {
            uVar16 = 0x7c08eae870e235e0 / (ulong)puVar13;
          }
          puVar14 = &DAT_7c08eae870e235e0 + -(uVar16 * (long)puVar13);
        }
        plVar15 = *(long **)(*(long *)(lVar12 + 0x58) + (long)puVar14 * 8);
        if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
          if (uVar11 < 2) {
            do {
              if ((undefined1 *)plVar15[1] == &DAT_7c08eae870e235e0) {
                if ((undefined1 *)plVar15[2] == &DAT_7c08eae870e235e0) goto LAB_025c8f1c;
              }
              else if ((undefined1 *)((ulong)plVar15[1] & (ulong)(puVar13 + -1)) != puVar14)
              goto LAB_025c9058;
              plVar15 = (long *)*plVar15;
              uVar20 = 0;
            } while (plVar15 != (long *)0x0);
            goto LAB_025c80fc;
          }
          do {
            puVar18 = (undefined1 *)plVar15[1];
            if (puVar18 == &DAT_7c08eae870e235e0) {
              if ((undefined1 *)plVar15[2] == &DAT_7c08eae870e235e0) goto LAB_025c8f1c;
            }
            else {
              if (puVar13 <= puVar18) {
                uVar11 = 0;
                if (puVar13 != (undefined1 *)0x0) {
                  uVar11 = (ulong)puVar18 / (ulong)puVar13;
                }
                puVar18 = puVar18 + -(uVar11 * (long)puVar13);
              }
              if (puVar18 != puVar14) break;
            }
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
      }
    }
    else if (iVar10 == 2) {
      if (((*PTR_DAT_04379660 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379660), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379660);
      }
      lVar12 = *(long *)PTR_DAT_04379668;
      *(long *)PTR_DAT_04379670 = lVar12;
      puVar13 = *(undefined1 **)(lVar12 + 0x60);
      if (puVar13 != (undefined1 *)0x0) {
        uVar11 = (long)puVar13 - ((ulong)puVar13 >> 1 & 0x5555555555555555);
        uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
        uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar11 < 2) {
          puVar14 = (undefined1 *)((ulong)(puVar13 + -1) & 0x7c08eae870e235e0);
        }
        else if (&DAT_7c08eae870e235e0 < puVar13) {
          puVar14 = &DAT_7c08eae870e235e0;
        }
        else {
          uVar16 = 0;
          if (puVar13 != (undefined1 *)0x0) {
            uVar16 = 0x7c08eae870e235e0 / (ulong)puVar13;
          }
          puVar14 = &DAT_7c08eae870e235e0 + -(uVar16 * (long)puVar13);
        }
        plVar15 = *(long **)(*(long *)(lVar12 + 0x58) + (long)puVar14 * 8);
        if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
          if (uVar11 < 2) {
            do {
              if ((undefined1 *)plVar15[1] == &DAT_7c08eae870e235e0) {
                if ((undefined1 *)plVar15[2] == &DAT_7c08eae870e235e0) goto LAB_025c8d78;
              }
              else if ((undefined1 *)((ulong)plVar15[1] & (ulong)(puVar13 + -1)) != puVar14)
              goto LAB_025c9058;
              plVar15 = (long *)*plVar15;
              uVar20 = 0;
            } while (plVar15 != (long *)0x0);
            goto LAB_025c80fc;
          }
          do {
            puVar18 = (undefined1 *)plVar15[1];
            if (puVar18 == &DAT_7c08eae870e235e0) {
              if ((undefined1 *)plVar15[2] == &DAT_7c08eae870e235e0) goto LAB_025c8d78;
            }
            else {
              if (puVar13 <= puVar18) {
                uVar11 = 0;
                if (puVar13 != (undefined1 *)0x0) {
                  uVar11 = (ulong)puVar18 / (ulong)puVar13;
                }
                puVar18 = puVar18 + -(uVar11 * (long)puVar13);
              }
              if (puVar18 != puVar14) break;
            }
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
      }
    }
    else {
      if (iVar10 != 1) goto LAB_025c8104;
      if (((*PTR_DAT_04379660 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379660), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379660);
      }
      lVar12 = *(long *)PTR_DAT_04379668;
      *(long *)PTR_DAT_04379670 = lVar12;
      puVar13 = *(undefined1 **)(lVar12 + 0x60);
      if (puVar13 != (undefined1 *)0x0) {
        uVar11 = (long)puVar13 - ((ulong)puVar13 >> 1 & 0x5555555555555555);
        uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
        uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar11 < 2) {
          puVar14 = (undefined1 *)((ulong)(puVar13 + -1) & 0x7c08eae870e235e0);
        }
        else if (&DAT_7c08eae870e235e0 < puVar13) {
          puVar14 = &DAT_7c08eae870e235e0;
        }
        else {
          uVar16 = 0;
          if (puVar13 != (undefined1 *)0x0) {
            uVar16 = 0x7c08eae870e235e0 / (ulong)puVar13;
          }
          puVar14 = &DAT_7c08eae870e235e0 + -(uVar16 * (long)puVar13);
        }
        plVar15 = *(long **)(*(long *)(lVar12 + 0x58) + (long)puVar14 * 8);
        if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
          if (uVar11 < 2) {
            do {
              if ((undefined1 *)plVar15[1] == &DAT_7c08eae870e235e0) {
                if ((undefined1 *)plVar15[2] == &DAT_7c08eae870e235e0) goto LAB_025c8bd4;
              }
              else if ((undefined1 *)((ulong)plVar15[1] & (ulong)(puVar13 + -1)) != puVar14)
              goto LAB_025c9058;
              plVar15 = (long *)*plVar15;
              uVar20 = 0;
            } while (plVar15 != (long *)0x0);
            goto LAB_025c80fc;
          }
          do {
            puVar18 = (undefined1 *)plVar15[1];
            if (puVar18 == &DAT_7c08eae870e235e0) {
              if ((undefined1 *)plVar15[2] == &DAT_7c08eae870e235e0) goto LAB_025c8bd4;
            }
            else {
              if (puVar13 <= puVar18) {
                uVar11 = 0;
                if (puVar13 != (undefined1 *)0x0) {
                  uVar11 = (ulong)puVar18 / (ulong)puVar13;
                }
                puVar18 = puVar18 + -(uVar11 * (long)puVar13);
              }
              if (puVar18 != puVar14) break;
            }
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
      }
    }
LAB_025c9058:
    uVar20 = 0;
    goto LAB_025c80fc;
  }
  goto LAB_025c8104;
LAB_025c7fc0:
  plVar15 = (long *)plVar15[3];
  if (plVar15 == (long *)0x0) goto LAB_025c9058;
  plVar2 = plVar15 + 10;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar4) {
      *(int *)plVar2 = (int)*plVar2 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uVar11 = plVar15[0x14];
  if (uVar11 == 0) {
    uVar20 = 0;
  }
  else {
    uVar16 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
    uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar16 < 2) {
      uVar17 = uVar11 - 1 & 0xdab6d763604df903;
    }
    else if (uVar11 < 0xdab6d763604df904) {
      uVar17 = 0;
      if (uVar11 != 0) {
        uVar17 = 0xdab6d763604df903 / uVar11;
      }
      uVar17 = 0xdab6d763604df903 - uVar17 * uVar11;
    }
    else {
      uVar17 = 0xdab6d763604df903;
    }
    plVar19 = *(long **)(plVar15[0x13] + uVar17 * 8);
    if (plVar19 == (long *)0x0) {
      uVar20 = 0;
    }
    else {
      plVar19 = (long *)*plVar19;
      if (plVar19 == (long *)0x0) {
        uVar20 = 0;
      }
      else if (uVar16 < 2) {
        do {
          if (plVar19[1] == 0xdab6d763604df903) {
            if (plVar19[2] == -0x2549289c9fb206fd) goto LAB_025c80e4;
          }
          else if ((plVar19[1] & uVar11 - 1) != uVar17) {
            uVar20 = 0;
            break;
          }
          plVar19 = (long *)*plVar19;
          uVar20 = 0;
        } while (plVar19 != (long *)0x0);
      }
      else {
        do {
          uVar16 = plVar19[1];
          if (uVar16 == 0xdab6d763604df903) {
            if (plVar19[2] == -0x2549289c9fb206fd) goto LAB_025c80e4;
          }
          else {
            if (uVar11 <= uVar16) {
              uVar5 = 0;
              if (uVar11 != 0) {
                uVar5 = uVar16 / uVar11;
              }
              uVar16 = uVar16 - uVar5 * uVar11;
            }
            if (uVar16 != uVar17) {
              uVar20 = 0;
              goto LAB_025c80e8;
            }
          }
          plVar19 = (long *)*plVar19;
        } while (plVar19 != (long *)0x0);
        uVar20 = 0;
      }
    }
  }
  goto LAB_025c80e8;
LAB_025c80e4:
  uVar20 = (undefined4)plVar19[6];
LAB_025c80e8:
  do {
    iVar10 = (int)*plVar2 + -1;
    bVar9 = iVar10 == 0;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar4) {
      *(int *)plVar2 = iVar10;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  goto LAB_025c80f8;
LAB_025c8454:
  plVar15 = (long *)plVar15[3];
  if (plVar15 == (long *)0x0) goto LAB_025c9058;
  plVar2 = plVar15 + 10;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar4) {
      *(int *)plVar2 = (int)*plVar2 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uVar11 = plVar15[0x14];
  if (uVar11 == 0) {
    uVar20 = 0;
  }
  else {
    uVar16 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
    uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar16 < 2) {
      uVar17 = uVar11 - 1 & 0xf4f65ed1c92dbcbc;
    }
    else if (uVar11 < 0xf4f65ed1c92dbcbd) {
      uVar17 = 0;
      if (uVar11 != 0) {
        uVar17 = 0xf4f65ed1c92dbcbc / uVar11;
      }
      uVar17 = 0xf4f65ed1c92dbcbc - uVar17 * uVar11;
    }
    else {
      uVar17 = 0xf4f65ed1c92dbcbc;
    }
    plVar19 = *(long **)(plVar15[0x13] + uVar17 * 8);
    if (plVar19 == (long *)0x0) {
      uVar20 = 0;
    }
    else {
      plVar19 = (long *)*plVar19;
      if (plVar19 == (long *)0x0) {
        uVar20 = 0;
      }
      else if (uVar16 < 2) {
        do {
          if (plVar19[1] == 0xf4f65ed1c92dbcbc) {
            if (plVar19[2] == -0xb09a12e36d24344) goto LAB_025c8578;
          }
          else if ((plVar19[1] & uVar11 - 1) != uVar17) {
            uVar20 = 0;
            break;
          }
          plVar19 = (long *)*plVar19;
          uVar20 = 0;
        } while (plVar19 != (long *)0x0);
      }
      else {
        do {
          uVar16 = plVar19[1];
          if (uVar16 == 0xf4f65ed1c92dbcbc) {
            if (plVar19[2] == -0xb09a12e36d24344) goto LAB_025c8578;
          }
          else {
            if (uVar11 <= uVar16) {
              uVar5 = 0;
              if (uVar11 != 0) {
                uVar5 = uVar16 / uVar11;
              }
              uVar16 = uVar16 - uVar5 * uVar11;
            }
            if (uVar16 != uVar17) {
              uVar20 = 0;
              goto LAB_025c857c;
            }
          }
          plVar19 = (long *)*plVar19;
        } while (plVar19 != (long *)0x0);
        uVar20 = 0;
      }
    }
  }
  goto LAB_025c857c;
LAB_025c8578:
  uVar20 = (undefined4)plVar19[6];
LAB_025c857c:
  do {
    iVar10 = (int)*plVar2 + -1;
    bVar9 = iVar10 == 0;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar4) {
      *(int *)plVar2 = iVar10;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  goto LAB_025c80f8;
LAB_025c85f8:
  plVar15 = (long *)plVar15[3];
  if (plVar15 == (long *)0x0) goto LAB_025c9058;
  plVar2 = plVar15 + 10;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar4) {
      *(int *)plVar2 = (int)*plVar2 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uVar11 = plVar15[0x14];
  if (uVar11 == 0) {
    uVar20 = 0;
  }
  else {
    uVar16 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
    uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar16 < 2) {
      uVar17 = uVar11 - 1 & 0xdab6d763604df903;
    }
    else if (uVar11 < 0xdab6d763604df904) {
      uVar17 = 0;
      if (uVar11 != 0) {
        uVar17 = 0xdab6d763604df903 / uVar11;
      }
      uVar17 = 0xdab6d763604df903 - uVar17 * uVar11;
    }
    else {
      uVar17 = 0xdab6d763604df903;
    }
    plVar19 = *(long **)(plVar15[0x13] + uVar17 * 8);
    if (plVar19 == (long *)0x0) {
      uVar20 = 0;
    }
    else {
      plVar19 = (long *)*plVar19;
      if (plVar19 == (long *)0x0) {
        uVar20 = 0;
      }
      else if (uVar16 < 2) {
        do {
          if (plVar19[1] == 0xdab6d763604df903) {
            if (plVar19[2] == -0x2549289c9fb206fd) goto LAB_025c871c;
          }
          else if ((plVar19[1] & uVar11 - 1) != uVar17) {
            uVar20 = 0;
            break;
          }
          plVar19 = (long *)*plVar19;
          uVar20 = 0;
        } while (plVar19 != (long *)0x0);
      }
      else {
        do {
          uVar16 = plVar19[1];
          if (uVar16 == 0xdab6d763604df903) {
            if (plVar19[2] == -0x2549289c9fb206fd) goto LAB_025c871c;
          }
          else {
            if (uVar11 <= uVar16) {
              uVar5 = 0;
              if (uVar11 != 0) {
                uVar5 = uVar16 / uVar11;
              }
              uVar16 = uVar16 - uVar5 * uVar11;
            }
            if (uVar16 != uVar17) {
              uVar20 = 0;
              goto LAB_025c8720;
            }
          }
          plVar19 = (long *)*plVar19;
        } while (plVar19 != (long *)0x0);
        uVar20 = 0;
      }
    }
  }
  goto LAB_025c8720;
LAB_025c871c:
  uVar20 = (undefined4)plVar19[6];
LAB_025c8720:
  do {
    iVar10 = (int)*plVar2 + -1;
    bVar9 = iVar10 == 0;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar4) {
      *(int *)plVar2 = iVar10;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  goto LAB_025c80f8;
LAB_025c82b0:
  plVar15 = (long *)plVar15[3];
  if (plVar15 == (long *)0x0) goto LAB_025c9058;
  plVar2 = plVar15 + 10;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar4) {
      *(int *)plVar2 = (int)*plVar2 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uVar11 = plVar15[0x14];
  if (uVar11 == 0) {
    uVar20 = 0;
  }
  else {
    uVar16 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
    uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar16 < 2) {
      uVar17 = uVar11 - 1 & 0x450b063f75aaf05e;
    }
    else if (uVar11 < 0x450b063f75aaf05f) {
      uVar17 = 0;
      if (uVar11 != 0) {
        uVar17 = 0x450b063f75aaf05e / uVar11;
      }
      uVar17 = 0x450b063f75aaf05e - uVar17 * uVar11;
    }
    else {
      uVar17 = 0x450b063f75aaf05e;
    }
    plVar19 = *(long **)(plVar15[0x13] + uVar17 * 8);
    if (plVar19 == (long *)0x0) {
      uVar20 = 0;
    }
    else {
      plVar19 = (long *)*plVar19;
      if (plVar19 == (long *)0x0) {
        uVar20 = 0;
      }
      else if (uVar16 < 2) {
        do {
          if (plVar19[1] == 0x450b063f75aaf05e) {
            if (plVar19[2] == 0x450b063f75aaf05e) goto LAB_025c83d4;
          }
          else if ((plVar19[1] & uVar11 - 1) != uVar17) {
            uVar20 = 0;
            break;
          }
          plVar19 = (long *)*plVar19;
          uVar20 = 0;
        } while (plVar19 != (long *)0x0);
      }
      else {
        do {
          uVar16 = plVar19[1];
          if (uVar16 == 0x450b063f75aaf05e) {
            if (plVar19[2] == 0x450b063f75aaf05e) goto LAB_025c83d4;
          }
          else {
            if (uVar11 <= uVar16) {
              uVar5 = 0;
              if (uVar11 != 0) {
                uVar5 = uVar16 / uVar11;
              }
              uVar16 = uVar16 - uVar5 * uVar11;
            }
            if (uVar16 != uVar17) {
              uVar20 = 0;
              goto LAB_025c83d8;
            }
          }
          plVar19 = (long *)*plVar19;
        } while (plVar19 != (long *)0x0);
        uVar20 = 0;
      }
    }
  }
  goto LAB_025c83d8;
LAB_025c83d4:
  uVar20 = (undefined4)plVar19[6];
LAB_025c83d8:
  do {
    iVar10 = (int)*plVar2 + -1;
    bVar9 = iVar10 == 0;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar4) {
      *(int *)plVar2 = iVar10;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  goto LAB_025c80f8;
LAB_025c8f1c:
  plVar15 = (long *)plVar15[3];
  if (plVar15 == (long *)0x0) goto LAB_025c9058;
  plVar2 = plVar15 + 10;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar4) {
      *(int *)plVar2 = (int)*plVar2 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uVar11 = plVar15[0x14];
  if (uVar11 == 0) {
    uVar20 = 0;
  }
  else {
    uVar16 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
    uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar16 < 2) {
      uVar17 = uVar11 - 1 & 0xf4f65ed1c92dbcbc;
    }
    else if (uVar11 < 0xf4f65ed1c92dbcbd) {
      uVar17 = 0;
      if (uVar11 != 0) {
        uVar17 = 0xf4f65ed1c92dbcbc / uVar11;
      }
      uVar17 = 0xf4f65ed1c92dbcbc - uVar17 * uVar11;
    }
    else {
      uVar17 = 0xf4f65ed1c92dbcbc;
    }
    plVar19 = *(long **)(plVar15[0x13] + uVar17 * 8);
    if (plVar19 == (long *)0x0) {
      uVar20 = 0;
    }
    else {
      plVar19 = (long *)*plVar19;
      if (plVar19 == (long *)0x0) {
        uVar20 = 0;
      }
      else if (uVar16 < 2) {
        do {
          if (plVar19[1] == 0xf4f65ed1c92dbcbc) {
            if (plVar19[2] == -0xb09a12e36d24344) goto LAB_025c9040;
          }
          else if ((plVar19[1] & uVar11 - 1) != uVar17) {
            uVar20 = 0;
            break;
          }
          plVar19 = (long *)*plVar19;
          uVar20 = 0;
        } while (plVar19 != (long *)0x0);
      }
      else {
        do {
          uVar16 = plVar19[1];
          if (uVar16 == 0xf4f65ed1c92dbcbc) {
            if (plVar19[2] == -0xb09a12e36d24344) goto LAB_025c9040;
          }
          else {
            if (uVar11 <= uVar16) {
              uVar5 = 0;
              if (uVar11 != 0) {
                uVar5 = uVar16 / uVar11;
              }
              uVar16 = uVar16 - uVar5 * uVar11;
            }
            if (uVar16 != uVar17) {
              uVar20 = 0;
              goto LAB_025c9044;
            }
          }
          plVar19 = (long *)*plVar19;
        } while (plVar19 != (long *)0x0);
        uVar20 = 0;
      }
    }
  }
  goto LAB_025c9044;
LAB_025c9040:
  uVar20 = (undefined4)plVar19[6];
LAB_025c9044:
  do {
    iVar10 = (int)*plVar2 + -1;
    bVar9 = iVar10 == 0;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar4) {
      *(int *)plVar2 = iVar10;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  goto LAB_025c80f8;
LAB_025c8d78:
  plVar15 = (long *)plVar15[3];
  if (plVar15 == (long *)0x0) goto LAB_025c9058;
  plVar2 = plVar15 + 10;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar4) {
      *(int *)plVar2 = (int)*plVar2 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uVar11 = plVar15[0x14];
  if (uVar11 == 0) {
    uVar20 = 0;
  }
  else {
    uVar16 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
    uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar16 < 2) {
      uVar17 = uVar11 - 1 & 0x450b063f75aaf05e;
    }
    else if (uVar11 < 0x450b063f75aaf05f) {
      uVar17 = 0;
      if (uVar11 != 0) {
        uVar17 = 0x450b063f75aaf05e / uVar11;
      }
      uVar17 = 0x450b063f75aaf05e - uVar17 * uVar11;
    }
    else {
      uVar17 = 0x450b063f75aaf05e;
    }
    plVar19 = *(long **)(plVar15[0x13] + uVar17 * 8);
    if (plVar19 == (long *)0x0) {
      uVar20 = 0;
    }
    else {
      plVar19 = (long *)*plVar19;
      if (plVar19 == (long *)0x0) {
        uVar20 = 0;
      }
      else if (uVar16 < 2) {
        do {
          if (plVar19[1] == 0x450b063f75aaf05e) {
            if (plVar19[2] == 0x450b063f75aaf05e) goto LAB_025c8e9c;
          }
          else if ((plVar19[1] & uVar11 - 1) != uVar17) {
            uVar20 = 0;
            break;
          }
          plVar19 = (long *)*plVar19;
          uVar20 = 0;
        } while (plVar19 != (long *)0x0);
      }
      else {
        do {
          uVar16 = plVar19[1];
          if (uVar16 == 0x450b063f75aaf05e) {
            if (plVar19[2] == 0x450b063f75aaf05e) goto LAB_025c8e9c;
          }
          else {
            if (uVar11 <= uVar16) {
              uVar5 = 0;
              if (uVar11 != 0) {
                uVar5 = uVar16 / uVar11;
              }
              uVar16 = uVar16 - uVar5 * uVar11;
            }
            if (uVar16 != uVar17) {
              uVar20 = 0;
              goto LAB_025c8ea0;
            }
          }
          plVar19 = (long *)*plVar19;
        } while (plVar19 != (long *)0x0);
        uVar20 = 0;
      }
    }
  }
  goto LAB_025c8ea0;
LAB_025c8e9c:
  uVar20 = (undefined4)plVar19[6];
LAB_025c8ea0:
  do {
    iVar10 = (int)*plVar2 + -1;
    bVar9 = iVar10 == 0;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar4) {
      *(int *)plVar2 = iVar10;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  goto LAB_025c80f8;
LAB_025c8bd4:
  plVar15 = (long *)plVar15[3];
  if (plVar15 == (long *)0x0) goto LAB_025c9058;
  plVar2 = plVar15 + 10;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar4) {
      *(int *)plVar2 = (int)*plVar2 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uVar11 = plVar15[0x14];
  if (uVar11 == 0) {
    uVar20 = 0;
  }
  else {
    uVar16 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
    uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar16 < 2) {
      uVar17 = uVar11 - 1 & 0xcf7e06151ce6fc5f;
    }
    else if (uVar11 < 0xcf7e06151ce6fc60) {
      uVar17 = 0;
      if (uVar11 != 0) {
        uVar17 = 0xcf7e06151ce6fc5f / uVar11;
      }
      uVar17 = 0xcf7e06151ce6fc5f - uVar17 * uVar11;
    }
    else {
      uVar17 = 0xcf7e06151ce6fc5f;
    }
    plVar19 = *(long **)(plVar15[0x13] + uVar17 * 8);
    if (plVar19 == (long *)0x0) {
      uVar20 = 0;
    }
    else {
      plVar19 = (long *)*plVar19;
      if (plVar19 == (long *)0x0) {
        uVar20 = 0;
      }
      else if (uVar16 < 2) {
        do {
          if (plVar19[1] == 0xcf7e06151ce6fc5f) {
            if (plVar19[2] == -0x3081f9eae31903a1) goto LAB_025c8cf8;
          }
          else if ((plVar19[1] & uVar11 - 1) != uVar17) {
            uVar20 = 0;
            break;
          }
          plVar19 = (long *)*plVar19;
          uVar20 = 0;
        } while (plVar19 != (long *)0x0);
      }
      else {
        do {
          uVar16 = plVar19[1];
          if (uVar16 == 0xcf7e06151ce6fc5f) {
            if (plVar19[2] == -0x3081f9eae31903a1) goto LAB_025c8cf8;
          }
          else {
            if (uVar11 <= uVar16) {
              uVar5 = 0;
              if (uVar11 != 0) {
                uVar5 = uVar16 / uVar11;
              }
              uVar16 = uVar16 - uVar5 * uVar11;
            }
            if (uVar16 != uVar17) {
              uVar20 = 0;
              goto LAB_025c8cfc;
            }
          }
          plVar19 = (long *)*plVar19;
        } while (plVar19 != (long *)0x0);
        uVar20 = 0;
      }
    }
  }
  goto LAB_025c8cfc;
LAB_025c8cf8:
  uVar20 = (undefined4)plVar19[6];
LAB_025c8cfc:
  do {
    iVar10 = (int)*plVar2 + -1;
    bVar9 = iVar10 == 0;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar4) {
      *(int *)plVar2 = iVar10;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_025c80f8:
  if (bVar9) {
    (**(code **)(*plVar15 + 0x10))();
  }
LAB_025c80fc:
  *(undefined4 *)(param_1 + 0x250) = uVar20;
  *(undefined4 *)(param_1 + 0x254) = uVar20;
LAB_025c8104:
  if (local_50 != (long *)0x0) {
    lVar12 = local_50[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar10 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*local_50 + 0x20))();
    }
  }
  if (local_48 != (long *)0x0) {
    lVar12 = local_48[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar10 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*local_48 + 0x20))();
    }
  }
joined_r0x025c8160:
  if (local_40 != (long *)0x0) {
    lVar12 = local_40[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar10 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*local_40 + 0x20))();
    }
  }
  if (local_38 != (long *)0x0) {
    lVar12 = local_38[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar10 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*local_38 + 0x20))();
    }
  }
  return;
}


