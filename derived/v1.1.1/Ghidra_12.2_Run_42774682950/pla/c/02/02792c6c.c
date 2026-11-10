/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02792c6c; name: FUN_02792c6c
 */


void FUN_02792c6c(long param_1)

{
  int *piVar1;
  long *plVar2;
  byte bVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  undefined1 auStack_28 [8];
  
  lVar7 = FUN_00a24804(&local_50,*(undefined8 *)(param_1 + 8));
  if (lVar7 != 0) {
    lVar10 = *(long *)(lVar7 + 0x58);
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar8;
    }
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar9 = *(long **)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
  if (plVar9 != (long *)0x0) {
    lVar10 = plVar9[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar4 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar4 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar9 + 0x20))();
    }
  }
  *(long *)(param_1 + 0x50) = lVar7;
  local_50 = 0x41317852388ff9ca;
  pcStack_48 = "common/advsp.dat";
  local_40 = 0x10;
  local_38 = (long *)0x0;
  FUN_010bc6c8(lVar7,&local_50,10,0,1);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  bVar3 = *(byte *)(*(long *)(param_1 + 0x50) + 0xd8);
  while ((bVar3 & 1) == 0) {
    nn::os::SleepThread(10000000);
    bVar3 = *(byte *)(*(long *)(param_1 + 0x50) + 0xd8);
  }
  lVar7 = *(long *)(param_1 + 0x50);
  if (*(long *)(lVar7 + 0x68) == 0) {
    local_50 = *(undefined8 *)(*(long *)(lVar7 + 0x80) + 0x250);
    lVar10 = FUN_00d12804(auStack_28,*(undefined8 *)(lVar7 + 8),&local_50);
    if (lVar10 != 0) {
      piVar1 = (int *)(lVar10 + 0x50);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = *piVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    plVar9 = *(long **)(lVar7 + 0x68);
    *(undefined8 *)(lVar7 + 0x68) = 0;
    if (plVar9 != (long *)0x0) {
      plVar2 = plVar9 + 10;
      do {
        iVar4 = (int)*plVar2 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar6) {
          *(int *)plVar2 = iVar4;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*plVar9 + 0x10))();
      }
    }
    *(long *)(lVar7 + 0x68) = lVar10;
    FUN_02c2e92c(lVar10 + 0xa8,lVar7 + 0xa8);
  }
  return;
}


