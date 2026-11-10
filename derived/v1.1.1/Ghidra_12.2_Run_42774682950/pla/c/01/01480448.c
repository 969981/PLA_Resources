/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01480448; name: FUN_01480448
 */


void FUN_01480448(long param_1,long *param_2)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined1 auStack_28 [4];
  undefined4 local_24;
  
  plVar6 = *(long **)(param_1 + 0x5b8);
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 10;
    *(undefined8 *)(param_1 + 0x5b8) = 0;
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
      (**(code **)(*plVar6 + 0x10))();
      lVar7 = *param_2;
      goto joined_r0x014804b4;
    }
  }
  lVar7 = *param_2;
joined_r0x014804b4:
  if (lVar7 != 0) {
    uStack_38 = *(undefined8 *)(param_1 + 8);
    local_24 = 0;
    local_40 = 0;
    lVar7 = FUN_014829d4(auStack_28,uStack_38,&uStack_38,&local_24,(long)&local_40 + 4,&local_40);
    if (lVar7 != 0) {
      piVar2 = (int *)(lVar7 + 0x50);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar6 = *(long **)(param_1 + 0x5b8);
    *(undefined8 *)(param_1 + 0x5b8) = 0;
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 10;
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
        (**(code **)(*plVar6 + 0x10))();
      }
    }
    *(long *)(param_1 + 0x5b8) = lVar7;
    FUN_02c653d0(lVar7,*param_2);
    FUN_0148054c(param_1);
  }
  return;
}


