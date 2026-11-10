/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b1cd58; name: FUN_00b1cd58
 */


void FUN_00b1cd58(long param_1,long *param_2,long *param_3,long *param_4,long param_5)

{
  undefined8 *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  long *local_68;
  long *local_60;
  long *local_58;
  
  plVar13 = *(long **)(DAT_043ef5a0 + 0x68);
  if (plVar13 != (long *)0x0) {
    plVar7 = plVar13 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *(int *)plVar7 = (int)*plVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_60 = *(long **)(*(long *)(*param_3 + 0x208) + 0x88);
  if (local_60 != (long *)0x0) {
    plVar7 = local_60 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *(int *)plVar7 = (int)*plVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (*param_4 == 0) {
    lVar15 = *(long *)(param_5 + 8);
    if (lVar15 == 0) goto joined_r0x00b1d0a8;
    if ((*PTR_DAT_04379520 & 1) == 0) {
      iVar6 = __cxa_guard_acquire(PTR_DAT_04379520);
      puVar5 = PTR_DAT_04379528;
      if (iVar6 != 0) {
        FUN_008a62a4(PTR_DAT_04379528);
        FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379520);
      }
    }
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar10 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = param_2;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
    plVar7 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x138,8);
    if (plVar7 == (long *)0x0) {
      (**(code **)(*param_2 + 0xb8))(param_2);
    }
    FUN_02b26ba8(plVar7,lVar15 + 0x270,param_5);
    plVar7[1] = (long)param_2;
    plVar7[2] = (long)plVar7;
    plVar7[3] = 0x138;
    plVar7[4] = 8;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
    if (plVar7 == (long *)0x0) {
      plVar14 = (long *)0x0;
    }
    else {
      plVar14 = plVar7 + 10;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar4) {
          *(int *)plVar14 = (int)*plVar14 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar14 = plVar7;
    }
    local_68 = plVar7;
    FUN_02b6f730(&local_58,plVar13,plVar14 + 0xb,plVar14[1]);
    FUN_02b6423c(local_60,&local_58,0xffff);
    FUN_02b64be8(local_60);
    if (local_58 != (long *)0x0) {
      plVar7 = local_58 + 10;
      do {
        iVar6 = (int)*plVar7 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *(int *)plVar7 = iVar6;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*local_58 + 0x10))();
      }
    }
    lVar15 = *(long *)(param_1 + 0x1f8);
    puVar1 = (undefined8 *)(param_1 + 0x208);
    if (lVar15 == *(long *)(param_1 + 0x200)) {
      uVar12 = *(ulong *)(param_1 + 0x210);
      lVar15 = lVar15 - *(long *)(param_1 + 0x1f0) >> 3;
      uVar8 = lVar15 + 1;
      if (0x7ffffffffffffffe < uVar12) {
        uVar12 = 0x7fffffffffffffff;
      }
      if (uVar8 <= uVar12) {
        lVar10 = *(long *)(param_1 + 0x200) - *(long *)(param_1 + 0x1f0);
        uVar11 = lVar10 >> 2;
        if (uVar8 <= uVar11) {
          uVar8 = uVar11;
        }
        if ((ulong)(lVar10 >> 3) < uVar12 >> 1) {
          uVar12 = uVar8;
        }
        if (uVar12 == 0) {
          lVar10 = 0;
        }
        else {
          lVar10 = (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar12 << 3,8);
          if (lVar10 == 0) {
            (**(code **)(*(long *)*puVar1 + 0xb8))();
          }
        }
        lVar16 = lVar10 + lVar15 * 8;
        FUN_00b1dbd0(puVar1,lVar16,&local_68);
        plVar7 = *(long **)(param_1 + 0x1f0);
        plVar14 = *(long **)(param_1 + 0x1f8);
        lVar15 = lVar16 + 8;
        if (plVar14 == plVar7) {
          plVar14 = plVar7;
        }
        else {
          do {
            lVar16 = lVar16 + -8;
            plVar14 = plVar14 + -1;
            FUN_00b1dbd0(puVar1,lVar16,plVar14);
          } while (plVar7 != plVar14);
          plVar7 = *(long **)(param_1 + 0x1f0);
          plVar14 = *(long **)(param_1 + 0x1f8);
        }
        *(long *)(param_1 + 0x1f0) = lVar16;
        *(long *)(param_1 + 0x1f8) = lVar15;
        lVar15 = *(long *)(param_1 + 0x200);
        *(ulong *)(param_1 + 0x200) = lVar10 + uVar12 * 8;
joined_r0x00b1d07c:
        if (plVar14 != plVar7) {
          do {
            plVar14 = plVar14 + -1;
            plVar9 = (long *)*plVar14;
            if (plVar9 != (long *)0x0) {
              plVar2 = plVar9 + 10;
              do {
                iVar6 = (int)*plVar2 + -1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar4) {
                  *(int *)plVar2 = iVar6;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar6 == 0) goto LAB_00b1d4c4;
            }
            if (plVar14 == plVar7) break;
          } while( true );
        }
        local_58 = local_68;
        if (plVar7 != (long *)0x0) {
          plVar14 = (long *)*puVar1;
          lVar15 = lVar15 - (long)plVar7;
          uVar8 = (**(code **)(*plVar14 + 0xc0))(plVar14);
          if ((uVar8 & 1) != 0) {
            lVar10 = tpidr_el0;
            if (*(char *)(lVar10 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar10 + 0x38d488) = 1;
              *(undefined8 *)(lVar10 + 0x38d478) = 0;
              *(undefined8 *)(lVar10 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar10 + 0x38d480)) {
              FUN_02bcc824(plVar14,plVar7,lVar15,8);
              local_58 = local_68;
              goto joined_r0x00b1d2a4;
            }
          }
          (**(code **)(*plVar14 + 0x18))(plVar14,plVar7,lVar15,8);
          local_58 = local_68;
        }
        goto joined_r0x00b1d2a4;
      }
      goto LAB_00b1d478;
    }
    FUN_00b1dbd0(puVar1,lVar15,&local_68);
    *(long *)(param_1 + 0x1f8) = *(long *)(param_1 + 0x1f8) + 8;
    local_58 = local_68;
joined_r0x00b1d2a4:
    local_68 = local_58;
    if (local_58 == (long *)0x0) goto joined_r0x00b1d0a8;
    plVar7 = local_58 + 10;
    do {
      iVar6 = (int)*plVar7 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *(int *)plVar7 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  else {
    FUN_02b25094(&local_58,*param_4,&local_60,param_5,param_2);
    uVar8 = *(ulong *)(param_1 + 0x1f8);
    puVar1 = (undefined8 *)(param_1 + 0x208);
    if (*(ulong *)(param_1 + 0x200) <= uVar8) {
      uVar12 = *(ulong *)(param_1 + 0x210);
      lVar15 = (long)(uVar8 - *(long *)(param_1 + 0x1f0)) >> 3;
      uVar8 = lVar15 + 1;
      if (0x7ffffffffffffffe < uVar12) {
        uVar12 = 0x7fffffffffffffff;
      }
      if (uVar8 <= uVar12) {
        lVar10 = *(ulong *)(param_1 + 0x200) - *(long *)(param_1 + 0x1f0);
        if ((ulong)(lVar10 >> 3) < uVar12 >> 1) {
          uVar11 = lVar10 >> 2;
          uVar12 = uVar8;
          if (uVar8 <= uVar11) {
            uVar12 = uVar11;
          }
        }
        if (uVar12 == 0) {
          lVar10 = 0;
        }
        else {
          lVar10 = (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar12 << 3,8);
          if (lVar10 == 0) {
            (**(code **)(*(long *)*puVar1 + 0xb8))();
          }
        }
        lVar16 = lVar10 + lVar15 * 8;
        FUN_00b1daf0(puVar1,lVar16,&local_58);
        plVar7 = *(long **)(param_1 + 0x1f0);
        plVar14 = *(long **)(param_1 + 0x1f8);
        lVar15 = lVar16 + 8;
        if (plVar14 == plVar7) {
          plVar14 = plVar7;
        }
        else {
          do {
            lVar16 = lVar16 + -8;
            plVar14 = plVar14 + -1;
            FUN_00b1dbd0(puVar1,lVar16,plVar14);
          } while (plVar7 != plVar14);
          plVar7 = *(long **)(param_1 + 0x1f0);
          plVar14 = *(long **)(param_1 + 0x1f8);
        }
        *(long *)(param_1 + 0x1f0) = lVar16;
        *(long *)(param_1 + 0x1f8) = lVar15;
        lVar15 = *(long *)(param_1 + 0x200);
        *(ulong *)(param_1 + 0x200) = lVar10 + uVar12 * 8;
joined_r0x00b1ce9c:
        if (plVar14 != plVar7) {
          do {
            plVar14 = plVar14 + -1;
            plVar9 = (long *)*plVar14;
            if (plVar9 != (long *)0x0) {
              plVar2 = plVar9 + 10;
              do {
                iVar6 = (int)*plVar2 + -1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar4) {
                  *(int *)plVar2 = iVar6;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar6 == 0) goto LAB_00b1d484;
            }
            if (plVar14 == plVar7) break;
          } while( true );
        }
        if (plVar7 != (long *)0x0) {
          plVar14 = (long *)*puVar1;
          lVar15 = lVar15 - (long)plVar7;
          uVar8 = (**(code **)(*plVar14 + 0xc0))(plVar14);
          if ((uVar8 & 1) != 0) {
            lVar10 = tpidr_el0;
            if (*(char *)(lVar10 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar10 + 0x38d488) = 1;
              *(undefined8 *)(lVar10 + 0x38d478) = 0;
              *(undefined8 *)(lVar10 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar10 + 0x38d480)) {
              FUN_02bcc824(plVar14,plVar7,lVar15,8);
              goto joined_r0x00b1d328;
            }
          }
          (**(code **)(*plVar14 + 0x18))(plVar14,plVar7,lVar15,8);
        }
        goto joined_r0x00b1d328;
      }
LAB_00b1d478:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    FUN_00b1daf0(puVar1,uVar8,&local_58);
    *(long *)(param_1 + 0x1f8) = *(long *)(param_1 + 0x1f8) + 8;
joined_r0x00b1d328:
    if (local_58 == (long *)0x0) goto joined_r0x00b1d0a8;
    plVar7 = local_58 + 10;
    do {
      iVar6 = (int)*plVar7 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *(int *)plVar7 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (iVar6 == 0) {
    (**(code **)(*local_58 + 0x10))();
  }
joined_r0x00b1d0a8:
  if (local_60 != (long *)0x0) {
    plVar7 = local_60 + 10;
    do {
      iVar6 = (int)*plVar7 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *(int *)plVar7 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*local_60 + 0x10))();
    }
  }
  if (plVar13 != (long *)0x0) {
    plVar7 = plVar13 + 10;
    do {
      iVar6 = (int)*plVar7 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *(int *)plVar7 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
    }
  }
  return;
LAB_00b1d4c4:
  (**(code **)(*plVar9 + 0x10))();
  goto joined_r0x00b1d07c;
LAB_00b1d484:
  (**(code **)(*plVar9 + 0x10))();
  goto joined_r0x00b1ce9c;
}


