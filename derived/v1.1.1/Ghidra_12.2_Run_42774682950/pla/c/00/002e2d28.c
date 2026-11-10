/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002e2d28; name: FUN_002e2d28
 */


void FUN_002e2d28(long param_1)

{
  byte *pbVar1;
  ulong uVar2;
  byte *pbVar3;
  byte *pbVar4;
  long lVar5;
  long lVar6;
  ulong *puVar7;
  long lVar8;
  long *local_60 [4];
  byte *local_40;
  undefined8 uStack_38;
  
  pbVar4 = (byte *)(**(code **)(**(long **)(param_1 + 0x30) + 0x70))();
  pbVar1 = (byte *)(param_1 + 0x10);
  if (pbVar1 != pbVar4) {
    uVar2 = *(ulong *)(pbVar4 + 8);
    pbVar3 = *(byte **)(pbVar4 + 0x10);
    if ((*pbVar4 & 1) == 0) {
      pbVar3 = pbVar4 + 1;
      uVar2 = (ulong)(*pbVar4 >> 1);
    }
    FUN_00291910(pbVar1,pbVar3,uVar2);
  }
  lVar8 = *(long *)(param_1 + 8);
  uStack_38 = 0;
  local_40 = pbVar1;
  FUN_00634d1c(local_60,*(undefined8 *)(lVar8 + 0x10),&local_40);
  lVar5 = local_60[0][1];
  if (lVar5 == 0) {
    lVar5 = FUN_00634be0(lVar8,pbVar1);
    *local_60[0] = lVar5;
    local_60[0][1] = lVar5;
  }
  lVar8 = *(long *)(param_1 + 0x30);
  lVar5 = lVar5 + 0x18;
  *(long *)(param_1 + 0x28) = lVar5;
  *(uint *)(lVar8 + 0x20) = *(uint *)(lVar8 + 0x20) | 2;
  puVar7 = (ulong *)(*(ulong *)(lVar8 + 8) & 0xfffffffffffffffe);
  if ((*(ulong *)(lVar8 + 8) & 1) == 0) {
    lVar6 = *(long *)(lVar8 + 0x18);
  }
  else {
    puVar7 = (ulong *)*puVar7;
    lVar6 = *(long *)(lVar8 + 0x18);
  }
  if (lVar6 == 0) {
    lVar6 = FUN_002e17cc(puVar7);
    *(long *)(lVar8 + 0x18) = lVar6;
    lVar5 = *(long *)(param_1 + 0x28);
  }
  FUN_002e2c00(lVar6,lVar5);
  return;
}


