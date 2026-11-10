/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b45464; name: FUN_01b45464
 */


void FUN_01b45464(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 uVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  long *local_78;
  char *pcStack_70;
  undefined8 local_68;
  long *local_60;
  undefined8 *local_58;
  char *pcStack_50;
  undefined8 local_48;
  long *local_40;
  long *local_38;
  
  if (*(long *)(param_1 + 0xe90) == 0) {
    return;
  }
  FUN_018e3920(&local_78);
  if (local_78 == (long *)0x0) {
    return;
  }
  local_58 = (undefined8 *)0x0;
  pcStack_50 = (char *)0x0;
  FUN_00b182e0(&local_58,local_78 + 0x9a);
  puVar5 = local_58;
  if (local_78 != (long *)0x0) {
    lVar9 = local_78[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
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
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_78 + 0x20))();
      puVar5 = local_58;
    }
  }
  if (puVar5 == (undefined8 *)0x0) {
    return;
  }
  local_58 = puVar5;
  if (*(int *)((long)puVar5 + 0xc) != 0) {
    piVar1 = (int *)((long)puVar5 + 0xc);
    iVar8 = *(int *)((long)puVar5 + 0xc);
    do {
      plVar10 = (long *)puVar5[2];
      lVar9 = FUN_00ab5048();
      while( true ) {
        if (plVar10 == (long *)0x0) goto LAB_01b45560;
        if (plVar10 == (long *)lVar9) break;
        plVar10 = (long *)*plVar10;
      }
      iVar2 = *piVar1;
      if (iVar2 == iVar8) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          plVar10 = (long *)0x0;
          puVar6 = local_58;
          if (puVar5[3] != 0) {
            plVar10 = (long *)(puVar5[3] + -0x50);
          }
          goto joined_r0x01b45558;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar8 = iVar2;
    } while (iVar2 != 0);
  }
LAB_01b45560:
  plVar10 = (long *)0x0;
  puVar6 = local_58;
joined_r0x01b45558:
  local_58 = puVar6;
  if (puVar6 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar6 + 1);
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
      puVar6[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar9 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar9;
      local_78 = (long *)*puVar6;
      FUN_02a44274(lVar9 + 0xd8,&local_78);
    }
  }
  if (plVar10 == (long *)0x0) {
    return;
  }
  FUN_01a92c54(&local_58,param_1);
  if (local_58 == (undefined8 *)0x0) {
    local_38 = (long *)0x0;
  }
  else {
    FUN_00bd9360(&local_38);
    puVar5 = local_58;
    if (local_58 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_58 + 1);
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
        local_58[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar9 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar9;
        local_78 = (long *)*puVar5;
        FUN_02a44274(lVar9 + 0xd8,&local_78);
      }
    }
  }
  if (local_38 == (long *)0x0) goto LAB_01b45720;
  if (*(int *)(param_1 + 0x918) == 1) {
    local_78 = (long *)0x51b8652aab57eb0;
    pcStack_70 = "Water";
    local_68 = 5;
  }
  else {
    local_78 = (long *)0x52df90c5b69bfbbe;
    pcStack_70 = "Ground";
    local_68 = 6;
  }
  local_40 = (long *)0x0;
  local_48 = 0xf;
  pcStack_50 = "WaterFlagSwitch";
  local_58 = (undefined8 *)0x80bea84c218dc72a;
  local_60 = (long *)0x0;
  (**(code **)(*local_38 + 0xf0))(local_38,&local_58,&local_78);
  if (local_60 != (long *)0x0) {
    (**(code **)(*local_60 + 0x20))();
  }
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x20))();
  }
  uVar7 = (**(code **)(*plVar10 + 0xf0))(plVar10);
  switch(uVar7) {
  case 0:
    local_58 = (undefined8 *)0x60e100380b7b646c;
    pcStack_50 = "PLAY_PM_FX_APPEAR_S";
    break;
  case 1:
    local_58 = (undefined8 *)0x60e116380b7b89ce;
    pcStack_50 = "PLAY_PM_FX_APPEAR_M";
    break;
  case 2:
    local_58 = (undefined8 *)0x60e117380b7b8b81;
    pcStack_50 = "PLAY_PM_FX_APPEAR_L";
    break;
  case 3:
    local_58 = (undefined8 *)0x1a06413b82ee8d57;
    pcStack_50 = "PLAY_PM_FX_APPEAR_LL";
    local_48 = 0x14;
    goto LAB_01b456d8;
  default:
    goto switchD_01b456b0_default;
  }
  local_48 = 0x13;
LAB_01b456d8:
  local_40 = (long *)0x0;
  FUN_0290b66c(local_38,&local_58,0);
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x20))();
  }
switchD_01b456b0_default:
  if (local_38 != (long *)0x0) {
    lVar9 = local_38[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
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
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_38 + 0x20))();
    }
  }
LAB_01b45720:
  lVar9 = plVar10[0xb];
  piVar1 = (int *)(lVar9 + 0xc);
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
    *(undefined8 *)(lVar9 + 0x18) = 0;
    (**(code **)(*plVar10 + 0x20))(plVar10);
  }
  return;
}


