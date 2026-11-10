/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b75b94; name: FUN_01b75b94
 */


/* WARNING: Type propagation algorithm not settling */

undefined1  [16] FUN_01b75b94(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  undefined1 *puVar15;
  ulong uVar16;
  undefined1 *puVar17;
  long lVar18;
  long *plVar19;
  ulong uVar20;
  ulong uVar21;
  undefined1 *puVar22;
  long *plVar23;
  undefined8 *puVar24;
  long *plVar25;
  float fVar26;
  undefined1 auVar27 [16];
  ulong local_a0;
  undefined8 uStack_98;
  long *local_88;
  long *local_80 [2];
  long *local_70;
  long local_68;
  
  puVar6 = PTR_DAT_04379660;
  if (*(char *)(param_1 + 0x602) != '\0') {
    if (((*PTR_DAT_04379660 & 1) == 0) &&
       (iVar12 = __cxa_guard_acquire(PTR_DAT_04379660), iVar12 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    puVar8 = PTR_DAT_04379670;
    puVar7 = PTR_DAT_04379668;
    lVar18 = *(long *)PTR_DAT_04379668;
    *(long *)PTR_DAT_04379670 = lVar18;
    puVar15 = *(undefined1 **)(lVar18 + 0x60);
    local_a0 = 0;
    if (puVar15 != (undefined1 *)0x0) {
      uVar16 = (long)puVar15 - ((ulong)puVar15 >> 1 & 0x5555555555555555);
      uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
      uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar16 < 2) {
        puVar17 = (undefined1 *)((ulong)(puVar15 + -1) & 0x43f1ff2edd86f123);
      }
      else if (&DAT_43f1ff2edd86f123 < puVar15) {
        puVar17 = &DAT_43f1ff2edd86f123;
      }
      else {
        uVar20 = 0;
        if (puVar15 != (undefined1 *)0x0) {
          uVar20 = 0x43f1ff2edd86f123 / (ulong)puVar15;
        }
        puVar17 = &DAT_43f1ff2edd86f123 + -(uVar20 * (long)puVar15);
      }
      plVar19 = *(long **)(*(long *)(lVar18 + 0x58) + (long)puVar17 * 8);
      if ((plVar19 != (long *)0x0) && (plVar19 = (long *)*plVar19, plVar19 != (long *)0x0)) {
        if (uVar16 < 2) {
          do {
            if ((undefined1 *)plVar19[1] == &DAT_43f1ff2edd86f123) {
              if ((undefined1 *)plVar19[2] == &DAT_43f1ff2edd86f123) goto LAB_01b75c84;
            }
            else if ((undefined1 *)((ulong)plVar19[1] & (ulong)(puVar15 + -1)) != puVar17) break;
            plVar19 = (long *)*plVar19;
          } while (plVar19 != (long *)0x0);
        }
        else {
          do {
            puVar22 = (undefined1 *)plVar19[1];
            if (puVar22 == &DAT_43f1ff2edd86f123) {
              if ((undefined1 *)plVar19[2] == &DAT_43f1ff2edd86f123) goto LAB_01b75c84;
            }
            else {
              if (puVar15 <= puVar22) {
                uVar16 = 0;
                if (puVar15 != (undefined1 *)0x0) {
                  uVar16 = (ulong)puVar22 / (ulong)puVar15;
                }
                puVar22 = puVar22 + -(uVar16 * (long)puVar15);
              }
              if (puVar22 != puVar17) break;
            }
            plVar19 = (long *)*plVar19;
          } while (plVar19 != (long *)0x0);
        }
      }
    }
    goto LAB_01b75de4;
  }
  goto LAB_01b75e38;
LAB_01b75c84:
  plVar19 = (long *)plVar19[3];
  if (plVar19 != (long *)0x0) {
    plVar25 = plVar19 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar3) {
        *(int *)plVar25 = (int)*plVar25 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar16 = plVar19[0x21];
    local_a0 = 0;
    if (uVar16 != 0) {
      uVar20 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
      uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333);
      uVar20 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar20 < 2) {
        uVar21 = uVar16 - 1 & 0x4a7c6e07aff076b3;
      }
      else if (uVar16 < 0x4a7c6e07aff076b4) {
        uVar21 = 0;
        if (uVar16 != 0) {
          uVar21 = 0x4a7c6e07aff076b3 / uVar16;
        }
        uVar21 = 0x4a7c6e07aff076b3 - uVar21 * uVar16;
      }
      else {
        uVar21 = 0x4a7c6e07aff076b3;
      }
      plVar23 = *(long **)(plVar19[0x20] + uVar21 * 8);
      if ((plVar23 != (long *)0x0) && (plVar23 = (long *)*plVar23, plVar23 != (long *)0x0)) {
        if (uVar20 < 2) {
          do {
            if (plVar23[1] == 0x4a7c6e07aff076b3) {
              if (plVar23[2] == 0x4a7c6e07aff076b3) goto LAB_01b75dc8;
            }
            else if ((plVar23[1] & uVar16 - 1) != uVar21) break;
            plVar23 = (long *)*plVar23;
          } while (plVar23 != (long *)0x0);
        }
        else {
          do {
            uVar20 = plVar23[1];
            if (uVar20 == 0x4a7c6e07aff076b3) {
              if (plVar23[2] == 0x4a7c6e07aff076b3) goto LAB_01b75dc8;
            }
            else {
              if (uVar16 <= uVar20) {
                uVar5 = 0;
                if (uVar16 != 0) {
                  uVar5 = uVar20 / uVar16;
                }
                uVar20 = uVar20 - uVar5 * uVar16;
              }
              if (uVar20 != uVar21) break;
            }
            plVar23 = (long *)*plVar23;
          } while (plVar23 != (long *)0x0);
        }
      }
    }
    goto LAB_01b75dcc;
  }
  goto LAB_01b75de4;
LAB_01b75dc8:
  local_a0 = (ulong)*(uint *)(plVar23 + 6);
LAB_01b75dcc:
  do {
    iVar12 = (int)*plVar25 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar25,0x10);
    if (bVar3) {
      *(int *)plVar25 = iVar12;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar12 == 0) {
    (**(code **)(*plVar19 + 0x10))();
  }
LAB_01b75de4:
  FUN_01b7236c(local_80,param_1 + 0x2e0);
  if (local_80[0] != (long *)0x0) {
    fVar26 = (float)(**(code **)(*local_80[0] + 0x30))();
    if (fVar26 < 0.9999999) {
      if (((*puVar6 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_04379660), iVar12 != 0)) {
        FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379660);
      }
      lVar18 = *(long *)puVar7;
      *(long *)puVar8 = lVar18;
      puVar15 = *(undefined1 **)(lVar18 + 0x60);
      local_a0 = 0;
      if (puVar15 != (undefined1 *)0x0) {
        uVar16 = (long)puVar15 - ((ulong)puVar15 >> 1 & 0x5555555555555555);
        uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
        uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar16 < 2) {
          puVar17 = (undefined1 *)((ulong)(puVar15 + -1) & 0x43f1ff2edd86f123);
        }
        else if (&DAT_43f1ff2edd86f123 < puVar15) {
          puVar17 = &DAT_43f1ff2edd86f123;
        }
        else {
          uVar20 = 0;
          if (puVar15 != (undefined1 *)0x0) {
            uVar20 = 0x43f1ff2edd86f123 / (ulong)puVar15;
          }
          puVar17 = &DAT_43f1ff2edd86f123 + -(uVar20 * (long)puVar15);
        }
        plVar19 = *(long **)(*(long *)(lVar18 + 0x58) + (long)puVar17 * 8);
        if ((plVar19 != (long *)0x0) && (plVar19 = (long *)*plVar19, plVar19 != (long *)0x0)) {
          if (uVar16 < 2) {
            do {
              if ((undefined1 *)plVar19[1] == &DAT_43f1ff2edd86f123) {
                if ((undefined1 *)plVar19[2] == &DAT_43f1ff2edd86f123) goto LAB_01b75f18;
              }
              else if ((undefined1 *)((ulong)plVar19[1] & (ulong)(puVar15 + -1)) != puVar17) break;
              plVar19 = (long *)*plVar19;
            } while (plVar19 != (long *)0x0);
          }
          else {
            do {
              puVar22 = (undefined1 *)plVar19[1];
              if (puVar22 == &DAT_43f1ff2edd86f123) {
                if ((undefined1 *)plVar19[2] == &DAT_43f1ff2edd86f123) goto LAB_01b75f18;
              }
              else {
                if (puVar15 <= puVar22) {
                  uVar16 = 0;
                  if (puVar15 != (undefined1 *)0x0) {
                    uVar16 = (ulong)puVar22 / (ulong)puVar15;
                  }
                  puVar22 = puVar22 + -(uVar16 * (long)puVar15);
                }
                if (puVar22 != puVar17) break;
              }
              plVar19 = (long *)*plVar19;
            } while (plVar19 != (long *)0x0);
          }
        }
      }
    }
    goto joined_r0x01b76088;
  }
  goto LAB_01b75e2c;
LAB_01b75f18:
  plVar19 = (long *)plVar19[3];
  if (plVar19 != (long *)0x0) {
    plVar25 = plVar19 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar3) {
        *(int *)plVar25 = (int)*plVar25 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar16 = plVar19[0x21];
    local_a0 = 0;
    if (uVar16 != 0) {
      uVar20 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
      uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333);
      uVar20 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar20 < 2) {
        uVar21 = uVar16 - 1 & 0xe26daf50c4a4ae38;
      }
      else if (uVar16 < 0xe26daf50c4a4ae39) {
        uVar21 = 0;
        if (uVar16 != 0) {
          uVar21 = 0xe26daf50c4a4ae38 / uVar16;
        }
        uVar21 = 0xe26daf50c4a4ae38 - uVar21 * uVar16;
      }
      else {
        uVar21 = 0xe26daf50c4a4ae38;
      }
      plVar23 = *(long **)(plVar19[0x20] + uVar21 * 8);
      if ((plVar23 != (long *)0x0) && (plVar23 = (long *)*plVar23, plVar23 != (long *)0x0)) {
        if (uVar20 < 2) {
          do {
            if (plVar23[1] == 0xe26daf50c4a4ae38) {
              if (plVar23[2] == -0x1d9250af3b5b51c8) goto LAB_01b7605c;
            }
            else if ((plVar23[1] & uVar16 - 1) != uVar21) break;
            plVar23 = (long *)*plVar23;
          } while (plVar23 != (long *)0x0);
        }
        else {
          do {
            uVar20 = plVar23[1];
            if (uVar20 == 0xe26daf50c4a4ae38) {
              if (plVar23[2] == -0x1d9250af3b5b51c8) goto LAB_01b7605c;
            }
            else {
              if (uVar16 <= uVar20) {
                uVar5 = 0;
                if (uVar16 != 0) {
                  uVar5 = uVar20 / uVar16;
                }
                uVar20 = uVar20 - uVar5 * uVar16;
              }
              if (uVar20 != uVar21) break;
            }
            plVar23 = (long *)*plVar23;
          } while (plVar23 != (long *)0x0);
        }
      }
    }
    goto LAB_01b76060;
  }
  goto joined_r0x01b76088;
LAB_01b7605c:
  local_a0 = (ulong)*(uint *)(plVar23 + 6);
LAB_01b76060:
  do {
    iVar12 = (int)*plVar25 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar25,0x10);
    if (bVar3) {
      *(int *)plVar25 = iVar12;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar12 == 0) {
    (**(code **)(*plVar19 + 0x10))();
  }
joined_r0x01b76088:
  if (local_80[0] != (long *)0x0) {
    (**(code **)(*local_80[0] + 0x18))();
  }
LAB_01b75e2c:
  uStack_98 = 0;
  if ((*(long *)(param_1 + 0x2f8) != 0) && (FUN_00cfac20(&local_70), local_70 != (long *)0x0)) {
    FUN_01a73640(local_80);
    plVar19 = local_80[0];
    puVar11 = PTR_DAT_04379e90;
    puVar10 = PTR_DAT_04379e88;
    puVar9 = PTR_DAT_043795e0;
    puVar8 = PTR_DAT_043795d8;
    puVar7 = PTR_DAT_043794d8;
    puVar6 = PTR_DAT_043794d0;
    if (local_80[0] == (long *)0x0) {
      plVar19 = (long *)0x0;
    }
    else {
      if (*(int *)((long)local_80[0] + 0xc) != 0) {
        piVar1 = (int *)((long)local_80[0] + 0xc);
        iVar12 = *(int *)((long)local_80[0] + 0xc);
        do {
          plVar25 = (long *)plVar19[2];
          if (((*puVar10 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar10), iVar13 != 0)) {
            if (((*puVar8 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar8), iVar13 != 0)) {
              if (((*puVar6 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar6), iVar13 != 0)) {
                uVar14 = FUN_0087f8f0();
                *(undefined8 *)puVar7 = uVar14;
                __cxa_guard_release(puVar6);
              }
              *(undefined **)puVar9 = puVar7;
              __cxa_guard_release(puVar8);
            }
            *(undefined **)puVar11 = puVar9;
            __cxa_guard_release(puVar10);
          }
          while( true ) {
            if (plVar25 == (long *)0x0) goto LAB_01b766a8;
            if (plVar25 == (long *)puVar11) break;
            plVar25 = (long *)*plVar25;
          }
          iVar13 = *piVar1;
          if (iVar13 == iVar12) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar12 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') {
              lVar18 = plVar19[3];
              plVar19 = (long *)0x0;
              plVar25 = local_80[0];
              if (lVar18 != 0) {
                plVar19 = (long *)(lVar18 + -0x50);
              }
              goto joined_r0x01b76640;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar12 = iVar13;
        } while (iVar13 != 0);
      }
LAB_01b766a8:
      plVar19 = (long *)0x0;
      plVar25 = local_80[0];
joined_r0x01b76640:
      local_80[0] = plVar25;
      if (plVar25 != (long *)0x0) {
        plVar23 = plVar25 + 1;
        do {
          iVar12 = (int)*plVar23 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar23,0x10);
          if (bVar3) {
            *(int *)plVar23 = iVar12;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar12 == 0) {
          plVar25[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar18 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar18;
          local_68 = *plVar25;
          FUN_02a44274(lVar18 + 0xd8,&local_68);
        }
      }
    }
    FUN_01aeda18(local_80,local_70);
    if (local_80[0] == (long *)0x0) {
      local_88 = (long *)0x0;
LAB_01b7614c:
      if (local_88 != (long *)0x0) goto LAB_01b76308;
LAB_01b76154:
      plVar25 = plVar19;
LAB_01b76158:
      if (plVar25 != (long *)0x0) goto LAB_01b7615c;
LAB_01b763d4:
      bVar3 = false;
    }
    else {
      FUN_00959eac(&local_88);
      plVar25 = local_80[0];
      if (local_80[0] == (long *)0x0) goto LAB_01b7614c;
      plVar23 = local_80[0] + 1;
      do {
        iVar12 = (int)*plVar23 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar3) {
          *(int *)plVar23 = iVar12;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar12 != 0) goto LAB_01b7614c;
      local_80[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar18 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar18;
      local_68 = *plVar25;
      FUN_02a44274(lVar18 + 0xd8,&local_68);
      if (local_88 == (long *)0x0) goto LAB_01b76154;
LAB_01b76308:
      FUN_01a73640(local_80);
      plVar25 = local_80[0];
      puVar9 = PTR_DAT_04379e90;
      puVar8 = PTR_DAT_04379e88;
      puVar7 = PTR_DAT_043795d8;
      puVar6 = PTR_DAT_043794d0;
      if (local_80[0] == (long *)0x0) {
LAB_01b7631c:
        plVar25 = (long *)0x0;
      }
      else {
        if (*(int *)((long)local_80[0] + 0xc) != 0) {
          piVar1 = (int *)((long)local_80[0] + 0xc);
          iVar12 = *(int *)((long)local_80[0] + 0xc);
          do {
            puVar24 = (undefined8 *)plVar25[2];
            if (((*puVar8 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar8), iVar13 != 0)) {
              if (((*puVar7 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar7), iVar13 != 0)) {
                if (((*puVar6 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar6), iVar13 != 0)) {
                  uVar14 = FUN_0087f8f0();
                  *(undefined8 *)PTR_DAT_043794d8 = uVar14;
                  __cxa_guard_release(puVar6);
                }
                *(undefined **)PTR_DAT_043795e0 = PTR_DAT_043794d8;
                __cxa_guard_release(puVar7);
              }
              *(undefined **)puVar9 = PTR_DAT_043795e0;
              __cxa_guard_release(puVar8);
            }
            if (puVar24 == (undefined8 *)0x0) goto LAB_01b765c0;
            while (puVar24 != (undefined8 *)puVar9) {
              puVar24 = (undefined8 *)*puVar24;
              if (puVar24 == (undefined8 *)0x0) goto LAB_01b7631c;
            }
            iVar13 = *piVar1;
            if (iVar13 == iVar12) {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar12 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') {
                lVar18 = plVar25[3];
                plVar25 = (long *)0x0;
                if (lVar18 != 0) {
                  plVar25 = (long *)(lVar18 + -0x50);
                }
                goto joined_r0x01b765c4;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            iVar12 = iVar13;
          } while (iVar13 != 0);
          goto LAB_01b7631c;
        }
LAB_01b765c0:
        plVar25 = (long *)0x0;
      }
joined_r0x01b765c4:
      plVar23 = local_80[0];
      if (plVar19 != (long *)0x0) {
        lVar18 = plVar19[0xb];
        piVar1 = (int *)(lVar18 + 0xc);
        do {
          iVar12 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar12 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar12 + -1 == 0) {
          *(undefined8 *)(lVar18 + 0x18) = 0;
          (**(code **)(*plVar19 + 0x20))(plVar19);
          plVar23 = local_80[0];
        }
      }
      if (plVar23 != (long *)0x0) {
        plVar19 = plVar23 + 1;
        do {
          iVar12 = (int)*plVar19 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar3) {
            *(int *)plVar19 = iVar12;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar12 == 0) {
          plVar23[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar18 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar18;
          local_68 = *plVar23;
          FUN_02a44274(lVar18 + 0xd8,&local_68);
        }
      }
      if (local_88 == (long *)0x0) goto LAB_01b76158;
      lVar18 = local_88[0xb];
      piVar1 = (int *)(lVar18 + 0xc);
      do {
        iVar12 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar12 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar12 + -1 != 0) goto LAB_01b76158;
      *(undefined8 *)(lVar18 + 0x18) = 0;
      (**(code **)(*local_88 + 0x20))();
      if (plVar25 == (long *)0x0) goto LAB_01b763d4;
LAB_01b7615c:
      auVar27 = FUN_01a84eb8(plVar25);
      fVar26 = (float)local_a0;
      local_a0 = CONCAT44(auVar27._4_4_ * fVar26,auVar27._0_4_ * fVar26);
      uStack_98 = CONCAT44(auVar27._12_4_ * fVar26,auVar27._8_4_ * fVar26);
      lVar18 = plVar25[0xb];
      piVar1 = (int *)(lVar18 + 0xc);
      do {
        iVar12 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar12 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar12 == 1) {
        *(undefined8 *)(lVar18 + 0x18) = 0;
        (**(code **)(*plVar25 + 0x20))(plVar25);
      }
      bVar3 = true;
    }
    if (local_70 != (long *)0x0) {
      lVar18 = local_70[0xb];
      piVar1 = (int *)(lVar18 + 0xc);
      do {
        iVar12 = *piVar1;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar12 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar12 + -1 == 0) {
        *(undefined8 *)(lVar18 + 0x18) = 0;
        (**(code **)(*local_70 + 0x20))();
      }
    }
    if (bVar3) goto LAB_01b75e3c;
  }
LAB_01b75e38:
  local_a0 = 0;
  uStack_98 = 0;
LAB_01b75e3c:
  auVar27._8_8_ = uStack_98;
  auVar27._0_8_ = local_a0;
  return auVar27;
}


