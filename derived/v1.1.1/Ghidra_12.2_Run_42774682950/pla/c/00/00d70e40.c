/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d70e40; name: FUN_00d70e40
 */


void FUN_00d70e40(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined1 *puVar6;
  long lVar7;
  long *plVar8;
  undefined1 *local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  long *local_28;
  
  puVar6 = (undefined1 *)FUN_00d6eb20(*(undefined8 *)(param_1 + 0x5b8));
  if (puVar6 != &DAT_cbf29ce484222645) {
    local_50 = (undefined1 *)0x6da297f6d23bc5f8;
    pcStack_48 = "common/tips.dat";
    local_40 = 0xf;
    local_38 = (long *)0x0;
    FUN_00d37bb4(&local_28,param_1 + 0x5c0,&local_50,10);
    plVar8 = (long *)local_28[0xd];
    if (plVar8 != (long *)0x0) {
      plVar1 = plVar8 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (local_28 != (long *)0x0) {
      lVar7 = local_28[0xb];
      piVar2 = (int *)(lVar7 + 0xc);
      do {
        iVar3 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 + -1 == 0) {
        *(undefined8 *)(lVar7 + 0x18) = 0;
        (**(code **)(*local_28 + 0x20))();
      }
    }
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    local_50 = puVar6;
    FUN_02c2e7d0(plVar8,&local_50,*param_3);
    if (plVar8 != (long *)0x0) {
      plVar1 = plVar8 + 10;
      do {
        iVar3 = (int)*plVar1 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *(int *)plVar1 = iVar3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  return;
}


