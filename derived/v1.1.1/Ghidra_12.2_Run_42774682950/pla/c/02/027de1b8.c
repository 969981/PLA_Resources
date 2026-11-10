/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027de1b8; name: FUN_027de1b8
 */


void FUN_027de1b8(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  long *plVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined4 local_4c;
  undefined1 auStack_48 [8];
  undefined1 auStack_38 [4];
  undefined4 local_34;
  
  if (param_2 != 0) {
    FUN_00d12180(*(undefined8 *)(param_1 + 0x50));
    local_34 = 0xd;
    plVar7 = (long *)FUN_00d48784(auStack_48,*(undefined8 *)(param_1 + 0x50),&local_34);
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 10;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uVar5 = FUN_02c5d598(param_2);
    FUN_02c62748(param_2,plVar7);
    uVar8 = FUN_02c30040(plVar7);
    uVar8 = FUN_027de370(uVar8,plVar7,uVar8 & 0xffffffff,uVar5);
    if ((uVar8 & 1) == 0) {
      FUN_02c5ba48(param_2);
    }
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 10;
      do {
        iVar4 = (int)*plVar1 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
    local_4c = 0xd;
    plVar7 = (long *)FUN_00d48784(auStack_38,*(undefined8 *)(param_1 + 0x50),&local_4c);
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 10;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uVar6 = FUN_02c5d598(param_2);
    FUN_02c628a8(param_2,plVar7);
    uVar8 = FUN_02c30040(plVar7);
    uVar8 = FUN_027de370(uVar8,plVar7,uVar8 & 0xffffffff,(ulong)uVar6);
    if ((uVar8 & 1) == 0) {
      FUN_02c30040(plVar7);
      if (uVar6 < 0xb) {
        puVar9 = (&PTR_DAT_0426ca38)[uVar6];
      }
      else {
        puVar9 = &DAT_03a7588a;
      }
      FUN_02c302d0(plVar7,puVar9);
      FUN_02c628b8(param_2,plVar7);
    }
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 10;
      do {
        iVar4 = (int)*plVar1 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
    FUN_00d12230();
  }
  return;
}


