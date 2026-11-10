/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a5efbc; name: FUN_02a5efbc
 */


void FUN_02a5efbc(long param_1)

{
  int *piVar1;
  long *plVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  undefined8 uVar16;
  ulong uVar17;
  long lVar18;
  code *pcVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  long lVar26;
  long *plVar27;
  long *plVar28;
  long *plVar29;
  byte *pbVar30;
  undefined8 uVar31;
  undefined1 local_8c [4];
  undefined8 *local_88;
  long local_80;
  long *local_78;
  long *local_70;
  undefined1 auStack_68 [8];
  
  puVar7 = PTR_DAT_043794d8;
  pbVar30 = PTR_DAT_043794d0;
  plVar29 = *(long **)(param_1 + 8);
  uVar31 = *(undefined8 *)(param_1 + 0x210);
  if ((*(long *)(param_1 + 0x388) == 0) ||
     (puVar25 = *(undefined8 **)(*(long *)(param_1 + 0x388) + 0x18), puVar25 == (undefined8 *)0x0))
  {
    puVar24 = (undefined8 *)0x0;
  }
  else {
    puVar10 = (undefined8 *)(**(code **)*puVar25)(puVar25);
    if (((*pbVar30 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar9 != 0)) {
      uVar16 = FUN_0087f8f0();
      *(undefined8 *)puVar7 = uVar16;
      __cxa_guard_release(PTR_DAT_043794d0);
    }
    puVar24 = (undefined8 *)0x0;
    if (puVar10 != (undefined8 *)0x0) {
      do {
        if (puVar10 == (undefined8 *)puVar7) {
          puVar24 = puVar25 + -1;
          goto LAB_02a5f040;
        }
        puVar10 = (undefined8 *)*puVar10;
      } while (puVar10 != (undefined8 *)0x0);
      puVar24 = (undefined8 *)0x0;
    }
  }
LAB_02a5f040:
  cVar4 = *(char *)(param_1 + 0x39c);
  if ((*PTR_DAT_04379520 & 1) == 0) {
    iVar9 = __cxa_guard_acquire(PTR_DAT_04379520);
    puVar8 = PTR_DAT_04379528;
    if (iVar9 != 0) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
  }
  lVar11 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar11 + 0x80)) {
LAB_02a5fd04:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = plVar29;
  *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
  plVar12 = (long *)(**(code **)(*plVar29 + 0x10))(plVar29,0x420,8);
  if (plVar12 == (long *)0x0) {
    (**(code **)(*plVar29 + 0xb8))(plVar29);
  }
  lVar18 = *(long *)(param_1 + 0x480);
  FUN_02a68360(plVar12,uVar31,puVar24,cVar4 != '\0');
  *plVar12 = (long)&PTR_FUN_0427e130;
  plVar12[9] = (long)&PTR_LAB_0427e1b8;
  plVar12[10] = (long)&PTR_LAB_0427e200;
  FUN_0289059c(plVar12 + 0x74);
  plVar12[0x7d] = 0;
  plVar12[0x7c] = 0;
  plVar12[0x7b] = 0;
  if ((*PTR_DAT_04379520 & 1) == 0) {
    iVar9 = __cxa_guard_acquire(PTR_DAT_04379520);
    puVar8 = PTR_DAT_04379528;
    if (iVar9 != 0) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
  }
  lVar13 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  lVar23 = DAT_043f1798;
  lVar6 = tpidr_el0;
  if ((((lVar13 == 0) || (*(long *)(lVar13 + 0x80) == 0)) ||
      (lVar13 = *(long *)(lVar13 + *(long *)(lVar13 + 0x80) * 8 + -8), lVar13 == 0)) &&
     (lVar13 = *(long *)(lVar6 + 0x20), *(long *)(lVar6 + 0x20) == 0)) {
    *(long *)(lVar6 + 0x20) = DAT_043f1798;
    lVar13 = lVar23;
  }
  plVar12[0x7e] = lVar13;
  plVar12[0x7f] = 0xfffffffffffffff;
  local_78 = (long *)plVar12[0x42];
  plVar12[0x80] = 0;
  *(undefined4 *)(plVar12 + 0x81) = 0;
  plVar12[0x82] = param_1 + 0x3a0;
  plVar12[0x83] = 0;
  local_70 = (long *)FUN_02a60804(&local_80,plVar12[1],&local_78);
  local_70[0x3c] = local_70[0x3c] | 8;
  if (local_70 != (long *)0x0) {
    lVar23 = local_70[0xb];
    if (*(undefined8 **)(lVar23 + 0x18) == (undefined8 *)0x0) goto LAB_02a5fcf4;
    if (*(long *)(lVar23 + 0x10) == 0) {
      uVar31 = (**(code **)**(undefined8 **)(lVar23 + 0x18))();
      *(undefined8 *)(lVar23 + 0x10) = uVar31;
    }
    piVar1 = (int *)(lVar23 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  FUN_02a700c0(plVar12,&local_70);
  if (local_70 != (long *)0x0) {
    lVar23 = local_70[0xb];
    piVar1 = (int *)(lVar23 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar23 + 0x18) = 0;
      (**(code **)(*local_70 + 0x20))();
    }
  }
  FUN_02a6001c(plVar12 + 0x74,lVar18);
  if (lVar18 != 0) {
    lVar23 = 0;
    plVar2 = plVar12 + 0x77;
    do {
      local_80 = plVar12[0x42];
      lVar13 = plVar12[1];
      puVar25 = (undefined8 *)0x0;
      if (plVar12[0x71] != 0) {
        puVar25 = *(undefined8 **)(plVar12[0x71] + 0x18);
        if (puVar25 != (undefined8 *)0x0) {
          plVar14 = (long *)(**(code **)*puVar25)(puVar25);
          if (((*pbVar30 & 1) == 0) && (iVar9 = __cxa_guard_acquire(pbVar30), iVar9 != 0)) {
            uVar31 = FUN_0087f8f0();
            *(undefined8 *)puVar7 = uVar31;
            __cxa_guard_release(pbVar30);
          }
          for (; plVar14 != (long *)0x0; plVar14 = (long *)*plVar14) {
            if (plVar14 == (long *)puVar7) {
              puVar25 = puVar25 + -1;
              goto LAB_02a5f2ac;
            }
          }
        }
        puVar25 = (undefined8 *)0x0;
      }
LAB_02a5f2ac:
      local_8c[0] = *(undefined1 *)((long)plVar12 + 0x39c);
      local_88 = puVar25;
      local_78 = (long *)FUN_02a5fd30(auStack_68,lVar13,&local_80,&local_88,local_8c);
      local_78[0x3c] = local_78[0x3c] | 8;
      if (local_78 == (long *)0x0) {
        plVar14 = (long *)0x0;
      }
      else {
        lVar13 = local_78[0xb];
        if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_02a5fcf4;
        if (*(long *)(lVar13 + 0x10) == 0) {
          uVar31 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
          *(undefined8 *)(lVar13 + 0x10) = uVar31;
        }
        piVar1 = (int *)(lVar13 + 0xc);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = *piVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        plVar14 = local_78;
      }
      pcVar19 = (code *)plVar14[0x75];
      plVar27 = plVar14;
      if (pcVar19 != (code *)0x0) {
        plVar14[0x76] = 0;
        plVar14[0x77] = 0;
        plVar14[0x74] = 0;
        plVar14[0x75] = 0;
        (*pcVar19)(plVar14 + 0x78);
        plVar27 = local_78;
      }
      plVar14[0x74] = (long)&LAB_02a60a3c;
      plVar14[0x75] = (long)&LAB_02a60b14;
      plVar14[0x76] = (long)&LAB_02a60b18;
      plVar14[0x78] = (long)plVar12;
      plVar14[0x79] = (long)plVar14;
      *(int *)(plVar14 + 0x7a) = (int)lVar23;
      plVar14[0x77] = (long)&LAB_02a60b2c;
      lVar13 = nn::os::GetCurrentThread();
      plVar14 = plVar27 + 0x41;
      do {
        if (*plVar14 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)((long)plVar27 + 0x1fc));
            while (*plVar14 == 0) {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
              if (bVar5) {
                *plVar14 = lVar13;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') goto LAB_02a5f3b0;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar5) {
          *plVar14 = lVar13;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
LAB_02a5f3b0:
      plVar14 = plVar12;
      if ((long *)plVar12[0x3a] != (long *)0x0) {
        plVar14 = (long *)plVar12[0x3a];
      }
      plVar28 = plVar12;
      if ((long *)plVar12[0x3b] != (long *)0x0) {
        plVar28 = (long *)plVar12[0x3b];
      }
      if (plVar14 == plVar28) goto LAB_02a5fcf4;
      FUN_02a70230(plVar27);
      uVar17 = plVar12[0x75];
      if (uVar17 < (ulong)plVar12[0x76]) {
        FUN_02a60b40(plVar2,uVar17,&local_78);
        plVar12[0x75] = plVar12[0x75] + 8;
      }
      else {
        uVar22 = plVar12[0x78];
        lVar13 = (long)(uVar17 - plVar12[0x74]) >> 3;
        uVar17 = lVar13 + 1;
        if (0x7ffffffffffffffe < uVar22) {
          uVar22 = 0x7fffffffffffffff;
        }
        if (uVar22 < uVar17) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar21 = plVar12[0x76] - plVar12[0x74];
        if ((ulong)(lVar21 >> 3) < uVar22 >> 1) {
          uVar20 = lVar21 >> 2;
          uVar22 = uVar17;
          if (uVar17 <= uVar20) {
            uVar22 = uVar20;
          }
        }
        if (uVar22 == 0) {
          lVar21 = 0;
        }
        else {
          lVar21 = (**(code **)(*(long *)*plVar2 + 0x10))((long *)*plVar2,uVar22 << 3,8);
          if (lVar21 == 0) {
            (**(code **)(*(long *)*plVar2 + 0xb8))();
          }
        }
        lVar26 = lVar21 + lVar13 * 8;
        FUN_02a60b40(plVar2,lVar26,&local_78);
        plVar28 = (long *)plVar12[0x74];
        lVar13 = lVar26 + 8;
        plVar14 = (long *)plVar12[0x75];
        if (plVar14 == plVar28) {
          plVar14 = plVar28;
        }
        else {
          do {
            lVar26 = lVar26 + -8;
            plVar14 = plVar14 + -1;
            FUN_02a60914(plVar2,lVar26,plVar14);
          } while (plVar28 != plVar14);
          plVar28 = (long *)plVar12[0x74];
          plVar14 = (long *)plVar12[0x75];
        }
        plVar12[0x74] = lVar26;
        lVar26 = plVar12[0x76];
        plVar12[0x75] = lVar13;
        plVar12[0x76] = lVar21 + uVar22 * 8;
        pbVar30 = PTR_DAT_043794d0;
        while (plVar14 != plVar28) {
          plVar14 = plVar14 + -1;
          plVar15 = (long *)*plVar14;
          if (plVar15 != (long *)0x0) {
            lVar13 = plVar15[0xb];
            piVar1 = (int *)(lVar13 + 0xc);
            do {
              iVar9 = *piVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar9 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar9 + -1 == 0) {
              *(undefined8 *)(lVar13 + 0x18) = 0;
              (**(code **)(*plVar15 + 0x20))();
            }
          }
        }
        if (plVar28 != (long *)0x0) {
          plVar14 = (long *)*plVar2;
          uVar17 = (**(code **)(*plVar14 + 0xc0))(plVar14);
          if ((uVar17 & 1) != 0) {
            if (*(char *)(lVar6 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar6 + 0x38d488) = 1;
              *(undefined8 *)(lVar6 + 0x38d478) = 0;
              *(undefined8 *)(lVar6 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar6 + 0x38d480)) {
              FUN_02bcc824(plVar14,plVar28,lVar26 - (long)plVar28,8);
              goto LAB_02a5f580;
            }
          }
          (**(code **)(*plVar14 + 0x18))(plVar14,plVar28,lVar26 - (long)plVar28,8);
        }
      }
LAB_02a5f580:
      plVar27[0x41] = 0;
      nn::os::SignalLightEvent((LightEventType *)((long)plVar27 + 0x1fc));
      if (local_78 != (long *)0x0) {
        lVar13 = local_78[0xb];
        piVar1 = (int *)(lVar13 + 0xc);
        do {
          iVar9 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar9 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar9 + -1 == 0) {
          *(undefined8 *)(lVar13 + 0x18) = 0;
          (**(code **)(*local_78 + 0x20))();
        }
      }
      lVar23 = lVar23 + 1;
    } while (lVar23 != lVar18);
  }
  plVar12[0x3d] = plVar12[0x3d] | 2;
  plVar12[1] = (long)plVar29;
  plVar12[2] = (long)plVar12;
  plVar12[3] = 0x420;
  plVar12[4] = 8;
  *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
  plVar12[0x3c] = plVar12[0x3c] | 8;
  local_70 = plVar12;
  if (plVar12 == (long *)0x0) {
    plVar29 = (long *)0x0;
  }
  else {
    lVar11 = plVar12[0xb];
    if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) goto LAB_02a5fcf4;
    if (*(long *)(lVar11 + 0x10) == 0) {
      uVar31 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
      *(undefined8 *)(lVar11 + 0x10) = uVar31;
    }
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    plVar29 = local_70;
  }
  plVar2 = local_70;
  uVar3 = *(undefined4 *)(param_1 + 0x398);
  *(undefined4 *)(plVar29 + 0x73) = uVar3;
  plVar12 = plVar29;
  if ((long *)plVar29[0x3b] != (long *)0x0) {
    plVar12 = (long *)plVar29[0x3b];
  }
  if (plVar12 != plVar29) {
    (**(code **)(*plVar12 + 0x60))(plVar12,uVar3);
  }
  plVar12 = plVar29;
  if ((long *)plVar29[0x3a] != (long *)0x0) {
    plVar12 = (long *)plVar29[0x3a];
  }
  if (plVar12 != plVar29) {
    (**(code **)(*plVar12 + 0x60))(plVar12,uVar3);
  }
  puVar24 = (undefined8 *)plVar29[0x75];
  for (puVar25 = (undefined8 *)plVar29[0x74]; puVar25 != puVar24; puVar25 = puVar25 + 1) {
    (**(code **)(*(long *)*puVar25 + 0x60))((long *)*puVar25,uVar3);
  }
  lVar11 = nn::os::GetCurrentThread();
  plVar29 = plVar2 + 0x41;
  do {
    if (*plVar29 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)((long)plVar2 + 0x1fc));
        while (*plVar29 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar29,0x10);
          if (bVar5) {
            *plVar29 = lVar11;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_02a5f800;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar29,0x10);
    if (bVar5) {
      *plVar29 = lVar11;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_02a5f800:
  lVar11 = param_1;
  if (*(long *)(param_1 + 0x1d0) != 0) {
    lVar11 = *(long *)(param_1 + 0x1d0);
  }
  lVar18 = param_1;
  if (*(long *)(param_1 + 0x1d8) != 0) {
    lVar18 = *(long *)(param_1 + 0x1d8);
  }
  if (lVar11 == lVar18) {
LAB_02a5fcf4:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  FUN_02a70230(plVar2);
  uVar17 = *(ulong *)(param_1 + 0x420);
  if (uVar17 != *(ulong *)(param_1 + 0x428)) {
    FUN_02a70468(plVar2,*(undefined8 *)(*(ulong *)(param_1 + 0x428) - 8),0);
    uVar17 = *(ulong *)(param_1 + 0x428);
  }
  puVar25 = (undefined8 *)(param_1 + 0x438);
  if (uVar17 < *(ulong *)(param_1 + 0x430)) {
    FUN_02a60c20(puVar25,uVar17,&local_70);
    *(long *)(param_1 + 0x428) = *(long *)(param_1 + 0x428) + 8;
  }
  else {
    uVar22 = *(ulong *)(param_1 + 0x440);
    lVar11 = (long)(uVar17 - *(long *)(param_1 + 0x420)) >> 3;
    uVar17 = lVar11 + 1;
    if (0x7ffffffffffffffe < uVar22) {
      uVar22 = 0x7fffffffffffffff;
    }
    if (uVar22 < uVar17) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar18 = *(ulong *)(param_1 + 0x430) - *(long *)(param_1 + 0x420);
    if ((ulong)(lVar18 >> 3) < uVar22 >> 1) {
      uVar20 = lVar18 >> 2;
      uVar22 = uVar17;
      if (uVar17 <= uVar20) {
        uVar22 = uVar20;
      }
    }
    if (uVar22 == 0) {
      lVar18 = 0;
    }
    else {
      lVar18 = (**(code **)(*(long *)*puVar25 + 0x10))((long *)*puVar25,uVar22 << 3,8);
      if (lVar18 == 0) {
        (**(code **)(*(long *)*puVar25 + 0xb8))();
      }
    }
    plVar29 = (long *)(lVar18 + lVar11 * 8);
    FUN_02a60c20(puVar25,plVar29,&local_70);
    plVar27 = *(long **)(param_1 + 0x420);
    plVar14 = *(long **)(param_1 + 0x428);
    plVar12 = plVar29;
    if (plVar14 == plVar27) {
      plVar14 = plVar27;
    }
    else {
      do {
        uVar31 = *puVar25;
        if ((*PTR_DAT_04379520 & 1) == 0) {
          iVar9 = __cxa_guard_acquire(PTR_DAT_04379520);
          puVar7 = PTR_DAT_04379528;
          if (iVar9 != 0) {
            FUN_008a62a4(PTR_DAT_04379528);
            FUN_00100250(PTR_LAB_04379530,puVar7,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379520);
          }
        }
        lVar11 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
        if (lVar11 != 0) {
          if (0xf < *(ulong *)(lVar11 + 0x80)) goto LAB_02a5fd04;
          *(undefined8 *)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = uVar31;
          *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
        }
        plVar14 = plVar14 + -1;
        lVar23 = *plVar14;
        plVar12 = plVar12 + -1;
        *plVar12 = lVar23;
        if (lVar23 != 0) {
          lVar23 = *(long *)(lVar23 + 0x58);
          if (*(undefined8 **)(lVar23 + 0x18) == (undefined8 *)0x0) goto LAB_02a5fcf4;
          if (*(long *)(lVar23 + 0x10) == 0) {
            uVar31 = (**(code **)**(undefined8 **)(lVar23 + 0x18))();
            *(undefined8 *)(lVar23 + 0x10) = uVar31;
          }
          piVar1 = (int *)(lVar23 + 0xc);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = *piVar1 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        if (lVar11 != 0) {
          *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
        }
      } while (plVar14 != plVar27);
      plVar27 = *(long **)(param_1 + 0x420);
      plVar14 = *(long **)(param_1 + 0x428);
    }
    lVar11 = *(long *)(param_1 + 0x430);
    *(long **)(param_1 + 0x420) = plVar12;
    *(long **)(param_1 + 0x428) = plVar29 + 1;
    *(ulong *)(param_1 + 0x430) = lVar18 + uVar22 * 8;
LAB_02a5fa44:
    if (plVar14 != plVar27) {
      while( true ) {
        plVar14 = plVar14 + -1;
        plVar29 = (long *)*plVar14;
        if (plVar29 == (long *)0x0) break;
        lVar18 = plVar29[0xb];
        piVar1 = (int *)(lVar18 + 0xc);
        do {
          iVar9 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar9 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar9 + -1 != 0) break;
        *(undefined8 *)(lVar18 + 0x18) = 0;
        (**(code **)(*plVar29 + 0x20))();
        if (plVar14 == plVar27) goto LAB_02a5fa88;
      }
      goto LAB_02a5fa44;
    }
LAB_02a5fa88:
    if (plVar27 != (long *)0x0) {
      plVar29 = (long *)*puVar25;
      lVar11 = lVar11 - (long)plVar27;
      uVar17 = (**(code **)(*plVar29 + 0xc0))(plVar29);
      if ((uVar17 & 1) != 0) {
        if (*(char *)(lVar6 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar6 + 0x38d488) = 1;
          *(undefined8 *)(lVar6 + 0x38d478) = 0;
          *(undefined8 *)(lVar6 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar6 + 0x38d480)) {
          FUN_02bcc824(plVar29,plVar27,lVar11,8);
          goto LAB_02a5fb08;
        }
      }
      (**(code **)(*plVar29 + 0x18))(plVar29,plVar27,lVar11,8);
    }
  }
LAB_02a5fb08:
  plVar2[0x41] = 0;
  nn::os::SignalLightEvent((LightEventType *)((long)plVar2 + 0x1fc));
  if (local_70 != (long *)0x0) {
    lVar11 = local_70[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*local_70 + 0x20))();
    }
  }
  return;
}


