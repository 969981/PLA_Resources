/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002a8974; name: FUN_002a8974
 */


void FUN_002a8974(long *param_1,long param_2)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong *puVar6;
  byte *pbVar7;
  ulong *puVar8;
  ulong uVar9;
  
  puVar8 = (ulong *)(param_1 + 1);
  *puVar8 = 0;
  puVar4 = PTR_DAT_04373350;
  *(undefined4 *)(param_1 + 4) = 0;
  *param_1 = (long)(puVar4 + 0x10);
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    uVar9 = *(ulong *)(param_2 + 8) & 0xfffffffffffffffe;
    uVar5 = FUN_0033aecc(puVar8);
    uVar1 = (ulong)(*(byte *)(uVar9 + 8) >> 1);
    lVar3 = uVar9 + 9;
    if ((*(byte *)(uVar9 + 8) & 1) != 0) {
      uVar1 = *(ulong *)(uVar9 + 0x10);
      lVar3 = *(long *)(uVar9 + 0x18);
    }
    FUN_002e4094(uVar5,lVar3,uVar1);
  }
  puVar4 = PTR_DAT_043730c0;
  param_1[2] = (long)PTR_DAT_043730c0;
  bVar2 = **(byte **)(param_2 + 0x10);
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 == 0) {
LAB_002a89fc:
      param_1[3] = (long)puVar4;
      pbVar7 = *(byte **)(param_2 + 0x18);
      bVar2 = *pbVar7;
      goto joined_r0x002a8a08;
    }
  }
  else if (*(long *)(*(byte **)(param_2 + 0x10) + 8) == 0) goto LAB_002a89fc;
  puVar6 = (ulong *)(*puVar8 & 0xfffffffffffffffe);
  if ((*puVar8 & 1) != 0) {
    puVar6 = (ulong *)*puVar6;
  }
  FUN_0029175c(param_1 + 2,puVar6);
  param_1[3] = (long)puVar4;
  pbVar7 = *(byte **)(param_2 + 0x18);
  bVar2 = *pbVar7;
joined_r0x002a8a08:
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 == 0) {
      return;
    }
  }
  else if (*(long *)(pbVar7 + 8) == 0) {
    return;
  }
  puVar6 = (ulong *)(*puVar8 & 0xfffffffffffffffe);
  if ((*puVar8 & 1) != 0) {
    puVar6 = (ulong *)*puVar6;
  }
  FUN_0029175c(param_1 + 3,puVar6);
  return;
}


