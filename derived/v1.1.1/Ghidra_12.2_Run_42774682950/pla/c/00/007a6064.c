/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007a6064; name: FUN_007a6064
 */


void FUN_007a6064(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  puVar8 = (ulong *)(param_1 + 8);
  uVar4 = *puVar8;
  uVar7 = *(ulong *)(param_2 + 8);
  if ((((uint)uVar7 | (uint)uVar4) & 1) == 0) goto LAB_007a60dc;
  if ((uVar7 & 1) == 0) {
    puVar9 = (undefined8 *)FUN_0033aecc();
    uVar4 = *puVar8;
    if ((uVar4 & 1) != 0) goto LAB_007a60a4;
LAB_007a61c4:
    puVar6 = (undefined8 *)FUN_0033aecc(puVar8);
  }
  else {
    puVar9 = (undefined8 *)((uVar7 & 0xfffffffffffffffe) + 8);
    if ((uVar4 & 1) == 0) goto LAB_007a61c4;
LAB_007a60a4:
    puVar6 = (undefined8 *)((uVar4 & 0xfffffffffffffffe) + 8);
  }
  uVar12 = puVar6[1];
  uVar10 = *puVar6;
  uVar5 = puVar6[2];
  uVar13 = puVar9[1];
  uVar11 = *puVar9;
  puVar6[2] = puVar9[2];
  puVar6[1] = uVar13;
  *puVar6 = uVar11;
  puVar9[2] = uVar5;
  puVar9[1] = uVar12;
  *puVar9 = uVar10;
LAB_007a60dc:
  FUN_0032bcc4(param_1 + 0x10,param_2 + 0x10);
  puVar3 = PTR_DAT_043730c0;
  plVar1 = (long *)(param_1 + 0x28);
  puVar8 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    puVar8 = (ulong *)*puVar8;
  }
  puVar9 = (undefined8 *)*plVar1;
  plVar2 = (long *)(param_2 + 0x28);
  if (puVar9 == (undefined8 *)PTR_DAT_043730c0) {
    if ((undefined *)*plVar2 == PTR_DAT_043730c0) {
      return;
    }
    FUN_0029175c(plVar1,puVar8,PTR_DAT_043730c0);
    puVar9 = (undefined8 *)*plVar1;
    puVar6 = (undefined8 *)*plVar2;
  }
  else {
    puVar6 = (undefined8 *)*plVar2;
  }
  if (puVar6 == (undefined8 *)puVar3) {
    FUN_0029175c(plVar2,puVar8,PTR_DAT_043730c0);
    puVar6 = (undefined8 *)*plVar2;
  }
  uVar12 = puVar9[1];
  uVar10 = *puVar9;
  uVar5 = puVar9[2];
  uVar13 = puVar6[1];
  uVar11 = *puVar6;
  puVar9[2] = puVar6[2];
  puVar9[1] = uVar13;
  *puVar9 = uVar11;
  puVar6[2] = uVar5;
  puVar6[1] = uVar12;
  *puVar6 = uVar10;
  return;
}


