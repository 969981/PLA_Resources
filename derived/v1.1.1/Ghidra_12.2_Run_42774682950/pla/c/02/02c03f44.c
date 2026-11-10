/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c03f44; name: FUN_02c03f44
 */


void FUN_02c03f44(long param_1)

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
  long *plVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  ulong uVar15;
  code *pcVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  long *plVar20;
  long lVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  long *plVar24;
  long lVar25;
  undefined8 uVar26;
  long *plVar27;
  undefined1 local_8c [4];
  undefined8 *local_88;
  long local_80;
  long *local_78;
  long *local_70;
  undefined1 auStack_68 [8];
  
  puVar7 = PTR_DAT_043794d8;
  plVar20 = *(long **)(param_1 + 8);
  uVar26 = *(undefined8 *)(param_1 + 0x210);
  if ((*(long *)(param_1 + 0x388) != 0) &&
     (puVar22 = *(undefined8 **)(*(long *)(param_1 + 0x388) + 0x18), puVar22 != (undefined8 *)0x0))
  {
    plVar10 = (long *)(**(code **)*puVar22)(puVar22);
    if (((*PTR_DAT_043794d0 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar9 != 0)) {
      uVar14 = FUN_0087f8f0();
      *(undefined8 *)puVar7 = uVar14;
      __cxa_guard_release(PTR_DAT_043794d0);
    }
    for (; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
      if (plVar10 == (long *)puVar7) {
        puVar22 = puVar22 + -1;
        goto LAB_02c03fcc;
      }
    }
  }
  puVar22 = (undefined8 *)0x0;
LAB_02c03fcc:
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
LAB_02c04a28:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = plVar20;
  *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
  plVar10 = (long *)(**(code **)(*plVar20 + 0x10))(plVar20,0x420,8);
  if (plVar10 == (long *)0x0) {
    (**(code **)(*plVar20 + 0xb8))(plVar20);
  }
  lVar25 = *(long *)(param_1 + 0x480);
  FUN_02a68360(plVar10,uVar26,puVar22,cVar4 != '\0');
  *plVar10 = (long)&PTR_FUN_04288450;
  plVar24 = plVar10 + 0x74;
  plVar10[9] = (long)&PTR_LAB_042884d8;
  plVar10[10] = (long)&PTR_LAB_04288520;
  FUN_0289059c(plVar24);
  plVar10[0x7d] = 0;
  plVar10[0x7c] = 0;
  plVar10[0x7b] = 0;
  if ((*PTR_DAT_04379520 & 1) == 0) {
    iVar9 = __cxa_guard_acquire(PTR_DAT_04379520);
    puVar8 = PTR_DAT_04379528;
    if (iVar9 != 0) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
  }
  lVar12 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  lVar21 = DAT_043f1798;
  lVar6 = tpidr_el0;
  if ((((lVar12 == 0) || (*(long *)(lVar12 + 0x80) == 0)) ||
      (lVar12 = *(long *)(lVar12 + *(long *)(lVar12 + 0x80) * 8 + -8), lVar12 == 0)) &&
     (lVar12 = *(long *)(lVar6 + 0x20), *(long *)(lVar6 + 0x20) == 0)) {
    *(long *)(lVar6 + 0x20) = DAT_043f1798;
    lVar12 = lVar21;
  }
  plVar10[0x7e] = lVar12;
  plVar10[0x7f] = 0xaaaaaaaaaaaaaaa;
  local_78 = (long *)plVar10[0x42];
  plVar10[0x80] = 0;
  *(undefined4 *)(plVar10 + 0x81) = 0;
  plVar10[0x82] = param_1 + 0x3a0;
  plVar10[0x83] = 0;
  local_70 = (long *)FUN_02a60804(&local_80,plVar10[1],&local_78);
  local_70[0x3c] = local_70[0x3c] | 8;
  if (local_70 != (long *)0x0) {
    lVar21 = local_70[0xb];
    if (*(undefined8 **)(lVar21 + 0x18) == (undefined8 *)0x0) goto LAB_02c04a18;
    if (*(long *)(lVar21 + 0x10) == 0) {
      uVar26 = (**(code **)**(undefined8 **)(lVar21 + 0x18))();
      *(undefined8 *)(lVar21 + 0x10) = uVar26;
    }
    piVar1 = (int *)(lVar21 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  FUN_02a700c0(plVar10,&local_70);
  if (local_70 != (long *)0x0) {
    lVar21 = local_70[0xb];
    piVar1 = (int *)(lVar21 + 0xc);
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
      *(undefined8 *)(lVar21 + 0x18) = 0;
      (**(code **)(*local_70 + 0x20))();
    }
  }
  FUN_02a6001c(plVar24,lVar25);
  if (lVar25 != 0) {
    lVar21 = 0;
    do {
      local_80 = plVar10[0x42];
      lVar12 = plVar10[1];
      puVar22 = (undefined8 *)0x0;
      if (plVar10[0x71] != 0) {
        puVar22 = *(undefined8 **)(plVar10[0x71] + 0x18);
        if (puVar22 != (undefined8 *)0x0) {
          plVar13 = (long *)(**(code **)*puVar22)(puVar22);
          if (((*PTR_DAT_043794d0 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar9 != 0)) {
            uVar26 = FUN_0087f8f0();
            *(undefined8 *)puVar7 = uVar26;
            __cxa_guard_release(PTR_DAT_043794d0);
          }
          for (; plVar13 != (long *)0x0; plVar13 = (long *)*plVar13) {
            if (plVar13 == (long *)puVar7) {
              puVar22 = puVar22 + -1;
              goto LAB_02c04238;
            }
          }
        }
        puVar22 = (undefined8 *)0x0;
      }
LAB_02c04238:
      local_8c[0] = *(undefined1 *)((long)plVar10 + 0x39c);
      local_88 = puVar22;
      local_78 = (long *)FUN_02a5fd30(auStack_68,lVar12,&local_80,&local_88,local_8c);
      local_78[0x3c] = local_78[0x3c] | 8;
      if (local_78 == (long *)0x0) {
        plVar13 = (long *)0x0;
      }
      else {
        lVar12 = local_78[0xb];
        if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_02c04a18;
        if (*(long *)(lVar12 + 0x10) == 0) {
          uVar26 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
          *(undefined8 *)(lVar12 + 0x10) = uVar26;
        }
        piVar1 = (int *)(lVar12 + 0xc);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = *piVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        plVar13 = local_78;
      }
      pcVar16 = (code *)plVar13[0x75];
      plVar27 = plVar13;
      if (pcVar16 != (code *)0x0) {
        plVar13[0x76] = 0;
        plVar13[0x77] = 0;
        plVar13[0x74] = 0;
        plVar13[0x75] = 0;
        (*pcVar16)(plVar13 + 0x78);
        plVar27 = local_78;
      }
      plVar13[0x74] = (long)&LAB_02c0519c;
      plVar13[0x75] = (long)&LAB_02c052ac;
      plVar13[0x78] = (long)plVar10;
      plVar13[0x79] = (long)plVar13;
      *(int *)(plVar13 + 0x7a) = (int)lVar21;
      plVar13[0x76] = (long)&LAB_02c052b0;
      plVar13[0x77] = (long)&LAB_02c052c4;
      lVar12 = nn::os::GetCurrentThread();
      plVar13 = plVar27 + 0x41;
      do {
        if (*plVar13 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)((long)plVar27 + 0x1fc));
            while (*plVar13 == 0) {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
              if (bVar5) {
                *plVar13 = lVar12;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') goto LAB_02c04334;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar5) {
          *plVar13 = lVar12;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
LAB_02c04334:
      plVar13 = plVar10;
      if ((long *)plVar10[0x3a] != (long *)0x0) {
        plVar13 = (long *)plVar10[0x3a];
      }
      plVar2 = plVar10;
      if ((long *)plVar10[0x3b] != (long *)0x0) {
        plVar2 = (long *)plVar10[0x3b];
      }
      if (plVar13 == plVar2) goto LAB_02c04a18;
      FUN_02a70230(plVar27);
      FUN_02c02b90(plVar24,&local_78);
      plVar27[0x41] = 0;
      nn::os::SignalLightEvent((LightEventType *)((long)plVar27 + 0x1fc));
      if (local_78 != (long *)0x0) {
        lVar12 = local_78[0xb];
        piVar1 = (int *)(lVar12 + 0xc);
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
          *(undefined8 *)(lVar12 + 0x18) = 0;
          (**(code **)(*local_78 + 0x20))();
        }
      }
      lVar21 = lVar21 + 1;
    } while (lVar21 != lVar25);
  }
  plVar10[0x3d] = plVar10[0x3d] | 2;
  plVar10[1] = (long)plVar20;
  plVar10[2] = (long)plVar10;
  plVar10[3] = 0x420;
  plVar10[4] = 8;
  *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
  plVar10[0x3c] = plVar10[0x3c] | 8;
  lVar11 = plVar10[0xb];
  local_70 = plVar10;
  if (*(undefined8 **)(lVar11 + 0x18) != (undefined8 *)0x0) {
    if (*(long *)(lVar11 + 0x10) == 0) {
      uVar26 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
      *(undefined8 *)(lVar11 + 0x10) = uVar26;
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
    uVar3 = *(undefined4 *)(param_1 + 0x398);
    *(undefined4 *)(plVar10 + 0x73) = uVar3;
    plVar20 = plVar10;
    if ((long *)plVar10[0x3b] != (long *)0x0) {
      plVar20 = (long *)plVar10[0x3b];
    }
    if (plVar20 != plVar10) {
      (**(code **)(*plVar20 + 0x60))(plVar20,uVar3);
    }
    plVar20 = (long *)plVar10[0x3a];
    if ((plVar20 != (long *)0x0) && (plVar20 != plVar10)) {
      (**(code **)(*plVar20 + 0x60))(plVar20,uVar3);
    }
    puVar23 = (undefined8 *)plVar10[0x75];
    for (puVar22 = (undefined8 *)plVar10[0x74]; puVar22 != puVar23; puVar22 = puVar22 + 1) {
      (**(code **)(*(long *)*puVar22 + 0x60))((long *)*puVar22,uVar3);
    }
    lVar11 = nn::os::GetCurrentThread();
    plVar20 = plVar10 + 0x41;
    do {
      if (*plVar20 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)((long)plVar10 + 0x1fc));
          while (*plVar20 == 0) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar20,0x10);
            if (bVar5) {
              *plVar20 = lVar11;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_02c04528;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar5) {
        *plVar20 = lVar11;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_02c04528:
    lVar11 = param_1;
    if (*(long *)(param_1 + 0x1d0) != 0) {
      lVar11 = *(long *)(param_1 + 0x1d0);
    }
    lVar25 = param_1;
    if (*(long *)(param_1 + 0x1d8) != 0) {
      lVar25 = *(long *)(param_1 + 0x1d8);
    }
    if (lVar11 != lVar25) {
      FUN_02a70230(plVar10);
      uVar15 = *(ulong *)(param_1 + 0x420);
      if (uVar15 != *(ulong *)(param_1 + 0x428)) {
        FUN_02a70468(plVar10,*(undefined8 *)(*(ulong *)(param_1 + 0x428) - 8),0);
        uVar15 = *(ulong *)(param_1 + 0x428);
      }
      if (uVar15 < *(ulong *)(param_1 + 0x430)) {
        FUN_02c052d8(*(undefined8 *)(param_1 + 0x438),uVar15,&local_70);
        *(long *)(param_1 + 0x428) = *(long *)(param_1 + 0x428) + 8;
      }
      else {
        uVar19 = *(ulong *)(param_1 + 0x440);
        lVar11 = (long)(uVar15 - *(long *)(param_1 + 0x420)) >> 3;
        uVar15 = lVar11 + 1;
        if (0x7ffffffffffffffe < uVar19) {
          uVar19 = 0x7fffffffffffffff;
        }
        if (uVar19 < uVar15) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar25 = *(ulong *)(param_1 + 0x430) - *(long *)(param_1 + 0x420);
        if ((ulong)(lVar25 >> 3) < uVar19 >> 1) {
          uVar18 = lVar25 >> 2;
          uVar19 = uVar15;
          if (uVar15 <= uVar18) {
            uVar19 = uVar18;
          }
        }
        if (uVar19 == 0) {
          lVar25 = 0;
        }
        else {
          lVar25 = (**(code **)(**(long **)(param_1 + 0x438) + 0x10))
                             (*(long **)(param_1 + 0x438),uVar19 << 3,8);
          if (lVar25 == 0) {
            (**(code **)(**(long **)(param_1 + 0x438) + 0xb8))();
          }
        }
        lVar11 = lVar25 + lVar11 * 8;
        FUN_02c052d8(*(undefined8 *)(param_1 + 0x438),lVar11,&local_70);
        plVar24 = *(long **)(param_1 + 0x420);
        plVar20 = *(long **)(param_1 + 0x428);
        lVar21 = lVar11;
        if (plVar20 == plVar24) {
          plVar20 = plVar24;
        }
        else {
          do {
            uVar26 = *(undefined8 *)(param_1 + 0x438);
            if ((*PTR_DAT_04379520 & 1) == 0) {
              iVar9 = __cxa_guard_acquire(PTR_DAT_04379520);
              puVar7 = PTR_DAT_04379528;
              if (iVar9 != 0) {
                FUN_008a62a4(PTR_DAT_04379528);
                FUN_00100250(PTR_LAB_04379530,puVar7,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379520);
              }
            }
            lVar12 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
            if (lVar12 != 0) {
              if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_02c04a28;
              *(undefined8 *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = uVar26;
              *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
            }
            plVar20 = plVar20 + -1;
            lVar17 = *plVar20;
            *(long *)(lVar21 + -8) = lVar17;
            if (lVar17 != 0) {
              lVar17 = *(long *)(lVar17 + 0x58);
              if (*(undefined8 **)(lVar17 + 0x18) == (undefined8 *)0x0) goto LAB_02c04a18;
              if (*(long *)(lVar17 + 0x10) == 0) {
                uVar26 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
                *(undefined8 *)(lVar17 + 0x10) = uVar26;
              }
              piVar1 = (int *)(lVar17 + 0xc);
              do {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = *piVar1 + 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
            }
            if (lVar12 != 0) {
              *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
            }
            lVar21 = lVar21 + -8;
          } while (plVar20 != plVar24);
          plVar24 = *(long **)(param_1 + 0x420);
          plVar20 = *(long **)(param_1 + 0x428);
        }
        lVar12 = *(long *)(param_1 + 0x430);
        *(long *)(param_1 + 0x420) = lVar21;
        *(long *)(param_1 + 0x428) = lVar11 + 8;
        *(ulong *)(param_1 + 0x430) = lVar25 + uVar19 * 8;
LAB_02c04768:
        if (plVar20 != plVar24) {
          while( true ) {
            plVar20 = plVar20 + -1;
            plVar13 = (long *)*plVar20;
            if (plVar13 == (long *)0x0) break;
            lVar11 = plVar13[0xb];
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
            if (iVar9 + -1 != 0) break;
            *(undefined8 *)(lVar11 + 0x18) = 0;
            (**(code **)(*plVar13 + 0x20))();
            if (plVar20 == plVar24) goto LAB_02c047ac;
          }
          goto LAB_02c04768;
        }
LAB_02c047ac:
        if (plVar24 != (long *)0x0) {
          lVar12 = lVar12 - (long)plVar24;
          plVar20 = *(long **)(param_1 + 0x438);
          uVar15 = (**(code **)(*plVar20 + 0xc0))(plVar20);
          if ((uVar15 & 1) != 0) {
            if (*(char *)(lVar6 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar6 + 0x38d488) = 1;
              *(undefined8 *)(lVar6 + 0x38d478) = 0;
              *(undefined8 *)(lVar6 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar6 + 0x38d480)) {
              FUN_02bcc824(plVar20,plVar24,lVar12,8);
              goto LAB_02c0482c;
            }
          }
          (**(code **)(*plVar20 + 0x18))(plVar20,plVar24,lVar12,8);
        }
      }
LAB_02c0482c:
      plVar10[0x41] = 0;
      nn::os::SignalLightEvent((LightEventType *)((long)plVar10 + 0x1fc));
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
  }
LAB_02c04a18:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


