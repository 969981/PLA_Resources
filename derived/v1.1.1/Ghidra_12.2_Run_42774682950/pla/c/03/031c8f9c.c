/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031c8f9c; name: FUN_031c8f9c
 */


undefined8 FUN_031c8f9c(long param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  uint *puVar10;
  long *plVar11;
  undefined8 uVar12;
  int *piVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 uVar16;
  
  plVar11 = *(long **)(param_1 + 0x4e0);
  if (plVar11 == (long *)0x0) {
    return 0;
  }
  lVar9 = *plVar11;
  uVar2 = *(uint *)((long)plVar11 + 0x1c);
  iVar6 = *(int *)(lVar9 + 8);
  if (iVar6 + uVar2 == 0) {
    return 0;
  }
  if (uVar2 == 0) {
    piVar13 = (int *)(lVar9 + 0x18);
    iVar3 = *piVar13;
    if (1 < iVar3) {
      puVar5 = (undefined8 *)plVar11[1];
      iVar6 = *(int *)(puVar5 + 0xb);
      lVar15 = *(long *)(*(long *)(lVar9 + 0x10) + (long)(iVar3 + -2) * 8);
      lVar8 = puVar5[1];
      *(undefined8 *)(lVar8 + (long)iVar6 * 8) =
           *(undefined8 *)(*(long *)(lVar9 + 0x10) + (long)(iVar3 + -1) * 8);
      *(int *)(puVar5 + 0xb) = iVar6 + 1;
      if (*(int *)((long)puVar5 + 0x5c) <= iVar6 + 1) {
        (**(code **)(*(long *)*puVar5 + 0x28))((long *)*puVar5,lVar8 + (long)(iVar6 + -5) * 8,6);
        *(int *)(puVar5 + 0xb) = iVar6 + -5;
      }
      *(undefined8 *)(lVar15 + 8) = 0;
      iVar6 = *piVar13 + -1;
      goto LAB_031c9040;
    }
  }
  puVar10 = (uint *)plVar11[2];
  lVar8 = plVar11[3];
  puVar10[2] = 0;
  puVar10[3] = 0;
  iVar6 = iVar6 + uVar2;
  *puVar10 = *puVar10 & 0xffff0000 | uVar2 & 0xffff;
  *puVar10 = *puVar10 & 0xffff | (int)lVar8 << 0x10;
  piVar13 = (int *)(lVar9 + 8);
LAB_031c9040:
  *piVar13 = iVar6;
  *plVar11 = 0;
  plVar11[2] = 0;
  uVar12 = *(undefined8 *)(param_1 + 0x4d8);
  lVar9 = tpidr_el0;
  lVar8 = *(long *)(lVar9 + 0x38d490);
  if (lVar8 == 0) {
    lVar8 = FUN_0333d16c(0,1);
    *(long *)(lVar9 + 0x38d490) = lVar8;
  }
  plVar11 = *(long **)(*(long *)(lVar8 + 8) + 0x58);
  puVar5 = (undefined8 *)(**(code **)(*plVar11 + 0x10))(plVar11,0x100,0);
  puVar14 = *(undefined8 **)(param_1 + 0x4d0);
  puVar5[2] = puVar5 + 6;
  puVar5[3] = 0x8000001800000000;
  plVar11 = (long *)*puVar14;
  *puVar5 = plVar11;
  *(undefined4 *)(puVar5 + 1) = 0;
  *(undefined1 *)((long)puVar5 + 0xc) = 0;
  iVar6 = *(int *)(puVar14 + 0xb) + -1;
  if (*(int *)(puVar14 + 0xb) < 1) {
    lVar9 = puVar14[1];
    (**(code **)(*plVar11 + 0x20))(plVar11,lVar9,6);
    *(undefined4 *)(puVar14 + 0xb) = 5;
    puVar14 = (undefined8 *)(lVar9 + 0x28);
  }
  else {
    *(int *)(puVar14 + 0xb) = iVar6;
    puVar14 = (undefined8 *)(puVar14[1] + (long)iVar6 * 8);
  }
  puVar14 = (undefined8 *)*puVar14;
  puVar14[2] = 0;
  puVar14[3] = 0;
  *puVar14 = 0;
  puVar14[1] = 0;
  *(undefined4 *)((long)puVar14 + 4) = *(undefined4 *)(puVar5 + 3);
  puVar4 = PTR_PTR_0434a080;
  iVar6 = *(int *)(puVar5 + 3);
  uVar7 = *(uint *)((long)puVar5 + 0x1c);
  uVar2 = iVar6 + 1;
  if (iVar6 < (int)(uVar7 & 0x3fffffff)) {
    lVar9 = puVar5[2];
  }
  else {
    uVar16 = puVar5[2];
    if (0x3ffffffe < iVar6) {
      FUN_032bd0a8(uVar2);
      uVar7 = *(uint *)((long)puVar5 + 0x1c);
    }
    uVar7 = (uVar7 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar7) {
      uVar7 = 0x3fffffff;
    }
    uVar1 = uVar2;
    if ((int)uVar2 <= (int)uVar7) {
      uVar1 = uVar7;
    }
    lVar9 = FUN_032bd1d4(puVar4,uVar1,8,uVar16,iVar6,(uint *)((long)puVar5 + 0x1c));
    iVar6 = *(int *)(puVar5 + 3);
    puVar5[2] = lVar9;
  }
  *(undefined8 **)(lVar9 + (long)iVar6 * 8) = puVar14;
  *(uint *)(puVar5 + 3) = uVar2;
  puVar5[0x1e] = 0;
  plVar11 = *(long **)(param_1 + 0x4e0);
  lVar9 = *(long *)(param_1 + 0x4d0);
  *(undefined8 **)(param_1 + 0x4d8) = puVar5;
  puVar10 = *(uint **)(puVar5[2] + (long)*(int *)(puVar5 + 3) * 8 + -8);
  *plVar11 = (long)puVar5;
  plVar11[1] = lVar9;
  *(uint *)(plVar11 + 3) = *puVar10 >> 0x10;
  uVar2 = *puVar10;
  *(uint *)((long)plVar11 + 0x1c) = uVar2 & 0xffff;
  *(uint *)(puVar5 + 1) = *(int *)(puVar5 + 1) - (uVar2 & 0xffff);
  plVar11[2] = (long)puVar10;
  return uVar12;
}


