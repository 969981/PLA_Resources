/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0072724c; name: FUN_0072724c
 */


void FUN_0072724c(long param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  long lVar4;
  long lVar5;
  ulong *puVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long *local_60 [4];
  byte *local_40;
  undefined8 uStack_38;
  
  pbVar3 = (byte *)(**(code **)(**(long **)(param_1 + 0x30) + 0x70))();
  pbVar1 = (byte *)(param_1 + 0x10);
  if (pbVar1 != pbVar3) {
    uVar8 = *(ulong *)(pbVar3 + 8);
    pbVar2 = *(byte **)(pbVar3 + 0x10);
    if ((*pbVar3 & 1) == 0) {
      pbVar2 = pbVar3 + 1;
      uVar8 = (ulong)(*pbVar3 >> 1);
    }
    FUN_00291910(pbVar1,pbVar2,uVar8);
  }
  lVar9 = *(long *)(param_1 + 8);
  uStack_38 = 0;
  local_40 = pbVar1;
  FUN_00726a0c(local_60,*(undefined8 *)(lVar9 + 0x10),&local_40);
  lVar4 = local_60[0][1];
  if (lVar4 == 0) {
    lVar4 = FUN_007268d0(lVar9,pbVar1);
    *local_60[0] = lVar4;
    local_60[0][1] = lVar4;
  }
  lVar9 = *(long *)(param_1 + 0x30);
  lVar4 = lVar4 + 0x18;
  *(long *)(param_1 + 0x28) = lVar4;
  *(uint *)(lVar9 + 0x20) = *(uint *)(lVar9 + 0x20) | 2;
  puVar6 = (ulong *)(*(ulong *)(lVar9 + 8) & 0xfffffffffffffffe);
  if ((*(ulong *)(lVar9 + 8) & 1) == 0) {
    lVar5 = *(long *)(lVar9 + 0x18);
  }
  else {
    puVar6 = (ulong *)*puVar6;
    lVar5 = *(long *)(lVar9 + 0x18);
  }
  if (lVar5 == 0) {
    lVar5 = FUN_0030c720(puVar6);
    *(long *)(lVar9 + 0x18) = lVar5;
    lVar4 = *(long *)(param_1 + 0x28);
    if (lVar5 == lVar4) {
      return;
    }
  }
  else if (lVar5 == lVar4) {
    return;
  }
  plVar7 = (long *)(*(ulong *)(lVar4 + 8) & 0xfffffffffffffffe);
  if ((*(ulong *)(lVar4 + 8) & 1) == 0) {
    uVar8 = *(ulong *)(lVar5 + 8);
  }
  else {
    plVar7 = (long *)*plVar7;
    uVar8 = *(ulong *)(lVar5 + 8);
  }
  puVar6 = (ulong *)(uVar8 & 0xfffffffffffffffe);
  if ((uVar8 & 1) != 0) {
    puVar6 = (ulong *)*puVar6;
  }
  if ((ulong *)plVar7 == puVar6) {
    FUN_0030c638();
    return;
  }
  FUN_0039cfb0();
  return;
}


