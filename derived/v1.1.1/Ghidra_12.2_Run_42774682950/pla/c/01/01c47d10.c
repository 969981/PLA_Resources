/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c47d10; name: FUN_01c47d10
 */


void FUN_01c47d10(long param_1)

{
  float *pfVar1;
  int *piVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined4 uVar15;
  int iVar16;
  int iVar17;
  ulong uVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  ulong uVar22;
  ulong uVar23;
  long *plVar24;
  long *plVar25;
  long lVar26;
  long lVar27;
  long *plVar28;
  long *plVar29;
  undefined8 *puVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 *local_d0;
  undefined1 *local_c8;
  undefined8 local_c0;
  long *local_b8;
  undefined8 *local_b0;
  char *local_a8;
  undefined8 local_a0;
  long *local_98;
  long *local_88;
  
  puVar14 = PTR_DAT_0437eee0;
  puVar13 = PTR_DAT_0437eed8;
  puVar12 = PTR_DAT_043794d8;
  puVar11 = PTR_DAT_043794d0;
  if (*(char *)(param_1 + 0x25c) == '\0') {
    return;
  }
  fVar38 = *(float *)(param_1 + 0x24c);
  fVar39 = *(float *)(param_1 + 0x250);
  fVar37 = *(float *)(param_1 + 0x254);
  fVar36 = *(float *)(param_1 + 600);
  lVar27 = *(long *)(param_1 + 0x220);
  if ((lVar27 == 0) || (*(int *)(lVar27 + 0xc) == 0)) {
LAB_01c47d60:
    uVar15 = 1;
  }
  else {
    piVar2 = (int *)(lVar27 + 0xc);
    iVar16 = *(int *)(lVar27 + 0xc);
    do {
      puVar21 = *(undefined8 **)(lVar27 + 0x10);
      if (((*puVar13 & 1) == 0) && (iVar17 = __cxa_guard_acquire(puVar13), iVar17 != 0)) {
        if (((*puVar11 & 1) == 0) && (iVar17 = __cxa_guard_acquire(puVar11), iVar17 != 0)) {
          uVar20 = FUN_0087f8f0();
          *(undefined8 *)puVar12 = uVar20;
          __cxa_guard_release(puVar11);
        }
        *(undefined **)puVar14 = puVar12;
        __cxa_guard_release(puVar13);
      }
      if (puVar21 == (undefined8 *)0x0) goto LAB_01c47d60;
      while (puVar21 != (undefined8 *)puVar14) {
        puVar21 = (undefined8 *)*puVar21;
        uVar15 = 1;
        if (puVar21 == (undefined8 *)0x0) goto LAB_01c47d64;
      }
      iVar17 = *piVar2;
      if (iVar17 == iVar16) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar16 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_01c48b24;
        lVar27 = *(long *)(lVar27 + 0x18);
        if (lVar27 != 0) {
          plVar29 = (long *)(lVar27 + -0x50);
          uVar15 = FUN_025993f4(plVar29);
          lVar27 = *(long *)(lVar27 + 8);
          piVar2 = (int *)(lVar27 + 0xc);
          do {
            iVar16 = *piVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = iVar16 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar16 + -1 == 0) {
            *(undefined8 *)(lVar27 + 0x18) = 0;
            (**(code **)(*plVar29 + 0x20))(plVar29);
          }
          break;
        }
        goto LAB_01c47d60;
      }
      ClearExclusiveLocal();
LAB_01c48b24:
      uVar15 = 1;
      iVar16 = iVar17;
    } while (iVar17 != 0);
  }
LAB_01c47d64:
  puVar14 = PTR_DAT_043795d8;
  puVar13 = PTR_DAT_043795d0;
  puVar12 = PTR_DAT_043795c8;
  puVar11 = PTR_DAT_043794d0;
  if ((((*(uint *)(param_1 + 0x248) < 2) && (*(float *)(param_1 + 0x24c) == fVar38)) &&
      (lVar27 = *(long *)(param_1 + 0x1f0), lVar27 != 0)) && (*(int *)(lVar27 + 0xc) != 0)) {
    piVar2 = (int *)(lVar27 + 0xc);
    iVar16 = *(int *)(lVar27 + 0xc);
    do {
      plVar29 = *(long **)(lVar27 + 0x10);
      if (((*puVar12 & 1) == 0) && (iVar17 = __cxa_guard_acquire(puVar12), iVar17 != 0)) {
        if (((*puVar14 & 1) == 0) && (iVar17 = __cxa_guard_acquire(puVar14), iVar17 != 0)) {
          if (((*puVar11 & 1) == 0) && (iVar17 = __cxa_guard_acquire(puVar11), iVar17 != 0)) {
            uVar20 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar20;
            __cxa_guard_release(puVar11);
          }
          *(undefined **)PTR_DAT_043795e0 = PTR_DAT_043794d8;
          __cxa_guard_release(puVar14);
        }
        *(undefined **)puVar13 = PTR_DAT_043795e0;
        __cxa_guard_release(puVar12);
      }
      while( true ) {
        if (plVar29 == (long *)0x0) goto LAB_01c47d70;
        if (plVar29 == (long *)puVar13) break;
        plVar29 = (long *)*plVar29;
      }
      iVar17 = *piVar2;
      if (iVar17 == iVar16) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar16 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
          lVar27 = *(long *)(lVar27 + 0x18);
          if (lVar27 != 0) {
            plVar29 = (long *)(lVar27 + -0x50);
            FUN_01a73640(&local_b0,plVar29);
            puVar21 = local_b0;
            if (local_b0 == (undefined8 *)0x0) goto LAB_01c48068;
            if (*(int *)((long)local_b0 + 0xc) == 0) goto LAB_01c481fc;
            piVar2 = (int *)((long)local_b0 + 0xc);
            iVar16 = *(int *)((long)local_b0 + 0xc);
            goto LAB_01c4811c;
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar16 = iVar17;
    } while (iVar17 != 0);
  }
  goto LAB_01c47d70;
LAB_01c4811c:
  do {
    plVar28 = (long *)puVar21[2];
    if (((*PTR_DAT_04379e88 & 1) == 0) &&
       (iVar17 = __cxa_guard_acquire(PTR_DAT_04379e88), iVar17 != 0)) {
      if (((*puVar14 & 1) == 0) && (iVar17 = __cxa_guard_acquire(puVar14), iVar17 != 0)) {
        if (((*puVar11 & 1) == 0) && (iVar17 = __cxa_guard_acquire(puVar11), iVar17 != 0)) {
          uVar20 = FUN_0087f8f0();
          *(undefined8 *)PTR_DAT_043794d8 = uVar20;
          __cxa_guard_release(puVar11);
        }
        *(undefined **)PTR_DAT_043795e0 = PTR_DAT_043794d8;
        __cxa_guard_release(puVar14);
      }
      *(undefined **)PTR_DAT_04379e90 = PTR_DAT_043795e0;
      __cxa_guard_release(PTR_DAT_04379e88);
    }
    while( true ) {
      if (plVar28 == (long *)0x0) goto LAB_01c481fc;
      if (plVar28 == (long *)PTR_DAT_04379e90) break;
      plVar28 = (long *)*plVar28;
    }
    iVar17 = *piVar2;
    if (iVar17 == iVar16) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar16 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') {
        lVar26 = puVar21[3];
        local_88 = (long *)0x0;
        puVar21 = local_b0;
        if (lVar26 != 0) {
          local_88 = (long *)(lVar26 + -0x50);
        }
        goto joined_r0x01c4827c;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar16 = iVar17;
  } while (iVar17 != 0);
LAB_01c481fc:
  local_88 = (long *)0x0;
  puVar21 = local_b0;
joined_r0x01c4827c:
  local_b0 = puVar21;
  if (puVar21 != (undefined8 *)0x0) {
    piVar2 = (int *)(puVar21 + 1);
    do {
      iVar16 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar16 + -1 == 0) {
      puVar21[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar16 = __cxa_guard_acquire(PTR_DAT_04379498), iVar16 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar26 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar26;
      local_d0 = (undefined1 *)*puVar21;
      FUN_02a44274(lVar26 + 0xd8,&local_d0);
    }
  }
  if (local_88 != (long *)0x0) {
    FUN_01a821c8(&local_b0,local_88);
    puVar21 = local_b0;
    if (local_b0 != (undefined8 *)0x0) {
      if (*(int *)((long)local_b0 + 0xc) != 0) {
        piVar2 = (int *)((long)local_b0 + 0xc);
        iVar16 = *(int *)((long)local_b0 + 0xc);
        do {
          plVar28 = (long *)puVar21[2];
          if (((*PTR_DAT_0437b088 & 1) == 0) &&
             (iVar17 = __cxa_guard_acquire(PTR_DAT_0437b088), iVar17 != 0)) {
            if (((*puVar14 & 1) == 0) && (iVar17 = __cxa_guard_acquire(puVar14), iVar17 != 0)) {
              if (((*puVar11 & 1) == 0) && (iVar17 = __cxa_guard_acquire(puVar11), iVar17 != 0)) {
                uVar20 = FUN_0087f8f0();
                *(undefined8 *)PTR_DAT_043794d8 = uVar20;
                __cxa_guard_release(puVar11);
              }
              *(undefined **)PTR_DAT_043795e0 = PTR_DAT_043794d8;
              __cxa_guard_release(puVar14);
            }
            *(undefined **)PTR_DAT_0437b090 = PTR_DAT_043795e0;
            __cxa_guard_release(PTR_DAT_0437b088);
          }
          while( true ) {
            if (plVar28 == (long *)0x0) goto LAB_01c48428;
            if (plVar28 == (long *)PTR_DAT_0437b090) break;
            plVar28 = (long *)*plVar28;
          }
          iVar17 = *piVar2;
          if (iVar17 == iVar16) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = iVar16 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') {
              lVar26 = puVar21[3];
              plVar28 = (long *)0x0;
              puVar21 = local_b0;
              if (lVar26 != 0) {
                plVar28 = (long *)(lVar26 + -0x50);
              }
              goto joined_r0x01c4844c;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar16 = iVar17;
        } while (iVar17 != 0);
      }
LAB_01c48428:
      plVar28 = (long *)0x0;
      puVar21 = local_b0;
joined_r0x01c4844c:
      local_b0 = puVar21;
      if (puVar21 != (undefined8 *)0x0) {
        piVar2 = (int *)(puVar21 + 1);
        do {
          iVar16 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = iVar16 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar16 + -1 == 0) {
          puVar21[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar16 = __cxa_guard_acquire(PTR_DAT_04379498), iVar16 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar26 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar26;
          local_d0 = (undefined1 *)*puVar21;
          FUN_02a44274(lVar26 + 0xd8,&local_d0);
        }
      }
      if (plVar28 == (long *)0x0) goto LAB_01c48ae8;
      uVar18 = FUN_01830438(plVar28);
      if (((uVar18 & 1) != 0) && (uVar18 = FUN_018305cc(plVar28), (uVar18 & 1) != 0)) {
        if (((*PTR_DAT_04379660 & 1) == 0) &&
           (iVar16 = __cxa_guard_acquire(PTR_DAT_04379660), iVar16 != 0)) {
          FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379660);
        }
        lVar26 = *(long *)PTR_DAT_04379668;
        *(long *)PTR_DAT_04379670 = lVar26;
        uVar18 = *(ulong *)(lVar26 + 0x60);
        fVar31 = 0.0;
        if (uVar18 != 0) {
          uVar22 = uVar18 - (uVar18 >> 1 & 0x5555555555555555);
          uVar22 = (uVar22 & 0x3333333333333333) + (uVar22 >> 2 & 0x3333333333333333);
          uVar22 = (uVar22 + (uVar22 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar22 < 2) {
            uVar23 = uVar18 - 1 & 0x5c0c635117f72945;
          }
          else {
            uVar23 = 0x5c0c635117f72945;
            if (uVar18 < 0x5c0c635117f72946) {
              uVar23 = 0;
              if (uVar18 != 0) {
                uVar23 = 0x5c0c635117f72945 / uVar18;
              }
              uVar23 = 0x5c0c635117f72945 - uVar23 * uVar18;
            }
          }
          plVar24 = *(long **)(*(long *)(lVar26 + 0x58) + uVar23 * 8);
          if ((plVar24 != (long *)0x0) && (plVar24 = (long *)*plVar24, plVar24 != (long *)0x0)) {
            if (uVar22 < 2) {
              do {
                if (plVar24[1] == 0x5c0c635117f72945) {
                  if (plVar24[2] == 0x5c0c635117f72945) goto LAB_01c487d4;
                }
                else if ((plVar24[1] & uVar18 - 1) != uVar23) break;
                plVar24 = (long *)*plVar24;
              } while (plVar24 != (long *)0x0);
            }
            else {
              do {
                uVar22 = plVar24[1];
                if (uVar22 == 0x5c0c635117f72945) {
                  if (plVar24[2] == 0x5c0c635117f72945) goto LAB_01c487d4;
                }
                else {
                  if (uVar18 <= uVar22) {
                    uVar7 = 0;
                    if (uVar18 != 0) {
                      uVar7 = uVar22 / uVar18;
                    }
                    uVar22 = uVar22 - uVar7 * uVar18;
                  }
                  if (uVar22 != uVar23) break;
                }
                plVar24 = (long *)*plVar24;
              } while (plVar24 != (long *)0x0);
            }
          }
        }
        goto LAB_01c48a48;
      }
      uVar18 = FUN_0183041c(plVar28);
      if (((uVar18 & 1) != 0) && (uVar18 = FUN_018305cc(plVar28), (uVar18 & 1) != 0)) {
        if (((*PTR_DAT_04379660 & 1) == 0) &&
           (iVar16 = __cxa_guard_acquire(PTR_DAT_04379660), iVar16 != 0)) {
          FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379660);
        }
        lVar26 = *(long *)PTR_DAT_04379668;
        *(long *)PTR_DAT_04379670 = lVar26;
        uVar18 = *(ulong *)(lVar26 + 0x60);
        fVar31 = 0.0;
        if (uVar18 != 0) {
          uVar22 = uVar18 - (uVar18 >> 1 & 0x5555555555555555);
          uVar22 = (uVar22 & 0x3333333333333333) + (uVar22 >> 2 & 0x3333333333333333);
          uVar22 = (uVar22 + (uVar22 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar22 < 2) {
            uVar23 = uVar18 - 1 & 0x5c0c635117f72945;
          }
          else {
            uVar23 = 0x5c0c635117f72945;
            if (uVar18 < 0x5c0c635117f72946) {
              uVar23 = 0;
              if (uVar18 != 0) {
                uVar23 = 0x5c0c635117f72945 / uVar18;
              }
              uVar23 = 0x5c0c635117f72945 - uVar23 * uVar18;
            }
          }
          plVar24 = *(long **)(*(long *)(lVar26 + 0x58) + uVar23 * 8);
          if ((plVar24 != (long *)0x0) && (plVar24 = (long *)*plVar24, plVar24 != (long *)0x0)) {
            if (uVar22 < 2) {
              do {
                if (plVar24[1] == 0x5c0c635117f72945) {
                  if (plVar24[2] == 0x5c0c635117f72945) goto LAB_01c48858;
                }
                else if ((plVar24[1] & uVar18 - 1) != uVar23) break;
                plVar24 = (long *)*plVar24;
              } while (plVar24 != (long *)0x0);
            }
            else {
              do {
                uVar22 = plVar24[1];
                if (uVar22 == 0x5c0c635117f72945) {
                  if (plVar24[2] == 0x5c0c635117f72945) goto LAB_01c48858;
                }
                else {
                  if (uVar18 <= uVar22) {
                    uVar7 = 0;
                    if (uVar18 != 0) {
                      uVar7 = uVar22 / uVar18;
                    }
                    uVar22 = uVar22 - uVar7 * uVar18;
                  }
                  if (uVar22 != uVar23) break;
                }
                plVar24 = (long *)*plVar24;
              } while (plVar24 != (long *)0x0);
            }
          }
        }
        goto LAB_01c48a94;
      }
      goto LAB_01c48ab8;
    }
    goto LAB_01c48ae8;
  }
  goto LAB_01c48068;
LAB_01c487d4:
  plVar24 = (long *)plVar24[3];
  if (plVar24 != (long *)0x0) {
    plVar3 = plVar24 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *(int *)plVar3 = (int)*plVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uVar18 = plVar24[0x21];
    fVar31 = 0.0;
    if (uVar18 != 0) {
      uVar22 = uVar18 - (uVar18 >> 1 & 0x5555555555555555);
      uVar22 = (uVar22 & 0x3333333333333333) + (uVar22 >> 2 & 0x3333333333333333);
      uVar22 = (uVar22 + (uVar22 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar22 < 2) {
        uVar23 = uVar18 - 1 & 0x6216282a0eafde8b;
      }
      else if (uVar18 < 0x6216282a0eafde8c) {
        uVar23 = 0;
        if (uVar18 != 0) {
          uVar23 = 0x6216282a0eafde8b / uVar18;
        }
        uVar23 = 0x6216282a0eafde8b - uVar23 * uVar18;
      }
      else {
        uVar23 = 0x6216282a0eafde8b;
      }
      plVar25 = *(long **)(plVar24[0x20] + uVar23 * 8);
      if ((plVar25 != (long *)0x0) && (plVar25 = (long *)*plVar25, plVar25 != (long *)0x0)) {
        if (uVar22 < 2) {
          do {
            if (plVar25[1] == 0x6216282a0eafde8b) {
              if (plVar25[2] == 0x6216282a0eafde8b) goto LAB_01c48a24;
            }
            else if ((plVar25[1] & uVar18 - 1) != uVar23) break;
            plVar25 = (long *)*plVar25;
          } while (plVar25 != (long *)0x0);
        }
        else {
          do {
            uVar22 = plVar25[1];
            if (uVar22 == 0x6216282a0eafde8b) {
              if (plVar25[2] == 0x6216282a0eafde8b) goto LAB_01c48a24;
            }
            else {
              if (uVar18 <= uVar22) {
                uVar7 = 0;
                if (uVar18 != 0) {
                  uVar7 = uVar22 / uVar18;
                }
                uVar22 = uVar22 - uVar7 * uVar18;
              }
              if (uVar22 != uVar23) break;
            }
            plVar25 = (long *)*plVar25;
          } while (plVar25 != (long *)0x0);
        }
      }
    }
    goto LAB_01c48a28;
  }
  goto LAB_01c48a48;
LAB_01c48a24:
  fVar31 = *(float *)(plVar25 + 6);
LAB_01c48a28:
  do {
    iVar16 = (int)*plVar3 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar5) {
      *(int *)plVar3 = iVar16;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar16 == 0) {
    (**(code **)(*plVar24 + 0x10))();
  }
LAB_01c48a48:
  *(undefined1 *)(param_1 + 0x266) = 1;
  *(float *)(param_1 + 0x254) = *(float *)(param_1 + 0x254) + fVar31 * 0.033333335;
  goto LAB_01c48ab8;
LAB_01c48858:
  plVar24 = (long *)plVar24[3];
  if (plVar24 != (long *)0x0) {
    plVar3 = plVar24 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *(int *)plVar3 = (int)*plVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uVar18 = plVar24[0x21];
    fVar31 = 0.0;
    if (uVar18 != 0) {
      uVar22 = uVar18 - (uVar18 >> 1 & 0x5555555555555555);
      uVar22 = (uVar22 & 0x3333333333333333) + (uVar22 >> 2 & 0x3333333333333333);
      uVar22 = (uVar22 + (uVar22 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar22 < 2) {
        uVar23 = uVar18 - 1 & 0xa13b6fa9a8bbfb72;
      }
      else if (uVar18 < 0xa13b6fa9a8bbfb73) {
        uVar23 = 0;
        if (uVar18 != 0) {
          uVar23 = 0xa13b6fa9a8bbfb72 / uVar18;
        }
        uVar23 = 0xa13b6fa9a8bbfb72 - uVar23 * uVar18;
      }
      else {
        uVar23 = 0xa13b6fa9a8bbfb72;
      }
      plVar25 = *(long **)(plVar24[0x20] + uVar23 * 8);
      if ((plVar25 != (long *)0x0) && (plVar25 = (long *)*plVar25, plVar25 != (long *)0x0)) {
        if (uVar22 < 2) {
          do {
            if (plVar25[1] == 0xa13b6fa9a8bbfb72) {
              if (plVar25[2] == -0x5ec490565744048e) goto LAB_01c48a70;
            }
            else if ((plVar25[1] & uVar18 - 1) != uVar23) break;
            plVar25 = (long *)*plVar25;
          } while (plVar25 != (long *)0x0);
        }
        else {
          do {
            uVar22 = plVar25[1];
            if (uVar22 == 0xa13b6fa9a8bbfb72) {
              if (plVar25[2] == -0x5ec490565744048e) goto LAB_01c48a70;
            }
            else {
              if (uVar18 <= uVar22) {
                uVar7 = 0;
                if (uVar18 != 0) {
                  uVar7 = uVar22 / uVar18;
                }
                uVar22 = uVar22 - uVar7 * uVar18;
              }
              if (uVar22 != uVar23) break;
            }
            plVar25 = (long *)*plVar25;
          } while (plVar25 != (long *)0x0);
        }
      }
    }
    goto LAB_01c48a74;
  }
  goto LAB_01c48a94;
LAB_01c48a70:
  fVar31 = *(float *)(plVar25 + 6);
LAB_01c48a74:
  do {
    iVar16 = (int)*plVar3 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar5) {
      *(int *)plVar3 = iVar16;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar16 == 0) {
    (**(code **)(*plVar24 + 0x10))();
  }
LAB_01c48a94:
  *(undefined1 *)(param_1 + 0x264) = 1;
  *(float *)(param_1 + 0x24c) = *(float *)(param_1 + 0x24c) + fVar31 * 0.033333335;
LAB_01c48ab8:
  lVar26 = plVar28[0xb];
  piVar2 = (int *)(lVar26 + 0xc);
  do {
    iVar16 = *piVar2;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar5) {
      *piVar2 = iVar16 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar16 + -1 == 0) {
    *(undefined8 *)(lVar26 + 0x18) = 0;
    (**(code **)(*plVar28 + 0x20))(plVar28);
  }
LAB_01c48ae8:
  lVar26 = local_88[0xb];
  piVar2 = (int *)(lVar26 + 0xc);
  do {
    iVar16 = *piVar2;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar5) {
      *piVar2 = iVar16 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar16 + -1 == 0) {
    *(undefined8 *)(lVar26 + 0x18) = 0;
    (**(code **)(*local_88 + 0x20))();
  }
LAB_01c48068:
  lVar27 = *(long *)(lVar27 + 8);
  piVar2 = (int *)(lVar27 + 0xc);
  do {
    iVar16 = *piVar2;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar5) {
      *piVar2 = iVar16 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar16 + -1 == 0) {
    *(undefined8 *)(lVar27 + 0x18) = 0;
    (**(code **)(*plVar29 + 0x20))(plVar29);
    lVar27 = *(long *)(param_1 + 0x230);
    pbVar8 = PTR_DAT_043794d0;
    puVar21 = (undefined8 *)PTR_DAT_043794d8;
    pbVar9 = PTR_DAT_043796f0;
    puVar10 = (undefined8 *)PTR_DAT_043796f8;
  }
  else {
LAB_01c47d70:
    lVar27 = *(long *)(param_1 + 0x230);
    pbVar8 = PTR_DAT_043794d0;
    puVar21 = (undefined8 *)PTR_DAT_043794d8;
    pbVar9 = PTR_DAT_043796f0;
    puVar10 = (undefined8 *)PTR_DAT_043796f8;
  }
  PTR_DAT_043794d0 = pbVar8;
  PTR_DAT_043794d8 = (undefined *)puVar21;
  PTR_DAT_043796f0 = pbVar9;
  PTR_DAT_043796f8 = (undefined *)puVar10;
  if ((lVar27 != 0) && (*(int *)(lVar27 + 0xc) != 0)) {
    piVar2 = (int *)(lVar27 + 0xc);
    iVar16 = *(int *)(lVar27 + 0xc);
    do {
      puVar30 = *(undefined8 **)(lVar27 + 0x10);
      if (((*pbVar9 & 1) == 0) && (iVar17 = __cxa_guard_acquire(pbVar9), iVar17 != 0)) {
        if (((*pbVar8 & 1) == 0) && (iVar17 = __cxa_guard_acquire(pbVar8), iVar17 != 0)) {
          uVar20 = FUN_0087f8f0();
          *puVar21 = uVar20;
          __cxa_guard_release(pbVar8);
        }
        *puVar10 = puVar21;
        __cxa_guard_release(pbVar9);
      }
      while( true ) {
        if (puVar30 == (undefined8 *)0x0) goto LAB_01c47d78;
        if (puVar30 == puVar10) break;
        puVar30 = (undefined8 *)*puVar30;
      }
      iVar17 = *piVar2;
      if (iVar17 == iVar16) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar16 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
          lVar27 = *(long *)(lVar27 + 0x18);
          if (lVar27 != 0) {
            plVar29 = (long *)(lVar27 + -0x50);
            uVar18 = FUN_01f26cf4(plVar29,&DAT_03a7d1b0);
            if ((uVar18 & 1) == 0) goto LAB_01c48c94;
            if (((*(float *)(param_1 + 0x24c) != fVar38) ||
                (lVar26 = *(long *)(param_1 + 0x220), lVar26 == 0)) || (*(int *)(lVar26 + 0xc) == 0)
               ) goto LAB_01c48c74;
            piVar2 = (int *)(lVar26 + 0xc);
            iVar16 = *(int *)(lVar26 + 0xc);
            goto LAB_01c48d48;
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar16 = iVar17;
    } while (iVar17 != 0);
  }
  goto LAB_01c47d78;
LAB_01c48d48:
  do {
    plVar28 = *(long **)(lVar26 + 0x10);
    if (((*PTR_DAT_0437eed8 & 1) == 0) &&
       (iVar17 = __cxa_guard_acquire(PTR_DAT_0437eed8), iVar17 != 0)) {
      if (((*pbVar8 & 1) == 0) && (iVar17 = __cxa_guard_acquire(pbVar8), iVar17 != 0)) {
        uVar20 = FUN_0087f8f0();
        *puVar21 = uVar20;
        __cxa_guard_release(pbVar8);
      }
      *(undefined8 **)PTR_DAT_0437eee0 = puVar21;
      __cxa_guard_release(PTR_DAT_0437eed8);
    }
    while( true ) {
      if (plVar28 == (long *)0x0) goto LAB_01c48c74;
      if (plVar28 == (long *)PTR_DAT_0437eee0) break;
      plVar28 = (long *)*plVar28;
    }
    iVar17 = *piVar2;
    if (iVar17 == iVar16) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar16 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') {
        lVar26 = *(long *)(lVar26 + 0x18);
        if (lVar26 != 0) {
          plVar28 = (long *)(lVar26 + -0x50);
          iVar16 = FUN_025993f4(plVar28);
          if ((iVar16 != 3) && (iVar16 = FUN_025993f4(plVar28), iVar16 != 7)) goto LAB_01c48db4;
          if (((*PTR_DAT_04379660 & 1) == 0) &&
             (iVar16 = __cxa_guard_acquire(PTR_DAT_04379660), iVar16 != 0)) {
            FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379660);
          }
          lVar19 = *(long *)PTR_DAT_04379668;
          *(long *)PTR_DAT_04379670 = lVar19;
          uVar18 = *(ulong *)(lVar19 + 0x60);
          fVar31 = 0.0;
          if (uVar18 == 0) goto LAB_01c49004;
          uVar22 = uVar18 - (uVar18 >> 1 & 0x5555555555555555);
          uVar22 = (uVar22 & 0x3333333333333333) + (uVar22 >> 2 & 0x3333333333333333);
          uVar22 = (uVar22 + (uVar22 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar22 < 2) {
            uVar23 = uVar18 - 1 & 0x5c0c635117f72945;
          }
          else if (uVar18 < 0x5c0c635117f72946) {
            uVar23 = 0;
            if (uVar18 != 0) {
              uVar23 = 0x5c0c635117f72945 / uVar18;
            }
            uVar23 = 0x5c0c635117f72945 - uVar23 * uVar18;
          }
          else {
            uVar23 = 0x5c0c635117f72945;
          }
          plVar24 = *(long **)(*(long *)(lVar19 + 0x58) + uVar23 * 8);
          if ((plVar24 == (long *)0x0) || (plVar24 = (long *)*plVar24, plVar24 == (long *)0x0))
          goto LAB_01c49004;
          if (1 < uVar22) goto LAB_01c48e90;
          goto LAB_01c490f8;
        }
        break;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar16 = iVar17;
  } while (iVar17 != 0);
  goto LAB_01c48c74;
LAB_01c48e90:
  do {
    uVar22 = plVar24[1];
    if (uVar22 == 0x5c0c635117f72945) {
      if (plVar24[2] == 0x5c0c635117f72945) goto LAB_01c48ea8;
    }
    else {
      if (uVar18 <= uVar22) {
        uVar7 = 0;
        if (uVar18 != 0) {
          uVar7 = uVar22 / uVar18;
        }
        uVar22 = uVar22 - uVar7 * uVar18;
      }
      if (uVar22 != uVar23) break;
    }
    plVar24 = (long *)*plVar24;
  } while (plVar24 != (long *)0x0);
  goto LAB_01c49004;
  while (plVar24 = (long *)*plVar24, plVar24 != (long *)0x0) {
LAB_01c490f8:
    if (plVar24[1] == 0x5c0c635117f72945) {
      if (plVar24[2] == 0x5c0c635117f72945) goto LAB_01c48ea8;
    }
    else if ((plVar24[1] & uVar18 - 1) != uVar23) break;
  }
LAB_01c49004:
  *(undefined1 *)(param_1 + 0x264) = 1;
  *(float *)(param_1 + 0x24c) = *(float *)(param_1 + 0x24c) + fVar31 * 0.033333335;
LAB_01c48db4:
  lVar26 = *(long *)(lVar26 + 8);
  piVar2 = (int *)(lVar26 + 0xc);
  do {
    iVar16 = *piVar2;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar5) {
      *piVar2 = iVar16 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar16 + -1 == 0) {
    *(undefined8 *)(lVar26 + 0x18) = 0;
    (**(code **)(*plVar28 + 0x20))(plVar28);
  }
LAB_01c48c74:
  if ((((*(int *)(param_1 + 0x248) != 3) && (*(float *)(param_1 + 0x250) == fVar39)) &&
      (lVar26 = *(long *)(param_1 + 0x220), lVar26 != 0)) && (*(int *)(lVar26 + 0xc) != 0)) {
    piVar2 = (int *)(lVar26 + 0xc);
    iVar16 = *(int *)(lVar26 + 0xc);
    do {
      plVar28 = *(long **)(lVar26 + 0x10);
      if (((*PTR_DAT_0437eed8 & 1) == 0) &&
         (iVar17 = __cxa_guard_acquire(PTR_DAT_0437eed8), iVar17 != 0)) {
        if (((*pbVar8 & 1) == 0) && (iVar17 = __cxa_guard_acquire(pbVar8), iVar17 != 0)) {
          uVar20 = FUN_0087f8f0();
          *puVar21 = uVar20;
          __cxa_guard_release(pbVar8);
        }
        *(undefined8 **)PTR_DAT_0437eee0 = puVar21;
        __cxa_guard_release(PTR_DAT_0437eed8);
      }
      while( true ) {
        if (plVar28 == (long *)0x0) goto LAB_01c48c94;
        if (plVar28 == (long *)PTR_DAT_0437eee0) break;
        plVar28 = (long *)*plVar28;
      }
      iVar17 = *piVar2;
      if (iVar17 == iVar16) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar16 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
          lVar26 = *(long *)(lVar26 + 0x18);
          if (lVar26 != 0) {
            plVar28 = (long *)(lVar26 + -0x50);
            iVar16 = FUN_025993f4(plVar28);
            if ((iVar16 != 4) && (iVar16 = FUN_025993f4(plVar28), iVar16 != 8)) goto LAB_01c491a4;
            if (((*PTR_DAT_04379660 & 1) == 0) &&
               (iVar16 = __cxa_guard_acquire(PTR_DAT_04379660), iVar16 != 0)) {
              FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379660);
            }
            lVar19 = *(long *)PTR_DAT_04379668;
            *(long *)PTR_DAT_04379670 = lVar19;
            uVar18 = *(ulong *)(lVar19 + 0x60);
            fVar31 = 0.0;
            if (uVar18 == 0) goto LAB_01c493f4;
            uVar22 = uVar18 - (uVar18 >> 1 & 0x5555555555555555);
            uVar22 = (uVar22 & 0x3333333333333333) + (uVar22 >> 2 & 0x3333333333333333);
            uVar22 = (uVar22 + (uVar22 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
            if (uVar22 < 2) {
              uVar23 = uVar18 - 1 & 0x5c0c635117f72945;
            }
            else if (uVar18 < 0x5c0c635117f72946) {
              uVar23 = 0;
              if (uVar18 != 0) {
                uVar23 = 0x5c0c635117f72945 / uVar18;
              }
              uVar23 = 0x5c0c635117f72945 - uVar23 * uVar18;
            }
            else {
              uVar23 = 0x5c0c635117f72945;
            }
            plVar24 = *(long **)(*(long *)(lVar19 + 0x58) + uVar23 * 8);
            if ((plVar24 == (long *)0x0) || (plVar24 = (long *)*plVar24, plVar24 == (long *)0x0))
            goto LAB_01c493f4;
            if (1 < uVar22) goto LAB_01c49280;
            goto LAB_01c494e8;
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar16 = iVar17;
    } while (iVar17 != 0);
  }
  goto LAB_01c48c94;
LAB_01c48ea8:
  plVar24 = (long *)plVar24[3];
  if (plVar24 != (long *)0x0) {
    plVar3 = plVar24 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *(int *)plVar3 = (int)*plVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uVar18 = plVar24[0x21];
    fVar31 = 0.0;
    if (uVar18 != 0) {
      uVar22 = uVar18 - (uVar18 >> 1 & 0x5555555555555555);
      uVar22 = (uVar22 & 0x3333333333333333) + (uVar22 >> 2 & 0x3333333333333333);
      uVar22 = (uVar22 + (uVar22 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar22 < 2) {
        uVar23 = uVar18 - 1 & 0xa13b6fa9a8bbfb72;
      }
      else if (uVar18 < 0xa13b6fa9a8bbfb73) {
        uVar23 = 0;
        if (uVar18 != 0) {
          uVar23 = 0xa13b6fa9a8bbfb72 / uVar18;
        }
        uVar23 = 0xa13b6fa9a8bbfb72 - uVar23 * uVar18;
      }
      else {
        uVar23 = 0xa13b6fa9a8bbfb72;
      }
      plVar25 = *(long **)(plVar24[0x20] + uVar23 * 8);
      if ((plVar25 != (long *)0x0) && (plVar25 = (long *)*plVar25, plVar25 != (long *)0x0)) {
        if (uVar22 < 2) {
          do {
            if (plVar25[1] == 0xa13b6fa9a8bbfb72) {
              if (plVar25[2] == -0x5ec490565744048e) goto LAB_01c48fec;
            }
            else if ((plVar25[1] & uVar18 - 1) != uVar23) break;
            plVar25 = (long *)*plVar25;
          } while (plVar25 != (long *)0x0);
        }
        else {
          do {
            uVar22 = plVar25[1];
            if (uVar22 == 0xa13b6fa9a8bbfb72) {
              if (plVar25[2] == -0x5ec490565744048e) goto LAB_01c48fec;
            }
            else {
              if (uVar18 <= uVar22) {
                uVar7 = 0;
                if (uVar18 != 0) {
                  uVar7 = uVar22 / uVar18;
                }
                uVar22 = uVar22 - uVar7 * uVar18;
              }
              if (uVar22 != uVar23) break;
            }
            plVar25 = (long *)*plVar25;
          } while (plVar25 != (long *)0x0);
        }
      }
    }
    goto LAB_01c48ff0;
  }
  goto LAB_01c49004;
LAB_01c48fec:
  fVar31 = *(float *)(plVar25 + 6);
LAB_01c48ff0:
  do {
    iVar16 = (int)*plVar3 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar5) {
      *(int *)plVar3 = iVar16;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar16 == 0) {
    (**(code **)(*plVar24 + 0x10))();
  }
  goto LAB_01c49004;
LAB_01c49280:
  do {
    uVar22 = plVar24[1];
    if (uVar22 == 0x5c0c635117f72945) {
      if (plVar24[2] == 0x5c0c635117f72945) goto LAB_01c49298;
    }
    else {
      if (uVar18 <= uVar22) {
        uVar7 = 0;
        if (uVar18 != 0) {
          uVar7 = uVar22 / uVar18;
        }
        uVar22 = uVar22 - uVar7 * uVar18;
      }
      if (uVar22 != uVar23) break;
    }
    plVar24 = (long *)*plVar24;
  } while (plVar24 != (long *)0x0);
  goto LAB_01c493f4;
LAB_01c49298:
  plVar24 = (long *)plVar24[3];
  if (plVar24 != (long *)0x0) {
    plVar3 = plVar24 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *(int *)plVar3 = (int)*plVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uVar18 = plVar24[0x21];
    fVar31 = 0.0;
    if (uVar18 != 0) {
      uVar22 = uVar18 - (uVar18 >> 1 & 0x5555555555555555);
      uVar22 = (uVar22 & 0x3333333333333333) + (uVar22 >> 2 & 0x3333333333333333);
      uVar22 = (uVar22 + (uVar22 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar22 < 2) {
        uVar23 = uVar18 - 1 & 0xc1e8a7b39c28dc45;
      }
      else if (uVar18 < 0xc1e8a7b39c28dc46) {
        uVar23 = 0;
        if (uVar18 != 0) {
          uVar23 = 0xc1e8a7b39c28dc45 / uVar18;
        }
        uVar23 = 0xc1e8a7b39c28dc45 - uVar23 * uVar18;
      }
      else {
        uVar23 = 0xc1e8a7b39c28dc45;
      }
      plVar25 = *(long **)(plVar24[0x20] + uVar23 * 8);
      if ((plVar25 != (long *)0x0) && (plVar25 = (long *)*plVar25, plVar25 != (long *)0x0)) {
        if (uVar22 < 2) {
          do {
            if (plVar25[1] == 0xc1e8a7b39c28dc45) {
              if (plVar25[2] == -0x3e17584c63d723bb) goto LAB_01c493dc;
            }
            else if ((plVar25[1] & uVar18 - 1) != uVar23) break;
            plVar25 = (long *)*plVar25;
          } while (plVar25 != (long *)0x0);
        }
        else {
          do {
            uVar22 = plVar25[1];
            if (uVar22 == 0xc1e8a7b39c28dc45) {
              if (plVar25[2] == -0x3e17584c63d723bb) goto LAB_01c493dc;
            }
            else {
              if (uVar18 <= uVar22) {
                uVar7 = 0;
                if (uVar18 != 0) {
                  uVar7 = uVar22 / uVar18;
                }
                uVar22 = uVar22 - uVar7 * uVar18;
              }
              if (uVar22 != uVar23) break;
            }
            plVar25 = (long *)*plVar25;
          } while (plVar25 != (long *)0x0);
        }
      }
    }
    goto LAB_01c493e0;
  }
  goto LAB_01c493f4;
LAB_01c493dc:
  fVar31 = *(float *)(plVar25 + 6);
LAB_01c493e0:
  do {
    iVar16 = (int)*plVar3 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar5) {
      *(int *)plVar3 = iVar16;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar16 == 0) {
    (**(code **)(*plVar24 + 0x10))();
  }
  goto LAB_01c493f4;
LAB_01c495f0:
  plVar29 = *(long **)(lVar26 + 0x10);
  lVar19 = FUN_00a3edb8();
  while( true ) {
    if (plVar29 == (long *)0x0) goto LAB_01c4957c;
    if (plVar29 == (long *)lVar19) break;
    plVar29 = (long *)*plVar29;
  }
  iVar17 = *piVar2;
  if (iVar17 == iVar16) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar5) {
      *piVar2 = iVar16 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') {
      lVar26 = *(long *)(lVar26 + 0x18);
      if (lVar26 != 0) {
        iVar16 = *(int *)(lVar26 + 0x220);
        plVar29 = (long *)(lVar26 + -0x50);
        if (0 < iVar16) {
          iVar17 = 0;
          do {
            uVar20 = FUN_02a9b354(plVar29,iVar17);
            puVar21 = (undefined8 *)FUN_02a9b144(plVar29,uVar20);
            plVar28 = (long *)*puVar21;
            if (plVar28 != (long *)0x0) {
              plVar24 = plVar28 + 10;
              do {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar24,0x10);
                if (bVar5) {
                  *(int *)plVar24 = (int)*plVar24 + 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
            }
            local_a8 = "kWeatherScale";
            local_b0 = (undefined8 *)0x4e9cf159a2439980;
            local_a0 = 0x1f;
            local_98 = (long *)0x0;
            local_c8 = &DAT_03996322;
            local_d0 = &DAT_cbf29ce484222645;
            local_c0 = 0;
            local_b8 = (long *)0x0;
            FUN_02b39ed0(plVar28,&local_b0,pfVar1,&local_d0);
            if (local_b8 != (long *)0x0) {
              (**(code **)(*local_b8 + 0x20))();
            }
            if (local_98 != (long *)0x0) {
              (**(code **)(*local_98 + 0x20))();
            }
            if (plVar28 != (long *)0x0) {
              plVar24 = plVar28 + 10;
              do {
                iVar6 = (int)*plVar24 + -1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar24,0x10);
                if (bVar5) {
                  *(int *)plVar24 = iVar6;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar6 == 0) {
                (**(code **)(*plVar28 + 0x10))(plVar28);
              }
            }
            iVar17 = iVar17 + 1;
          } while (iVar17 != iVar16);
        }
        *(undefined1 *)(param_1 + 0x25d) = 0;
        lVar26 = *(long *)(lVar26 + 8);
        piVar2 = (int *)(lVar26 + 0xc);
        do {
          iVar16 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = iVar16 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar16 + -1 == 0) {
          *(undefined8 *)(lVar26 + 0x18) = 0;
          (**(code **)(*plVar29 + 0x20))(plVar29);
        }
      }
      goto LAB_01c4957c;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  iVar16 = iVar17;
  if (iVar17 == 0) {
LAB_01c4957c:
    lVar26 = *(long *)(lVar27 + 8);
    piVar2 = (int *)(lVar26 + 0xc);
    do {
      iVar16 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar16 + -1 == 0) {
      *(undefined8 *)(lVar26 + 0x18) = 0;
      (**(code **)(*(long *)(lVar27 + -0x50) + 0x20))((long *)(lVar27 + -0x50));
      return;
    }
    return;
  }
  goto LAB_01c495f0;
  while (plVar24 = (long *)*plVar24, plVar24 != (long *)0x0) {
LAB_01c494e8:
    if (plVar24[1] == 0x5c0c635117f72945) {
      if (plVar24[2] == 0x5c0c635117f72945) goto LAB_01c49298;
    }
    else if ((plVar24[1] & uVar18 - 1) != uVar23) break;
  }
LAB_01c493f4:
  *(undefined1 *)(param_1 + 0x265) = 1;
  *(float *)(param_1 + 0x250) = *(float *)(param_1 + 0x250) + fVar31 * 0.033333335;
LAB_01c491a4:
  lVar26 = *(long *)(lVar26 + 8);
  piVar2 = (int *)(lVar26 + 0xc);
  do {
    iVar16 = *piVar2;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar5) {
      *piVar2 = iVar16 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar16 + -1 == 0) {
    *(undefined8 *)(lVar26 + 0x18) = 0;
    (**(code **)(*plVar28 + 0x20))(plVar28);
  }
LAB_01c48c94:
  lVar27 = *(long *)(lVar27 + 8);
  piVar2 = (int *)(lVar27 + 0xc);
  do {
    iVar16 = *piVar2;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar5) {
      *piVar2 = iVar16 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar16 + -1 == 0) {
    *(undefined8 *)(lVar27 + 0x18) = 0;
    (**(code **)(*plVar29 + 0x20))(plVar29);
  }
LAB_01c47d78:
  fVar31 = *(float *)(param_1 + 0x24c);
  if (fVar31 == fVar38) {
    if (*(float *)(param_1 + 0x250) == fVar39) goto LAB_01c47d90;
  }
  else {
    *(float *)(param_1 + 0x250) = fVar39;
  }
  *(float *)(param_1 + 0x254) = fVar37;
LAB_01c47d90:
  pfVar1 = (float *)(param_1 + 0x24c);
  if ((fVar31 == fVar38) && (0.0 < fVar31)) {
    fVar31 = (float)FUN_01c49780(0,uVar15);
    fVar31 = *pfVar1 + fVar31 * -0.033333335;
    *pfVar1 = fVar31;
    if (fVar31 <= 0.0) {
      *(undefined1 *)(param_1 + 0x264) = 0;
    }
  }
  if ((*(float *)(param_1 + 0x250) == fVar39) && (0.0 < *(float *)(param_1 + 0x250))) {
    fVar31 = (float)FUN_01c49780(1,uVar15);
    fVar31 = *(float *)(param_1 + 0x250) + fVar31 * -0.033333335;
    *(float *)(param_1 + 0x250) = fVar31;
    if (fVar31 <= 0.0) {
      *(undefined1 *)(param_1 + 0x265) = 0;
    }
  }
  fVar31 = *(float *)(param_1 + 0x254);
  if ((fVar31 == fVar37) && (0.0 < fVar31)) {
    fVar31 = (float)FUN_01c49780(2,uVar15);
    fVar31 = *(float *)(param_1 + 0x254) + fVar31 * -0.033333335;
    *(float *)(param_1 + 0x254) = fVar31;
    if (fVar31 <= 0.0) {
      *(undefined1 *)(param_1 + 0x266) = 0;
    }
  }
  fVar34 = *pfVar1;
  fVar33 = 0.0;
  if ((0.0 <= fVar34) && (fVar33 = 1.0, fVar34 <= 1.0)) {
    fVar33 = fVar34;
  }
  fVar35 = *(float *)(param_1 + 0x250);
  *(float *)(param_1 + 0x24c) = fVar33;
  fVar34 = 0.0;
  if ((0.0 <= fVar35) && (fVar34 = 1.0, fVar35 <= 1.0)) {
    fVar34 = fVar35;
  }
  *(float *)(param_1 + 0x250) = fVar34;
  fVar35 = 0.0;
  if ((0.0 <= fVar31) && (fVar35 = 1.0, fVar31 <= 1.0)) {
    fVar35 = fVar31;
  }
  fVar32 = *(float *)(param_1 + 600);
  *(float *)(param_1 + 0x254) = fVar35;
  fVar31 = 0.0;
  if ((0.0 <= fVar32) && (fVar31 = 1.0, fVar32 <= 1.0)) {
    fVar31 = fVar32;
  }
  *(float *)(param_1 + 600) = fVar31;
  puVar12 = PTR_DAT_04379e80;
  puVar11 = PTR_DAT_04379e78;
  if (((((fVar34 != fVar39) || (fVar33 != fVar38)) || (*(char *)(param_1 + 0x25d) != '\0')) ||
      ((fVar35 != fVar37 || (fVar31 != fVar36)))) &&
     ((lVar27 = *(long *)(param_1 + 0x200), lVar27 != 0 && (*(int *)(lVar27 + 0xc) != 0)))) {
    piVar2 = (int *)(lVar27 + 0xc);
    iVar16 = *(int *)(lVar27 + 0xc);
    do {
      plVar29 = *(long **)(lVar27 + 0x10);
      if (((*puVar11 & 1) == 0) && (iVar17 = __cxa_guard_acquire(puVar11), iVar17 != 0)) {
        uVar20 = FUN_0095a420();
        *(undefined8 *)puVar12 = uVar20;
        __cxa_guard_release(puVar11);
      }
      while( true ) {
        if (plVar29 == (long *)0x0) {
          return;
        }
        if (plVar29 == (long *)puVar12) break;
        plVar29 = (long *)*plVar29;
      }
      iVar17 = *piVar2;
      if (iVar17 == iVar16) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar16 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
          lVar27 = *(long *)(lVar27 + 0x18);
          if (lVar27 == 0) {
            return;
          }
          lVar26 = *(long *)(lVar27 + 0x1a0);
          if ((lVar26 == 0) || (*(int *)(lVar26 + 0xc) == 0)) goto LAB_01c4957c;
          piVar2 = (int *)(lVar26 + 0xc);
          iVar16 = *(int *)(lVar26 + 0xc);
          goto LAB_01c495f0;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar16 = iVar17;
    } while (iVar17 != 0);
  }
  return;
}


