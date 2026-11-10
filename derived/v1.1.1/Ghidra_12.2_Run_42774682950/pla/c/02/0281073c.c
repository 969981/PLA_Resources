/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0281073c; name: FUN_0281073c
 */


void FUN_0281073c(long param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  int iVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined4 extraout_s0;
  float fVar13;
  undefined4 extraout_s0_00;
  undefined4 extraout_var;
  float extraout_var_00;
  undefined4 extraout_var_01;
  undefined8 extraout_var_02;
  undefined8 extraout_var_03;
  int iVar14;
  long *local_90;
  undefined4 local_88;
  undefined4 local_84;
  long *local_80;
  undefined8 uStack_78;
  long **local_70;
  long lStack_68;
  long local_60;
  long *local_58;
  long *local_50;
  long *local_38;
  
  lVar8 = *(long *)(param_1 + 0x468);
  iVar14 = *(int *)(param_1 + 0x418);
  if (*(int *)(lVar8 + 0x1c) == 0) {
    iVar10 = *(int *)(lVar8 + 0xc);
    iVar4 = 0;
    if (iVar10 != 0) {
      iVar4 = iVar14 / iVar10;
    }
    iVar10 = iVar14 - iVar4 * iVar10;
  }
  else {
    iVar4 = *(int *)(lVar8 + 0x10);
    iVar10 = 0;
    if (iVar4 != 0) {
      iVar10 = iVar14 / iVar4;
    }
    iVar4 = iVar14 - iVar10 * iVar4;
  }
  local_70 = (long **)CONCAT44(iVar4,iVar10);
  (**(code **)(param_1 + 0x280))(param_1 + 0x2a0,&local_70);
  lVar8 = *(long *)(param_1 + 0x448);
  local_70 = *(long ***)(lVar8 + 0xa8);
  plVar11 = *(long **)(param_1 + 0xe8);
  lStack_68 = *(undefined8 *)(lVar8 + 0xb0);
  local_60 = *(undefined8 *)(lVar8 + 0xb8);
  local_58 = *(long **)(lVar8 + 0xc0);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x18))();
  }
  (**(code **)(*plVar11 + 0x50))(plVar11,&local_70,1);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  puVar9 = (undefined8 *)
           (*(long *)(*(long *)(*(long *)(param_1 + 0x468) + 0x40) + 0x20) +
           (ulong)*(uint *)(param_1 + 0x418) * 0x28);
  uVar12 = *puVar9;
  uVar3 = puVar9[1];
  uVar2 = puVar9[2];
  plVar11 = (long *)puVar9[3];
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x18))(plVar11);
    (**(code **)(*plVar11 + 0x18))(plVar11);
  }
  local_70 = &local_80;
  local_80 = (long *)0x0;
  lStack_68 = uVar12;
  local_60 = uVar3;
  local_58 = (long *)uVar2;
  local_50 = plVar11;
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x18))(plVar11);
  }
  FUN_02813244(param_1,&local_70,0);
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  plVar7 = local_80;
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x20))(plVar11);
    (**(code **)(*plVar11 + 0x20))(plVar11);
  }
  local_70 = (long **)plVar7[0x15];
  plVar11 = *(long **)(param_1 + 0xe8);
  lStack_68 = plVar7[0x16];
  local_60 = plVar7[0x17];
  local_58 = (long *)plVar7[0x18];
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x18))();
  }
  (**(code **)(*plVar11 + 0x50))(plVar11,&local_70,0);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  lVar8 = *(long *)(param_1 + 0x448);
  plVar11 = *(long **)(param_1 + 0xe8);
  local_70 = *(long ***)(lVar8 + 0xa8);
  lStack_68 = *(undefined8 *)(lVar8 + 0xb0);
  local_60 = *(undefined8 *)(lVar8 + 0xb8);
  local_58 = *(long **)(lVar8 + 0xc0);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x18))();
  }
  (**(code **)(*plVar7 + 0x48))(plVar7);
  local_80 = (long *)CONCAT44(extraout_var,extraout_s0);
  uStack_78 = extraout_var_02;
  (**(code **)(*plVar11 + 0x28))(plVar11,&local_70,&local_80);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  fVar13 = (float)(**(code **)(*plVar7 + 0x48))(plVar7);
  iVar14 = *(int *)(param_1 + 0x460);
  (**(code **)(*plVar7 + 0x48))(plVar7);
  local_70 = (long **)CONCAT44(extraout_var_00 + (float)*(int *)(param_1 + 0x464),
                               fVar13 + (float)iVar14);
  lStack_68 = 0;
  uVar12 = *(undefined8 *)(param_1 + 8);
  (**(code **)(*plVar7 + 0x48))(plVar7);
  local_84 = 4;
  local_88 = 2;
  local_80 = (long *)CONCAT44(extraout_var_01,extraout_s0_00);
  uStack_78 = extraout_var_03;
  FUN_02810adc(&local_38,uVar12,param_1 + 0x448,&local_80,&local_70,&local_84,&local_88);
  local_90 = local_38;
  local_38 = (long *)0x0;
  FUN_0115b43c(*(undefined8 *)(param_1 + 0x420),&local_90,0x40);
  if (local_90 != (long *)0x0) {
    lVar8 = local_90[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar14 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar14 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar14 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*local_90 + 0x20))();
    }
  }
  if (local_38 != (long *)0x0) {
    lVar8 = local_38[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar14 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar14 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar14 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*local_38 + 0x20))();
    }
  }
  return;
}


