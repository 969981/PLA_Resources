/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0071e8a0; name: FUN_0071e8a0
 */


void FUN_0071e8a0(long param_1,long *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  byte *pbVar3;
  undefined *puVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined8 uVar7;
  ulong *puVar8;
  uint uVar9;
  long lVar10;
  
  puVar4 = PTR_DAT_043730c0;
  uVar9 = *(uint *)(param_2 + 4);
  if (uVar9 == 0) {
    return;
  }
  if ((uVar9 & 1) == 0) goto LAB_0071e978;
  puVar1 = (undefined8 *)(param_1 + 0x10);
  puVar8 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    puVar8 = (ulong *)*puVar8;
  }
  if ((undefined *)*puVar1 == PTR_DAT_043730c0) {
    FUN_0029175c(puVar1,puVar8,PTR_DAT_043730c0);
  }
  pbVar5 = (byte *)(**(code **)(*param_2 + 0x70))(param_2);
  puVar8 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    pbVar6 = (byte *)*puVar1;
    if (pbVar6 == puVar4) goto LAB_0071e960;
LAB_0071e920:
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
  else {
    puVar8 = (ulong *)*puVar8;
    pbVar6 = (byte *)*puVar1;
    if (pbVar6 != puVar4) goto LAB_0071e920;
LAB_0071e960:
    FUN_0029175c(puVar1,puVar8);
  }
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 1;
  uVar9 = *(uint *)(param_2 + 4);
LAB_0071e978:
  if ((uVar9 >> 1 & 1) != 0) {
    puVar8 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      lVar10 = *(long *)(param_1 + 0x18);
    }
    else {
      puVar8 = (ulong *)*puVar8;
      lVar10 = *(long *)(param_1 + 0x18);
    }
    if (lVar10 == 0) {
      uVar7 = FUN_0030c720(puVar8);
      *(undefined8 *)(param_1 + 0x18) = uVar7;
    }
    uVar7 = (**(code **)(*param_2 + 0x78))(param_2);
    FUN_0030c490(*(undefined8 *)(param_1 + 0x18),uVar7);
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 2;
  }
  return;
}


