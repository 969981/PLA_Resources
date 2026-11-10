/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a8f764; name: FUN_02a8f764
 */


void FUN_02a8f764(long param_1,long *param_2,int param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  ulong uVar13;
  byte bVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  byte bVar18;
  ulong uVar19;
  long *plVar20;
  long *plVar21;
  bool bVar22;
  long *plVar23;
  long *plVar24;
  long *plVar25;
  long *local_68;
  
  puVar5 = PTR_DAT_04379520;
  if (*(char *)((long)param_2 + 0x1e1) != '\0') {
    return;
  }
  if ((*PTR_DAT_04379520 & 1) == 0) {
    iVar8 = __cxa_guard_acquire(PTR_DAT_04379520);
    puVar6 = PTR_DAT_04379528;
    if (iVar8 != 0) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
  }
  puVar6 = PTR_DAT_04379528;
  lVar9 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar9 == 0) {
    if (param_1 == 0) goto LAB_02a8f8e8;
  }
  else if (*(long *)(lVar9 + 0x88) == param_1) goto LAB_02a8f8e8;
  lVar9 = *(long *)(param_1 + 0x4b0);
  if ((*puVar5 & 1) == 0) {
    iVar8 = __cxa_guard_acquire(PTR_DAT_04379520);
    puVar7 = PTR_DAT_04379528;
    if (iVar8 != 0) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar7,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
  }
  lVar10 = nn::os::GetTlsValue(*(undefined4 *)puVar6);
  if (lVar10 == 0) {
    if (lVar9 == 0) goto LAB_02a8f8e8;
  }
  else if (*(long *)(lVar10 + 0x88) == lVar9) goto LAB_02a8f8e8;
  lVar9 = *(long *)(param_1 + 0x4b8);
  if ((*puVar5 & 1) == 0) {
    iVar8 = __cxa_guard_acquire(PTR_DAT_04379520);
    puVar7 = PTR_DAT_04379528;
    if (iVar8 != 0) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar7,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
  }
  lVar10 = nn::os::GetTlsValue(*(undefined4 *)puVar6);
  if (lVar10 == 0) {
    if (lVar9 == 0) goto LAB_02a8f8e8;
  }
  else if (*(long *)(lVar10 + 0x88) == lVar9) goto LAB_02a8f8e8;
  lVar9 = *(long *)(param_1 + 0x4c0);
  if ((*puVar5 & 1) == 0) {
    iVar8 = __cxa_guard_acquire(PTR_DAT_04379520);
    puVar7 = PTR_DAT_04379528;
    if (iVar8 != 0) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar7,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
  }
  lVar10 = nn::os::GetTlsValue(*(undefined4 *)puVar6);
  if (lVar10 == 0) {
    if (lVar9 == 0) goto LAB_02a8f8e8;
  }
  else if (*(long *)(lVar10 + 0x88) == lVar9) goto LAB_02a8f8e8;
  lVar9 = *(long *)(param_1 + 0x4c8);
  if ((*puVar5 & 1) == 0) {
    iVar8 = __cxa_guard_acquire(PTR_DAT_04379520);
    puVar7 = PTR_DAT_04379528;
    if (iVar8 != 0) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar7,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
  }
  lVar10 = nn::os::GetTlsValue(*(undefined4 *)puVar6);
  if (lVar10 == 0) {
    if (lVar9 == 0) goto LAB_02a8f8e8;
  }
  else if (*(long *)(lVar10 + 0x88) == lVar9) {
LAB_02a8f8e8:
    nn::os::LockMutex((MutexType *)(param_1 + 0x480));
    plVar21 = *(long **)(param_1 + 0x410);
    plVar20 = *(long **)(param_1 + 0x418);
    if ((plVar21 != plVar20) && ((long *)*plVar21 != param_2)) {
      do {
        plVar21 = plVar21 + 1;
        if (plVar20 == plVar21) goto LAB_02a8f9a8;
      } while ((long *)*plVar21 != param_2);
    }
    if (plVar20 == plVar21) {
LAB_02a8f9a8:
      bVar22 = false;
    }
    else {
      plVar11 = plVar21;
      plVar23 = plVar21 + 1;
      if (plVar21 + 1 != plVar20) {
        do {
          plVar21 = (long *)*plVar11;
          *plVar11 = 0;
          if (plVar21 != (long *)0x0) {
            lVar9 = plVar21[0xb];
            piVar1 = (int *)(lVar9 + 0xc);
            do {
              iVar8 = *piVar1;
              cVar3 = '\x01';
              bVar22 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar22) {
                *piVar1 = iVar8 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar8 + -1 == 0) {
              *(undefined8 *)(lVar9 + 0x18) = 0;
              (**(code **)(*plVar21 + 0x20))();
            }
          }
          lVar9 = *plVar23;
          plVar24 = plVar23 + 1;
          *plVar23 = 0;
          plVar21 = plVar11 + 1;
          *plVar11 = lVar9;
          plVar11 = plVar21;
          plVar23 = plVar24;
        } while (plVar24 != plVar20);
        plVar20 = *(long **)(param_1 + 0x418);
        goto LAB_02a8fc34;
      }
      do {
        plVar20 = plVar20 + -1;
        plVar11 = (long *)*plVar20;
        if (plVar11 != (long *)0x0) {
          lVar9 = plVar11[0xb];
          piVar1 = (int *)(lVar9 + 0xc);
          do {
            iVar8 = *piVar1;
            cVar3 = '\x01';
            bVar22 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar22) {
              *piVar1 = iVar8 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar8 + -1 == 0) {
            *(undefined8 *)(lVar9 + 0x18) = 0;
            (**(code **)(*plVar11 + 0x20))();
          }
        }
LAB_02a8fc34:
      } while (plVar20 != plVar21);
      bVar22 = true;
      *(long **)(param_1 + 0x418) = plVar21;
    }
    plVar21 = *(long **)(param_1 + 0x448);
    plVar20 = *(long **)(param_1 + 0x450);
    if ((plVar21 != plVar20) && ((long *)*plVar21 != param_2)) {
      do {
        plVar21 = plVar21 + 1;
        if (plVar20 == plVar21) goto LAB_02a90328;
      } while ((long *)*plVar21 != param_2);
    }
    if (plVar20 != plVar21) {
      plVar11 = plVar21;
      plVar23 = plVar21 + 1;
      if (plVar21 + 1 != plVar20) {
        do {
          plVar21 = (long *)*plVar11;
          *plVar11 = 0;
          if (plVar21 != (long *)0x0) {
            lVar9 = plVar21[0xb];
            piVar1 = (int *)(lVar9 + 0xc);
            do {
              iVar8 = *piVar1;
              cVar3 = '\x01';
              bVar22 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar22) {
                *piVar1 = iVar8 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar8 + -1 == 0) {
              *(undefined8 *)(lVar9 + 0x18) = 0;
              (**(code **)(*plVar21 + 0x20))();
            }
          }
          lVar9 = *plVar23;
          plVar24 = plVar23 + 1;
          *plVar23 = 0;
          plVar21 = plVar11 + 1;
          *plVar11 = lVar9;
          plVar11 = plVar21;
          plVar23 = plVar24;
        } while (plVar24 != plVar20);
        plVar20 = *(long **)(param_1 + 0x450);
        goto LAB_02a902e0;
      }
      do {
        plVar20 = plVar20 + -1;
        plVar11 = (long *)*plVar20;
        if (plVar11 != (long *)0x0) {
          lVar9 = plVar11[0xb];
          piVar1 = (int *)(lVar9 + 0xc);
          do {
            iVar8 = *piVar1;
            cVar3 = '\x01';
            bVar22 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar22) {
              *piVar1 = iVar8 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar8 + -1 == 0) {
            *(undefined8 *)(lVar9 + 0x18) = 0;
            (**(code **)(*plVar11 + 0x20))();
          }
        }
LAB_02a902e0:
      } while (plVar20 != plVar21);
      bVar22 = true;
      *(long **)(param_1 + 0x450) = plVar21;
    }
LAB_02a90328:
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x480));
    plVar21 = param_2 + 0x3c;
    do {
      if ((char)*plVar21 != '\0') {
        ClearExclusiveLocal();
        if (!bVar22) {
          return;
        }
        break;
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar4) {
        *(char *)plVar21 = '\x01';
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    (**(code **)(*param_2 + 0x40))(param_2);
    FUN_02a7791c(param_2);
    return;
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x480));
  if ((*(long **)(param_1 + 0x4a8) == param_2) || (*(char *)((long)param_2 + 0x1e1) != '\0'))
  goto LAB_02a8f8b8;
  plVar21 = *(long **)(param_1 + 0x410);
  plVar20 = *(long **)(param_1 + 0x418);
  if (param_3 < 0) {
    if ((plVar21 != plVar20) && ((long *)*plVar21 != param_2)) {
      do {
        if (plVar20 + -1 == plVar21) {
          plVar21 = plVar20;
          goto LAB_02a8fa54;
        }
        plVar11 = plVar21 + 1;
        plVar21 = plVar21 + 1;
      } while ((long *)*plVar11 != param_2);
      if (plVar20 != plVar21) goto LAB_02a8fa5c;
      goto LAB_02a8fabc;
    }
LAB_02a8fa54:
    if (plVar20 == plVar21) goto LAB_02a8fabc;
LAB_02a8fa5c:
    plVar11 = plVar21;
    plVar23 = plVar21 + 1;
    if (plVar21 + 1 != plVar20) {
      do {
        plVar21 = (long *)*plVar11;
        *plVar11 = 0;
        if (plVar21 != (long *)0x0) {
          lVar9 = plVar21[0xb];
          piVar1 = (int *)(lVar9 + 0xc);
          do {
            iVar8 = *piVar1;
            cVar3 = '\x01';
            bVar22 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar22) {
              *piVar1 = iVar8 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar8 + -1 == 0) {
            *(undefined8 *)(lVar9 + 0x18) = 0;
            (**(code **)(*plVar21 + 0x20))();
          }
        }
        lVar9 = *plVar23;
        plVar24 = plVar23 + 1;
        *plVar23 = 0;
        plVar21 = plVar11 + 1;
        *plVar11 = lVar9;
        plVar11 = plVar21;
        plVar23 = plVar24;
      } while (plVar24 != plVar20);
      plVar20 = *(long **)(param_1 + 0x418);
      goto LAB_02a8fd34;
    }
    do {
      plVar20 = plVar20 + -1;
      plVar11 = (long *)*plVar20;
      if (plVar11 != (long *)0x0) {
        lVar9 = plVar11[0xb];
        piVar1 = (int *)(lVar9 + 0xc);
        do {
          iVar8 = *piVar1;
          cVar3 = '\x01';
          bVar22 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar22) {
            *piVar1 = iVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar8 + -1 == 0) {
          *(undefined8 *)(lVar9 + 0x18) = 0;
          (**(code **)(*plVar11 + 0x20))();
        }
      }
LAB_02a8fd34:
    } while (plVar20 != plVar21);
    bVar14 = 1;
    *(long **)(param_1 + 0x418) = plVar21;
  }
  else {
    plVar11 = plVar21;
    if ((plVar21 != plVar20) && ((long *)*plVar21 != param_2)) {
      do {
        plVar11 = plVar20;
        if (plVar20 + -1 == plVar21) break;
        plVar23 = plVar21 + 1;
        plVar21 = plVar21 + 1;
        plVar11 = plVar21;
      } while ((long *)*plVar23 != param_2);
    }
    if (plVar20 != plVar11) goto LAB_02a8f8b8;
LAB_02a8fabc:
    bVar14 = 0;
  }
  plVar21 = *(long **)(param_1 + 0x448);
  plVar20 = *(long **)(param_1 + 0x450);
  if (param_3 < 1) {
    if ((plVar21 != plVar20) && ((long *)*plVar21 != param_2)) {
      do {
        if (plVar20 + -1 == plVar21) {
          plVar21 = plVar20;
          goto LAB_02a8fe28;
        }
        plVar11 = plVar21 + 1;
        plVar21 = plVar21 + 1;
      } while ((long *)*plVar11 != param_2);
      if (plVar20 != plVar21) goto LAB_02a8fe30;
      goto LAB_02a8fe90;
    }
LAB_02a8fe28:
    if (plVar20 == plVar21) goto LAB_02a8fe90;
LAB_02a8fe30:
    plVar11 = plVar21;
    plVar23 = plVar21 + 1;
    if (plVar21 + 1 != plVar20) {
      do {
        plVar21 = (long *)*plVar11;
        *plVar11 = 0;
        if (plVar21 != (long *)0x0) {
          lVar9 = plVar21[0xb];
          piVar1 = (int *)(lVar9 + 0xc);
          do {
            iVar8 = *piVar1;
            cVar3 = '\x01';
            bVar22 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar22) {
              *piVar1 = iVar8 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar8 + -1 == 0) {
            *(undefined8 *)(lVar9 + 0x18) = 0;
            (**(code **)(*plVar21 + 0x20))();
          }
        }
        lVar9 = *plVar23;
        plVar24 = plVar23 + 1;
        *plVar23 = 0;
        plVar21 = plVar11 + 1;
        *plVar11 = lVar9;
        plVar11 = plVar21;
        plVar23 = plVar24;
      } while (plVar24 != plVar20);
      plVar20 = *(long **)(param_1 + 0x450);
      goto LAB_02a903b4;
    }
    do {
      plVar20 = plVar20 + -1;
      plVar11 = (long *)*plVar20;
      if (plVar11 != (long *)0x0) {
        lVar9 = plVar11[0xb];
        piVar1 = (int *)(lVar9 + 0xc);
        do {
          iVar8 = *piVar1;
          cVar3 = '\x01';
          bVar22 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar22) {
            *piVar1 = iVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar8 + -1 == 0) {
          *(undefined8 *)(lVar9 + 0x18) = 0;
          (**(code **)(*plVar11 + 0x20))();
        }
      }
LAB_02a903b4:
    } while (plVar20 != plVar21);
    plVar20 = param_2 + 0x3c;
    *(long **)(param_1 + 0x450) = plVar21;
    do {
      if ((char)*plVar20 != '\0') {
        ClearExclusiveLocal();
        break;
      }
      cVar3 = '\x01';
      bVar22 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar22) {
        *(char *)plVar20 = '\x01';
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  else {
    plVar11 = plVar21;
    if ((plVar21 != plVar20) && ((long *)*plVar21 != param_2)) {
      do {
        plVar11 = plVar20;
        if (plVar20 + -1 == plVar21) break;
        plVar23 = plVar21 + 1;
        plVar21 = plVar21 + 1;
        plVar11 = plVar21;
      } while ((long *)*plVar23 != param_2);
    }
    if (plVar20 != plVar11) goto LAB_02a8f8b8;
LAB_02a8fe90:
    plVar21 = param_2 + 0x3c;
    do {
      if ((char)*plVar21 != '\0') {
        bVar18 = 0;
        ClearExclusiveLocal();
        break;
      }
      bVar18 = 1;
      cVar3 = '\x01';
      bVar22 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar22) {
        *(char *)plVar21 = '\x01';
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (!(bool)(bVar14 | bVar18)) goto LAB_02a8f8b8;
  }
  local_68 = param_2;
  if (param_2 != (long *)0x0) {
    lVar9 = param_2[0xb];
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) {
LAB_02a902c0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar12;
    }
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      cVar3 = '\x01';
      bVar22 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar22) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lVar9 = param_1 + (long)param_3 * 0x38;
  uVar13 = *(ulong *)(lVar9 + 0x418);
  plVar21 = (long *)(lVar9 + 0x418);
  puVar2 = (undefined8 *)(lVar9 + 0x428);
  if (uVar13 < *(ulong *)(lVar9 + 0x420)) {
    FUN_02a922dc(puVar2,uVar13,&local_68);
    *plVar21 = *plVar21 + 8;
  }
  else {
    plVar20 = (long *)(param_1 + (long)param_3 * 0x38 + 0x410);
    uVar19 = *(ulong *)(param_1 + (long)param_3 * 0x38 + 0x430);
    lVar10 = (long)(uVar13 - *plVar20) >> 3;
    uVar13 = lVar10 + 1;
    if (0x7ffffffffffffffe < uVar19) {
      uVar19 = 0x7fffffffffffffff;
    }
    if (uVar19 < uVar13) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar15 = *(ulong *)(lVar9 + 0x420) - *plVar20;
    uVar16 = lVar15 >> 2;
    if (uVar13 <= uVar16) {
      uVar13 = uVar16;
    }
    if ((ulong)(lVar15 >> 3) < uVar19 >> 1) {
      uVar19 = uVar13;
    }
    if (uVar19 == 0) {
      lVar15 = 0;
    }
    else {
      lVar15 = (**(code **)(*(long *)*puVar2 + 0x10))((long *)*puVar2,uVar19 << 3,8);
      if (lVar15 == 0) {
        (**(code **)(*(long *)*puVar2 + 0xb8))();
      }
    }
    plVar11 = (long *)(lVar15 + lVar10 * 8);
    FUN_02a922dc(puVar2,plVar11,&local_68);
    plVar24 = (long *)*plVar20;
    plVar25 = (long *)*plVar21;
    plVar23 = plVar11;
    if (plVar25 == plVar24) {
      plVar25 = plVar24;
    }
    else {
      do {
        uVar12 = *puVar2;
        if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
          FUN_008a62a4(puVar6);
          FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
          __cxa_guard_release(puVar5);
        }
        lVar10 = nn::os::GetTlsValue(*(undefined4 *)puVar6);
        if (lVar10 != 0) {
          if (0xf < *(ulong *)(lVar10 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = uVar12;
          *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
        }
        plVar25 = plVar25 + -1;
        lVar17 = *plVar25;
        plVar23 = plVar23 + -1;
        *plVar23 = lVar17;
        if (lVar17 != 0) {
          lVar17 = *(long *)(lVar17 + 0x58);
          if (*(undefined8 **)(lVar17 + 0x18) == (undefined8 *)0x0) goto LAB_02a902c0;
          if (*(long *)(lVar17 + 0x10) == 0) {
            uVar12 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
            *(undefined8 *)(lVar17 + 0x10) = uVar12;
          }
          piVar1 = (int *)(lVar17 + 0xc);
          do {
            cVar3 = '\x01';
            bVar22 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar22) {
              *piVar1 = *piVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        if (lVar10 != 0) {
          *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
        }
      } while (plVar25 != plVar24);
      plVar24 = (long *)*plVar20;
      plVar25 = (long *)*plVar21;
    }
    *plVar20 = (long)plVar23;
    *plVar21 = (long)(plVar11 + 1);
    lVar10 = *(long *)(lVar9 + 0x420);
    *(long *)(lVar9 + 0x420) = lVar15 + uVar19 * 8;
LAB_02a90140:
    if (plVar25 != plVar24) {
      while( true ) {
        plVar25 = plVar25 + -1;
        plVar21 = (long *)*plVar25;
        if (plVar21 == (long *)0x0) break;
        lVar9 = plVar21[0xb];
        piVar1 = (int *)(lVar9 + 0xc);
        do {
          iVar8 = *piVar1;
          cVar3 = '\x01';
          bVar22 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar22) {
            *piVar1 = iVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar8 + -1 != 0) break;
        *(undefined8 *)(lVar9 + 0x18) = 0;
        (**(code **)(*plVar21 + 0x20))();
        if (plVar25 == plVar24) goto LAB_02a90184;
      }
      goto LAB_02a90140;
    }
LAB_02a90184:
    if (plVar24 != (long *)0x0) {
      plVar21 = (long *)*puVar2;
      lVar10 = lVar10 - (long)plVar24;
      uVar13 = (**(code **)(*plVar21 + 0xc0))(plVar21);
      if ((uVar13 & 1) != 0) {
        lVar9 = tpidr_el0;
        if (*(char *)(lVar9 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar9 + 0x38d488) = 1;
          *(undefined8 *)(lVar9 + 0x38d478) = 0;
          *(undefined8 *)(lVar9 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar9 + 0x38d480)) {
          FUN_02bcc824(plVar21,plVar24,lVar10,8);
          goto joined_r0x02a90208;
        }
      }
      (**(code **)(*plVar21 + 0x18))(plVar21,plVar24,lVar10,8);
    }
  }
joined_r0x02a90208:
  if (local_68 != (long *)0x0) {
    lVar9 = local_68[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar3 = '\x01';
      bVar22 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar22) {
        *piVar1 = iVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_68 + 0x20))();
    }
  }
  nn::os::SignalConditionVariable((ConditionVariableType *)(param_1 + 0x4a0));
LAB_02a8f8b8:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x480));
  return;
}


