/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ecca20; name: FUN_02ecca20
 */


void FUN_02ecca20(long param_1,ulong param_2)

{
  long *plVar1;
  long *plVar2;
  uint *puVar3;
  long lVar4;
  undefined4 *puVar5;
  uint uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  
  puVar3 = (uint *)(param_1 + 0x2a3);
  if ((*puVar3 >> 0xc & 1) != 0) {
    return;
  }
  *puVar3 = *puVar3 | 0x1000;
  if ((param_2 & 0xfffffffd) != 0) {
    return;
  }
  lVar4 = *(long *)(param_1 + 0x218);
  if (lVar4 == 0) {
    lVar4 = *(long *)(param_1 + 0x220);
  }
  else {
    plVar7 = *(long **)(lVar4 + 0x28);
    uVar6 = *(uint *)(lVar4 + 0x30);
    plVar2 = plVar7 + uVar6;
    if ((uVar6 != 0) && (*plVar7 != param_1 + 0x10)) {
      lVar9 = (ulong)uVar6 * 8;
      plVar8 = plVar7;
      do {
        lVar9 = lVar9 + -8;
        if (lVar9 == 0) goto LAB_02eccac0;
        plVar7 = plVar8 + 1;
        plVar1 = plVar8 + 1;
        plVar8 = plVar7;
      } while (*plVar1 != param_1 + 0x10);
    }
    if (plVar2 != plVar7) {
      if (1 < uVar6) {
        *plVar7 = plVar2[-1];
        uVar6 = *(uint *)(lVar4 + 0x30);
      }
      *(uint *)(lVar4 + 0x30) = uVar6 - 1;
      if (uVar6 - 1 == 0) {
        *(undefined4 *)(lVar4 + 0x3c) = 6;
      }
    }
LAB_02eccac0:
    *(undefined8 *)(param_1 + 0x218) = 0;
    lVar4 = *(long *)(param_1 + 0x220);
  }
  if (lVar4 == 0) {
    lVar4 = *(long *)(param_1 + 0x108);
  }
  else {
    plVar7 = *(long **)(lVar4 + 0x28);
    uVar6 = *(uint *)(lVar4 + 0x30);
    plVar2 = plVar7 + uVar6;
    if ((uVar6 != 0) && (*plVar7 != param_1 + 0x10)) {
      lVar9 = (ulong)uVar6 * 8;
      plVar8 = plVar7;
      do {
        lVar9 = lVar9 + -8;
        if (lVar9 == 0) goto LAB_02eccb00;
        plVar7 = plVar8 + 1;
        plVar1 = plVar8 + 1;
        plVar8 = plVar7;
      } while (*plVar1 != param_1 + 0x10);
    }
    if (plVar2 != plVar7) {
      if (1 < uVar6) {
        *plVar7 = plVar2[-1];
        uVar6 = *(uint *)(lVar4 + 0x30);
      }
      *(uint *)(lVar4 + 0x30) = uVar6 - 1;
      if (uVar6 - 1 == 0) {
        *(undefined4 *)(lVar4 + 0x3c) = 6;
      }
    }
LAB_02eccb00:
    *(undefined8 *)(param_1 + 0x220) = 0;
    lVar4 = *(long *)(param_1 + 0x108);
  }
  if (lVar4 == 0) {
    uVar6 = *puVar3;
  }
  else {
    if ((*(byte *)(lVar4 + 0x28) >> 1 & 1) != 0) {
      lVar4 = *(long *)(param_1 + 0x180);
      do {
        if (*(long *)(lVar4 + 0x70) != 0) {
          puVar5 = (undefined4 *)(*(long *)(lVar4 + 0x70) + 0x38);
          goto LAB_02eccb34;
        }
        lVar4 = *(long *)(lVar4 + 0x80);
      } while (lVar4 != 0);
      puVar5 = (undefined4 *)0x0;
LAB_02eccb34:
      if (*(long *)(puVar5 + 2) != 0) {
        FUN_02e9ecd8();
      }
      *(undefined8 *)(puVar5 + 2) = 0;
      *puVar5 = 0;
      lVar4 = *(long *)(param_1 + 0x108);
    }
    FUN_02edc774(DAT_0440a158,lVar4,param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x108) = 0;
    *(undefined4 *)(param_1 + 0x110) = 0;
    uVar6 = *puVar3;
  }
  if (((uVar6 >> 0xe & 1) != 0) && (*(int *)(param_1 + 0x2f8) == 0)) {
    *(undefined4 *)(param_1 + 0x2f8) = 0xffffffff;
  }
  *puVar3 = uVar6 & 0xfffffeff | 0x400;
  return;
}


