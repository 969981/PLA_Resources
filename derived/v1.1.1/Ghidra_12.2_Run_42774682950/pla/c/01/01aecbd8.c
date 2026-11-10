/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01aecbd8; name: FUN_01aecbd8
 */


void FUN_01aecbd8(long *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  long extraout_var_01;
  long extraout_var_02;
  long *local_50;
  undefined8 *local_48;
  undefined8 uStack_40;
  long *local_38;
  undefined8 local_28;
  
  if ((char)param_1[0x120] == '\0') {
LAB_01aed180:
    uVar6 = 0;
    goto LAB_01aecce0;
  }
  local_48 = (undefined8 *)0x0;
  uStack_40 = 0;
  FUN_00cf9db0(&local_48,param_1 + 0xf1);
  if (local_48 == (undefined8 *)0x0) {
    local_38 = (long *)0x0;
LAB_01aecc14:
    if (local_38 == (long *)0x0) goto LAB_01aecc1c;
LAB_01aed1f8:
    uVar6 = (**(code **)(*local_38 + 0x160))();
    if (local_38 == (long *)0x0) goto LAB_01aecce0;
    lVar11 = local_38[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar8 = *piVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar8;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  else {
    FUN_00959eac(&local_38);
    puVar5 = local_48;
    if (local_48 == (undefined8 *)0x0) goto LAB_01aecc14;
    piVar1 = (int *)(local_48 + 1);
    do {
      iVar8 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 + -1 != 0) goto LAB_01aecc14;
    local_48[2] = 0;
    if (((*PTR_DAT_04379498 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379498);
    }
    lVar11 = *(long *)PTR_DAT_043794a0;
    *(long *)PTR_DAT_043794a8 = lVar11;
    local_28 = *puVar5;
    FUN_02a44274(lVar11 + 0xd8,&local_28);
    if (local_38 != (long *)0x0) goto LAB_01aed1f8;
LAB_01aecc1c:
    local_48 = (undefined8 *)0x0;
    uStack_40 = 0;
    FUN_01b00924(&local_48,param_1 + 0xd1);
    if (local_48 == (undefined8 *)0x0) {
      local_38 = (long *)0x0;
    }
    else {
      FUN_0095dafc(&local_38);
      puVar5 = local_48;
      if (local_48 != (undefined8 *)0x0) {
        piVar1 = (int *)(local_48 + 1);
        do {
          iVar8 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar8 + -1 == 0) {
          local_48[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar11 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar11;
          local_28 = *puVar5;
          FUN_02a44274(lVar11 + 0xd8,&local_28);
        }
      }
    }
    if (local_38 == (long *)0x0) goto LAB_01aed180;
    local_48 = (undefined8 *)0x0;
    uStack_40 = 0;
    FUN_01a2bf84(&local_48,local_38 + 0xb9);
    if (local_48 == (undefined8 *)0x0) {
      local_50 = (long *)0x0;
LAB_01aecc5c:
      if (local_50 != (long *)0x0) goto LAB_01aecc64;
LAB_01aed100:
      uVar6 = 0;
    }
    else {
      FUN_009cf990(&local_50);
      puVar5 = local_48;
      if (local_48 == (undefined8 *)0x0) goto LAB_01aecc5c;
      piVar1 = (int *)(local_48 + 1);
      do {
        iVar8 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar8 + -1 != 0) goto LAB_01aecc5c;
      local_48[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar11 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar11;
      local_28 = *puVar5;
      FUN_02a44274(lVar11 + 0xd8,&local_28);
      if (local_50 == (long *)0x0) goto LAB_01aed100;
LAB_01aecc64:
      uVar9 = (**(code **)(*local_38 + 0x1a0))();
      if ((uVar9 & 1) == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = (**(code **)(*local_38 + 0x1a8))();
        uVar6 = uVar6 ^ 1;
      }
      uVar7 = FUN_01bf509c(local_50);
      uVar6 = uVar6 & uVar7;
      if (local_50 != (long *)0x0) {
        lVar11 = local_50[0xb];
        piVar1 = (int *)(lVar11 + 0xc);
        do {
          iVar8 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar8 + -1 == 0) {
          *(undefined8 *)(lVar11 + 0x18) = 0;
          (**(code **)(*local_50 + 0x20))();
        }
      }
    }
    if (local_38 == (long *)0x0) goto LAB_01aecce0;
    lVar11 = local_38[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar8 = *piVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar8;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (iVar8 == 0) {
    *(undefined8 *)(lVar11 + 0x18) = 0;
    (**(code **)(*local_38 + 0x20))();
  }
LAB_01aecce0:
  if (((*PTR_DAT_0437e418 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_0437e418), iVar8 != 0))
  {
    FUN_00100250(PTR_LAB_0437f2f8,PTR_DAT_0437e420,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437e418);
  }
  lVar11 = *(long *)PTR_DAT_0437e420;
  *(long *)PTR_DAT_0437f2f0 = lVar11;
  if ((uVar6 & 1) == 0) {
    *(ulong *)(lVar11 + 0x60) = *(ulong *)(lVar11 + 0x60) | 8;
    return;
  }
  *(ulong *)(lVar11 + 0x60) = *(ulong *)(lVar11 + 0x60) & 0xfffffffffffffff7;
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379558), iVar8 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar11 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar11;
  plVar12 = *(long **)(lVar11 + 0x278);
  if (plVar12 == (long *)0x0) {
    return;
  }
  lVar11 = plVar12[0xb];
  if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  if (*(long *)(lVar11 + 0x10) == 0) {
    uVar10 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
    *(undefined8 *)(lVar11 + 0x10) = uVar10;
  }
  piVar1 = (int *)(lVar11 + 0xc);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = *piVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  (**(code **)(*param_1 + 0x140))(param_1);
  plVar12[0x19] = extraout_var_01;
  plVar12[0x18] = CONCAT44(extraout_var,extraout_s0);
  (**(code **)(*param_1 + 0x148))(param_1);
  plVar12[0x1b] = extraout_var_02;
  plVar12[0x1a] = CONCAT44(extraout_var_00,extraout_s0_00);
  local_48 = (undefined8 *)0x0;
  uStack_40 = 0;
  FUN_00cf9db0(&local_48,param_1 + 0xf1);
  if (local_48 == (undefined8 *)0x0) {
    local_38 = (long *)0x0;
  }
  else {
    FUN_00959eac(&local_38);
    puVar5 = local_48;
    if (local_48 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_48 + 1);
      do {
        iVar8 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar8 + -1 == 0) {
        local_48[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar11 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar11;
        local_28 = *puVar5;
        FUN_02a44274(lVar11 + 0xd8,&local_28);
      }
    }
  }
  if (local_38 == (long *)0x0) {
    *(undefined1 *)(plVar12 + 0x32) = 0;
    *(undefined4 *)((long)plVar12 + 0x194) = 0;
  }
  else {
    uVar2 = *(undefined4 *)((long)local_38 + 0x59c);
    *(undefined1 *)(plVar12 + 0x32) = 1;
    *(undefined4 *)((long)plVar12 + 0x194) = uVar2;
    lVar11 = local_38[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*local_38 + 0x20))();
    }
  }
  local_48 = (undefined8 *)0x0;
  uStack_40 = 0;
  FUN_01b00b94(&local_48,param_1 + 0xdd);
  if (local_48 == (undefined8 *)0x0) {
    local_38 = (long *)0x0;
  }
  else {
    FUN_009bd2d4(&local_38);
    puVar5 = local_48;
    if (local_48 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_48 + 1);
      do {
        iVar8 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar8 + -1 == 0) {
        local_48[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar11 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar11;
        local_28 = *puVar5;
        FUN_02a44274(lVar11 + 0xd8,&local_28);
      }
    }
  }
  if (local_38 != (long *)0x0) {
    plVar12[0x2f] = local_38[0x45];
    plVar12[0x2e] = local_38[0x44];
    plVar12[0x31] = local_38[0x47];
    plVar12[0x30] = local_38[0x46];
    lVar11 = local_38[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*local_38 + 0x20))();
    }
  }
  local_48 = (undefined8 *)0x0;
  uStack_40 = 0;
  FUN_01b01074(&local_48,param_1 + 0xe1);
  if (local_48 == (undefined8 *)0x0) {
    local_38 = (long *)0x0;
  }
  else {
    FUN_019b4b4c(&local_38);
    puVar5 = local_48;
    if (local_48 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_48 + 1);
      do {
        iVar8 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar8 + -1 == 0) {
        local_48[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar11 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar11;
        local_28 = *puVar5;
        FUN_02a44274(lVar11 + 0xd8,&local_28);
      }
    }
  }
  if ((local_38 != (long *)0x0) &&
     (((char)local_38[0x42] == '\0' ||
      (FUN_01bfd86c((int)local_38[0x46],local_38,local_38 + 0x44), local_38 != (long *)0x0)))) {
    lVar11 = local_38[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*local_38 + 0x20))();
    }
  }
  lVar11 = plVar12[0xb];
  piVar1 = (int *)(lVar11 + 0xc);
  do {
    iVar8 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar8 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar8 + -1 == 0) {
    *(undefined8 *)(lVar11 + 0x18) = 0;
    (**(code **)(*plVar12 + 0x20))(plVar12);
  }
  return;
}


