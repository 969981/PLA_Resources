/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006898c8; name: FUN_006898c8
 */


void FUN_006898c8(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  puVar9 = (ulong *)(param_1 + 8);
  uVar5 = *puVar9;
  uVar8 = *(ulong *)(param_2 + 8);
  if ((((uint)uVar8 | (uint)uVar5) & 1) != 0) {
    if ((uVar8 & 1) == 0) {
      puVar10 = (undefined8 *)FUN_0033aecc();
      uVar5 = *puVar9;
      if ((uVar5 & 1) == 0) goto LAB_00689a44;
LAB_0068990c:
      puVar7 = (undefined8 *)((uVar5 & 0xfffffffffffffffe) + 8);
    }
    else {
      puVar10 = (undefined8 *)((uVar8 & 0xfffffffffffffffe) + 8);
      if ((uVar5 & 1) != 0) goto LAB_0068990c;
LAB_00689a44:
      puVar7 = (undefined8 *)FUN_0033aecc(puVar9);
    }
    uVar13 = puVar7[1];
    uVar11 = *puVar7;
    uVar6 = puVar7[2];
    uVar14 = puVar10[1];
    uVar12 = *puVar10;
    puVar7[2] = puVar10[2];
    puVar7[1] = uVar14;
    *puVar7 = uVar12;
    puVar10[2] = uVar6;
    puVar10[1] = uVar13;
    *puVar10 = uVar11;
    uVar5 = *puVar9;
  }
  puVar4 = PTR_DAT_043730c0;
  plVar1 = (long *)(param_1 + 0x10);
  puVar9 = (ulong *)(uVar5 & 0xfffffffffffffffe);
  if ((uVar5 & 1) != 0) {
    puVar9 = (ulong *)*puVar9;
  }
  puVar10 = (undefined8 *)*plVar1;
  plVar2 = (long *)(param_2 + 0x10);
  if (puVar10 == (undefined8 *)PTR_DAT_043730c0) {
    if ((undefined *)*plVar2 == PTR_DAT_043730c0) goto LAB_006899c0;
    FUN_0029175c(plVar1,puVar9,PTR_DAT_043730c0);
    puVar10 = (undefined8 *)*plVar1;
    puVar7 = (undefined8 *)*plVar2;
  }
  else {
    puVar7 = (undefined8 *)*plVar2;
  }
  if (puVar7 == (undefined8 *)puVar4) {
    FUN_0029175c(plVar2,puVar9,PTR_DAT_043730c0);
    puVar7 = (undefined8 *)*plVar2;
  }
  uVar13 = puVar10[1];
  uVar11 = *puVar10;
  uVar6 = puVar10[2];
  uVar14 = puVar7[1];
  uVar12 = *puVar7;
  puVar10[2] = puVar7[2];
  puVar10[1] = uVar14;
  *puVar10 = uVar12;
  puVar7[2] = uVar6;
  puVar7[1] = uVar13;
  *puVar7 = uVar11;
LAB_006899c0:
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = uVar6;
  uVar3 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_2 + 0x24) = uVar3;
  return;
}


