/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014a53f8; name: FUN_014a53f8
 */


void FUN_014a53f8(undefined1 param_1 [16],float param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  int *piVar7;
  float fVar8;
  long *local_a0;
  undefined4 local_98;
  undefined2 local_94;
  undefined2 local_92;
  undefined4 local_90;
  undefined8 local_8c;
  long *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined4 local_58;
  undefined1 local_54;
  long *local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined8 uStack_38;
  long *local_30;
  undefined4 local_28;
  
  lVar6 = FUN_014a4824();
  if (lVar6 != 0) {
    local_58 = 0;
    local_8c = 0x70098967f;
    local_54 = 1;
    local_60 = &DAT_cbf29ce484222645;
    local_30 = (long *)0x0;
    local_70 = &DAT_cbf29ce484222645;
    local_68 = &DAT_cbf29ce484222645;
    local_28 = 0;
    local_98 = 1;
    local_94 = 1;
    local_80 = (long *)0x0;
    local_78 = &DAT_cbf29ce484222645;
    local_50 = (long *)0x0;
    puStack_48 = &DAT_cbf29ce484222645;
    local_40 = &DAT_03996322;
    uStack_38 = 0;
    local_92 = *(undefined2 *)(param_3 + 0x1c0);
    local_90 = *(undefined4 *)(param_3 + 0x1c8);
    FUN_00d58a08(&local_a0,*(undefined8 *)(param_3 + 0x1a8),0);
    plVar2 = local_80;
    local_80 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      plVar1 = plVar2 + 10;
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
        (**(code **)(*plVar2 + 0x10))();
      }
    }
    local_80 = local_a0;
    local_58 = 0;
    local_54 = 0;
    local_78 = (undefined1 *)0xb7af9fdd88dc82cf;
    local_70 = (undefined1 *)0xb7afa0dd88dc8482;
    local_68 = (undefined1 *)0xea8fd90c6922f1b0;
    local_60 = (undefined1 *)0xb7afa1dd88dc8635;
    fVar8 = (float)FUN_00d5f79c(*(undefined8 *)(param_3 + 0x1a8),0);
    local_28 = CONCAT22((short)(int)param_2,(short)(int)fVar8);
    piVar7 = (int *)FUN_014a32f0(lVar6);
    if (*piVar7 == 1) {
      local_68 = (undefined1 *)0xea8fdf0c6922fbe2;
      local_60 = (undefined1 *)0xb7af9add88dc7a50;
    }
    FUN_00d66128(*(undefined8 *)(param_3 + 0x1b0),&local_98);
    FUN_00d4bd5c(*(undefined8 *)(param_3 + 0x1a8),0,0);
    *(undefined1 *)(lVar6 + 0x70) = 0;
    *(undefined8 *)(param_3 + 0x1b8) = 2;
    if (local_30 != (long *)0x0) {
      (**(code **)(*local_30 + 0x20))();
    }
    if (local_50 != (long *)0x0) {
      plVar2 = local_50 + 10;
      do {
        iVar5 = (int)*plVar2 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*local_50 + 0x10))();
      }
    }
    if (local_80 != (long *)0x0) {
      plVar2 = local_80 + 10;
      do {
        iVar5 = (int)*plVar2 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*local_80 + 0x10))();
      }
    }
  }
  return;
}


