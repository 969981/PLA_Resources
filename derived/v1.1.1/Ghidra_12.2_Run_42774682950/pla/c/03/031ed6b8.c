/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031ed6b8; name: FUN_031ed6b8
 */


void FUN_031ed6b8(long param_1,int param_2)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  int iVar6;
  int *piVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  undefined *local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  int local_90;
  int iStack_8c;
  long local_88;
  undefined *local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  piVar7 = (int *)(*(long *)(param_1 + 0xb0) + (long)param_2 * 0x60);
  lVar12 = *(long *)(param_1 + 0xa0);
  iVar2 = *piVar7;
  plVar5 = *(long **)(piVar7 + 0x14);
  if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
    plVar1 = plVar5 + 2;
    do {
      lVar9 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))();
    }
  }
  lVar9 = (long)*(int *)(param_1 + 0xb8) + -1;
  iVar6 = (int)lVar9;
  *(int *)(param_1 + 0xb8) = iVar6;
  if (iVar6 != param_2) {
    puVar8 = (undefined8 *)(*(long *)(param_1 + 0xb0) + lVar9 * 0x60);
    lVar9 = (long)param_2;
    puVar10 = (undefined8 *)(*(long *)(param_1 + 0xb0) + lVar9 * 0x60);
    uVar11 = puVar8[5];
    puVar10[3] = puVar8[3];
    puVar10[5] = uVar11;
    puVar10[1] = puVar8[1];
    *puVar10 = *puVar8;
    uVar11 = puVar8[2];
    puVar10[4] = puVar8[4];
    puVar10[2] = uVar11;
    puVar10[7] = puVar8[7];
    puVar10[6] = puVar8[6];
    puVar10[9] = puVar8[9];
    puVar10[8] = puVar8[8];
    puVar10[10] = puVar8[10];
    puVar8[10] = 0;
    local_90 = *(int *)(param_1 + 0xb8);
    if ((param_2 < local_90) && (*(char *)(*(long *)(param_1 + 0xb0) + lVar9 * 0x60 + 8) != '\0')) {
      lVar9 = *(long *)(param_1 + 0xb0) + lVar9 * 0x60;
      local_78 = 0xffffffff;
      local_70 = 0;
      local_68 = 0;
      local_80 = PTR_DAT_04388cf0 + 0x10;
      local_60 = *(undefined8 *)(lVar12 + (long)iVar2 * 0x60);
      uStack_48 = *(undefined8 *)(lVar9 + 0x18);
      local_50 = *(undefined8 *)(lVar9 + 0x10);
      local_88 = *(long *)(param_1 + 0x90) + (long)*(int *)(lVar9 + 4) * 0xd0;
      uStack_38 = *(undefined8 *)(lVar9 + 0x28);
      local_40 = *(undefined8 *)(lVar9 + 0x20);
      local_b8 = 0;
      local_c0 = &DAT_042f10b0;
      uStack_a8 = *(undefined8 *)(lVar9 + 0x18);
      local_b0 = *(undefined8 *)(lVar9 + 0x10);
      uStack_98 = *(undefined8 *)(lVar9 + 0x28);
      local_a0 = *(undefined8 *)(lVar9 + 0x20);
      iStack_8c = param_2;
      (**(code **)(**(long **)(local_88 + 0x10) + 0x48))
                (*(long **)(local_88 + 0x10),&local_80,&local_c0);
    }
  }
  return;
}


