/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008addf8; name: FUN_008addf8
 */


void FUN_008addf8(long param_1,int param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  long *local_40;
  long *local_38;
  
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x140);
  plVar7 = *(long **)(param_1 + 0xb68);
  local_38 = plVar7;
  if (plVar7 == (long *)0x0) {
    uVar6 = FUN_0092e5e8(uVar5,&local_38,param_2,param_3);
  }
  else {
    plVar1 = plVar7 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar6 = FUN_0092e5e8(uVar5,&local_38,param_2,param_3);
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
  }
  if ((uVar6 & 1) != 0) {
    plVar7 = *(long **)(param_1 + 0xb68);
    local_40 = plVar7;
    if (plVar7 == (long *)0x0) {
      FUN_008adf54(param_1,&local_40);
    }
    else {
      plVar1 = plVar7 + 10;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      FUN_008adf54(param_1,&local_40);
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
          if (param_2 != 0x413) {
            return;
          }
          goto LAB_008adef0;
        }
      }
    }
    if (param_2 == 0x413) {
LAB_008adef0:
      FUN_00923c78(*(undefined8 *)(param_1 + 0x68));
      FUN_0091a3c4();
      return;
    }
  }
  return;
}


