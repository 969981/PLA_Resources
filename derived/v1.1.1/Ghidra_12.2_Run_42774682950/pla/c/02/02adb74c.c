/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02adb74c; name: FUN_02adb74c
 */


void FUN_02adb74c(long *param_1,ulong param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  long lStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  long *local_40;
  undefined8 local_38;
  
  local_38 = 0;
  lStack_60 = param_1[7];
  local_68 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_58 = 0x1fffffffffffffff;
  uStack_50 = 0;
  param_2 = param_2 & 0xffffffff;
  local_48 = 0;
  local_40 = (long *)0x0;
  lVar8 = param_1[1];
  lVar6 = lVar8 - *param_1 >> 3;
  uVar7 = lVar6 * -0x71c71c71c71c71c7;
  if (uVar7 < param_2) {
    FUN_02adbf4c(param_1,param_2 + lVar6 * 0x71c71c71c71c71c7,&local_78);
  }
  else if (uVar7 != param_2) {
    lVar6 = *param_1 + param_2 * 0x48;
    while (lVar6 != lVar8) {
      plVar5 = *(long **)(lVar8 + -0x10);
      lVar8 = lVar8 + -0x48;
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
          (**(code **)(*plVar5 + 0x10))();
        }
      }
      FUN_014bd284(lVar8);
    }
    param_1[1] = lVar6;
  }
  if (local_40 != (long *)0x0) {
    plVar5 = local_40 + 10;
    do {
      iVar4 = (int)*plVar5 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *(int *)plVar5 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_40 + 0x10))();
    }
  }
  FUN_014bd284(&local_78);
  return;
}


