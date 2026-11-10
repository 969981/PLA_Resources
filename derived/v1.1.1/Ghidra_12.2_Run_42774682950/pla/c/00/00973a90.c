/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00973a90; name: FUN_00973a90
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00973a90(long param_1,undefined8 *param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  undefined8 local_88;
  char *pcStack_80;
  undefined8 local_78;
  long *local_70;
  long *local_68;
  char *pcStack_60;
  undefined8 local_58;
  long *local_50;
  long *local_48;
  
  FUN_00931034(&local_68,*(undefined8 *)(param_1 + 0x58));
  lVar8 = local_68[0xd1];
  plVar9 = (long *)*param_2;
  if (plVar9 != (long *)0x0) {
    plVar10 = plVar9 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *(int *)plVar10 = (int)*plVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar10 = *(long **)(lVar8 + 0x2c8);
  if (plVar10 != (long *)0x0) {
    plVar11 = plVar10 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar4) {
        *(int *)plVar11 = (int)*plVar11 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar11 = (long *)plVar10[0x37];
  if (plVar11 != (long *)0x0) {
    lVar8 = plVar11[0xb];
    if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar8 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
      *(undefined8 *)(lVar8 + 0x10) = uVar7;
    }
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar12 = (long *)plVar10[0x39];
  if (plVar12 == (long *)0x0) {
    *(undefined4 *)((long)plVar11 + 0x124) = 0;
    *(undefined2 *)(plVar11 + 0x25) = 0;
    *(undefined4 *)((long)plVar11 + 300) = 0;
    *(undefined4 *)((long)plVar11 + 0x134) = 0;
    FUN_02c33414(plVar11,plVar9);
    if (DAT_0000007c != '\0') {
      *_DAT_00000058 = 0;
      _DAT_0000007a = 0;
    }
    FUN_02c338a4(plVar11,0,plVar9,0,0);
  }
  else {
    plVar2 = plVar12 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(undefined4 *)((long)plVar11 + 0x124) = 0;
    *(undefined2 *)(plVar11 + 0x25) = 0;
    *(undefined4 *)((long)plVar11 + 300) = 0;
    *(undefined4 *)((long)plVar11 + 0x134) = 0;
    FUN_02c33414(plVar11,plVar9);
    if (*(char *)((long)plVar12 + 0x7c) != '\0') {
      *(undefined2 *)plVar12[0xb] = 0;
      *(undefined2 *)((long)plVar12 + 0x7a) = 0;
    }
    FUN_02c338a4(plVar11,plVar12,plVar9,0,0);
    do {
      iVar6 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
  }
  lVar8 = plVar11[0xb];
  piVar1 = (int *)(lVar8 + 0xc);
  do {
    iVar6 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar6 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar6 + -1 == 0) {
    *(undefined8 *)(lVar8 + 0x18) = 0;
    (**(code **)(*plVar11 + 0x20))(plVar11);
  }
  plVar11 = plVar10 + 10;
  do {
    iVar6 = (int)*plVar11 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar4) {
      *(int *)plVar11 = iVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar6 == 0) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
  }
  if (plVar9 != (long *)0x0) {
    plVar10 = plVar9 + 10;
    do {
      iVar6 = (int)*plVar10 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *(int *)plVar10 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
  }
  if (local_68 != (long *)0x0) {
    lVar8 = local_68[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*local_68 + 0x20))();
    }
  }
  local_68 = (long *)0x63e2672f9e43a54e;
  pcStack_60 = "battle_logic";
  local_58 = 0xc;
  local_50 = (long *)0x0;
  local_88 = 0xbb8c9d45409677d0;
  pcStack_80 = "systemMessageHideFrame";
  local_78 = 0x16;
  local_70 = (long *)0x0;
  if (((*PTR_DAT_04379660 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04379660), iVar6 != 0))
  {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  uVar7 = *(undefined8 *)PTR_DAT_04379668;
  *(undefined8 *)PTR_DAT_04379670 = uVar7;
  FUN_00d7d9e4(&local_48,uVar7,&local_68);
  if (local_48 == (long *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_00d78f50(local_48,&local_88);
    if (local_48 != (long *)0x0) {
      plVar9 = local_48 + 10;
      do {
        iVar6 = (int)*plVar9 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *(int *)plVar9 = iVar6;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*local_48 + 0x10))();
      }
    }
  }
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  FUN_00973814(param_1,uVar5);
  return;
}


