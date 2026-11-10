/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029ce294; name: FUN_029ce294
 */


int FUN_029ce294(long param_1,int *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  long *plVar8;
  code *local_740 [4];
  undefined1 auStack_720 [1760];
  
  plVar8 = *(long **)(param_1 + 0x1e8);
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_009463f0(local_740,plVar8 + 0xc);
  pcVar6 = local_740[0];
  FUN_00945e04(local_740);
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 10;
    do {
      iVar7 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar7;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
  }
  if (pcVar6 == (code *)0x0) {
    uVar5 = 0;
    if (param_2[3] != 0) {
      uVar5 = (param_2[2] * *param_2 * ((uint)(param_2[1] << 1) / 5 + 2)) / (uint)param_2[3];
    }
    iVar7 = uVar5 / 0x32 + 2;
  }
  else {
    plVar8 = *(long **)(param_1 + 0x1e8);
    if (plVar8 != (long *)0x0) {
      plVar1 = plVar8 + 10;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_009463f0(local_740,plVar8 + 0xc);
    iVar7 = (*local_740[0])(auStack_720,param_2);
    FUN_00945e04(local_740);
    if (plVar8 != (long *)0x0) {
      plVar1 = plVar8 + 10;
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
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  return iVar7;
}


