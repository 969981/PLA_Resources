/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0281e1ec; name: FUN_0281e1ec
 */


void FUN_0281e1ec(long param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long *plVar6;
  int iVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  long *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long *local_48;
  long local_38;
  
  lVar11 = *(long *)(param_1 + 0x8b0);
  piVar1 = (int *)(lVar11 + 0x20);
  if (*(int *)(lVar11 + 0x28) != 0) {
    piVar1 = (int *)(lVar11 + 0x24);
  }
  puVar10 = (undefined8 *)**(long **)(param_1 + 0x838);
  puVar4 = (undefined8 *)(*(long **)(param_1 + 0x838))[1];
  if (puVar10 != puVar4) {
    iVar7 = *(int *)(lVar11 + 0x14) + *piVar1 * *(int *)(lVar11 + 0x10);
    if (*(char *)(puVar10 + 4) != '\0' || *(int *)((long)puVar10 + 0x24) != iVar7) {
      puVar8 = puVar10 + 6;
      do {
        puVar10 = puVar8;
        if (puVar4 == puVar10) {
          puVar10 = puVar4;
          goto LAB_0281e27c;
        }
        puVar8 = puVar10 + 6;
      } while ((*(char *)(puVar10 + 4) != '\0') || (*(int *)((long)puVar10 + 0x24) != iVar7));
    }
  }
LAB_0281e27c:
  if (puVar10 != (undefined8 *)0x0 && puVar4 != puVar10) {
    uVar2 = *puVar10;
    uVar5 = puVar10[1];
    uVar3 = puVar10[2];
    plVar6 = (long *)puVar10[3];
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x18))(plVar6);
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
    local_68 = &local_38;
    local_38 = 0;
    uStack_60 = uVar2;
    local_58 = uVar5;
    uStack_50 = uVar3;
    local_48 = plVar6;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
    FUN_02813244(param_1,&local_68,0);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
    lVar11 = local_38;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x20))(plVar6);
      (**(code **)(*plVar6 + 0x20))(plVar6);
    }
    if (lVar11 != 0) {
      lVar9 = *(long *)(lVar11 + 0x88);
      if (lVar9 != 0) {
        lVar11 = lVar9;
        for (lVar9 = *(long *)(lVar9 + 0x88); lVar9 != 0; lVar9 = *(long *)(lVar9 + 0x88)) {
          lVar11 = lVar9;
        }
      }
      FUN_028080bc(lVar11,0);
    }
  }
  return;
}


