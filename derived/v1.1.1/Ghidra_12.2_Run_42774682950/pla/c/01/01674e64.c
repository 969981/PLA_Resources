/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01674e64; name: FUN_01674e64
 */


void FUN_01674e64(long param_1,ulong *param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  ulong uVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long *local_88;
  long *local_80;
  long *local_78;
  long *local_70;
  long *local_68;
  ulong local_60;
  long local_58;
  long lStack_50;
  long *local_48;
  long *local_38;
  
  uVar9 = *(ulong *)(param_1 + 0xf0);
  if (uVar9 == 0) {
    return;
  }
  uVar10 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
  uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
  uVar8 = *param_2;
  uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar10 < 2) {
    uVar11 = uVar9 - 1 & uVar8;
  }
  else if (uVar8 < uVar9) {
    uVar11 = uVar8;
  }
  else {
    uVar11 = 0;
    if (uVar9 != 0) {
      uVar11 = uVar8 / uVar9;
    }
    uVar11 = uVar8 - uVar11 * uVar9;
  }
  plVar12 = *(long **)(*(long *)(param_1 + 0xe8) + uVar11 * 8);
  if (plVar12 == (long *)0x0) {
    return;
  }
  plVar12 = (long *)*plVar12;
  if (plVar12 == (long *)0x0) {
    return;
  }
  if (1 < uVar10) {
    do {
      uVar10 = plVar12[1];
      if (uVar10 == uVar8) {
        if (plVar12[2] == uVar8) goto LAB_01674f18;
      }
      else {
        if (uVar9 <= uVar10) {
          uVar4 = 0;
          if (uVar9 != 0) {
            uVar4 = uVar10 / uVar9;
          }
          uVar10 = uVar10 - uVar4 * uVar9;
        }
        if (uVar10 != uVar11) {
          return;
        }
      }
      plVar12 = (long *)*plVar12;
      if (plVar12 == (long *)0x0) {
        return;
      }
    } while( true );
  }
  do {
    if (plVar12[1] == uVar8) {
      if (plVar12[2] == uVar8) break;
    }
    else if ((plVar12[1] & uVar9 - 1) != uVar11) {
      return;
    }
    plVar12 = (long *)*plVar12;
    if (plVar12 == (long *)0x0) {
      return;
    }
  } while( true );
LAB_01674f18:
  if (((*PTR_DAT_04379678 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04379678), iVar6 != 0))
  {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  *(undefined8 *)PTR_DAT_04379688 = *(undefined8 *)PTR_DAT_04379680;
  FUN_00d8c950(&local_80);
  FUN_016b6208(&local_38,local_80);
  if (local_80 != (long *)0x0) {
    plVar7 = local_80 + 10;
    do {
      iVar6 = (int)*plVar7 + -1;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *(int *)plVar7 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*local_80 + 0x10))();
    }
  }
  FUN_0165dc38(&local_48,local_38);
  local_78 = (long *)0x0;
  local_70 = (long *)0x0;
  local_80 = (long *)0x0;
  local_68 = (long *)plVar12[6];
  local_60 = plVar12[7];
  local_58 = plVar12[8];
  lStack_50 = plVar12[9];
  lVar14 = plVar12[4] - plVar12[3];
  if (lVar14 == 0) goto joined_r0x01675224;
  uVar9 = local_60;
  if (0x7ffffffffffffffe < local_60) {
    uVar9 = 0x7fffffffffffffff;
  }
  if (uVar9 < (ulong)(lVar14 >> 3)) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  plVar7 = (long *)(**(code **)(*local_68 + 0x10))(local_68,lVar14,8);
  if (plVar7 == (long *)0x0) {
    (**(code **)(*local_68 + 0xb8))();
  }
  local_70 = plVar7 + (lVar14 >> 3);
  lVar14 = plVar12[3];
  lVar2 = plVar12[4];
  local_80 = plVar7;
  local_78 = plVar7;
  if (lVar14 == lVar2) {
LAB_01675138:
    plVar13 = local_80;
    if (local_80 == (long *)0x0) goto joined_r0x01675224;
  }
  else {
    do {
      FUN_0166a198(&local_68,local_78,lVar14);
      plVar7 = local_78;
      plVar12 = local_80;
      lVar14 = lVar14 + 8;
      local_78 = local_78 + 1;
    } while (lVar2 != lVar14);
    plVar13 = local_78;
    if (local_80 != local_78) {
      local_88 = (long *)*local_80;
      if (local_88 != (long *)0x0) {
        plVar13 = local_88 + 10;
        do {
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar5) {
            *(int *)plVar13 = (int)*plVar13 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      FUN_01673aa8(local_48,&local_88);
      if (local_88 != (long *)0x0) {
        plVar13 = local_88 + 10;
        do {
          iVar6 = (int)*plVar13 + -1;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar5) {
            *(int *)plVar13 = iVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar6 == 0) {
          (**(code **)(*local_88 + 0x10))();
        }
      }
      if (plVar12 != plVar7) {
        local_88 = (long *)plVar12[1];
        if (local_88 != (long *)0x0) {
          plVar13 = local_88 + 10;
          do {
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar5) {
              *(int *)plVar13 = (int)*plVar13 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        FUN_01673aa8(local_48,&local_88);
        if (local_88 != (long *)0x0) {
          plVar13 = local_88 + 10;
          do {
            iVar6 = (int)*plVar13 + -1;
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar5) {
              *(int *)plVar13 = iVar6;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar6 == 0) {
            (**(code **)(*local_88 + 0x10))();
          }
        }
        if (plVar12 + 1 != plVar7) {
          local_88 = (long *)plVar12[2];
          if (local_88 != (long *)0x0) {
            plVar13 = local_88 + 10;
            do {
              cVar3 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
              if (bVar5) {
                *(int *)plVar13 = (int)*plVar13 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          FUN_01673aa8(local_48,&local_88);
          if (local_88 != (long *)0x0) {
            plVar13 = local_88 + 10;
            do {
              iVar6 = (int)*plVar13 + -1;
              cVar3 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
              if (bVar5) {
                *(int *)plVar13 = iVar6;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar6 == 0) {
              (**(code **)(*local_88 + 0x10))();
            }
          }
          if (plVar12 + 2 != plVar7) {
            plVar12 = plVar12 + 3;
            do {
              local_88 = (long *)*plVar12;
              if (local_88 != (long *)0x0) {
                plVar13 = local_88 + 10;
                do {
                  cVar3 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                  if (bVar5) {
                    *(int *)plVar13 = (int)*plVar13 + 1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
              }
              FUN_01673aa8(local_48,&local_88);
              if (local_88 != (long *)0x0) {
                plVar13 = local_88 + 10;
                do {
                  iVar6 = (int)*plVar13 + -1;
                  cVar3 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                  if (bVar5) {
                    *(int *)plVar13 = iVar6;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar6 == 0) {
                  (**(code **)(*local_88 + 0x10))();
                }
              }
              bVar5 = plVar12 != plVar7;
              plVar12 = plVar12 + 1;
            } while (bVar5);
          }
        }
      }
      goto LAB_01675138;
    }
  }
  plVar12 = local_78;
  if (local_78 == plVar13) {
    plVar12 = plVar13;
  }
  else {
    do {
      plVar12 = plVar12 + -1;
      plVar7 = (long *)*plVar12;
      if (plVar7 != (long *)0x0) {
        plVar1 = plVar7 + 10;
        do {
          iVar6 = (int)*plVar1 + -1;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *(int *)plVar1 = iVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar6 == 0) {
          (**(code **)(*plVar7 + 0x10))();
        }
      }
    } while (plVar12 != plVar13);
    plVar12 = local_80;
  }
  plVar7 = local_68;
  lVar14 = (long)local_70 - (long)plVar12;
  local_78 = plVar13;
  uVar9 = (**(code **)(*local_68 + 0xc0))(local_68);
  if ((uVar9 & 1) != 0) {
    lVar2 = tpidr_el0;
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar2 + 0x38d480)) {
      FUN_02bcc824(plVar7,plVar12,lVar14,8);
      goto joined_r0x01675224;
    }
  }
  (**(code **)(*plVar7 + 0x18))(plVar7,plVar12,lVar14,8);
joined_r0x01675224:
  if (local_48 != (long *)0x0) {
    plVar12 = local_48 + 10;
    do {
      iVar6 = (int)*plVar12 + -1;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar5) {
        *(int *)plVar12 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*local_48 + 0x10))();
    }
  }
  if (local_38 != (long *)0x0) {
    plVar12 = local_38 + 10;
    do {
      iVar6 = (int)*plVar12 + -1;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar5) {
        *(int *)plVar12 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*local_38 + 0x10))();
    }
  }
  return;
}


