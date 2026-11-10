/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02810b54; name: FUN_02810b54
 */


void FUN_02810b54(long param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  char cVar6;
  bool bVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  long *local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined8 uStack_58;
  long *local_50;
  long *local_38;
  
  puVar8 = (undefined8 *)
           (*(long *)(*(long *)(*(long *)(param_1 + 0x468) + 0x40) + 0x20) +
           (ulong)*(uint *)(param_1 + 0x418) * 0x28);
  uVar3 = *puVar8;
  uVar4 = puVar8[1];
  uVar10 = puVar8[2];
  plVar5 = (long *)puVar8[3];
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))(plVar5);
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  local_70._0_8_ = local_80;
  local_80._0_8_ = (long *)0x0;
  local_70._8_8_ = uVar3;
  local_60 = uVar4;
  uStack_58 = uVar10;
  local_50 = plVar5;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  FUN_02813244(param_1,local_70,0);
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  uVar3 = local_80._0_8_;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))(plVar5);
    (**(code **)(*plVar5 + 0x20))(plVar5);
  }
  uVar10 = *(undefined8 *)(param_1 + 8);
  local_70 = (**(code **)(**(long **)(param_1 + 0x448) + 0x48))();
  local_80 = (**(code **)(*(long *)uVar3 + 0x48))(uVar3);
  local_84 = 6;
  local_88 = 2;
  FUN_02810250(&local_38,uVar10,param_1 + 0x448,local_70,local_80,&local_84,&local_88);
  local_90 = local_38;
  local_38 = (long *)0x0;
  FUN_0115b43c(*(undefined8 *)(param_1 + 0x420),&local_90,0x40);
  if (local_90 != (long *)0x0) {
    lVar9 = local_90[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar2 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_90 + 0x20))();
    }
  }
  *(undefined1 *)(param_1 + 0xa4) = 0;
  *(undefined1 *)(param_1 + 0xa1) = 1;
  if (local_38 != (long *)0x0) {
    lVar9 = local_38[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar2 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_38 + 0x20))();
    }
  }
  return;
}


