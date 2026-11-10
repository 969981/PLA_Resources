/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013cb9bc; name: FUN_013cb9bc
 */


void FUN_013cb9bc(long param_1,long param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  ushort uVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *local_80;
  char *pcStack_78;
  undefined8 local_70;
  long *local_68;
  
  plVar14 = *(long **)(param_1 + 0x2c8);
  if (plVar14 == (long *)0x0) {
LAB_013cba14:
    plVar10 = (long *)plVar14[0x38];
  }
  else {
    plVar10 = plVar14 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar6) {
        *(int *)plVar10 = (int)*plVar10 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    do {
      iVar7 = (int)*plVar10 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar6) {
        *(int *)plVar10 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 != 0) goto LAB_013cba14;
    (**(code **)(*plVar14 + 0x10))(plVar14);
    plVar10 = (long *)plVar14[0x38];
  }
  if (plVar10 != (long *)0x0) {
    plVar11 = plVar10 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *(int *)plVar11 = (int)*plVar11 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar11 = (long *)plVar14[0x37];
  if (plVar11 != (long *)0x0) {
    lVar12 = plVar11[0xb];
    if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar12 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
      *(undefined8 *)(lVar12 + 0x10) = uVar8;
    }
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  uVar8 = FUN_00d40878(param_1);
  FUN_00d37c90(&local_80,uVar8,1);
  plVar13 = (long *)local_80[0xd];
  if (plVar13 != (long *)0x0) {
    plVar15 = plVar13 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar6) {
        *(int *)plVar15 = (int)*plVar15 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  if (local_80 != (long *)0x0) {
    lVar12 = local_80[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar7 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*local_80 + 0x20))();
    }
  }
  uVar8 = FUN_00d40878(param_1);
  FUN_00d37c90(&local_80,uVar8,2);
  plVar15 = (long *)local_80[0xd];
  if (plVar15 != (long *)0x0) {
    plVar2 = plVar15 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  if (local_80 != (long *)0x0) {
    lVar12 = local_80[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar7 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*local_80 + 0x20))();
    }
  }
  cVar5 = *(char *)(param_2 + 0x48);
  cVar3 = *(char *)(param_2 + 0x49);
  uVar4 = *(ushort *)(param_2 + 0xe);
  FUN_02c3865c(plVar11,0,*(undefined2 *)(param_2 + 0xc),1);
  FUN_02c395d0(plVar11,1,*(undefined2 *)(param_2 + 0xe),2,0,1);
  if (cVar5 == '\0') {
    if (cVar3 == '\0') {
      if (uVar4 < 2) {
        uVar9 = 0x96ef0d61bdc0;
      }
      else {
        uVar9 = 0x9def0d61c9a5;
      }
    }
    else {
      FUN_02c302d0(*(undefined8 *)(param_1 + 0x608),param_2 + 0x10);
      FUN_010c6478(plVar11,2,*(undefined8 *)(param_1 + 0x608),*(undefined1 *)(param_2 + 0x2a),
                   *(undefined1 *)(param_2 + 0x2b));
      if (uVar4 < 2) {
        uVar9 = 0x98ef0d61c126;
      }
      else {
        uVar9 = 0x97ef0d61bf73;
      }
    }
  }
  else if (cVar3 == '\0') {
    if (uVar4 < 2) {
      local_80 = (long *)0x6d6b94ef0d5f8483;
      goto LAB_013cbc0c;
    }
    uVar9 = 0xa3ef0d61d3d7;
  }
  else {
    FUN_02c302d0(*(undefined8 *)(param_1 + 0x608),param_2 + 0x2c);
    FUN_010c6478(plVar11,2,*(undefined8 *)(param_1 + 0x608),*(undefined1 *)(param_2 + 0x46),
                 *(undefined1 *)(param_2 + 0x47));
    if (uVar4 < 2) {
      uVar9 = 0xa2ef0d61d224;
    }
    else {
      uVar9 = 0x99ef0d61c2d9;
    }
  }
  local_80 = (long *)(uVar9 | 0x6d6e000000000000);
LAB_013cbc0c:
  FUN_02c2e7d0(plVar13,&local_80,plVar10);
  local_80 = (long *)0x8fb817a4e5c082b1;
  pcStack_78 = "pane_T_text_02";
  local_70 = 0xe;
  local_68 = (long *)0x0;
  FUN_0283d080(plVar14,&local_80,10);
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  if (plVar15 != (long *)0x0) {
    plVar14 = plVar15 + 10;
    do {
      iVar7 = (int)*plVar14 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar6) {
        *(int *)plVar14 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
    }
  }
  if (plVar13 != (long *)0x0) {
    plVar14 = plVar13 + 10;
    do {
      iVar7 = (int)*plVar14 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar6) {
        *(int *)plVar14 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
    }
  }
  if (plVar11 != (long *)0x0) {
    lVar12 = plVar11[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar7 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar11 + 0x20))(plVar11);
    }
  }
  if (plVar10 != (long *)0x0) {
    plVar14 = plVar10 + 10;
    do {
      iVar7 = (int)*plVar14 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar6) {
        *(int *)plVar14 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
  }
  return;
}


