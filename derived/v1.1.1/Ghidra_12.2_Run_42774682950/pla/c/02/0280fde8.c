/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0280fde8; name: FUN_0280fde8
 */


void FUN_0280fde8(long param_1,ulong param_2,ulong param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  long *local_c8;
  undefined4 local_bc;
  long *local_b8;
  long *local_b0;
  undefined4 local_a4;
  undefined1 local_a0 [16];
  long *local_88;
  undefined1 local_80 [16];
  long local_70;
  long *local_68;
  long *local_60;
  long *local_48;
  
  puVar7 = (undefined8 *)
           (*(long *)(*(long *)(*(long *)(param_1 + 0x468) + 0x40) + 0x20) +
           (param_2 & 0xffffffff) * 0x28);
  uVar3 = *puVar7;
  uVar9 = puVar7[1];
  uVar11 = puVar7[2];
  plVar10 = (long *)puVar7[3];
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x18))(plVar10);
    (**(code **)(*plVar10 + 0x18))(plVar10);
  }
  local_80._0_8_ = local_a0;
  local_a0._0_8_ = (long *)0x0;
  local_80._8_8_ = uVar3;
  local_70 = uVar9;
  local_68 = (long *)uVar11;
  local_60 = plVar10;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x18))(plVar10);
  }
  FUN_02813244(param_1,local_80,0);
  if (local_60 != (long *)0x0) {
    (**(code **)(*local_60 + 0x20))();
  }
  uVar3 = local_a0._0_8_;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x20))(plVar10);
    (**(code **)(*plVar10 + 0x20))(plVar10);
  }
  puVar7 = (undefined8 *)
           (*(long *)(*(long *)(*(long *)(param_1 + 0x468) + 0x40) + 0x20) +
           (param_3 & 0xffffffff) * 0x28);
  uVar11 = *puVar7;
  uVar4 = puVar7[1];
  uVar9 = puVar7[2];
  plVar10 = (long *)puVar7[3];
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x18))(plVar10);
    (**(code **)(*plVar10 + 0x18))(plVar10);
  }
  local_80._0_8_ = local_a0;
  local_a0._0_8_ = (long *)0x0;
  local_80._8_8_ = uVar11;
  local_70 = uVar4;
  local_68 = (long *)uVar9;
  local_60 = plVar10;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x18))(plVar10);
  }
  FUN_02813244(param_1,local_80,0);
  if (local_60 != (long *)0x0) {
    (**(code **)(*local_60 + 0x20))();
  }
  uVar11 = local_a0._0_8_;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x20))(plVar10);
    (**(code **)(*plVar10 + 0x20))(plVar10);
  }
  local_48 = (long *)uVar11;
  uVar9 = *(undefined8 *)(param_1 + 8);
  local_80 = (**(code **)(**(long **)(param_1 + 0x448) + 0x48))();
  local_a0 = (**(code **)(*(long *)uVar11 + 0x48))(uVar11);
  local_b8 = (long *)CONCAT44(local_b8._4_4_,6);
  local_a4 = 2;
  FUN_02810250(&local_88,uVar9,param_1 + 0x448,local_80,local_a0,&local_b8,&local_a4);
  local_b0 = local_88;
  local_88 = (long *)0x0;
  FUN_0115b43c(*(undefined8 *)(param_1 + 0x420),&local_b0,0x40);
  if (local_b0 != (long *)0x0) {
    lVar8 = local_b0[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar2 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*local_b0 + 0x20))();
    }
  }
  plVar10 = local_48;
  auVar12 = (**(code **)(*local_48 + 0x48))(local_48);
  *(undefined1 (*) [16])(param_1 + 0x450) = auVar12;
  uVar11 = *(undefined8 *)(param_1 + 8);
  auVar12 = (**(code **)(*plVar10 + 0x48))(plVar10);
  local_80 = auVar12;
  auVar12 = (**(code **)(*(long *)uVar3 + 0x48))(uVar3);
  local_a4 = 6;
  local_bc = 2;
  local_a0 = auVar12;
  FUN_02810250(&local_b8,uVar11,&local_48,local_80,local_a0,&local_a4,&local_bc);
  local_c8 = local_b8;
  local_b8 = (long *)0x0;
  FUN_0115b43c(*(undefined8 *)(param_1 + 0x420),&local_c8,0x40);
  if (local_c8 != (long *)0x0) {
    lVar8 = local_c8[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar2 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*local_c8 + 0x20))();
    }
  }
  local_80._0_8_ = local_48[0x15];
  plVar10 = *(long **)(param_1 + 0xe8);
  local_80._8_8_ = local_48[0x16];
  local_70 = local_48[0x17];
  local_68 = (long *)local_48[0x18];
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x18))();
  }
  (**(code **)(*plVar10 + 0x98))(plVar10,param_1 + 0x428,local_80);
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  lVar8 = *(long *)(param_1 + 0x448);
  local_80._0_8_ = *(undefined8 *)(lVar8 + 0xa8);
  plVar10 = *(long **)(param_1 + 0xe8);
  local_80._8_8_ = *(undefined8 *)(lVar8 + 0xb0);
  local_70 = *(undefined8 *)(lVar8 + 0xb8);
  local_68 = *(long **)(lVar8 + 0xc0);
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x18))();
  }
  (**(code **)(*plVar10 + 0x98))(plVar10,param_1 + 0x428,local_80);
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  if (local_b8 != (long *)0x0) {
    lVar8 = local_b8[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar2 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*local_b8 + 0x20))();
    }
  }
  if (local_88 != (long *)0x0) {
    lVar8 = local_88[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar2 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*local_88 + 0x20))();
    }
  }
  return;
}


