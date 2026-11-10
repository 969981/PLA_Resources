/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f4c804; name: FUN_02f4c804
 */


void FUN_02f4c804(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  
  plVar6 = *(long **)(param_1 + 0x10);
  plVar9 = plVar6;
  if (*(int *)(param_1 + 0x18) != 0) {
    do {
      if (((long *)plVar9[2] != (long *)0x0) && ((*(uint *)(*plVar9 + 0x30) | 2) != 3)) {
        (**(code **)(*(long *)plVar9[2] + 0x10))();
      }
      plVar9[2] = 0;
      plVar6 = *(long **)(param_1 + 0x10);
      plVar9 = plVar9 + 3;
    } while (plVar9 != plVar6 + (ulong)*(uint *)(param_1 + 0x18) * 3);
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (plVar6 != (long *)0x0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    (*DAT_0442d150)(0);
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  lVar7 = *(long *)(param_1 + 0x30);
  lVar4 = lVar7;
  if (*(int *)(param_1 + 0x38) != 0) {
    do {
      (**(code **)(**(long **)(lVar4 + 8) + 0x10))();
      lVar7 = *(long *)(param_1 + 0x30);
      lVar4 = lVar4 + 0x18;
    } while (lVar4 != lVar7 + (ulong)*(uint *)(param_1 + 0x38) * 0x18);
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (lVar7 == 0) {
    puVar8 = *(undefined8 **)(param_1 + 0x40);
  }
  else {
    *(undefined4 *)(param_1 + 0x38) = 0;
    (*DAT_0442d150)(0);
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    puVar8 = *(undefined8 **)(param_1 + 0x40);
  }
  if (puVar8 == (undefined8 *)0x0) {
    lVar4 = 0;
    iVar1 = *(int *)(param_1 + 0x38);
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x48);
    if (uVar2 != 0) {
      piVar5 = (int *)*puVar8;
      if ((piVar5 != (int *)0x0) && (iVar1 = *piVar5, *piVar5 = iVar1 + -1, iVar1 + -1 == 0)) {
        (*DAT_0442d150)(*(undefined4 *)((long)puVar8 + 0xc),*puVar8);
      }
      *puVar8 = 0;
      *(undefined4 *)(puVar8 + 1) = 0;
      if (uVar2 != 1) {
        piVar5 = (int *)puVar8[2];
        if ((piVar5 != (int *)0x0) && (iVar1 = *piVar5, *piVar5 = iVar1 + -1, iVar1 + -1 == 0)) {
          (*DAT_0442d150)(*(undefined4 *)((long)puVar8 + 0x1c),puVar8[2]);
        }
        puVar8[2] = 0;
        *(undefined4 *)(puVar8 + 3) = 0;
        if (uVar2 != 2) {
          piVar5 = (int *)puVar8[4];
          if ((piVar5 != (int *)0x0) && (iVar1 = *piVar5, *piVar5 = iVar1 + -1, iVar1 + -1 == 0)) {
            (*DAT_0442d150)(*(undefined4 *)((long)puVar8 + 0x2c),puVar8[4]);
          }
          puVar8[4] = 0;
          *(undefined4 *)(puVar8 + 5) = 0;
          if (uVar2 != 3) {
            puVar3 = puVar8 + 6;
            piVar5 = (int *)*puVar3;
            while( true ) {
              if ((piVar5 != (int *)0x0) && (iVar1 = *piVar5, *piVar5 = iVar1 + -1, iVar1 + -1 == 0)
                 ) {
                (*DAT_0442d150)(*(undefined4 *)((long)puVar3 + 0xc),*puVar3);
              }
              *puVar3 = 0;
              *(undefined4 *)(puVar3 + 1) = 0;
              puVar3 = puVar3 + 2;
              if (puVar3 == puVar8 + (ulong)uVar2 * 2) break;
              piVar5 = (int *)*puVar3;
            }
          }
        }
      }
      puVar8 = *(undefined8 **)(param_1 + 0x40);
    }
    *(undefined4 *)(param_1 + 0x48) = 0;
    (*DAT_0442d150)(0,puVar8);
    lVar4 = *(long *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    iVar1 = *(int *)(param_1 + 0x38);
  }
  if (iVar1 != 0) {
    lVar7 = lVar4;
    do {
      (**(code **)(**(long **)(lVar7 + 8) + 0x10))();
      lVar4 = *(long *)(param_1 + 0x30);
      lVar7 = lVar7 + 0x18;
    } while (lVar7 != lVar4 + (ulong)*(uint *)(param_1 + 0x38) * 0x18);
  }
  if (lVar4 != 0) {
    *(undefined4 *)(param_1 + 0x38) = 0;
    (*DAT_0442d150)(0);
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  return;
}


