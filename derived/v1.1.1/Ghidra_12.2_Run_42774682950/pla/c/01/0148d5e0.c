/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0148d5e0; name: FUN_0148d5e0
 */


void FUN_0148d5e0(long param_1,long param_2)

{
  long *plVar1;
  int *piVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88 [8];
  long *local_80;
  undefined8 uStack_78;
  undefined1 *local_70;
  undefined7 uStack_68;
  undefined1 local_61;
  undefined7 uStack_60;
  undefined4 local_58;
  undefined1 local_54;
  undefined6 local_50;
  undefined2 uStack_4a;
  undefined6 uStack_48;
  undefined1 auStack_38 [4];
  undefined4 local_34;
  
  local_88[0] = 0;
  local_58 = 0;
  local_80 = (long *)0x0;
  uStack_78 = 0;
  local_54 = 0;
  local_50 = 0;
  uStack_4a = 0;
  uStack_48 = 0;
  local_70 = &DAT_cbf29ce484222645;
  uStack_68 = 0;
  local_61 = 0;
  uStack_60 = 0;
  uVar11 = *(ulong *)(param_1 + 0x2a18);
  if (999 < uVar11) {
    FUN_0148d838(param_1 + 0x29d0);
    uVar11 = *(ulong *)(param_1 + 0x2a18);
  }
  lVar9 = *(long *)(param_1 + 0x29d8);
  lVar8 = *(long *)(param_1 + 0x29e0) - lVar9;
  uVar11 = *(long *)(param_1 + 0x2a10) + uVar11;
  uVar3 = 0;
  if (lVar8 != 0) {
    uVar3 = (lVar8 >> 3) * 0x38 - 1;
  }
  if (uVar3 == uVar11) {
    FUN_01494c08(param_1 + 0x29d0);
    uVar11 = *(long *)(param_1 + 0x2a10) + *(long *)(param_1 + 0x2a18);
    lVar9 = *(long *)(param_1 + 0x29d8);
    if (*(long *)(param_1 + 0x29e0) == lVar9) goto LAB_0148d7e8;
  }
  else if (*(long *)(param_1 + 0x29e0) == lVar9) {
LAB_0148d7e8:
    lVar8 = 0;
    goto LAB_0148d6b0;
  }
  lVar8 = *(long *)(lVar9 + (uVar11 / 0x38) * 8) + (uVar11 % 0x38) * 0x48;
LAB_0148d6b0:
  FUN_01495a54(param_1 + 0x2a20,lVar8,local_88);
  lVar8 = *(long *)(param_1 + 0x2a18);
  *(long *)(param_1 + 0x2a18) = lVar8 + 1;
  uVar11 = *(long *)(param_1 + 0x2a10) + lVar8;
  uStack_90 = *(undefined8 *)(param_1 + 8);
  lVar9 = *(long *)(*(long *)(param_1 + 0x29d8) + (uVar11 / 0x38) * 8);
  local_34 = 0;
  local_98 = 0;
  uVar11 = uVar11 % 0x38;
  lVar8 = FUN_014829d4(auStack_38,uStack_90,&uStack_90,&local_34,(long)&local_98 + 4,&local_98);
  if (lVar8 != 0) {
    piVar2 = (int *)(lVar8 + 0x50);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar12 = (long *)(lVar9 + uVar11 * 0x48 + 8);
  plVar7 = (long *)*plVar12;
  *plVar12 = 0;
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 10;
    do {
      iVar6 = (int)*plVar1 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  *plVar12 = lVar8;
  FUN_02c653d0(lVar8,*(undefined8 *)(param_2 + 0x10));
  puVar10 = (undefined1 *)(lVar9 + uVar11 * 0x48);
  puVar10[0x2c] = *(undefined1 *)(param_2 + 0x2c);
  puVar10[0x2d] = *(undefined1 *)(param_2 + 0x2d);
  *(undefined4 *)(puVar10 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(puVar10 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *puVar10 = 0;
  if (local_80 != (long *)0x0) {
    plVar7 = local_80 + 10;
    do {
      iVar6 = (int)*plVar7 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *(int *)plVar7 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*local_80 + 0x10))();
    }
  }
  return;
}


