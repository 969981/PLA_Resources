/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a642bc; name: FUN_02a642bc
 */


void FUN_02a642bc(long param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  bool bVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  code *pcVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 *puVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  long *plVar24;
  undefined8 *puVar25;
  long lVar26;
  undefined8 uVar27;
  long *plVar28;
  long lVar29;
  long *plVar30;
  long *plVar31;
  byte *pbVar32;
  undefined8 *local_80;
  undefined8 uStack_78;
  ulong local_70;
  undefined8 local_68;
  
  lVar13 = nn::os::GetCurrentThread();
  plVar30 = (long *)(param_1 + 0x1c8);
  do {
    if (*plVar30 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x1bc));
        while (*plVar30 == 0) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar30,0x10);
          if (bVar7) {
            *plVar30 = lVar13;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_02a64328;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar30,0x10);
    if (bVar7) {
      *plVar30 = lVar13;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_02a64328:
  puVar10 = PTR_DAT_043794d8;
  puVar9 = PTR_DAT_043794d0;
  local_70 = 0;
  lVar13 = *(long *)(param_1 + 0x50);
  if (*(long *)(param_1 + 0x58) != lVar13) {
    do {
      lVar13 = lVar13 + local_70 * 0x40;
      plVar28 = (long *)(lVar13 + 8);
      lVar26 = *plVar28;
      lVar29 = *(long *)(lVar13 + 0x20);
      plVar30 = *(long **)(lVar13 + 0x28);
      if ((lVar26 != 0) && (*(int *)(lVar26 + 0xc) != 0)) {
        piVar1 = (int *)(lVar26 + 0xc);
        iVar12 = *(int *)(lVar26 + 0xc);
        while( true ) {
          plVar31 = *(long **)(lVar26 + 0x10);
          if (((*puVar9 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar9), iVar11 != 0)) {
            uVar27 = FUN_0087f8f0();
            *(undefined8 *)puVar10 = uVar27;
            __cxa_guard_release(puVar9);
          }
          while( true ) {
            if (plVar31 == (long *)0x0) goto LAB_02a645e0;
            if (plVar31 == (long *)puVar10) break;
            plVar31 = (long *)*plVar31;
          }
          iVar11 = *piVar1;
          if (iVar11 == iVar12) break;
          ClearExclusiveLocal();
LAB_02a643e0:
          iVar12 = iVar11;
          if (iVar11 == 0) goto LAB_02a645e0;
        }
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = iVar12 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
        if (cVar6 != '\0') goto LAB_02a643e0;
        lVar26 = *(long *)(lVar26 + 0x18);
        if (lVar26 == 0) goto LAB_02a645e0;
        puVar25 = (undefined8 *)(lVar13 + 0x30);
        FUN_0120bd20(puVar25);
        pcVar16 = *(code **)(lVar13 + 0x18);
        local_80 = (undefined8 *)0x0;
        uStack_78 = 0;
        FUN_008802f0(&local_80,plVar28);
        uVar17 = (*pcVar16)(&local_80,puVar25);
        puVar20 = local_80;
        if (local_80 != (undefined8 *)0x0) {
          piVar1 = (int *)(local_80 + 1);
          do {
            iVar12 = *piVar1;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar7) {
              *piVar1 = iVar12 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar12 + -1 == 0) {
            local_80[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar14 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar14;
            local_68 = *puVar20;
            FUN_02a44274(lVar14 + 0xd8,&local_68);
          }
        }
        *(undefined8 *)(lVar13 + 0x38) = 0;
        nn::os::GetSystemTick();
        uVar27 = nn::os::ConvertToTimeSpan();
        *puVar25 = uVar27;
        if ((uVar17 & 1) == 0) goto LAB_02a6438c;
        puVar25 = (undefined8 *)*plVar28;
        *plVar28 = 0;
        if (puVar25 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar25 + 1);
          do {
            iVar12 = *piVar1;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar7) {
              *piVar1 = iVar12 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar12 + -1 == 0) {
            puVar25[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar14 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar14;
            local_68 = *puVar25;
            FUN_02a44274(lVar14 + 0xd8,&local_68);
          }
        }
        *(undefined8 *)(lVar13 + 0x10) = 0;
        uVar17 = plVar30[1];
        if (uVar17 != 0) {
          uVar18 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
          uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
          uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar18 < 2) {
            uVar19 = uVar17 - 1 & local_70;
          }
          else {
            uVar19 = local_70;
            if (uVar17 <= local_70) {
              uVar19 = 0;
              if (uVar17 != 0) {
                uVar19 = local_70 / uVar17;
              }
              uVar19 = local_70 - uVar19 * uVar17;
            }
          }
          plVar28 = *(long **)(*plVar30 + uVar19 * 8);
          if ((plVar28 == (long *)0x0) || (plVar28 = (long *)*plVar28, plVar28 == (long *)0x0))
          goto LAB_02a647e8;
          if (1 < uVar18) {
            do {
              uVar18 = plVar28[1];
              if (uVar18 == local_70) {
                if (plVar28[2] == local_70) goto LAB_02a6438c;
              }
              else {
                if (uVar17 <= uVar18) {
                  uVar15 = 0;
                  if (uVar17 != 0) {
                    uVar15 = uVar18 / uVar17;
                  }
                  uVar18 = uVar18 - uVar15 * uVar17;
                }
                if (uVar18 != uVar19) break;
              }
              plVar28 = (long *)*plVar28;
            } while (plVar28 != (long *)0x0);
            goto LAB_02a647e8;
          }
          while( true ) {
            if (plVar28[1] == local_70) {
              if (plVar28[2] != local_70) goto LAB_02a647c8;
              goto LAB_02a6438c;
            }
            if ((plVar28[1] & uVar17 - 1) != uVar19) break;
LAB_02a647c8:
            plVar28 = (long *)*plVar28;
            if (plVar28 == (long *)0x0) break;
          }
        }
LAB_02a647e8:
        lVar13 = *(long *)(lVar29 + 8);
        lVar14 = *(long *)(lVar29 + 0x10);
        uVar17 = 0;
        if (lVar14 - lVar13 != 0) {
          uVar17 = (lVar14 - lVar13) * 0x40 - 1;
        }
        uVar18 = *(long *)(lVar29 + 0x48) + *(long *)(lVar29 + 0x40);
        if (uVar17 == uVar18) {
          FUN_02a6555c(lVar29);
          uVar18 = *(long *)(lVar29 + 0x40) + *(long *)(lVar29 + 0x48);
          lVar13 = *(long *)(lVar29 + 8);
          lVar14 = *(long *)(lVar29 + 0x10);
        }
        if (lVar14 == lVar13) {
          lVar13 = 0;
        }
        else {
          lVar13 = *(long *)(lVar13 + (uVar18 >> 6 & 0x3fffffffffffff8)) + (uVar18 & 0x1ff) * 8;
        }
        FUN_02a4607c(lVar29 + 0x50,lVar13,&local_70);
        *(long *)(lVar29 + 0x48) = *(long *)(lVar29 + 0x48) + 1;
        FUN_02a65258(plVar30,&local_70);
LAB_02a6438c:
        (**(code **)(*(long *)(lVar26 + -8) + 0x18))();
        goto LAB_02a6439c;
      }
LAB_02a645e0:
      if (local_70 < (ulong)(*(long *)(param_1 + 0x58) - *(long *)(param_1 + 0x50) >> 6)) {
        uVar17 = plVar30[1];
        if (uVar17 != 0) {
          uVar18 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
          uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
          uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar18 < 2) {
            uVar19 = uVar17 - 1 & local_70;
          }
          else {
            uVar19 = local_70;
            if (uVar17 <= local_70) {
              uVar19 = 0;
              if (uVar17 != 0) {
                uVar19 = local_70 / uVar17;
              }
              uVar19 = local_70 - uVar19 * uVar17;
            }
          }
          plVar28 = *(long **)(*plVar30 + uVar19 * 8);
          if ((plVar28 != (long *)0x0) && (plVar28 = (long *)*plVar28, plVar28 != (long *)0x0)) {
            if (uVar18 < 2) {
              do {
                if (plVar28[1] == local_70) {
                  if (plVar28[2] == local_70) goto LAB_02a6439c;
                }
                else if ((plVar28[1] & uVar17 - 1) != uVar19) break;
                plVar28 = (long *)*plVar28;
              } while (plVar28 != (long *)0x0);
            }
            else {
              do {
                uVar18 = plVar28[1];
                if (uVar18 == local_70) {
                  if (plVar28[2] == local_70) goto LAB_02a6439c;
                }
                else {
                  if (uVar17 <= uVar18) {
                    uVar15 = 0;
                    if (uVar17 != 0) {
                      uVar15 = uVar18 / uVar17;
                    }
                    uVar18 = uVar18 - uVar15 * uVar17;
                  }
                  if (uVar18 != uVar19) break;
                }
                plVar28 = (long *)*plVar28;
              } while (plVar28 != (long *)0x0);
            }
          }
        }
        lVar13 = *(long *)(lVar29 + 8);
        lVar26 = *(long *)(lVar29 + 0x10);
        uVar17 = 0;
        if (lVar26 - lVar13 != 0) {
          uVar17 = (lVar26 - lVar13) * 0x40 - 1;
        }
        uVar18 = *(long *)(lVar29 + 0x48) + *(long *)(lVar29 + 0x40);
        if (uVar17 == uVar18) {
          FUN_02a6555c(lVar29);
          uVar18 = *(long *)(lVar29 + 0x40) + *(long *)(lVar29 + 0x48);
          lVar13 = *(long *)(lVar29 + 8);
          lVar26 = *(long *)(lVar29 + 0x10);
        }
        if (lVar26 == lVar13) {
          lVar13 = 0;
        }
        else {
          lVar13 = *(long *)(lVar13 + (uVar18 >> 6 & 0x3fffffffffffff8)) + (uVar18 & 0x1ff) * 8;
        }
        FUN_02a4607c(lVar29 + 0x50,lVar13,&local_70);
        *(long *)(lVar29 + 0x48) = *(long *)(lVar29 + 0x48) + 1;
        FUN_02a65258(plVar30,&local_70);
      }
LAB_02a6439c:
      local_70 = local_70 + 1;
      lVar13 = *(long *)(param_1 + 0x50);
    } while (local_70 < (ulong)(*(long *)(param_1 + 0x58) - lVar13 >> 6));
  }
  lVar13 = nn::os::GetCurrentThread();
  plVar28 = (long *)PTR_DAT_043794a0;
  pbVar32 = PTR_DAT_04379498;
  plVar30 = (long *)(param_1 + 0x1b0);
  do {
    if (*plVar30 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x1a4));
        while (*plVar30 == 0) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar30,0x10);
          if (bVar7) {
            *plVar30 = lVar13;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_02a64928;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar30,0x10);
    if (bVar7) {
      *plVar30 = lVar13;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_02a64928:
  lVar13 = *(long *)(param_1 + 0x168);
  lVar29 = *(long *)(param_1 + 0x170);
  puVar9 = PTR_LAB_04379590;
  puVar10 = PTR_LAB_04379590;
  if (lVar29 == lVar13) {
joined_r0x02a6516c:
    while( true ) {
      PTR_LAB_04379590 = puVar10;
      puVar10 = PTR_LAB_04379590;
      PTR_LAB_04379590 = puVar9;
      if (lVar13 == lVar29) break;
      puVar25 = *(undefined8 **)(lVar29 + -0x38);
      lVar29 = lVar29 + -0x40;
      if (puVar25 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar25 + 1);
        do {
          iVar12 = *piVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar7) {
            *piVar1 = iVar12 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        puVar9 = PTR_LAB_04379590;
        if (iVar12 + -1 == 0) {
          puVar25[2] = 0;
          if (((*pbVar32 & 1) == 0) && (iVar12 = __cxa_guard_acquire(pbVar32), iVar12 != 0)) {
            FUN_00100250(puVar10,plVar28,&PTR_LOOP_0411a000);
            __cxa_guard_release(pbVar32);
          }
          lVar26 = *plVar28;
          *(long *)PTR_DAT_043794a8 = lVar26;
          local_68 = *puVar25;
          FUN_02a44274(lVar26 + 0xd8,&local_68);
          puVar9 = PTR_LAB_04379590;
        }
      }
    }
    *(long *)(param_1 + 0x170) = lVar13;
    *(undefined8 *)(param_1 + 0x1b0) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x1a4));
    *(undefined8 *)(param_1 + 0x1c8) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x1bc));
    return;
  }
  uVar17 = 0;
  puVar25 = (undefined8 *)(param_1 + 0x68);
LAB_02a6497c:
  puVar20 = (undefined8 *)(lVar13 + uVar17 * 0x40);
  if (*(long *)(param_1 + 0x138) == 0) {
    *(long *)*puVar20 = *(long *)(param_1 + 0x58) - *(long *)(param_1 + 0x50) >> 6;
    uVar18 = *(ulong *)(param_1 + 0x58);
    if (uVar18 < *(ulong *)(param_1 + 0x60)) {
      FUN_02a668e0(puVar25,uVar18,puVar20);
      *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x58) + 0x40;
      goto LAB_02a64968;
    }
    uVar19 = *(ulong *)(param_1 + 0x70);
    lVar13 = (long)(uVar18 - *(long *)(param_1 + 0x50)) >> 6;
    uVar18 = lVar13 + 1;
    if (0x7ffffffffffffffe < uVar19) {
      uVar19 = 0x7fffffffffffffff;
    }
    if (uVar19 < uVar18) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar29 = *(ulong *)(param_1 + 0x60) - *(long *)(param_1 + 0x50);
    if ((ulong)(lVar29 >> 6) < uVar19 >> 1) {
      uVar15 = lVar29 >> 5;
      uVar19 = uVar18;
      if (uVar18 <= uVar15) {
        uVar19 = uVar15;
      }
    }
    if (uVar19 == 0) {
      lVar29 = 0;
    }
    else {
      lVar29 = (**(code **)(*(long *)*puVar25 + 0x10))((long *)*puVar25,uVar19 << 6,8);
      if (lVar29 == 0) {
        (**(code **)(*(long *)*puVar25 + 0xb8))();
      }
    }
    lVar13 = lVar29 + lVar13 * 0x40;
    FUN_02a668e0(puVar25,lVar13,puVar20);
    plVar30 = *(long **)(param_1 + 0x50);
    plVar28 = *(long **)(param_1 + 0x58);
    if (plVar28 == plVar30) {
      lVar26 = lVar13;
      plVar31 = plVar30;
    }
    else {
      lVar26 = 0;
      do {
        uVar27 = *puVar25;
        if ((*PTR_DAT_04379520 & 1) == 0) {
          iVar12 = __cxa_guard_acquire(PTR_DAT_04379520);
          puVar9 = PTR_DAT_04379528;
          if (iVar12 != 0) {
            FUN_008a62a4(PTR_DAT_04379528);
            FUN_00100250(PTR_LAB_04379530,puVar9,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379520);
          }
        }
        lVar14 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
        if (lVar14 != 0) {
          if (0xf < *(ulong *)(lVar14 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = uVar27;
          *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
        }
        uVar27 = *(undefined8 *)((long)plVar28 + lVar26 + -0x40);
        lVar3 = lVar13 + lVar26;
        *(undefined8 *)(lVar3 + -0x38) = 0;
        *(undefined8 *)(lVar3 + -0x30) = 0;
        *(undefined8 *)(lVar3 + -0x40) = uVar27;
        FUN_008802f0((undefined8 *)(lVar3 + -0x38),(long)plVar28 + lVar26 + -0x38);
        *(undefined8 *)(lVar3 + -0x28) = *(undefined8 *)((long)plVar28 + lVar26 + -0x28);
        uVar27 = *(undefined8 *)((long)plVar28 + lVar26 + -0x20);
        uVar4 = *(undefined8 *)((long)plVar28 + lVar26 + -0x18);
        uVar5 = *(undefined8 *)((long)plVar28 + lVar26 + -8);
        *(undefined8 *)(lVar3 + -0x10) = *(undefined8 *)((long)plVar28 + lVar26 + -0x10);
        *(undefined8 *)(lVar3 + -8) = uVar5;
        *(undefined8 *)(lVar3 + -0x20) = uVar27;
        *(undefined8 *)(lVar3 + -0x18) = uVar4;
        if (lVar14 != 0) {
          *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
        }
        lVar26 = lVar26 + -0x40;
      } while ((long)plVar30 - (long)plVar28 != lVar26);
      plVar30 = *(long **)(param_1 + 0x58);
      lVar26 = lVar13 + lVar26;
      plVar31 = *(long **)(param_1 + 0x50);
    }
    lVar14 = *(long *)(param_1 + 0x60);
    *(long *)(param_1 + 0x50) = lVar26;
    *(long *)(param_1 + 0x58) = lVar13 + 0x40;
    *(ulong *)(param_1 + 0x60) = lVar29 + uVar19 * 0x40;
    plVar28 = (long *)PTR_DAT_043794a0;
    pbVar32 = PTR_DAT_04379498;
    while (plVar30 != plVar31) {
      puVar20 = (undefined8 *)plVar30[-7];
      plVar30 = plVar30 + -8;
      if (puVar20 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar20 + 1);
        do {
          iVar12 = *piVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar7) {
            *piVar1 = iVar12 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar12 + -1 == 0) {
          puVar20[2] = 0;
          if (((*pbVar32 & 1) == 0) && (iVar12 = __cxa_guard_acquire(pbVar32), iVar12 != 0)) {
            FUN_00100250(PTR_LAB_04379590,plVar28,&PTR_LOOP_0411a000);
            __cxa_guard_release(pbVar32);
          }
          lVar13 = *plVar28;
          *(long *)PTR_DAT_043794a8 = lVar13;
          local_68 = *puVar20;
          FUN_02a44274(lVar13 + 0xd8,&local_68);
        }
      }
    }
    if (plVar31 == (long *)0x0) goto LAB_02a64968;
    lVar14 = lVar14 - (long)plVar31;
    plVar30 = (long *)*puVar25;
    uVar18 = (**(code **)(*plVar30 + 0xc0))(plVar30);
    if ((uVar18 & 1) != 0) {
      lVar13 = tpidr_el0;
      if (*(char *)(lVar13 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar13 + 0x38d488) = 1;
        *(undefined8 *)(lVar13 + 0x38d478) = 0;
        *(undefined8 *)(lVar13 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar13 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar13 + 0x38d480) < 1) goto LAB_02a64dfc;
      goto LAB_02a65060;
    }
LAB_02a64dfc:
    pcVar16 = *(code **)(*plVar30 + 0x18);
    goto LAB_02a65020;
  }
  *(undefined8 *)*puVar20 =
       *(undefined8 *)
        (*(long *)(*(long *)(param_1 + 0xf8) +
                  (*(ulong *)(param_1 + 0x130) >> 6 & 0x3fffffffffffff8)) +
        (*(ulong *)(param_1 + 0x130) & 0x1ff) * 8);
  puVar2 = (undefined8 *)(*(long *)(param_1 + 0x50) + *(long *)*puVar20 * 0x40);
  *puVar2 = (long *)*puVar20;
  FUN_008802f0(puVar2 + 1,puVar20 + 1);
  puVar2[3] = puVar20[3];
  uVar27 = puVar20[4];
  uVar4 = puVar20[5];
  uVar5 = puVar20[7];
  puVar2[6] = puVar20[6];
  puVar2[7] = uVar5;
  puVar2[4] = uVar27;
  puVar2[5] = uVar4;
  uVar18 = *(long *)(param_1 + 0x130) + 1;
  *(ulong *)(param_1 + 0x130) = uVar18;
  *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + -1;
  if (0x3ff < uVar18) {
    plVar30 = *(long **)(param_1 + 0x140);
    uVar27 = **(undefined8 **)(param_1 + 0xf8);
    uVar18 = (**(code **)(*plVar30 + 0xc0))(plVar30);
    if ((uVar18 & 1) == 0) {
LAB_02a64a60:
      (**(code **)(*plVar30 + 0x18))(plVar30,uVar27,0x1000,8);
    }
    else {
      lVar13 = tpidr_el0;
      if (*(char *)(lVar13 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar13 + 0x38d488) = 1;
        *(undefined8 *)(lVar13 + 0x38d478) = 0;
        *(undefined8 *)(lVar13 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar13 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar13 + 0x38d480) < 1) goto LAB_02a64a60;
      FUN_02bcc824(plVar30,uVar27,0x1000,8);
    }
    *(long *)(param_1 + 0xf8) = *(long *)(param_1 + 0xf8) + 8;
    *(long *)(param_1 + 0x130) = *(long *)(param_1 + 0x130) + -0x200;
  }
  uVar18 = *(ulong *)(param_1 + 0x90);
  if (uVar18 != 0) {
    uVar19 = uVar18 - (uVar18 >> 1 & 0x5555555555555555);
    uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
    uVar15 = *(ulong *)*puVar20;
    uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar19 < 2) {
      uVar22 = uVar18 - 1 & uVar15;
    }
    else {
      uVar22 = uVar15;
      if (uVar18 <= uVar15) {
        uVar22 = 0;
        if (uVar18 != 0) {
          uVar22 = uVar15 / uVar18;
        }
        uVar22 = uVar15 - uVar22 * uVar18;
      }
    }
    lVar13 = *(long *)(param_1 + 0x88);
    puVar20 = *(undefined8 **)(lVar13 + uVar22 * 8);
    if ((puVar20 != (undefined8 *)0x0) && (plVar31 = (long *)*puVar20, plVar31 != (long *)0x0)) {
      uVar21 = uVar18 - 1;
      if (uVar19 < 2) {
        do {
          if (plVar31[1] == uVar15) {
            if (plVar31[2] == uVar15) goto LAB_02a64ea0;
          }
          else if ((plVar31[1] & uVar21) != uVar22) break;
          plVar31 = (long *)*plVar31;
        } while (plVar31 != (long *)0x0);
      }
      else {
        do {
          uVar23 = plVar31[1];
          if (uVar23 == uVar15) {
            if (plVar31[2] == uVar15) goto LAB_02a64ea0;
          }
          else {
            if (uVar18 <= uVar23) {
              uVar8 = 0;
              if (uVar18 != 0) {
                uVar8 = uVar23 / uVar18;
              }
              uVar23 = uVar23 - uVar8 * uVar18;
            }
            if (uVar23 != uVar22) break;
          }
          plVar31 = (long *)*plVar31;
        } while (plVar31 != (long *)0x0);
      }
    }
  }
  goto LAB_02a64968;
LAB_02a64ea0:
  if (uVar19 < 2) {
    uVar15 = uVar21 & uVar15;
  }
  else if (uVar18 <= uVar15) {
    uVar22 = 0;
    if (uVar18 != 0) {
      uVar22 = uVar15 / uVar18;
    }
    uVar15 = uVar15 - uVar22 * uVar18;
  }
  plVar30 = *(long **)(lVar13 + uVar15 * 8);
  do {
    plVar24 = plVar30;
    plVar30 = (long *)*plVar24;
  } while ((long *)*plVar24 != plVar31);
  if (plVar24 == (long *)(param_1 + 0xb8)) {
LAB_02a64f14:
    if (*plVar31 != 0) {
      uVar22 = *(ulong *)(*plVar31 + 8);
      if (uVar19 < 2) {
        uVar22 = uVar22 & uVar21;
      }
      else if (uVar18 <= uVar22) {
        uVar23 = 0;
        if (uVar18 != 0) {
          uVar23 = uVar22 / uVar18;
        }
        uVar22 = uVar22 - uVar23 * uVar18;
      }
      if (uVar22 == uVar15) goto LAB_02a64f54;
    }
    *(undefined8 *)(lVar13 + uVar15 * 8) = 0;
  }
  else {
    uVar22 = plVar24[1];
    if (uVar19 < 2) {
      uVar22 = uVar22 & uVar21;
    }
    else if (uVar18 <= uVar22) {
      uVar23 = 0;
      if (uVar18 != 0) {
        uVar23 = uVar22 / uVar18;
      }
      uVar22 = uVar22 - uVar23 * uVar18;
    }
    if (uVar22 != uVar15) goto LAB_02a64f14;
  }
LAB_02a64f54:
  lVar13 = *plVar31;
  if (lVar13 != 0) {
    uVar22 = *(ulong *)(lVar13 + 8);
    if (uVar19 < 2) {
      uVar22 = uVar22 & uVar21;
    }
    else if (uVar18 <= uVar22) {
      uVar19 = 0;
      if (uVar18 != 0) {
        uVar19 = uVar22 / uVar18;
      }
      uVar22 = uVar22 - uVar19 * uVar18;
    }
    if (uVar22 != uVar15) {
      *(long **)(*(long *)(param_1 + 0x88) + uVar22 * 8) = plVar24;
      lVar13 = *plVar31;
    }
  }
  *plVar24 = lVar13;
  *plVar31 = 0;
  plVar30 = *(long **)(param_1 + 0xc0);
  *(long *)(param_1 + 0xe0) = *(long *)(param_1 + 0xe0) + -1;
  uVar18 = (**(code **)(*plVar30 + 0xc0))(plVar30);
  if ((uVar18 & 1) != 0) {
    lVar13 = tpidr_el0;
    if (*(char *)(lVar13 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar13 + 0x38d488) = 1;
      *(undefined8 *)(lVar13 + 0x38d478) = 0;
      *(undefined8 *)(lVar13 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar13 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar13 + 0x38d480)) {
      lVar14 = 0x18;
LAB_02a65060:
      FUN_02bcc824(plVar30,plVar31,lVar14,8);
      goto LAB_02a64968;
    }
  }
  pcVar16 = *(code **)(*plVar30 + 0x18);
  lVar14 = 0x18;
LAB_02a65020:
  (*pcVar16)(plVar30,plVar31,lVar14,8);
LAB_02a64968:
  lVar13 = *(long *)(param_1 + 0x168);
  lVar29 = *(long *)(param_1 + 0x170);
  uVar17 = uVar17 + 1;
  puVar9 = PTR_LAB_04379590;
  puVar10 = PTR_LAB_04379590;
  if ((ulong)(lVar29 - lVar13 >> 6) <= uVar17) goto joined_r0x02a6516c;
  goto LAB_02a6497c;
}


