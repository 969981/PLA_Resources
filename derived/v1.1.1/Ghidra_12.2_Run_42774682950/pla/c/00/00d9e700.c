/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d9e700; name: FUN_00d9e700
 */


void FUN_00d9e700(long param_1,undefined8 param_2,char *param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long local_48 [2];
  long local_38;
  undefined1 auStack_28 [8];
  
  *(undefined8 *)(param_1 + 0x688) = param_2;
  nn::hid::InitializeNpad();
  FUN_00d9e894(&local_38,*(undefined8 *)(param_1 + 0x688));
  plVar5 = *(long **)(param_1 + 0x180);
  *(undefined8 *)(param_1 + 0x180) = 0;
  if (plVar5 != (long *)0x0) {
    lVar6 = plVar5[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar6 + 0x18) = 0;
      (**(code **)(*plVar5 + 0x20))();
    }
  }
  lVar6 = param_1 + 0x70;
  *(long *)(param_1 + 0x180) = local_38;
  FUN_00d9a290(lVar6,*(undefined8 *)(param_1 + 0x688));
  *(undefined1 **)(param_1 + 0x100) = &LAB_00d9e8d0;
  *(undefined1 **)(param_1 + 0x108) = &LAB_00d9e8e0;
  FUN_00d9e914(lVar6,0,*(undefined8 *)(param_1 + 0x688));
  FUN_00d9e914(lVar6,1,*(undefined8 *)(param_1 + 0x688));
  FUN_00d9e97c(lVar6,2,*(undefined8 *)(param_1 + 0x688));
  FUN_00d9e9e4(local_48,*(undefined8 *)(param_1 + 0x180));
  FUN_00d9a984(lVar6,local_48);
  if (local_48[0] != 0) {
    FUN_02a43934();
  }
  FUN_00d9ea34(param_1 + 400,*(undefined8 *)(param_1 + 0x688));
  FUN_00da3a98(param_1 + 0x3c0,*(undefined8 *)(param_1 + 0x688));
  FUN_00d9ea98(param_1);
  if (*param_3 != '\0') {
    local_38 = lVar6;
    lVar6 = FUN_00d9fbb8(auStack_28,*(undefined8 *)(param_1 + 0x688),&local_38,&DAT_03a78614);
    if (lVar6 != 0) {
      FUN_02a439f4(*(undefined8 *)(lVar6 + 0x58));
    }
    plVar5 = *(long **)(param_1 + 0x178);
    *(undefined8 *)(param_1 + 0x178) = 0;
    if (plVar5 != (long *)0x0) {
      lVar7 = plVar5[0xb];
      piVar1 = (int *)(lVar7 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar7 + 0x18) = 0;
        (**(code **)(*plVar5 + 0x20))();
      }
    }
    *(long *)(param_1 + 0x178) = lVar6;
  }
  return;
}


