/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025f32c4; name: FUN_025f32c4
 */


void FUN_025f32c4(long param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  int iVar13;
  int iVar14;
  undefined8 uVar15;
  long lVar16;
  undefined1 *puVar17;
  ulong uVar18;
  undefined1 *puVar19;
  long *plVar20;
  ulong uVar21;
  ulong uVar22;
  undefined1 *puVar23;
  long *plVar24;
  long *plVar25;
  undefined4 uVar26;
  long *local_98;
  undefined8 *local_90;
  undefined8 uStack_88;
  long *local_80;
  long *local_78;
  undefined8 local_68;
  
  if (*(long *)(param_1 + 0x1f0) == 0) {
    return;
  }
  FUN_00cfac20(&local_78);
  if (local_78 == (long *)0x0) {
    return;
  }
  local_90 = (undefined8 *)0x0;
  uStack_88 = 0;
  FUN_00ac3fa4(&local_90,local_78 + 0x49);
  FUN_0099c748(&local_80,&local_90);
  puVar6 = local_90;
  if (local_90 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_90 + 1);
    do {
      iVar14 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar14 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar14 + -1 == 0) {
      local_90[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar16 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar16;
      local_68 = *puVar6;
      FUN_02a44274(lVar16 + 0xd8,&local_68);
    }
  }
  if (local_80 == (long *)0x0) goto joined_r0x025f3548;
  local_90 = (undefined8 *)0x0;
  uStack_88 = 0;
  FUN_01a2bf84(&local_90,local_80 + 0xb9);
  FUN_009c685c(&local_98,&local_90);
  puVar6 = local_90;
  if (local_90 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_90 + 1);
    do {
      iVar14 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar14 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar14 + -1 == 0) {
      local_90[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar16 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar16;
      local_68 = *puVar6;
      FUN_02a44274(lVar16 + 0xd8,&local_68);
    }
  }
  if ((local_98 != (long *)0x0) &&
     ((**(code **)(*local_98 + 0x330))(local_98,0), local_98 != (long *)0x0)) {
    lVar16 = local_98[0xb];
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      iVar14 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar14 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar14 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*local_98 + 0x20))();
    }
  }
  if (*(int *)(param_1 + 0x290) == 1) {
    FUN_01a92f2c(&local_90,local_80);
    if (local_90 == (undefined8 *)0x0) {
      local_98 = (long *)0x0;
    }
    else {
      FUN_01aa5214(&local_98);
      puVar6 = local_90;
      if (local_90 != (undefined8 *)0x0) {
        piVar1 = (int *)(local_90 + 1);
        do {
          iVar14 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar14 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar14 + -1 == 0) {
          local_90[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar16 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar16;
          local_68 = *puVar6;
          FUN_02a44274(lVar16 + 0xd8,&local_68);
        }
      }
    }
    if ((local_98 != (long *)0x0) && ((**(code **)(*local_98 + 0xf8))(), local_98 != (long *)0x0)) {
      lVar16 = local_98[0xb];
      piVar1 = (int *)(lVar16 + 0xc);
      do {
        iVar14 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar14 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar14 + -1 == 0) {
        *(undefined8 *)(lVar16 + 0x18) = 0;
        (**(code **)(*local_98 + 0x20))();
      }
    }
    FUN_01aeb938(&local_90,local_78);
    puVar6 = local_90;
    puVar12 = PTR_DAT_04379e70;
    puVar11 = PTR_DAT_04379e68;
    puVar10 = PTR_DAT_043795e0;
    puVar9 = PTR_DAT_043795d8;
    puVar8 = PTR_DAT_043794d8;
    puVar7 = PTR_DAT_043794d0;
    if (local_90 != (undefined8 *)0x0) {
      if (*(int *)((long)local_90 + 0xc) != 0) {
        piVar1 = (int *)((long)local_90 + 0xc);
        iVar14 = *(int *)((long)local_90 + 0xc);
        do {
          plVar25 = (long *)puVar6[2];
          if (((*puVar11 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar11), iVar13 != 0)) {
            if (((*puVar9 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar9), iVar13 != 0)) {
              if (((*puVar7 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar7), iVar13 != 0)) {
                uVar15 = FUN_0087f8f0();
                *(undefined8 *)puVar8 = uVar15;
                __cxa_guard_release(puVar7);
              }
              *(undefined **)puVar10 = puVar8;
              __cxa_guard_release(puVar9);
            }
            *(undefined **)puVar12 = puVar10;
            __cxa_guard_release(puVar11);
          }
          while( true ) {
            if (plVar25 == (long *)0x0) goto LAB_025f37a4;
            if (plVar25 == (long *)puVar12) break;
            plVar25 = (long *)*plVar25;
          }
          iVar13 = *piVar1;
          if (iVar13 == iVar14) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar14 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') {
              lVar16 = puVar6[3];
              plVar25 = (long *)0x0;
              puVar6 = local_90;
              if (lVar16 != 0) {
                plVar25 = (long *)(lVar16 + -0x50);
              }
              goto joined_r0x025f373c;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar14 = iVar13;
        } while (iVar13 != 0);
      }
LAB_025f37a4:
      plVar25 = (long *)0x0;
      puVar6 = local_90;
joined_r0x025f373c:
      local_90 = puVar6;
      if (puVar6 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar6 + 1);
        do {
          iVar14 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar14 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar14 + -1 == 0) {
          puVar6[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar16 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar16;
          local_68 = *puVar6;
          FUN_02a44274(lVar16 + 0xd8,&local_68);
        }
      }
      if (plVar25 != (long *)0x0) {
        if (((*PTR_DAT_04379660 & 1) == 0) &&
           (iVar14 = __cxa_guard_acquire(PTR_DAT_04379660), iVar14 != 0)) {
          FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379660);
        }
        lVar16 = *(long *)PTR_DAT_04379668;
        *(long *)PTR_DAT_04379670 = lVar16;
        puVar17 = *(undefined1 **)(lVar16 + 0x60);
        uVar26 = 0;
        if (puVar17 != (undefined1 *)0x0) {
          uVar18 = (long)puVar17 - ((ulong)puVar17 >> 1 & 0x5555555555555555);
          uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
          uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar18 < 2) {
            puVar19 = (undefined1 *)((ulong)(puVar17 + -1) & 0x7c08eae870e235e0);
          }
          else if (&DAT_7c08eae870e235e0 < puVar17) {
            puVar19 = &DAT_7c08eae870e235e0;
          }
          else {
            uVar21 = 0;
            if (puVar17 != (undefined1 *)0x0) {
              uVar21 = 0x7c08eae870e235e0 / (ulong)puVar17;
            }
            puVar19 = &DAT_7c08eae870e235e0 + -(uVar21 * (long)puVar17);
          }
          plVar20 = *(long **)(*(long *)(lVar16 + 0x58) + (long)puVar19 * 8);
          if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
            if (uVar18 < 2) {
              do {
                if ((undefined1 *)plVar20[1] == &DAT_7c08eae870e235e0) {
                  if ((undefined1 *)plVar20[2] == &DAT_7c08eae870e235e0) goto LAB_025f38cc;
                }
                else if ((undefined1 *)((ulong)plVar20[1] & (ulong)(puVar17 + -1)) != puVar19)
                break;
                plVar20 = (long *)*plVar20;
              } while (plVar20 != (long *)0x0);
            }
            else {
              do {
                puVar23 = (undefined1 *)plVar20[1];
                if (puVar23 == &DAT_7c08eae870e235e0) {
                  if ((undefined1 *)plVar20[2] == &DAT_7c08eae870e235e0) goto LAB_025f38cc;
                }
                else {
                  if (puVar17 <= puVar23) {
                    uVar18 = 0;
                    if (puVar17 != (undefined1 *)0x0) {
                      uVar18 = (ulong)puVar23 / (ulong)puVar17;
                    }
                    puVar23 = puVar23 + -(uVar18 * (long)puVar17);
                  }
                  if (puVar23 != puVar19) break;
                }
                plVar20 = (long *)*plVar20;
              } while (plVar20 != (long *)0x0);
            }
          }
        }
        goto LAB_025f3a28;
      }
    }
  }
  goto joined_r0x025f3a68;
LAB_025f38cc:
  plVar20 = (long *)plVar20[3];
  if (plVar20 != (long *)0x0) {
    plVar2 = plVar20 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar18 = plVar20[0x21];
    uVar26 = 0;
    if (uVar18 != 0) {
      uVar21 = uVar18 - (uVar18 >> 1 & 0x5555555555555555);
      uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333);
      uVar21 = (uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar21 < 2) {
        uVar22 = uVar18 - 1 & 0x9830dc3238cf3c7c;
      }
      else if (uVar18 < 0x9830dc3238cf3c7d) {
        uVar22 = 0;
        if (uVar18 != 0) {
          uVar22 = 0x9830dc3238cf3c7c / uVar18;
        }
        uVar22 = 0x9830dc3238cf3c7c - uVar22 * uVar18;
      }
      else {
        uVar22 = 0x9830dc3238cf3c7c;
      }
      plVar24 = *(long **)(plVar20[0x20] + uVar22 * 8);
      if ((plVar24 != (long *)0x0) && (plVar24 = (long *)*plVar24, plVar24 != (long *)0x0)) {
        if (uVar21 < 2) {
          do {
            if (plVar24[1] == 0x9830dc3238cf3c7c) {
              if (plVar24[2] == -0x67cf23cdc730c384) goto LAB_025f3a10;
            }
            else if ((plVar24[1] & uVar18 - 1) != uVar22) break;
            plVar24 = (long *)*plVar24;
          } while (plVar24 != (long *)0x0);
        }
        else {
          do {
            uVar21 = plVar24[1];
            if (uVar21 == 0x9830dc3238cf3c7c) {
              if (plVar24[2] == -0x67cf23cdc730c384) goto LAB_025f3a10;
            }
            else {
              if (uVar18 <= uVar21) {
                uVar5 = 0;
                if (uVar18 != 0) {
                  uVar5 = uVar21 / uVar18;
                }
                uVar21 = uVar21 - uVar5 * uVar18;
              }
              if (uVar21 != uVar22) break;
            }
            plVar24 = (long *)*plVar24;
          } while (plVar24 != (long *)0x0);
        }
      }
    }
    goto LAB_025f3a14;
  }
  goto LAB_025f3a28;
LAB_025f3a10:
  uVar26 = (undefined4)plVar24[6];
LAB_025f3a14:
  do {
    iVar14 = (int)*plVar2 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar4) {
      *(int *)plVar2 = iVar14;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar14 == 0) {
    (**(code **)(*plVar20 + 0x10))();
  }
LAB_025f3a28:
  FUN_025e95e4(uVar26,plVar25);
  lVar16 = plVar25[0xb];
  piVar1 = (int *)(lVar16 + 0xc);
  do {
    iVar14 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar14 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar14 + -1 == 0) {
    *(undefined8 *)(lVar16 + 0x18) = 0;
    (**(code **)(*plVar25 + 0x20))(plVar25);
  }
joined_r0x025f3a68:
  if (local_80 != (long *)0x0) {
    lVar16 = local_80[0xb];
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      iVar14 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar14 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar14 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*local_80 + 0x20))();
    }
  }
joined_r0x025f3548:
  if (local_78 != (long *)0x0) {
    lVar16 = local_78[0xb];
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      iVar14 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar14 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar14 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*local_78 + 0x20))();
    }
  }
  return;
}


