/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007a767c; name: FUN_007a767c
 */


void FUN_007a767c(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  puVar8 = (ulong *)(param_1 + 8);
  uVar4 = *puVar8;
  uVar7 = *(ulong *)(param_2 + 8);
  if ((((uint)uVar7 | (uint)uVar4) & 1) != 0) {
    if ((uVar7 & 1) == 0) {
      puVar11 = (undefined8 *)FUN_0033aecc();
      uVar4 = *puVar8;
      if ((uVar4 & 1) == 0) goto LAB_007a78ac;
LAB_007a76c4:
      puVar6 = (undefined8 *)((uVar4 & 0xfffffffffffffffe) + 8);
    }
    else {
      puVar11 = (undefined8 *)((uVar7 & 0xfffffffffffffffe) + 8);
      if ((uVar4 & 1) != 0) goto LAB_007a76c4;
LAB_007a78ac:
      puVar6 = (undefined8 *)FUN_0033aecc(puVar8);
    }
    uVar14 = puVar6[1];
    uVar12 = *puVar6;
    uVar5 = puVar6[2];
    uVar15 = puVar11[1];
    uVar13 = *puVar11;
    puVar6[2] = puVar11[2];
    puVar6[1] = uVar15;
    *puVar6 = uVar13;
    puVar11[2] = uVar5;
    puVar11[1] = uVar14;
    *puVar11 = uVar12;
  }
  FUN_007b4c78(param_1 + 0x10,param_2 + 0x10);
  puVar3 = PTR_DAT_043730c0;
  uVar4 = *(ulong *)(param_1 + 8);
  plVar1 = (long *)(param_1 + 0x28);
  puVar9 = (ulong *)(uVar4 & 0xfffffffffffffffe);
  if ((uVar4 & 1) == 0) {
    puVar10 = puVar9;
  }
  else {
    puVar10 = (ulong *)*puVar9;
  }
  puVar11 = (undefined8 *)*plVar1;
  plVar2 = (long *)(param_2 + 0x28);
  if (puVar11 == (undefined8 *)PTR_DAT_043730c0) {
    if ((undefined *)*plVar2 == PTR_DAT_043730c0) goto LAB_007a7790;
    FUN_0029175c(plVar1,puVar10,PTR_DAT_043730c0);
    puVar11 = (undefined8 *)*plVar1;
    puVar6 = (undefined8 *)*plVar2;
  }
  else {
    puVar6 = (undefined8 *)*plVar2;
  }
  if (puVar6 == (undefined8 *)puVar3) {
    FUN_0029175c(plVar2,puVar10,PTR_DAT_043730c0);
    puVar6 = (undefined8 *)*plVar2;
  }
  uVar14 = puVar11[1];
  uVar12 = *puVar11;
  uVar5 = puVar11[2];
  uVar15 = puVar6[1];
  uVar13 = *puVar6;
  puVar11[2] = puVar6[2];
  puVar11[1] = uVar15;
  *puVar11 = uVar13;
  puVar6[2] = uVar5;
  puVar6[1] = uVar14;
  *puVar6 = uVar12;
  uVar4 = *puVar8;
  puVar9 = (ulong *)(uVar4 & 0xfffffffffffffffe);
LAB_007a7790:
  plVar1 = (long *)(param_1 + 0x30);
  if ((uVar4 & 1) == 0) {
    puVar11 = (undefined8 *)*plVar1;
  }
  else {
    puVar9 = (ulong *)*puVar9;
    puVar11 = (undefined8 *)*plVar1;
  }
  if (puVar11 == (undefined8 *)puVar3) {
    if (*(undefined **)(param_2 + 0x30) == puVar3) {
      return;
    }
    FUN_0029175c(plVar1,puVar9,PTR_DAT_043730c0);
    puVar11 = (undefined8 *)*plVar1;
    puVar6 = *(undefined8 **)(param_2 + 0x30);
  }
  else {
    puVar6 = *(undefined8 **)(param_2 + 0x30);
  }
  if (puVar6 == (undefined8 *)puVar3) {
    FUN_0029175c((undefined8 *)(param_2 + 0x30),puVar9,PTR_DAT_043730c0);
    puVar6 = *(undefined8 **)(param_2 + 0x30);
  }
  uVar14 = puVar11[1];
  uVar12 = *puVar11;
  uVar5 = puVar11[2];
  uVar15 = puVar6[1];
  uVar13 = *puVar6;
  puVar11[2] = puVar6[2];
  puVar11[1] = uVar15;
  *puVar11 = uVar13;
  puVar6[2] = uVar5;
  puVar6[1] = uVar14;
  *puVar6 = uVar12;
  return;
}


