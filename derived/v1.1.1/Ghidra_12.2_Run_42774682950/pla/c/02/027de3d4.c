/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027de3d4; name: FUN_027de3d4
 */


void FUN_027de3d4(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined1 auStack_28 [4];
  undefined4 local_24;
  
  if (param_2 != 0) {
    FUN_00d12180(*(undefined8 *)(param_1 + 0x50));
    local_24 = 0xd;
    plVar5 = (long *)FUN_00d48784(auStack_28,*(undefined8 *)(param_1 + 0x50),&local_24);
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 10;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uVar6 = FUN_01123cf0(param_2);
    FUN_01123a70(param_2,plVar5);
    uVar7 = FUN_02c30040(plVar5);
    uVar7 = FUN_027de370(uVar7,plVar5,uVar7 & 0xffffffff,uVar6 & 0xffffffff);
    if ((uVar7 & 1) == 0) {
      FUN_02c30040(plVar5);
      if (((uint)uVar6 & 0xff) < 0xb) {
        puVar8 = (&PTR_DAT_0426ca38)[uVar6 & 0xff];
      }
      else {
        puVar8 = &DAT_03a7588a;
      }
      FUN_02c302d0(plVar5,puVar8);
      FUN_01123a5c(param_2,plVar5);
    }
    FUN_00d12230();
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 10;
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
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  return;
}


