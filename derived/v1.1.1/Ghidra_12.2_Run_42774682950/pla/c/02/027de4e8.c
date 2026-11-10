/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027de4e8; name: FUN_027de4e8
 */


void FUN_027de4e8(long param_1,undefined8 param_2,int param_3,ulong param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  int local_3c;
  undefined1 auStack_38 [8];
  
  FUN_00d12180(*(undefined8 *)(param_1 + 0x50));
  local_3c = param_3 + 1;
  plVar5 = (long *)FUN_008af3e4(auStack_38,*(undefined8 *)(param_1 + 0x50),&local_3c);
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
  FUN_02c302d0(plVar5,param_2);
  uVar6 = FUN_02c30040(plVar5);
  uVar6 = FUN_027de370(uVar6,plVar5,uVar6 & 0xffffffff,param_4 & 0xffffffff);
  if ((uVar6 & 1) == 0) {
    FUN_02c30040(plVar5);
    if (((uint)param_4 & 0xff) < 0xb) {
      puVar8 = (&PTR_DAT_0426ca38)[param_4 & 0xff];
    }
    else {
      puVar8 = &DAT_03a7588a;
    }
    FUN_02c302d0(plVar5,puVar8);
    uVar7 = FUN_02c2f268(plVar5);
    iVar4 = FUN_02c30040(plVar5);
    FUN_02c30580(param_2,uVar7,iVar4 + 1);
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
  return;
}


