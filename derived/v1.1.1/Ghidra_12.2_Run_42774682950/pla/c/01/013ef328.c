/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013ef328; name: FUN_013ef328
 */


void FUN_013ef328(long param_1)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *plVar11;
  long *local_68;
  undefined1 *local_60;
  char *pcStack_58;
  undefined8 local_50;
  long *local_48;
  long *local_38;
  
  uVar10 = *(undefined8 *)(DAT_043c2b60 + 8);
  lVar6 = FUN_013ef59c();
  lVar7 = FUN_013ef754(*(undefined8 *)(param_1 + 0x4c8),"View_Top");
  local_60 = &DAT_e2c06acab97c29c2;
  pcStack_58 = "CommonOptionBar";
  local_50 = 0xf;
  local_48 = (long *)0x0;
  lVar8 = FUN_0118c80c(*(undefined8 *)(param_1 + 0x4c8),&local_60);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if ((*(long *)(lVar7 + 0x440) != 0) && (*(long *)(lVar8 + 0x440) != 0)) {
    FUN_02831644();
  }
  local_38 = *(long **)(param_1 + 0x6a8);
  if (local_38 != (long *)0x0) {
    plVar11 = local_38 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar4) {
        *(int *)plVar11 = (int)*plVar11 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_013f4ed4(lVar7,&local_38);
  if (local_38 != (long *)0x0) {
    plVar11 = local_38 + 10;
    do {
      iVar5 = (int)*plVar11 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar4) {
        *(int *)plVar11 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*local_38 + 0x10))();
    }
  }
  FUN_013f4f74(lVar7,lVar6);
  FUN_02a4754c(&local_60,PTR_DAT_0437eae8);
  uVar9 = FUN_00d6adf4(lVar7 + 0x180,&local_60);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  local_60 = &DAT_304928236d5bcabe;
  pcStack_58 = "common/pokedex.dat";
  local_50 = 0x12;
  local_48 = (long *)0x0;
  FUN_00d37bb4(&local_68,*(undefined8 *)(*(long *)(param_1 + 0x4c8) + 0xb0),&local_60,10);
  plVar11 = (long *)local_68[0xd];
  if (plVar11 != (long *)0x0) {
    plVar1 = plVar11 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (local_68 != (long *)0x0) {
    lVar7 = local_68[0xb];
    piVar2 = (int *)(lVar7 + 0xc);
    do {
      iVar5 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*local_68 + 0x20))();
    }
  }
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  FUN_013ee3fc(*(undefined8 *)(param_1 + 0x688),uVar10,uVar9,plVar11);
  if (plVar11 != (long *)0x0) {
    plVar1 = plVar11 + 10;
    do {
      iVar5 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
    }
  }
  *(undefined8 *)(lVar6 + 0x68) = *(undefined8 *)(param_1 + 0x688);
  *(undefined4 *)(lVar6 + 0x70) = *(undefined4 *)(param_1 + 0x6b0);
  *(undefined4 *)(lVar6 + 0x74) = *(undefined4 *)(param_1 + 0x6b4);
  *(undefined8 *)(lVar6 + 0x78) = *(undefined8 *)(param_1 + 0x6b8);
  *(undefined8 *)(lVar6 + 0x80) = *(undefined8 *)(param_1 + 0x6c0);
  return;
}


