/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01810970; name: FUN_01810970
 */


void FUN_01810970(long *param_1,long *param_2)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  ulong uVar5;
  long *plVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  long *plVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  long *plVar20;
  long *plVar21;
  ulong uVar22;
  long lVar23;
  undefined8 *puVar24;
  long *plVar25;
  undefined4 uVar26;
  ulong uVar27;
  undefined8 *puVar28;
  long *local_b8;
  long *local_b0;
  undefined8 uStack_a8;
  long *local_a0;
  undefined8 uStack_98;
  long *local_90;
  long *local_88 [2];
  long *local_78;
  long *local_70;
  ulong local_68;
  
  if (*param_1 != 0) {
    FUN_018124e0(&local_b8);
    lVar23 = *param_2;
    if (lVar23 != 0) goto LAB_01810f10;
LAB_018109ac:
    plVar20 = (long *)0x0;
joined_r0x01811518:
    if (local_b8 != (long *)0x0) goto LAB_018109b4;
LAB_0181151c:
    if (plVar20 == (long *)0x0) {
      return;
    }
    goto LAB_018109c0;
  }
  local_b8 = (long *)0x0;
  lVar23 = *param_2;
  if (lVar23 == 0) goto LAB_018109ac;
LAB_01810f10:
  puVar8 = PTR_DAT_043794d8;
  puVar7 = PTR_DAT_043794d0;
  if (*(int *)(lVar23 + 0xc) != 0) {
    piVar1 = (int *)(lVar23 + 0xc);
    iVar12 = *(int *)(lVar23 + 0xc);
    do {
      puVar24 = *(undefined8 **)(lVar23 + 0x10);
      if (((*puVar7 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar7), iVar13 != 0)) {
        uVar14 = FUN_0087f8f0();
        *(undefined8 *)puVar8 = uVar14;
        __cxa_guard_release(puVar7);
      }
      if (puVar24 == (undefined8 *)0x0) goto LAB_01811544;
      while (puVar24 != (undefined8 *)puVar8) {
        puVar24 = (undefined8 *)*puVar24;
        if (puVar24 == (undefined8 *)0x0) goto LAB_018109ac;
      }
      iVar13 = *piVar1;
      if (iVar13 == iVar12) {
        cVar4 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar11) {
          *piVar1 = iVar12 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
          if (*(long *)(lVar23 + 0x18) == 0) goto LAB_01811544;
          plVar21 = (long *)(*(long *)(lVar23 + 0x18) + -8);
          plVar20 = (long *)param_2[2];
          if (plVar20 != (long *)0x0) {
            (**(code **)(*plVar20 + 0x10))(plVar20);
          }
          (**(code **)(*plVar21 + 0x18))(plVar21);
          goto joined_r0x01811518;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar12 = iVar13;
    } while (iVar13 != 0);
    goto LAB_018109ac;
  }
LAB_01811544:
  plVar20 = (long *)0x0;
  if (local_b8 == (long *)0x0) goto LAB_0181151c;
LAB_018109b4:
  if (plVar20 == (long *)0x0) goto LAB_018109d4;
  plVar21 = (long *)plVar20[1];
  if (plVar21 != (long *)0x0) {
    (**(code **)(*plVar21 + 0x10))(&local_78,plVar21);
    puVar7 = PTR_DAT_04379498;
    do {
      plVar21 = local_70;
      cVar4 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(&local_70,0x10);
      if (bVar11) {
        local_70 = (long *)0x0;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (((*PTR_DAT_04379498 & 1) == 0) &&
       (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379498);
    }
    puVar9 = PTR_DAT_043794a8;
    puVar8 = PTR_DAT_043794a0;
    uVar14 = *(undefined8 *)PTR_DAT_043794a0;
    *(undefined8 *)PTR_DAT_043794a8 = uVar14;
    FUN_02a44e0c(local_88,uVar14,plVar21);
    plVar21 = local_78;
    local_78 = (long *)0x0;
    if (plVar21 != (long *)0x0) {
      plVar16 = plVar21 + 1;
      do {
        iVar12 = (int)*plVar16 + -1;
        cVar4 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar11) {
          *(int *)plVar16 = iVar12;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar12 == 0) {
        plVar21[2] = 0;
        if (((*puVar7 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar23 = *(long *)puVar8;
        *(long *)puVar9 = lVar23;
        local_a0 = (long *)*plVar21;
        FUN_02a44274(lVar23 + 0xd8,&local_a0);
      }
    }
    plVar16 = local_78;
    plVar21 = local_88[0];
    if (local_88[0] != (long *)0x0) {
      local_88[0] = (long *)0x0;
    }
    if (local_78 != (long *)0x0) {
      plVar2 = local_78 + 1;
      do {
        iVar12 = (int)*plVar2 + -1;
        cVar4 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar11) {
          *(int *)plVar2 = iVar12;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar12 == 0) {
        local_78[2] = 0;
        if (((*puVar7 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar23 = *(long *)puVar8;
        *(long *)puVar9 = lVar23;
        local_a0 = (long *)*plVar16;
        FUN_02a44274(lVar23 + 0xd8,&local_a0);
      }
    }
    if (plVar21 != (long *)0x0) {
      puVar24 = (undefined8 *)plVar21[3];
      if (puVar24 == (undefined8 *)0x0) {
LAB_01811258:
        puVar28 = (undefined8 *)0x0;
      }
      else {
        puVar15 = (undefined8 *)(**(code **)*puVar24)(puVar24);
        if (((DAT_043d1300 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_043d1300), iVar12 != 0))
        {
          if (((*PTR_DAT_043794d0 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar12 != 0)) {
            uVar14 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar14;
            __cxa_guard_release(PTR_DAT_043794d0);
          }
          DAT_043d12f8 = PTR_DAT_043794d8;
          __cxa_guard_release(&DAT_043d1300);
        }
        if (puVar15 == (undefined8 *)0x0) goto LAB_01811258;
        do {
          if ((undefined **)puVar15 == &DAT_043d12f8) {
            puVar28 = puVar24 + -10;
            break;
          }
          puVar15 = (undefined8 *)*puVar15;
          puVar28 = (undefined8 *)0x0;
        } while (puVar15 != (undefined8 *)0x0);
      }
      plVar16 = plVar21 + 1;
      do {
        iVar12 = (int)*plVar16 + -1;
        cVar4 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar11) {
          *(int *)plVar16 = iVar12;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar12 == 0) {
        plVar21[2] = 0;
        if (((*puVar7 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar23 = *(long *)puVar8;
        *(long *)puVar9 = lVar23;
        local_78 = (long *)*plVar21;
        FUN_02a44274(lVar23 + 0xd8,&local_78);
      }
      plVar21 = local_b8;
      if (puVar28 != (undefined8 *)0x0) {
        plVar16 = puVar28 + 0xd;
        plVar2 = local_b8 + 0x10;
        plVar25 = (long *)local_b8[0x16];
        while (plVar25 != (long *)0x0) {
          local_78 = (long *)0x0;
          local_70 = (long *)0x0;
          FUN_008802f0(&local_78,plVar25 + 3);
          local_68 = plVar25[5];
          if ((local_78 == (long *)0x0) || (uVar18 = FUN_02a43a8c(), (uVar18 & 1) != 0)) {
            plVar25 = (long *)FUN_01812654(plVar2,plVar25);
            plVar6 = local_78;
          }
          else {
            plVar25 = (long *)*plVar25;
            plVar6 = local_78;
          }
          local_78 = plVar6;
          if (plVar6 != (long *)0x0) {
            plVar3 = plVar6 + 1;
            do {
              iVar12 = (int)*plVar3 + -1;
              cVar4 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(plVar3,0x10);
              if (bVar11) {
                *(int *)plVar3 = iVar12;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar12 == 0) {
              plVar6[2] = 0;
              if (((*puVar7 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar7), iVar12 != 0)) {
                FUN_00100250(PTR_LAB_04379590,puVar8,&PTR_LOOP_0411a000);
                __cxa_guard_release(puVar7);
              }
              lVar23 = *(long *)puVar8;
              *(long *)puVar9 = lVar23;
              local_a0 = (long *)*plVar6;
              FUN_02a44274(lVar23 + 0xd8,&local_a0);
            }
          }
        }
        lVar23 = nn::os::GetCurrentThread();
        plVar25 = plVar21 + 0xf;
        do {
          if (*plVar25 != 0) {
            ClearExclusiveLocal();
            do {
              nn::os::WaitLightEvent((LightEventType *)((long)plVar21 + 0x6c));
              while (*plVar25 == 0) {
                cVar4 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(plVar25,0x10);
                if (bVar11) {
                  *plVar25 = lVar23;
                  cVar4 = ExclusiveMonitorsStatus();
                }
                if (cVar4 == '\0') goto LAB_01810c18;
              }
              ClearExclusiveLocal();
            } while( true );
          }
          cVar4 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar25,0x10);
          if (bVar11) {
            *plVar25 = lVar23;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
LAB_01810c18:
        (**(code **)(*plVar16 + 0x20))(local_88,plVar16);
        if (local_88[0] == (long *)0x0) {
          uVar26 = 0;
        }
        else {
          uVar26 = (undefined4)*local_88[0];
        }
        local_b0 = (long *)0x0;
        uStack_a8 = 0;
        FUN_008802f0(&local_b0,local_88);
        local_a0 = (long *)0x0;
        uStack_98 = 0;
        FUN_008802f0(&local_a0,&local_b0);
        plVar25 = local_b0;
        local_90 = plVar16;
        if (local_b0 != (long *)0x0) {
          plVar16 = local_b0 + 1;
          do {
            iVar12 = (int)*plVar16 + -1;
            cVar4 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar16,0x10);
            if (bVar11) {
              *(int *)plVar16 = iVar12;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar12 == 0) {
            local_b0[2] = 0;
            if (((*puVar7 & 1) == 0) &&
               (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar23 = *(long *)puVar8;
            *(long *)puVar9 = lVar23;
            local_78 = (long *)*plVar25;
            FUN_02a44274(lVar23 + 0xd8,&local_78);
          }
        }
        plVar25 = plVar21 + 0x17;
        plVar16 = (long *)(**(code **)(*(long *)*plVar25 + 0x10))((long *)*plVar25,0x30,8);
        if (plVar16 == (long *)0x0) {
          (**(code **)(*(long *)*plVar25 + 0xb8))();
        }
        local_68 = local_68 & 0xffffffffffffff00;
        lVar23 = *plVar25;
        local_78 = plVar16;
        local_70 = plVar25;
        if ((*PTR_DAT_04379520 & 1) == 0) {
          iVar12 = __cxa_guard_acquire(PTR_DAT_04379520);
          puVar10 = PTR_DAT_04379528;
          if (iVar12 != 0) {
            FUN_008a62a4(PTR_DAT_04379528);
            FUN_00100250(PTR_LAB_04379530,puVar10,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379520);
          }
        }
        lVar17 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
        if (lVar17 != 0) {
          if (0xf < *(ulong *)(lVar17 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(long *)(lVar17 + *(ulong *)(lVar17 + 0x80) * 8) = lVar23;
          *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + 1;
        }
        plVar16[3] = 0;
        *(undefined4 *)(plVar16 + 2) = uVar26;
        plVar16[4] = 0;
        FUN_008802f0(plVar16 + 3,&local_a0);
        plVar25 = local_78;
        plVar16[5] = (long)local_90;
        if (lVar17 != 0) {
          *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + -1;
        }
        local_68 = CONCAT71(local_68._1_7_,1);
        iVar12 = (int)local_78[2];
        uVar18 = (ulong)iVar12;
        *local_78 = 0;
        local_78[1] = uVar18;
        uVar27 = plVar21[0x11];
        if (uVar27 == 0) {
LAB_01810d64:
          if ((uVar27 == 0) ||
             (*(float *)(plVar21 + 0x1c) * (float)uVar27 < (float)(plVar21[0x1b] + 1))) {
            uVar18 = (ulong)(uVar27 < 3 || (uVar27 & uVar27 - 1) != 0) | uVar27 << 1;
            uVar22 = (ulong)((float)(plVar21[0x1b] + 1) / *(float *)(plVar21 + 0x1c));
            if (uVar22 <= uVar18) {
              uVar22 = uVar18;
            }
            if (uVar22 - 1 == 0) {
              uVar22 = 2;
LAB_01810dc0:
              bVar11 = uVar27 <= uVar22;
              uVar18 = uVar22;
              if (uVar27 < uVar22) goto LAB_01810dd0;
LAB_018110c4:
              if (!bVar11) {
                uVar18 = (ulong)((float)(ulong)plVar21[0x1b] / *(float *)(plVar21 + 0x1c));
                if ((uVar27 < 3) ||
                   (uVar19 = uVar27 - (uVar27 >> 1 & 0x5555555555555555),
                   uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333),
                   1 < (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
                  uVar18 = std::__next_prime(uVar18);
                }
                else if (1 < uVar18) {
                  uVar18 = 1L << ((ulong)(uint)-(int)LZCOUNT(uVar18 - 1) & 0x3f);
                }
                if (uVar18 <= uVar22) {
                  uVar18 = uVar22;
                }
                if (uVar18 < uVar27) goto LAB_01810dd0;
              }
            }
            else {
              if ((uVar22 & uVar22 - 1) == 0) goto LAB_01810dc0;
              uVar22 = std::__next_prime(uVar22);
              uVar27 = plVar21[0x11];
              bVar11 = uVar27 <= uVar22;
              uVar18 = uVar22;
              if (uVar22 <= uVar27) goto LAB_018110c4;
LAB_01810dd0:
              FUN_018129ec(plVar2,uVar18);
            }
            uVar27 = plVar21[0x11];
            uVar18 = plVar25[1];
          }
          uVar22 = uVar27 - (uVar27 >> 1 & 0x5555555555555555);
          uVar22 = (uVar22 & 0x3333333333333333) + (uVar22 >> 2 & 0x3333333333333333);
          uVar22 = (uVar22 + (uVar22 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar22 < 2) {
            uVar18 = uVar27 - 1 & uVar18;
          }
          else if (uVar27 <= uVar18) {
            uVar19 = 0;
            if (uVar27 != 0) {
              uVar19 = uVar18 / uVar27;
            }
            uVar18 = uVar18 - uVar19 * uVar27;
          }
          plVar16 = *(long **)(*plVar2 + uVar18 * 8);
          if (plVar16 == (long *)0x0) {
            plVar16 = plVar21 + 0x16;
            *plVar25 = *plVar16;
            *plVar16 = (long)plVar25;
            *(long **)(plVar21[0x10] + uVar18 * 8) = plVar16;
            if (*plVar25 != 0) {
              uVar18 = *(ulong *)(*plVar25 + 8);
              if (uVar22 < 2) {
                uVar18 = uVar18 & uVar27 - 1;
              }
              else if (uVar27 <= uVar18) {
                uVar22 = 0;
                if (uVar27 != 0) {
                  uVar22 = uVar18 / uVar27;
                }
                uVar18 = uVar18 - uVar22 * uVar27;
              }
              plVar16 = (long *)(*plVar2 + uVar18 * 8);
              goto LAB_01811168;
            }
          }
          else {
            *plVar25 = *plVar16;
LAB_01811168:
            *plVar16 = (long)plVar25;
          }
          plVar21[0x1b] = plVar21[0x1b] + 1;
LAB_01810e58:
          local_78 = (long *)0x0;
          plVar16 = local_a0;
        }
        else {
          uVar22 = uVar27 - (uVar27 >> 1 & 0x5555555555555555);
          uVar22 = (uVar22 & 0x3333333333333333) + (uVar22 >> 2 & 0x3333333333333333);
          uVar22 = (uVar22 + (uVar22 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar22 < 2) {
            uVar19 = uVar27 - 1 & uVar18;
          }
          else {
            uVar19 = uVar18;
            if (uVar27 <= uVar18) {
              uVar19 = 0;
              if (uVar27 != 0) {
                uVar19 = uVar18 / uVar27;
              }
              uVar19 = uVar18 - uVar19 * uVar27;
            }
          }
          plVar16 = *(long **)(*plVar2 + uVar19 * 8);
          if (plVar16 == (long *)0x0) goto LAB_01810d64;
          if (uVar22 < 2) {
            do {
              plVar16 = (long *)*plVar16;
              if ((plVar16 == (long *)0x0) || ((plVar16[1] & uVar27 - 1) != uVar19))
              goto LAB_01810d64;
            } while (*(int *)(plVar16 + 2) != iVar12);
          }
          else {
            do {
              plVar16 = (long *)*plVar16;
              if (plVar16 == (long *)0x0) goto LAB_01810d64;
              uVar22 = plVar16[1];
              if (uVar27 <= uVar22) {
                uVar5 = 0;
                if (uVar27 != 0) {
                  uVar5 = uVar22 / uVar27;
                }
                uVar22 = uVar22 - uVar5 * uVar27;
              }
              if (uVar22 != uVar19) goto LAB_01810d64;
            } while ((int)plVar16[2] != iVar12);
          }
          local_78 = (long *)0x0;
          if (plVar25 == (long *)0x0) goto LAB_01810e58;
          FUN_01812810(&local_70,plVar25);
          plVar16 = local_a0;
        }
        local_a0 = plVar16;
        if (plVar16 != (long *)0x0) {
          plVar2 = plVar16 + 1;
          do {
            iVar12 = (int)*plVar2 + -1;
            cVar4 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar11) {
              *(int *)plVar2 = iVar12;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar12 == 0) {
            plVar16[2] = 0;
            if (((*puVar7 & 1) == 0) &&
               (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar23 = *(long *)puVar8;
            *(long *)puVar9 = lVar23;
            local_78 = (long *)*plVar16;
            FUN_02a44274(lVar23 + 0xd8,&local_78);
          }
        }
        plVar16 = local_88[0];
        if (local_88[0] != (long *)0x0) {
          plVar2 = local_88[0] + 1;
          do {
            iVar12 = (int)*plVar2 + -1;
            cVar4 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar11) {
              *(int *)plVar2 = iVar12;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar12 == 0) {
            local_88[0][2] = 0;
            if (((*puVar7 & 1) == 0) &&
               (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar23 = *(long *)puVar8;
            *(long *)puVar9 = lVar23;
            local_78 = (long *)*plVar16;
            FUN_02a44274(lVar23 + 0xd8,&local_78);
          }
        }
        plVar21[0xf] = 0;
        nn::os::SignalLightEvent((LightEventType *)((long)plVar21 + 0x6c));
      }
    }
  }
LAB_018109c0:
  (**(code **)(*plVar20 + 0x18))();
  if (local_b8 == (long *)0x0) {
    return;
  }
LAB_018109d4:
  lVar23 = local_b8[0xb];
  piVar1 = (int *)(lVar23 + 0xc);
  do {
    iVar12 = *piVar1;
    cVar4 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar11) {
      *piVar1 = iVar12 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar12 + -1 == 0) {
    *(undefined8 *)(lVar23 + 0x18) = 0;
    (**(code **)(*local_b8 + 0x20))(local_b8);
  }
  return;
}


