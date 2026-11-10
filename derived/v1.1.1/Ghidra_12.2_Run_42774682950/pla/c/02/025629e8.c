/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025629e8; name: FUN_025629e8
 */


void FUN_025629e8(long param_1)

{
  int *piVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long *plVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long *local_f8 [3];
  long local_e0;
  long *local_d8;
  long *local_d0;
  long *local_c8;
  long *local_c0;
  long *local_b8;
  long lStack_b0;
  long local_a8;
  long *local_a0;
  long *local_98;
  long *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  long *local_78;
  undefined8 uStack_70;
  
  if (*(char *)(param_1 + 0x524) != '\0') {
    return;
  }
  if (*(long *)(param_1 + 0x4c0) == 0) {
    local_90 = (long *)0x0;
    goto switchD_02562a6c_default;
  }
  FUN_00b118d0(&local_90);
  if (local_90 == (long *)0x0) goto switchD_02562a6c_default;
  iVar7 = *(int *)(param_1 + 0x520);
  switch(iVar7) {
  case 0:
    uVar10 = FUN_00d099d4();
    if ((uVar10 & 1) != 0) {
      if (*(long *)(param_1 + 0x4d8) == 0) {
        local_78 = (long *)PTR_PTR_04379d00;
      }
      else {
        local_78 = (long *)(*(long *)(param_1 + 0x4d8) + 0x60);
      }
      local_78 = (long *)*local_78;
      FUN_009f1b84(&local_d8,&local_78);
      FUN_01e65d58(&local_78);
      uVar8 = FUN_01cd5580(local_78);
      uVar9 = FUN_00d09a08(local_90);
      FUN_02563644(&local_98,param_1 + 0x1f0,&local_d8,uVar8,uVar9);
      if (local_98 != (long *)0x0) {
        lVar13 = local_98[0xb];
        piVar1 = (int *)(lVar13 + 0xc);
        do {
          iVar7 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar7 + -1 == 0) {
          *(undefined8 *)(lVar13 + 0x18) = 0;
          (**(code **)(*local_98 + 0x20))();
        }
      }
      if (local_78 != (long *)0x0) {
        lVar13 = local_78[0xb];
        piVar1 = (int *)(lVar13 + 0xc);
        do {
          iVar7 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar7 + -1 == 0) {
          *(undefined8 *)(lVar13 + 0x18) = 0;
          (**(code **)(*local_78 + 0x20))();
        }
      }
      if (local_b8 != (long *)0x0) {
        (**(code **)(*local_b8 + 0x20))();
      }
      if (local_d8 != (long *)0x0) {
        (**(code **)(*local_d8 + 0x20))();
      }
      iVar7 = *(int *)(param_1 + 0x520) + 1;
      *(int *)(param_1 + 0x520) = iVar7;
      lVar13 = *(long *)(param_1 + 0x1f8);
      goto joined_r0x02562a74;
    }
    iVar7 = *(int *)(param_1 + 0x520);
    break;
  case 1:
    lVar13 = *(long *)(param_1 + 0x1f8);
joined_r0x02562a74:
    if ((lVar13 != 0) && (*(char *)(lVar13 + 0x1e1) != '\0')) {
      *(int *)(param_1 + 0x520) = iVar7 + 1;
      goto switchD_02562a6c_caseD_2;
    }
    break;
  case 2:
switchD_02562a6c_caseD_2:
    FUN_02562368(param_1);
    iVar7 = *(int *)(param_1 + 0x520) + 1;
    *(int *)(param_1 + 0x520) = iVar7;
    break;
  case 3:
    goto switchD_02562a6c_caseD_3;
  default:
    goto switchD_02562a6c_default;
  }
  if (iVar7 != 3) goto joined_r0x025633b0;
switchD_02562a6c_caseD_3:
  if (*(long *)(param_1 + 0x510) == 0) {
    local_a0 = (long *)0x0;
    goto joined_r0x025633b0;
  }
  FUN_02566fd8(&local_a0);
  plVar12 = local_a0;
  if (local_a0 == (long *)0x0) goto joined_r0x025633b0;
  uVar10 = FUN_02c0bc14(local_a0);
  if ((uVar10 & 1) != 0) {
    plVar11 = (long *)FUN_02c0bc2c(plVar12);
    local_d8 = (long *)0x0;
    local_d0 = (long *)0x0;
    local_c0 = (long *)plVar11[3];
    local_b8 = (long *)plVar11[4];
    lStack_b0 = plVar11[5];
    local_a8 = plVar11[6];
    local_c8 = (long *)0x0;
    lVar13 = plVar11[1] - *plVar11;
    plVar12 = local_d0;
    if (lVar13 != 0) {
      plVar12 = local_b8;
      if ((long *)0x7ffffffffffffffe < local_b8) {
        plVar12 = (long *)0x7fffffffffffffff;
      }
      if (plVar12 < (long *)(lVar13 >> 3)) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      plVar12 = (long *)(**(code **)(*local_c0 + 0x10))(local_c0,lVar13,8);
      if (plVar12 == (long *)0x0) {
        (**(code **)(*local_c0 + 0xb8))();
      }
      local_c8 = plVar12 + (lVar13 >> 3);
      lVar13 = *plVar11;
      lVar2 = plVar11[1];
      local_d0 = plVar12;
      if (lVar13 != lVar2) {
        local_d8 = plVar12;
        do {
          FUN_02564e08(&local_c0,local_d0,lVar13);
          lVar13 = lVar13 + 8;
          local_d0 = local_d0 + 1;
        } while (lVar2 != lVar13);
        plVar12 = local_d8;
        if (local_d8 != local_d0) {
          FUN_009c69bc(&local_e0,*local_d8);
          plVar12 = *(long **)(local_e0 + 8);
          if (((*PTR_DAT_04379520 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar5 = PTR_DAT_04379528, iVar7 != 0))
          {
            FUN_008a62a4(PTR_DAT_04379528);
            FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379520);
          }
          lVar13 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
          if (0xf < *(ulong *)(lVar13 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = plVar12;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
          lVar13 = (**(code **)(*plVar12 + 0x10))(plVar12,0x2a0,0x10);
          if (lVar13 == 0) {
            (**(code **)(*plVar12 + 0xb8))(plVar12);
          }
          local_78 = (long *)0x0;
          uStack_70 = 0;
          local_88 = 0;
          uStack_80 = 0;
                    /* WARNING: Subroutine does not return */
          FUN_02a4c0f4(lVar13,0);
        }
      }
    }
    local_d8 = plVar12;
    if (*(char *)(param_1 + 0x4e0) != '\0') {
      FUN_01e65d58(&local_78);
      plVar12 = local_78;
      if (local_78 == (long *)0x0) {
switchD_02562a6c_default:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      FUN_009c69bc(local_f8,param_1);
      FUN_01cd0d20(plVar12,param_1 + 0x500,local_f8,0,2);
      if (local_f8[0] != (long *)0x0) {
        lVar13 = local_f8[0][0xb];
        piVar1 = (int *)(lVar13 + 0xc);
        do {
          iVar7 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar7 + -1 == 0) {
          *(undefined8 *)(lVar13 + 0x18) = 0;
          (**(code **)(*local_f8[0] + 0x20))();
        }
      }
      if (local_78 != (long *)0x0) {
        lVar13 = local_78[0xb];
        piVar1 = (int *)(lVar13 + 0xc);
        do {
          iVar7 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar7 + -1 == 0) {
          *(undefined8 *)(lVar13 + 0x18) = 0;
          (**(code **)(*local_78 + 0x20))();
        }
      }
    }
    FUN_025636d0(param_1,*(undefined1 *)(param_1 + 0x508));
    plVar6 = local_c0;
    plVar11 = local_d8;
    *(undefined1 *)(param_1 + 0x524) = 1;
    plVar12 = local_a0;
    if (local_d8 != (long *)0x0) {
      local_d0 = local_d8;
      lVar13 = (long)local_c8 - (long)local_d8;
      uVar10 = (**(code **)(*local_c0 + 0xc0))(local_c0);
      if ((uVar10 & 1) != 0) {
        lVar2 = tpidr_el0;
        if (*(char *)(lVar2 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar2 + 0x38d488) = 1;
          *(undefined8 *)(lVar2 + 0x38d478) = 0;
          *(undefined8 *)(lVar2 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar2 + 0x38d480)) {
          FUN_02bcc824(plVar6,plVar11,lVar13,8);
          plVar12 = local_a0;
          goto joined_r0x025633e4;
        }
      }
      (**(code **)(*plVar6 + 0x18))(plVar6,plVar11,lVar13,8);
      plVar12 = local_a0;
    }
joined_r0x025633e4:
    local_a0 = plVar12;
    if (plVar12 == (long *)0x0) goto joined_r0x025633b0;
  }
  lVar13 = plVar12[0xb];
  piVar1 = (int *)(lVar13 + 0xc);
  do {
    iVar7 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar7 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar7 + -1 == 0) {
    *(undefined8 *)(lVar13 + 0x18) = 0;
    (**(code **)(*plVar12 + 0x20))(plVar12);
  }
joined_r0x025633b0:
  if (local_90 != (long *)0x0) {
    lVar13 = local_90[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*local_90 + 0x20))();
    }
  }
  return;
}


