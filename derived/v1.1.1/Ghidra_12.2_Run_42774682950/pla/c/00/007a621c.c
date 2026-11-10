/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007a621c; name: FUN_007a621c
 */


void FUN_007a621c(long param_1,long *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  byte *pbVar3;
  undefined *puVar4;
  byte *pbVar5;
  byte *pbVar6;
  ulong *puVar7;
  uint uVar8;
  undefined *puVar9;
  
  puVar4 = PTR_DAT_043730c0;
  uVar8 = *(uint *)(param_2 + 4);
  if (uVar8 == 0) {
    return;
  }
  if ((uVar8 & 1) == 0) goto LAB_007a6300;
  puVar1 = (undefined8 *)(param_1 + 0x10);
  puVar7 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    puVar9 = (undefined *)*puVar1;
  }
  else {
    puVar7 = (ulong *)*puVar7;
    puVar9 = (undefined *)*puVar1;
  }
  if (puVar9 == PTR_DAT_043730c0) {
    FUN_0029175c(puVar1,puVar7,PTR_DAT_043730c0);
  }
  pbVar5 = (byte *)(**(code **)(*param_2 + 0x70))(param_2);
  puVar7 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    pbVar6 = (byte *)*puVar1;
    if (pbVar6 != puVar4) goto LAB_007a629c;
LAB_007a62e8:
    FUN_0029175c(puVar1,puVar7);
  }
  else {
    puVar7 = (ulong *)*puVar7;
    pbVar6 = (byte *)*puVar1;
    if (pbVar6 == puVar4) goto LAB_007a62e8;
LAB_007a629c:
    if (pbVar6 != pbVar5) {
      uVar2 = *(ulong *)(pbVar5 + 8);
      pbVar3 = *(byte **)(pbVar5 + 0x10);
      if ((*pbVar5 & 1) == 0) {
        pbVar3 = pbVar5 + 1;
        uVar2 = (ulong)(*pbVar5 >> 1);
      }
      FUN_00291910(pbVar6,pbVar3,uVar2);
    }
  }
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 1;
  uVar8 = *(uint *)(param_2 + 4);
LAB_007a6300:
  if ((uVar8 >> 1 & 1) == 0) {
    return;
  }
  puVar1 = (undefined8 *)(param_1 + 0x18);
  puVar7 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    puVar9 = (undefined *)*puVar1;
  }
  else {
    puVar7 = (ulong *)*puVar7;
    puVar9 = (undefined *)*puVar1;
  }
  if (puVar9 == puVar4) {
    FUN_0029175c(puVar1,puVar7,PTR_DAT_043730c0);
  }
  pbVar5 = (byte *)(**(code **)(*param_2 + 0x78))(param_2);
  puVar7 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    pbVar6 = (byte *)*puVar1;
  }
  else {
    puVar7 = (ulong *)*puVar7;
    pbVar6 = (byte *)*puVar1;
  }
  if (pbVar6 == puVar4) {
    FUN_0029175c(puVar1,puVar7);
  }
  else if (pbVar6 != pbVar5) {
    uVar2 = *(ulong *)(pbVar5 + 8);
    pbVar3 = *(byte **)(pbVar5 + 0x10);
    if ((*pbVar5 & 1) == 0) {
      pbVar3 = pbVar5 + 1;
      uVar2 = (ulong)(*pbVar5 >> 1);
    }
    FUN_00291910(pbVar6,pbVar3,uVar2);
  }
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 2;
  return;
}


