/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0142dbdc; name: FUN_0142dbdc
 */


void FUN_0142dbdc(long param_1,ulong param_2,ulong param_3,undefined8 *param_4)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined2 uVar5;
  undefined8 uVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined8 local_60;
  char *pcStack_58;
  undefined8 local_50;
  long *local_48;
  
  plVar10 = *(long **)(*(long *)(*(long *)(param_1 + 0x68) + 0xb0) + 0x18);
  if (plVar10 != (long *)0x0) {
    lVar8 = plVar10[0xb];
    if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar8 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
      *(undefined8 *)(lVar8 + 0x10) = uVar6;
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
  plVar9 = (long *)plVar10[0xd];
  if (plVar9 != (long *)0x0) {
    plVar2 = plVar9 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lVar8 = plVar10[0xb];
  piVar1 = (int *)(lVar8 + 0xc);
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
    *(undefined8 *)(lVar8 + 0x18) = 0;
    (**(code **)(*plVar10 + 0x20))(plVar10);
  }
  lVar8 = plVar9[0x16];
  if (lVar8 != 0) {
    plVar10 = *(long **)(lVar8 + 0x270);
    if (plVar10 != *(long **)(lVar8 + 0x278)) {
      iVar7 = 0;
      do {
        plVar2 = (long *)PTR_DAT_04379c88;
        if (*plVar10 != 0) {
          plVar2 = (long *)(*plVar10 + 0x58);
        }
        if (*plVar2 == *(long *)(&DAT_03a7bc88 + (param_3 & 0xff) * 8)) goto LAB_0142dcec;
        plVar10 = plVar10 + 1;
        iVar7 = iVar7 + 1;
      } while (*(long **)(lVar8 + 0x278) != plVar10);
    }
  }
  iVar7 = 0;
LAB_0142dcec:
  FUN_02c2e33c(plVar9,iVar7,*param_4);
  local_60 = 0x8ad48bca42a4661b;
  pcStack_58 = "context_menu_00";
  local_50 = 0xf;
  local_48 = (long *)0x0;
  lVar8 = FUN_00d472a0(param_1 + 0x180,&local_60);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  plVar10 = (long *)*param_4;
  if (plVar10 != (long *)0x0) {
    plVar2 = plVar10 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lVar8 = *(long *)(lVar8 + (param_2 & 0xff) * 8 + 0x470);
  if (*(char *)(lVar8 + 0x7c) != '\0') {
    uVar5 = FUN_02c30580(*(undefined8 *)(lVar8 + 0x58),plVar10[0xb],*(undefined2 *)(lVar8 + 0x78));
    *(undefined2 *)(lVar8 + 0x7a) = uVar5;
  }
  if (plVar10 != (long *)0x0) {
    plVar2 = plVar10 + 10;
    do {
      iVar7 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
  }
  if (plVar9 != (long *)0x0) {
    plVar10 = plVar9 + 10;
    do {
      iVar7 = (int)*plVar10 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *(int *)plVar10 = iVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
  }
  return;
}


