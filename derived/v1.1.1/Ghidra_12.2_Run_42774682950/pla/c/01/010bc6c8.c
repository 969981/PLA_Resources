/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010bc6c8; name: FUN_010bc6c8
 */


void FUN_010bc6c8(long *param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4,
                 ulong param_5)

{
  int *piVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  code *pcVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long *local_118 [4];
  long *local_f8;
  long *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  long *local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  long *local_b0;
  long *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  long *local_88;
  undefined8 local_80;
  undefined8 local_78;
  long *local_70;
  long *local_68;
  long *local_58;
  
  FUN_00947cf8(&local_a8,param_2[1]);
  plVar9 = (long *)param_1[0xe];
  param_1[0xe] = 0;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x20))();
  }
  param_1[0xe] = (long)local_a8;
  if ((param_5 & 1) == 0) {
    FUN_010c4b50(&local_a8,param_2,param_3);
    FUN_00938764(param_1 + 0xf,0,&local_a8,0,param_1[1],param_4);
    if (local_88 != (long *)0x0) {
      (**(code **)(*local_88 + 0x20))();
    }
    if (local_a8 != (long *)0x0) {
      (**(code **)(*local_a8 + 0x20))();
    }
    FUN_010c4d00(&local_a8,param_2,param_3);
    FUN_010bd598(param_1 + 0x15,0,&local_a8,0,param_1[1],param_4);
    if (local_88 != (long *)0x0) {
      (**(code **)(*local_88 + 0x20))();
    }
    if (local_a8 != (long *)0x0) {
      (**(code **)(*local_a8 + 0x20))();
    }
    if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
      return;
    }
    if (param_1[0xd] == 0) {
      local_a8 = *(long **)(param_1[0x10] + 0x250);
      lVar17 = FUN_00d12804(&local_e8,param_1[1],&local_a8);
      if (lVar17 != 0) {
        piVar1 = (int *)(lVar17 + 0x50);
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar7) {
            *piVar1 = *piVar1 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      plVar9 = (long *)param_1[0xd];
      param_1[0xd] = 0;
      if (plVar9 != (long *)0x0) {
        plVar5 = plVar9 + 10;
        do {
          iVar8 = (int)*plVar5 + -1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar7) {
            *(int *)plVar5 = iVar8;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar8 == 0) {
          (**(code **)(*plVar9 + 0x10))();
        }
      }
      param_1[0xd] = lVar17;
      FUN_02c2e92c(lVar17 + 0xa8,param_1 + 0x15);
      pcVar14 = (code *)param_1[0x1c];
    }
    else {
      pcVar14 = (code *)param_1[0x1c];
    }
    if (pcVar14 != (code *)0x0) {
      (*pcVar14)(param_1 + 0x20);
    }
    *(undefined1 *)(param_1 + 0x1b) = 1;
    return;
  }
  FUN_010c4b50(local_118,param_2,param_3);
  uVar10 = FUN_00938764(param_1 + 0xf,1,local_118,0,param_1[1],param_4);
  if ((uVar10 & 1) == 0) {
    plVar9 = (long *)0x0;
  }
  else {
    plVar9 = (long *)param_1[0x14];
    if (plVar9 != (long *)0x0) {
      lVar17 = plVar9[0xb];
      if (*(undefined8 **)(lVar17 + 0x18) == (undefined8 *)0x0) goto LAB_010bcf28;
      if (*(long *)(lVar17 + 0x10) == 0) {
        uVar12 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
        *(undefined8 *)(lVar17 + 0x10) = uVar12;
      }
      piVar1 = (int *)(lVar17 + 0xc);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = *piVar1 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
  }
  uVar12 = *param_2;
  uVar4 = param_2[1];
  uVar3 = param_2[2];
  plVar5 = (long *)param_2[3];
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  if (((*PTR_DAT_04379d48 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379d48), iVar8 != 0))
  {
    FUN_00100250(PTR_LAB_0437ad08,PTR_DAT_04379d50,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379d48);
  }
  uVar11 = *(undefined8 *)PTR_DAT_04379d50;
  *(undefined8 *)PTR_DAT_04379d58 = uVar11;
  FUN_00b57040(&local_58,uVar11,plVar9[1]);
  local_e8 = param_1;
  uStack_e0 = uVar12;
  local_d8 = uVar4;
  uStack_d0 = uVar3;
  local_c8 = plVar5;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  local_b0 = local_58;
  local_c0 = param_3;
  local_b8 = param_4;
  if (local_58 != (long *)0x0) {
    lVar17 = local_58[0xb];
    if (*(undefined8 **)(lVar17 + 0x18) == (undefined8 *)0x0) goto LAB_010bcf28;
    if (*(long *)(lVar17 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
      *(undefined8 *)(lVar17 + 0x10) = uVar12;
    }
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  plVar18 = (long *)0x0;
  if (local_58 != (long *)0x0) {
    plVar18 = local_58 + 0xe;
  }
  if ((*(byte *)((long)plVar9 + 0x7a) & 1) != 0) goto joined_r0x010bca64;
  if ((*(byte *)((long)plVar9 + 0x79) & 1) != 0) {
    FUN_010beaa0(&local_e8);
    goto joined_r0x010bca64;
  }
  lVar17 = nn::os::GetCurrentThread();
  plVar2 = plVar9 + 0x12;
  do {
    if (*plVar2 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)((long)plVar9 + 0x84));
        while (*plVar2 == 0) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar7) {
            *plVar2 = lVar17;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_010bc874;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar7) {
      *plVar2 = lVar17;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_010bc874:
  if ((*(byte *)((long)plVar9 + 0x79) & 1) == 0) {
    local_a8 = local_e8;
    uStack_a0 = uStack_e0;
    local_88 = local_c8;
    local_98 = local_d8;
    uStack_90 = uStack_d0;
    if (local_c8 != (long *)0x0) {
      (**(code **)(*local_c8 + 0x18))();
    }
    local_80 = CONCAT44(uStack_bc,local_c0);
    local_78 = local_b8;
    local_70 = local_b0;
    if (local_b0 != (long *)0x0) {
      lVar17 = local_b0[0xb];
      if (*(undefined8 **)(lVar17 + 0x18) == (undefined8 *)0x0) {
LAB_010bcf28:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar17 + 0x10) == 0) {
        uVar12 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
        *(undefined8 *)(lVar17 + 0x10) = uVar12;
      }
      piVar1 = (int *)(lVar17 + 0xc);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = *piVar1 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    uVar10 = plVar9[0x1b];
    local_68 = plVar18;
    if (uVar10 < (ulong)plVar9[0x1c]) {
      FUN_010bece8(plVar9[0x1d],uVar10,&local_a8);
      plVar9[0x1b] = plVar9[0x1b] + 0x90;
    }
    else {
      uVar16 = plVar9[0x1e];
      lVar17 = (long)(uVar10 - plVar9[0x1a]) >> 4;
      if (0x7ffffffffffffffe < uVar16) {
        uVar16 = 0x7fffffffffffffff;
      }
      uVar10 = lVar17 * -0x71c71c71c71c71c7 + 1;
      if (uVar16 < uVar10) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar13 = plVar9[0x1c] - plVar9[0x1a] >> 4;
      uVar15 = lVar13 * 0x1c71c71c71c71c72;
      if (uVar10 <= uVar15) {
        uVar10 = uVar15;
      }
      plVar18 = plVar9 + 0x1d;
      if ((ulong)(lVar13 * -0x71c71c71c71c71c7) < uVar16 >> 1) {
        uVar16 = uVar10;
      }
      if (uVar16 == 0) {
        lVar13 = 0;
      }
      else {
        lVar13 = (**(code **)(*(long *)*plVar18 + 0x10))((long *)*plVar18,uVar16 * 0x90,0x10);
        if (lVar13 == 0) {
          (**(code **)(*(long *)*plVar18 + 0xb8))();
        }
      }
      lVar21 = lVar13 + lVar17 * 0x10;
      FUN_010bece8(plVar9[0x1d],lVar21,&local_a8);
      lVar20 = plVar9[0x1a];
      lVar19 = plVar9[0x1b];
      lVar17 = lVar21 + 0x90;
      if (lVar19 == lVar20) {
        lVar19 = lVar20;
      }
      else {
        do {
          lVar21 = lVar21 + -0x90;
          lVar19 = lVar19 + -0x90;
          FUN_00b57d94(plVar18,lVar21,lVar19);
        } while (lVar20 != lVar19);
        lVar20 = plVar9[0x1a];
        lVar19 = plVar9[0x1b];
      }
      plVar9[0x1a] = lVar21;
      plVar9[0x1b] = lVar17;
      lVar17 = plVar9[0x1c];
      plVar9[0x1c] = lVar13 + uVar16 * 0x90;
      while (lVar13 = lVar19, lVar13 != lVar20) {
        pcVar14 = *(code **)(lVar13 + -0x88);
        lVar19 = lVar13 + -0x90;
        if (pcVar14 != (code *)0x0) {
          *(undefined8 *)(lVar13 + -0x80) = 0;
          *(undefined8 *)(lVar13 + -0x78) = 0;
          *(undefined8 *)(lVar13 + -0x90) = 0;
          *(undefined8 *)(lVar13 + -0x88) = 0;
          (*pcVar14)(lVar13 + -0x70);
        }
      }
      if (lVar20 != 0) {
        plVar18 = (long *)*plVar18;
        uVar10 = (**(code **)(*plVar18 + 0xc0))(plVar18);
        if ((uVar10 & 1) != 0) {
          lVar13 = tpidr_el0;
          if (*(char *)(lVar13 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar13 + 0x38d488) = 1;
            *(undefined8 *)(lVar13 + 0x38d478) = 0;
            *(undefined8 *)(lVar13 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar13 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar13 + 0x38d480)) {
            FUN_02bcc824(plVar18,lVar20,lVar17 - lVar20,0x10);
            goto joined_r0x010bccf8;
          }
        }
        (**(code **)(*plVar18 + 0x18))(plVar18,lVar20,lVar17 - lVar20,0x10);
      }
    }
joined_r0x010bccf8:
    if (local_70 != (long *)0x0) {
      lVar17 = local_70[0xb];
      piVar1 = (int *)(lVar17 + 0xc);
      do {
        iVar8 = *piVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = iVar8 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar8 + -1 == 0) {
        *(undefined8 *)(lVar17 + 0x18) = 0;
        (**(code **)(*local_70 + 0x20))();
      }
    }
    if (local_88 != (long *)0x0) {
      (**(code **)(*local_88 + 0x20))();
    }
  }
  else {
    FUN_010beaa0(&local_e8);
  }
  plVar9[0x12] = 0;
  nn::os::SignalLightEvent((LightEventType *)((long)plVar9 + 0x84));
joined_r0x010bca64:
  if (local_b0 != (long *)0x0) {
    lVar17 = local_b0[0xb];
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar8 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar17 + 0x18) = 0;
      (**(code **)(*local_b0 + 0x20))();
    }
  }
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x20))();
  }
  if (local_58 != (long *)0x0) {
    lVar17 = local_58[0xb];
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar8 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar17 + 0x18) = 0;
      (**(code **)(*local_58 + 0x20))();
    }
  }
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))(plVar5);
  }
  lVar17 = plVar9[0xb];
  piVar1 = (int *)(lVar17 + 0xc);
  do {
    iVar8 = *piVar1;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar7) {
      *piVar1 = iVar8 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (iVar8 + -1 == 0) {
    *(undefined8 *)(lVar17 + 0x18) = 0;
    (**(code **)(*plVar9 + 0x20))(plVar9);
  }
  if (local_f8 != (long *)0x0) {
    (**(code **)(*local_f8 + 0x20))();
  }
  if (local_118[0] != (long *)0x0) {
    (**(code **)(*local_118[0] + 0x20))();
  }
  return;
}


