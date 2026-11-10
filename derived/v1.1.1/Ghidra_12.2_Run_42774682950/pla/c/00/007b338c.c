/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007b338c; name: FUN_007b338c
 */


void FUN_007b338c(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  byte *pbVar3;
  byte bVar4;
  byte *pbVar5;
  long lVar6;
  ulong *puVar7;
  long lVar8;
  byte *pbVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long *local_60 [4];
  byte *local_40;
  undefined8 uStack_38;
  
  pbVar5 = (byte *)(**(code **)(**(long **)(param_1 + 0x30) + 0x70))();
  pbVar9 = (byte *)(param_1 + 0x10);
  if (pbVar9 != pbVar5) {
    uVar2 = *(ulong *)(pbVar5 + 8);
    pbVar3 = *(byte **)(pbVar5 + 0x10);
    if ((*pbVar5 & 1) == 0) {
      pbVar3 = pbVar5 + 1;
      uVar2 = (ulong)(*pbVar5 >> 1);
    }
    FUN_00291910(pbVar9,pbVar3,uVar2);
  }
  lVar8 = *(long *)(param_1 + 8);
  uStack_38 = 0;
  local_40 = pbVar9;
  FUN_0079410c(local_60,*(undefined8 *)(lVar8 + 0x10),&local_40);
  lVar6 = local_60[0][1];
  if (lVar6 == 0) {
    lVar6 = FUN_00793f40(lVar8,pbVar9);
    *local_60[0] = lVar6;
    local_60[0][1] = lVar6;
  }
  lVar8 = *(long *)(param_1 + 0x30);
  pbVar9 = (byte *)(lVar6 + 0x18);
  *(byte **)(param_1 + 0x28) = pbVar9;
  *(uint *)(lVar8 + 0x20) = *(uint *)(lVar8 + 0x20) | 2;
  puVar1 = (undefined8 *)(lVar8 + 0x18);
  puVar7 = (ulong *)(*(ulong *)(lVar8 + 8) & 0xfffffffffffffffe);
  if ((*(ulong *)(lVar8 + 8) & 1) != 0) {
    puVar7 = (ulong *)*puVar7;
  }
  puVar10 = (undefined8 *)*puVar1;
  if (puVar10 == (undefined8 *)PTR_DAT_043730c0) {
    FUN_0029175c(puVar1,puVar7,PTR_DAT_043730c0);
    puVar10 = (undefined8 *)*puVar1;
    pbVar9 = *(byte **)(param_1 + 0x28);
    bVar4 = *pbVar9;
  }
  else {
    bVar4 = *pbVar9;
  }
  if ((bVar4 & 1) == 0) {
    pbVar9[0] = 0;
    pbVar9[1] = 0;
  }
  else {
    **(undefined1 **)(pbVar9 + 0x10) = 0;
    pbVar9[8] = 0;
    pbVar9[9] = 0;
    pbVar9[10] = 0;
    pbVar9[0xb] = 0;
    pbVar9[0xc] = 0;
    pbVar9[0xd] = 0;
    pbVar9[0xe] = 0;
    pbVar9[0xf] = 0;
    if ((*pbVar9 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(pbVar9 + 0x10));
      pbVar9[0] = 0;
      pbVar9[1] = 0;
      pbVar9[2] = 0;
      pbVar9[3] = 0;
      pbVar9[4] = 0;
      pbVar9[5] = 0;
      pbVar9[6] = 0;
      pbVar9[7] = 0;
    }
  }
  uVar12 = puVar10[1];
  uVar11 = *puVar10;
  *(undefined8 *)(pbVar9 + 0x10) = puVar10[2];
  *(undefined8 *)(pbVar9 + 8) = uVar12;
  *(undefined8 *)pbVar9 = uVar11;
  puVar10[1] = 0;
  puVar10[2] = 0;
  *puVar10 = 0;
  return;
}


