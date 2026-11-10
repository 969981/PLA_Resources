/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a9963c; name: FUN_01a9963c
 */


void FUN_01a9963c(long *param_1)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  undefined *puVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long lVar20;
  long lVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar26 [16];
  float fVar27;
  float fVar28;
  float fVar29;
  long *local_b8;
  undefined8 uStack_b0;
  long *local_a8;
  long local_98;
  
  puVar7 = PTR_DAT_04379660;
  if (((*PTR_DAT_04379660 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379660), iVar8 != 0))
  {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  plVar14 = (long *)PTR_DAT_04379668;
  lVar15 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar15;
  uVar10 = *(ulong *)(lVar15 + 0x60);
  fVar28 = 0.0;
  if (uVar10 != 0) {
    uVar12 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar9 = param_1[0x13f];
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      uVar11 = uVar10 - 1 & uVar9;
    }
    else if (uVar9 < uVar10) {
      uVar11 = uVar9;
    }
    else {
      uVar11 = 0;
      if (uVar10 != 0) {
        uVar11 = uVar9 / uVar10;
      }
      uVar11 = uVar9 - uVar11 * uVar10;
    }
    plVar16 = *(long **)(*(long *)(lVar15 + 0x58) + uVar11 * 8);
    if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if (plVar16[1] == uVar9) {
            if (plVar16[2] == uVar9) goto LAB_01a99724;
          }
          else if ((plVar16[1] & uVar10 - 1) != uVar11) break;
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar16[1];
          if (uVar12 == uVar9) {
            if (plVar16[2] == uVar9) goto LAB_01a99724;
          }
          else {
            if (uVar10 <= uVar12) {
              uVar5 = 0;
              if (uVar10 != 0) {
                uVar5 = uVar12 / uVar10;
              }
              uVar12 = uVar12 - uVar5 * uVar10;
            }
            if (uVar12 != uVar11) break;
          }
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
    }
  }
LAB_01a99880:
  local_b8 = (long *)0x0;
  uStack_b0 = 0;
  FUN_01a2bf84(&local_b8,param_1 + 0xb9);
  FUN_009c685c(&local_a8,&local_b8);
  plVar16 = local_b8;
  if (local_b8 != (long *)0x0) {
    plVar13 = local_b8 + 1;
    do {
      iVar8 = (int)*plVar13 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar4) {
        *(int *)plVar13 = iVar8;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 == 0) {
      local_b8[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar15 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar15;
      local_98 = *plVar16;
      FUN_02a44274(lVar15 + 0xd8,&local_98);
    }
  }
  if (local_a8 == (long *)0x0) {
    return;
  }
  if (param_1[0x178] == 0) goto LAB_01a99b3c;
  fVar27 = *(float *)(param_1 + 0x143);
  if (((*puVar7 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379660), iVar8 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  plVar16 = (long *)PTR_DAT_04379670;
  lVar15 = *plVar14;
  *(long *)PTR_DAT_04379670 = lVar15;
  uVar10 = *(ulong *)(lVar15 + 0x60);
  fVar22 = 0.0;
  if (uVar10 == 0) {
LAB_01a99b20:
    if (fVar27 < fVar22) goto LAB_01a99b2c;
LAB_01a99bbc:
    uVar10 = param_1[0x177];
    lVar15 = param_1[0x170];
    if (param_1[0x171] == lVar15) {
      uVar12 = param_1[0x178];
    }
    else {
      uVar12 = param_1[0x178];
      lVar21 = *(long *)(lVar15 + (uVar10 / 0x55) * 8) + (uVar10 % 0x55) * 0x30;
      lVar20 = *(long *)(lVar15 + ((uVar12 + uVar10) / 0x55) * 8) +
               ((uVar12 + uVar10) % 0x55) * 0x30;
      if (lVar21 != lVar20) {
        fVar22 = 1.0;
        fVar27 = 0.0;
        plVar13 = (long *)(lVar15 + (uVar10 / 0x55) * 8);
LAB_01a99c4c:
        fVar29 = *(float *)(lVar21 + 0x20);
        if (((*puVar7 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(puVar7), plVar16 = (long *)PTR_DAT_04379670, iVar8 != 0)) {
          FUN_00100250(PTR_LAB_043796b0,plVar14,&PTR_LOOP_0411a000);
          __cxa_guard_release(puVar7);
          plVar16 = (long *)PTR_DAT_04379670;
        }
        lVar15 = *plVar14;
        *plVar16 = lVar15;
        uVar10 = *(ulong *)(lVar15 + 0x60);
        fVar23 = 0.0;
        if (uVar10 != 0) {
          uVar9 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
          uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
          uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar9 < 2) {
            uVar11 = uVar10 - 1 & 0x6c43119d71eecde9;
          }
          else {
            uVar11 = 0x6c43119d71eecde9;
            if (uVar10 < 0x6c43119d71eecdea) {
              uVar11 = 0;
              if (uVar10 != 0) {
                uVar11 = 0x6c43119d71eecde9 / uVar10;
              }
              uVar11 = 0x6c43119d71eecde9 - uVar11 * uVar10;
            }
          }
          fVar23 = 0.0;
          plVar18 = *(long **)(*(long *)(lVar15 + 0x58) + uVar11 * 8);
          if (plVar18 == (long *)0x0) goto LAB_01a99e50;
          plVar18 = (long *)*plVar18;
          fVar23 = 0.0;
          if (plVar18 == (long *)0x0) goto LAB_01a99e50;
          if (1 < uVar9) {
            do {
              uVar9 = plVar18[1];
              if (uVar9 == 0x6c43119d71eecde9) {
                if (plVar18[2] == 0x6c43119d71eecde9) goto LAB_01a99cf8;
              }
              else {
                if (uVar10 <= uVar9) {
                  uVar5 = 0;
                  if (uVar10 != 0) {
                    uVar5 = uVar9 / uVar10;
                  }
                  uVar9 = uVar9 - uVar5 * uVar10;
                }
                if (uVar9 != uVar11) break;
              }
              plVar18 = (long *)*plVar18;
            } while (plVar18 != (long *)0x0);
            fVar23 = 0.0;
            goto LAB_01a99e50;
          }
          do {
            if (plVar18[1] == 0x6c43119d71eecde9) {
              if (plVar18[2] == 0x6c43119d71eecde9) {
                plVar16 = (long *)PTR_DAT_04379670;
                goto LAB_01a99cf8;
              }
            }
            else if ((plVar18[1] & uVar10 - 1) != uVar11) break;
            plVar18 = (long *)*plVar18;
          } while (plVar18 != (long *)0x0);
          fVar23 = 0.0;
          goto LAB_01a9a044;
        }
        goto LAB_01a99e50;
      }
    }
    fVar27 = 0.0;
    bVar2 = *puVar7;
joined_r0x01a99e80:
    if (((bVar2 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04379660), plVar16 = (long *)PTR_DAT_04379670,
       iVar8 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
      plVar16 = (long *)PTR_DAT_04379670;
    }
    lVar15 = *plVar14;
    *plVar16 = lVar15;
    uVar10 = *(ulong *)(lVar15 + 0x60);
    fVar22 = 0.0;
    if (uVar10 != 0) {
      uVar9 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
      uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
      uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar9 < 2) {
        uVar11 = uVar10 - 1 & 0x6c43119d71eecde9;
      }
      else {
        uVar11 = 0x6c43119d71eecde9;
        if (uVar10 < 0x6c43119d71eecdea) {
          uVar11 = 0;
          if (uVar10 != 0) {
            uVar11 = 0x6c43119d71eecde9 / uVar10;
          }
          uVar11 = 0x6c43119d71eecde9 - uVar11 * uVar10;
        }
      }
      plVar14 = *(long **)(*(long *)(lVar15 + 0x58) + uVar11 * 8);
      if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
        if (uVar9 < 2) {
          do {
            if (plVar14[1] == 0x6c43119d71eecde9) {
              if (plVar14[2] == 0x6c43119d71eecde9) goto LAB_01a99f18;
            }
            else if ((plVar14[1] & uVar10 - 1) != uVar11) break;
            plVar14 = (long *)*plVar14;
          } while (plVar14 != (long *)0x0);
        }
        else {
          do {
            uVar9 = plVar14[1];
            if (uVar9 == 0x6c43119d71eecde9) {
              if (plVar14[2] == 0x6c43119d71eecde9) goto LAB_01a99f18;
            }
            else {
              if (uVar10 <= uVar9) {
                uVar5 = 0;
                if (uVar10 != 0) {
                  uVar5 = uVar9 / uVar10;
                }
                uVar9 = uVar9 - uVar5 * uVar10;
              }
              if (uVar9 != uVar11) break;
            }
            plVar14 = (long *)*plVar14;
          } while (plVar14 != (long *)0x0);
        }
      }
    }
LAB_01a9a160:
    if (ABS(fVar22) <= fVar28) goto LAB_01a99b2c;
    lVar15 = *local_a8;
    fVar22 = fVar22 / 45.0;
  }
  else {
    uVar12 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      uVar9 = uVar10 - 1 & 0x6c43119d71eecde9;
    }
    else {
      uVar9 = 0x6c43119d71eecde9;
      if (uVar10 < 0x6c43119d71eecdea) {
        uVar9 = 0;
        if (uVar10 != 0) {
          uVar9 = 0x6c43119d71eecde9 / uVar10;
        }
        uVar9 = 0x6c43119d71eecde9 - uVar9 * uVar10;
      }
    }
    plVar13 = *(long **)(*(long *)(lVar15 + 0x58) + uVar9 * 8);
    if ((plVar13 == (long *)0x0) || (plVar13 = (long *)*plVar13, plVar13 == (long *)0x0))
    goto LAB_01a99b20;
    if (1 < uVar12) {
LAB_01a999ac:
      uVar12 = plVar13[1];
      if (uVar12 != 0x6c43119d71eecde9) {
        if (uVar10 <= uVar12) {
          uVar11 = 0;
          if (uVar10 != 0) {
            uVar11 = uVar12 / uVar10;
          }
          uVar12 = uVar12 - uVar11 * uVar10;
        }
        if (uVar12 == uVar9) goto LAB_01a99ab8;
        goto LAB_01a99b20;
      }
      if (plVar13[2] != 0x6c43119d71eecde9) goto LAB_01a99ab8;
      plVar13 = (long *)plVar13[3];
joined_r0x01a999c8:
      if (plVar13 == (long *)0x0) goto LAB_01a99b20;
      plVar18 = plVar13 + 10;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar4) {
          *(int *)plVar18 = (int)*plVar18 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      uVar10 = plVar13[0x21];
      fVar22 = 0.0;
      if (uVar10 != 0) {
        uVar12 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
        uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
        uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar12 < 2) {
          uVar9 = uVar10 - 1 & 0x420324c3c358f368;
        }
        else if (uVar10 < 0x420324c3c358f369) {
          uVar9 = 0;
          if (uVar10 != 0) {
            uVar9 = 0x420324c3c358f368 / uVar10;
          }
          uVar9 = 0x420324c3c358f368 - uVar9 * uVar10;
        }
        else {
          uVar9 = 0x420324c3c358f368;
        }
        plVar19 = *(long **)(plVar13[0x20] + uVar9 * 8);
        if ((plVar19 != (long *)0x0) && (plVar19 = (long *)*plVar19, plVar19 != (long *)0x0)) {
          if (uVar12 < 2) {
            do {
              if (plVar19[1] == 0x420324c3c358f368) {
                if (plVar19[2] == 0x420324c3c358f368) goto LAB_01a99b08;
              }
              else if ((plVar19[1] & uVar10 - 1) != uVar9) break;
              plVar19 = (long *)*plVar19;
            } while (plVar19 != (long *)0x0);
          }
          else {
            do {
              uVar12 = plVar19[1];
              if (uVar12 != 0x420324c3c358f368) {
                if (uVar10 <= uVar12) {
                  uVar11 = 0;
                  if (uVar10 != 0) {
                    uVar11 = uVar12 / uVar10;
                  }
                  uVar12 = uVar12 - uVar11 * uVar10;
                }
                if (uVar12 == uVar9) goto LAB_01a99a94;
                break;
              }
              if (plVar19[2] == 0x420324c3c358f368) goto LAB_01a99b08;
LAB_01a99a94:
              plVar19 = (long *)*plVar19;
            } while (plVar19 != (long *)0x0);
          }
        }
      }
LAB_01a99b0c:
      do {
        iVar8 = (int)*plVar18 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar4) {
          *(int *)plVar18 = iVar8;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar8 != 0) goto LAB_01a99b20;
      (**(code **)(*plVar13 + 0x10))();
      goto LAB_01a99bac;
    }
    do {
      if (plVar13[1] == 0x6c43119d71eecde9) {
        if (plVar13[2] == 0x6c43119d71eecde9) {
          plVar13 = (long *)plVar13[3];
          plVar16 = (long *)PTR_DAT_04379670;
          goto joined_r0x01a999c8;
        }
      }
      else if ((plVar13[1] & uVar10 - 1) != uVar9) break;
      plVar13 = (long *)*plVar13;
    } while (plVar13 != (long *)0x0);
LAB_01a99bac:
    plVar16 = (long *)PTR_DAT_04379670;
    if (fVar22 <= fVar27) goto LAB_01a99bbc;
LAB_01a99b2c:
    lVar15 = *local_a8;
    fVar22 = 0.0;
  }
  (**(code **)(lVar15 + 0x198))(fVar22);
LAB_01a99b3c:
  if (local_a8 != (long *)0x0) {
    lVar15 = local_a8[0xb];
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*local_a8 + 0x20))();
    }
  }
  return;
LAB_01a99724:
  plVar16 = (long *)plVar16[3];
  if (plVar16 != (long *)0x0) {
    plVar13 = plVar16 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar4) {
        *(int *)plVar13 = (int)*plVar13 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar10 = plVar16[0x21];
    fVar28 = 0.0;
    if (uVar10 != 0) {
      uVar12 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
      uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar12 < 2) {
        uVar9 = uVar10 - 1 & 0x44e143b224c41b6c;
      }
      else if (uVar10 < 0x44e143b224c41b6d) {
        uVar9 = 0;
        if (uVar10 != 0) {
          uVar9 = 0x44e143b224c41b6c / uVar10;
        }
        uVar9 = 0x44e143b224c41b6c - uVar9 * uVar10;
      }
      else {
        uVar9 = 0x44e143b224c41b6c;
      }
      plVar18 = *(long **)(plVar16[0x20] + uVar9 * 8);
      if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
        if (uVar12 < 2) {
          do {
            if (plVar18[1] == 0x44e143b224c41b6c) {
              if (plVar18[2] == 0x44e143b224c41b6c) goto LAB_01a99868;
            }
            else if ((plVar18[1] & uVar10 - 1) != uVar9) break;
            plVar18 = (long *)*plVar18;
          } while (plVar18 != (long *)0x0);
        }
        else {
          do {
            uVar12 = plVar18[1];
            if (uVar12 == 0x44e143b224c41b6c) {
              if (plVar18[2] == 0x44e143b224c41b6c) goto LAB_01a99868;
            }
            else {
              if (uVar10 <= uVar12) {
                uVar11 = 0;
                if (uVar10 != 0) {
                  uVar11 = uVar12 / uVar10;
                }
                uVar12 = uVar12 - uVar11 * uVar10;
              }
              if (uVar12 != uVar9) break;
            }
            plVar18 = (long *)*plVar18;
          } while (plVar18 != (long *)0x0);
        }
      }
    }
    goto LAB_01a9986c;
  }
  goto LAB_01a99880;
LAB_01a99868:
  fVar28 = *(float *)(plVar18 + 6);
LAB_01a9986c:
  do {
    iVar8 = (int)*plVar13 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar4) {
      *(int *)plVar13 = iVar8;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar8 == 0) {
    (**(code **)(*plVar16 + 0x10))();
  }
  goto LAB_01a99880;
LAB_01a99b08:
  fVar22 = *(float *)(plVar19 + 6);
  goto LAB_01a99b0c;
LAB_01a99ab8:
  plVar13 = (long *)*plVar13;
  if (plVar13 == (long *)0x0) goto LAB_01a99b20;
  goto LAB_01a999ac;
LAB_01a99cf8:
  plVar18 = (long *)plVar18[3];
  fVar23 = 0.0;
  if (plVar18 == (long *)0x0) goto LAB_01a99e50;
  plVar19 = plVar18 + 10;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
    if (bVar4) {
      *(int *)plVar19 = (int)*plVar19 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uVar10 = plVar18[0x21];
  fVar23 = 0.0;
  if (uVar10 != 0) {
    uVar9 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
    uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar9 < 2) {
      uVar11 = uVar10 - 1 & 0x6d1b23ff99cf4233;
    }
    else {
      uVar11 = 0x6d1b23ff99cf4233;
      if (uVar10 < 0x6d1b23ff99cf4234) {
        uVar11 = 0;
        if (uVar10 != 0) {
          uVar11 = 0x6d1b23ff99cf4233 / uVar10;
        }
        uVar11 = 0x6d1b23ff99cf4233 - uVar11 * uVar10;
      }
    }
    fVar23 = 0.0;
    plVar17 = *(long **)(plVar18[0x20] + uVar11 * 8);
    if (plVar17 != (long *)0x0) {
      plVar17 = (long *)*plVar17;
      fVar23 = 0.0;
      if (plVar17 != (long *)0x0) {
        if (uVar9 < 2) {
          do {
            if (plVar17[1] == 0x6d1b23ff99cf4233) {
              if (plVar17[2] == 0x6d1b23ff99cf4233) goto LAB_01a99e38;
            }
            else if ((plVar17[1] & uVar10 - 1) != uVar11) {
              fVar23 = 0.0;
              goto LAB_01a99e3c;
            }
            plVar17 = (long *)*plVar17;
          } while (plVar17 != (long *)0x0);
          fVar23 = 0.0;
        }
        else {
          do {
            uVar9 = plVar17[1];
            if (uVar9 == 0x6d1b23ff99cf4233) {
              if (plVar17[2] == 0x6d1b23ff99cf4233) goto LAB_01a99e38;
            }
            else {
              if (uVar10 <= uVar9) {
                uVar5 = 0;
                if (uVar10 != 0) {
                  uVar5 = uVar9 / uVar10;
                }
                uVar9 = uVar9 - uVar5 * uVar10;
              }
              if (uVar9 != uVar11) {
                fVar23 = 0.0;
                goto LAB_01a99e3c;
              }
            }
            plVar17 = (long *)*plVar17;
          } while (plVar17 != (long *)0x0);
          fVar23 = 0.0;
        }
      }
    }
  }
  goto LAB_01a99e3c;
LAB_01a99e38:
  fVar23 = *(float *)(plVar17 + 6);
LAB_01a99e3c:
  do {
    iVar8 = (int)*plVar19 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
    if (bVar4) {
      *(int *)plVar19 = iVar8;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar8 == 0) {
    (**(code **)(*plVar18 + 0x10))();
    plVar14 = (long *)PTR_DAT_04379668;
LAB_01a9a044:
    plVar16 = (long *)PTR_DAT_04379670;
  }
LAB_01a99e50:
  lVar21 = lVar21 + 0x30;
  if (lVar21 - *plVar13 == 0xff0) {
    plVar13 = plVar13 + 1;
    lVar21 = *plVar13;
  }
  fVar27 = fVar27 + (fVar22 / (float)uVar12) * fVar29;
  fVar22 = fVar22 + fVar23;
  uVar12 = param_1[0x178];
  if (lVar21 == lVar20) goto code_r0x01a99e7c;
  goto LAB_01a99c4c;
code_r0x01a99e7c:
  bVar2 = *puVar7;
  goto joined_r0x01a99e80;
LAB_01a99f18:
  plVar14 = (long *)plVar14[3];
  if (plVar14 != (long *)0x0) {
    plVar16 = plVar14 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar4) {
        *(int *)plVar16 = (int)*plVar16 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar10 = plVar14[0x21];
    fVar22 = 0.0;
    if (uVar10 != 0) {
      uVar9 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
      uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
      uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar9 < 2) {
        uVar11 = uVar10 - 1 & 0x967b242afb128401;
      }
      else if (uVar10 < 0x967b242afb128402) {
        uVar11 = 0;
        if (uVar10 != 0) {
          uVar11 = 0x967b242afb128401 / uVar10;
        }
        uVar11 = 0x967b242afb128401 - uVar11 * uVar10;
      }
      else {
        uVar11 = 0x967b242afb128401;
      }
      plVar13 = *(long **)(plVar14[0x20] + uVar11 * 8);
      if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
        if (uVar9 < 2) {
          do {
            if (plVar13[1] == 0x967b242afb128401) {
              if (plVar13[2] == -0x6984dbd504ed7bff) goto LAB_01a9a094;
            }
            else if ((plVar13[1] & uVar10 - 1) != uVar11) break;
            plVar13 = (long *)*plVar13;
          } while (plVar13 != (long *)0x0);
        }
        else {
          do {
            uVar9 = plVar13[1];
            if (uVar9 == 0x967b242afb128401) {
              if (plVar13[2] == -0x6984dbd504ed7bff) goto LAB_01a9a094;
            }
            else {
              if (uVar10 <= uVar9) {
                uVar5 = 0;
                if (uVar10 != 0) {
                  uVar5 = uVar9 / uVar10;
                }
                uVar9 = uVar9 - uVar5 * uVar10;
              }
              if (uVar9 != uVar11) break;
            }
            plVar13 = (long *)*plVar13;
          } while (plVar13 != (long *)0x0);
        }
      }
    }
    goto LAB_01a9a098;
  }
  goto LAB_01a9a160;
LAB_01a9a094:
  fVar22 = *(float *)(plVar13 + 6);
LAB_01a9a098:
  do {
    iVar8 = (int)*plVar16 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar4) {
      *(int *)plVar16 = iVar8;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar8 == 0) {
    (**(code **)(*plVar14 + 0x10))();
  }
  if (fVar22 < 1.1920929e-07) {
    fVar22 = 0.0;
  }
  else {
    FUN_01839c8c(&local_b8,param_1 + 0x15a);
    uVar10 = (**(code **)(*param_1 + 0x1a0))(param_1);
    if ((uVar10 & 1) == 0) {
      fVar29 = 1.0;
      if (local_b8 != (long *)0x0) goto LAB_01a9a11c;
    }
    else if (local_b8 == (long *)0x0) {
      fVar29 = 1.0;
    }
    else {
      fVar29 = (float)local_b8[0x2a] * (float)DAT_0388a140;
      fVar23 = (float)((ulong)local_b8[0x2a] >> 0x20) * (float)((ulong)DAT_0388a140 >> 0x20);
      fVar24 = (float)local_b8[0x2b] * (float)DAT_0388a148;
      fVar25 = (float)((ulong)local_b8[0x2b] >> 0x20) * (float)((ulong)DAT_0388a148 >> 0x20);
      auVar26._4_4_ = fVar23;
      auVar26._0_4_ = fVar29;
      auVar26._8_4_ = fVar24;
      auVar26._12_4_ = fVar25;
      auVar6._4_4_ = fVar23;
      auVar6._0_4_ = fVar29;
      auVar6._8_4_ = fVar24;
      auVar6._12_4_ = fVar25;
      auVar26 = NEON_ext(auVar26,auVar6,8,1);
      fVar23 = auVar26._0_4_ + fVar29 + auVar26._4_4_ + fVar23;
      fVar29 = -1.0;
      if ((-1.0 <= fVar23) && (fVar29 = fVar23, 1.0 < fVar23)) {
        fVar29 = 1.0;
      }
LAB_01a9a11c:
      lVar15 = local_b8[0xb];
      piVar1 = (int *)(lVar15 + 0xc);
      do {
        iVar8 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar8 + -1 == 0) {
        *(undefined8 *)(lVar15 + 0x18) = 0;
        (**(code **)(*local_b8 + 0x20))();
      }
    }
    fVar29 = (float)FUN_0095d8f0(fVar29);
    fVar29 = fVar29 / fVar22;
    fVar22 = 1.0;
    if (0.0 <= fVar29) {
      if (1.0 < fVar29) {
        fVar29 = 1.0;
      }
      fVar22 = 1.0 - fVar29;
    }
    fVar22 = (fVar27 / (float)uVar12) * fVar22;
  }
  goto LAB_01a9a160;
}


