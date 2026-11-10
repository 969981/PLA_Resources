/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0071a75c; name: FUN_0071a75c
 */


void FUN_0071a75c(long param_1,long param_2)

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
  ulong *puVar10;
  ulong *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  puVar9 = (ulong *)(param_1 + 8);
  uVar5 = *puVar9;
  uVar8 = *(ulong *)(param_2 + 8);
  if ((((uint)uVar8 | (uint)uVar5) & 1) != 0) {
    if ((uVar8 & 1) == 0) {
      puVar12 = (undefined8 *)FUN_0033aecc();
      uVar5 = *puVar9;
      if ((uVar5 & 1) == 0) goto LAB_0071a9c8;
LAB_0071a7a4:
      puVar7 = (undefined8 *)((uVar5 & 0xfffffffffffffffe) + 8);
    }
    else {
      puVar12 = (undefined8 *)((uVar8 & 0xfffffffffffffffe) + 8);
      if ((uVar5 & 1) != 0) goto LAB_0071a7a4;
LAB_0071a9c8:
      puVar7 = (undefined8 *)FUN_0033aecc(puVar9);
    }
    uVar15 = puVar7[1];
    uVar13 = *puVar7;
    uVar6 = puVar7[2];
    uVar16 = puVar12[1];
    uVar14 = *puVar12;
    puVar7[2] = puVar12[2];
    puVar7[1] = uVar16;
    *puVar7 = uVar14;
    puVar12[2] = uVar6;
    puVar12[1] = uVar15;
    *puVar12 = uVar13;
  }
  FUN_0032bcc4(param_1 + 0x10,param_2 + 0x10);
  FUN_0032bcc4(param_1 + 0x28,param_2 + 0x28);
  puVar4 = PTR_DAT_043730c0;
  uVar5 = *(ulong *)(param_1 + 8);
  plVar1 = (long *)(param_1 + 0x40);
  puVar10 = (ulong *)(uVar5 & 0xfffffffffffffffe);
  if ((uVar5 & 1) == 0) {
    puVar11 = puVar10;
  }
  else {
    puVar11 = (ulong *)*puVar10;
  }
  puVar12 = (undefined8 *)*plVar1;
  plVar2 = (long *)(param_2 + 0x40);
  if (puVar12 == (undefined8 *)PTR_DAT_043730c0) {
    if ((undefined *)*plVar2 != PTR_DAT_043730c0) {
      FUN_0029175c(plVar1,puVar11,PTR_DAT_043730c0);
      puVar12 = (undefined8 *)*plVar1;
      puVar7 = (undefined8 *)*plVar2;
      goto joined_r0x0071a960;
    }
  }
  else {
    puVar7 = (undefined8 *)*plVar2;
joined_r0x0071a960:
    if (puVar7 == (undefined8 *)puVar4) {
      FUN_0029175c(plVar2,puVar11,PTR_DAT_043730c0);
      puVar7 = (undefined8 *)*plVar2;
    }
    uVar15 = puVar12[1];
    uVar13 = *puVar12;
    uVar6 = puVar12[2];
    uVar16 = puVar7[1];
    uVar14 = *puVar7;
    puVar12[2] = puVar7[2];
    puVar12[1] = uVar16;
    *puVar12 = uVar14;
    puVar7[2] = uVar6;
    puVar7[1] = uVar15;
    *puVar7 = uVar13;
    uVar5 = *puVar9;
    puVar10 = (ulong *)(uVar5 & 0xfffffffffffffffe);
  }
  plVar1 = (long *)(param_1 + 0x48);
  if ((uVar5 & 1) == 0) {
    puVar12 = (undefined8 *)*plVar1;
    if (puVar12 != (undefined8 *)puVar4) goto LAB_0071a894;
LAB_0071a984:
    if (*(undefined **)(param_2 + 0x48) == puVar4) goto LAB_0071a8e8;
    FUN_0029175c(plVar1,puVar10,PTR_DAT_043730c0);
    puVar12 = (undefined8 *)*plVar1;
    puVar7 = *(undefined8 **)(param_2 + 0x48);
  }
  else {
    puVar10 = (ulong *)*puVar10;
    puVar12 = (undefined8 *)*plVar1;
    if (puVar12 == (undefined8 *)puVar4) goto LAB_0071a984;
LAB_0071a894:
    puVar7 = *(undefined8 **)(param_2 + 0x48);
  }
  if (puVar7 == (undefined8 *)puVar4) {
    FUN_0029175c((undefined8 *)(param_2 + 0x48),puVar10,PTR_DAT_043730c0);
    puVar7 = *(undefined8 **)(param_2 + 0x48);
  }
  uVar15 = puVar12[1];
  uVar13 = *puVar12;
  uVar6 = puVar12[2];
  uVar16 = puVar7[1];
  uVar14 = *puVar7;
  puVar12[2] = puVar7[2];
  puVar12[1] = uVar16;
  *puVar12 = uVar14;
  puVar7[2] = uVar6;
  puVar7[1] = uVar15;
  *puVar7 = uVar13;
LAB_0071a8e8:
  uVar14 = *(undefined8 *)(param_2 + 0x50);
  uVar6 = *(undefined8 *)(param_1 + 0x50);
  uVar13 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x50) = uVar14;
  *(undefined8 *)(param_2 + 0x50) = uVar6;
  *(undefined8 *)(param_2 + 0x58) = uVar13;
  uVar6 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_2 + 0x60) = uVar6;
  uVar3 = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  *(undefined4 *)(param_2 + 0x68) = uVar3;
  return;
}


