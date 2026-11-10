/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0336fca0; name: FUN_0336fca0
 */


void FUN_0336fca0(long *param_1,long param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long *plVar13;
  
  *param_1 = (long)&PTR_LAB_04367df0;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  lVar8 = *(long *)(param_2 + 0x18);
  param_1[3] = lVar8;
  if (lVar8 != 0) {
    FUN_032d645c();
  }
  *param_1 = (long)(PTR_DAT_04389498 + 0x10);
  lVar8 = *(long *)(param_2 + 0x20);
  param_1[4] = lVar8;
  if (lVar8 != 0) {
    FUN_032d645c();
  }
  plVar13 = param_1 + 5;
  *plVar13 = 0;
  param_1[6] = 0;
  lVar8 = FUN_032cf5b0(0xd98);
  FUN_03370f60();
  lVar9 = *plVar13;
  if ((lVar9 != lVar8) && (*plVar13 = lVar8, lVar9 != 0)) {
    FUN_032d647c();
  }
  puVar10 = (undefined8 *)FUN_032cf5b0(0x28);
  *puVar10 = &PTR_LAB_0436de98;
  puVar10[1] = 0xffffffff;
  puVar10[2] = 1;
  puVar10[3] = 0;
  puVar10[4] = 0x8000000000000000;
  puVar11 = (undefined8 *)param_1[6];
  if ((puVar11 != puVar10) && (param_1[6] = (long)puVar10, puVar11 != (undefined8 *)0x0)) {
    FUN_032d647c(puVar11);
  }
  FUN_0336fe68(param_1[5],*(undefined8 *)(param_2 + 0x28));
  lVar9 = param_1[6];
  iVar6 = *(int *)(*(long *)(param_2 + 0x30) + 0x20);
  iVar7 = *(int *)(lVar9 + 0x20);
  puVar10 = *(undefined8 **)(*(long *)(param_2 + 0x30) + 0x18);
  iVar2 = iVar7 + iVar6;
  lVar8 = *(long *)(lVar9 + 0x18);
  if ((int)(*(uint *)(lVar9 + 0x24) & 0x3fffffff) < iVar2) {
    lVar8 = FUN_0336f850(PTR_PTR_0434a080,iVar2,lVar8,iVar7);
    *(long *)(lVar9 + 0x18) = lVar8;
  }
  if (iVar6 != 0) {
    puVar12 = (undefined8 *)(lVar8 + (long)iVar7 * 0x20);
    lVar8 = (long)iVar6 * 0x20 + -0x20;
    puVar11 = puVar10;
    if (((uint)lVar8 >> 5 & 1) == 0) {
      uVar3 = puVar10[2];
      uVar4 = puVar10[3];
      puVar12[1] = puVar10[1];
      puVar12[2] = uVar3;
      puVar12[3] = uVar4;
      *puVar12 = *puVar10;
      puVar11 = puVar10 + 4;
      puVar12 = puVar12 + 4;
    }
    if (lVar8 != 0) {
      do {
        uVar3 = puVar11[2];
        uVar4 = puVar11[3];
        puVar12[1] = puVar11[1];
        puVar12[2] = uVar3;
        puVar12[3] = uVar4;
        *puVar12 = *puVar11;
        uVar3 = puVar11[4];
        uVar4 = puVar11[5];
        puVar1 = puVar11 + 6;
        uVar5 = puVar11[7];
        puVar11 = puVar11 + 8;
        puVar12[6] = *puVar1;
        puVar12[7] = uVar5;
        puVar12[4] = uVar3;
        puVar12[5] = uVar4;
        puVar12 = puVar12 + 8;
      } while (puVar11 != puVar10 + (long)iVar6 * 4);
    }
  }
  *(int *)(lVar9 + 0x20) = iVar2;
  return;
}


