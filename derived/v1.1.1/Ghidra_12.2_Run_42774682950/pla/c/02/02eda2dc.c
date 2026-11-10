/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eda2dc; name: FUN_02eda2dc
 */


void FUN_02eda2dc(long param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  ulong *puVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  
  puVar3 = *(ulong **)(param_1 + 0x78);
  plVar6 = (long *)*puVar3;
  uVar2 = (uint)puVar3[1];
  uVar4 = (ulong)uVar2;
  if ((uVar2 == 0) || (*plVar6 == param_2)) {
    plVar10 = plVar6;
  }
  else {
    lVar8 = uVar4 * 0x10;
    plVar7 = plVar6;
    do {
      lVar8 = lVar8 + -0x10;
      if (lVar8 == 0) {
        return;
      }
      plVar1 = plVar7 + 2;
      plVar10 = plVar7 + 2;
      plVar7 = plVar7 + 2;
    } while (*plVar1 != param_2);
  }
  if (plVar10 == plVar6 + (ulong)uVar2 * 2) {
    return;
  }
  puVar9 = (undefined8 *)plVar10[1];
  if (puVar9 == (undefined8 *)0x0) {
LAB_02eda3a8:
    plVar10 = plVar6 + uVar4 * 2;
    if (((int)uVar4 != 0) && (*plVar6 != param_2)) {
      lVar8 = uVar4 * 0x10;
      plVar7 = plVar6;
      do {
        lVar8 = lVar8 + -0x10;
        plVar6 = plVar10;
        if (lVar8 == 0) break;
        plVar6 = plVar7 + 2;
        plVar1 = plVar7 + 2;
        plVar7 = plVar6;
      } while (*plVar1 != param_2);
    }
    if (plVar10 != plVar6) {
      plVar10 = plVar10 + -2;
      if (plVar6 < plVar10) {
        plVar7 = plVar6 + 2;
        *plVar6 = *plVar7;
        plVar6[1] = plVar6[3];
        if (plVar7 < plVar10) {
          do {
            plVar6 = plVar7 + 2;
            *plVar7 = *plVar6;
            plVar7[1] = plVar7[3];
            plVar7 = plVar6;
          } while (plVar6 < plVar10);
        }
        uVar4 = (ulong)(uint)puVar3[1];
      }
      *(int *)(puVar3 + 1) = (int)uVar4 + -1;
      puVar3 = *(ulong **)(param_1 + 0x78);
    }
  }
  else if ((*(short *)(puVar9 + 0xe) == 0) && (*(short *)((long)puVar9 + 0x72) == 0)) {
    if (puVar9[9] == 0) {
LAB_02eda378:
      (**(code **)*puVar9)(puVar9);
      (*DAT_0442d150)(0,puVar9);
    }
    else {
      *(undefined4 *)(puVar9 + 10) = 0;
      (*DAT_0442d150)(0);
      puVar9[9] = 0;
      *(undefined4 *)((long)puVar9 + 0x54) = 0;
      puVar9 = (undefined8 *)plVar10[1];
      if (puVar9 != (undefined8 *)0x0) goto LAB_02eda378;
    }
    plVar10[1] = 0;
    puVar3 = *(ulong **)(param_1 + 0x78);
    plVar6 = (long *)*puVar3;
    uVar4 = (ulong)(uint)puVar3[1];
    goto LAB_02eda3a8;
  }
  if (puVar3 == (ulong *)0x0) {
    return;
  }
  if (0 < (short)puVar3[0x12]) {
    return;
  }
  if (0 < *(short *)((long)puVar3 + 0x94)) {
    return;
  }
  if ((short)puVar3[0x11] != 0) {
    return;
  }
  if (*(short *)((long)puVar3 + 0x8a) != 0) {
    return;
  }
  if (puVar3[2] != 0) {
    return;
  }
  if ((int)puVar3[1] != 0) {
    return;
  }
  if (((byte)puVar3[0x13] >> 1 & 1) != 0) {
    puVar9 = &DAT_0440ad60;
    plVar6 = &DAT_0440ad60;
    lVar8 = 0;
    do {
      lVar5 = lVar8;
      lVar8 = *plVar6;
      plVar6 = (long *)(lVar8 + 0x40);
    } while (lVar8 != 0 && lVar8 != param_1);
    if (lVar8 != 0) {
      if (DAT_0440ad60 != lVar8) {
        puVar9 = (undefined8 *)(lVar5 + 0x40);
      }
      *puVar9 = *(undefined8 *)(lVar8 + 0x40);
      if (DAT_0440ad58 == lVar8) {
        DAT_0440ad58 = lVar5;
      }
      DAT_0440ad50 = DAT_0440ad50 + -1;
      puVar3 = *(ulong **)(param_1 + 0x78);
    }
    if (puVar3 == (ulong *)0x0) goto LAB_02eda4c0;
  }
  if (*(long *)(param_1 + 0x80) != 0) {
    FUN_02ed5a4c();
  }
  if (*(long *)(param_1 + 0x88) != 0) {
    FUN_02ed5a4c();
  }
LAB_02eda4c0:
  FUN_02ed5b5c(&DAT_0440a928,*(undefined8 *)(param_1 + 0x78));
  *(undefined8 *)(param_1 + 0x78) = 0;
  return;
}


