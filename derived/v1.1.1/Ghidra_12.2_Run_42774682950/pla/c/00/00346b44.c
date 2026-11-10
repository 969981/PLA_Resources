/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00346b44; name: FUN_00346b44
 */


void FUN_00346b44(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  byte *pbVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  long lVar9;
  
  pbVar7 = (byte *)*param_1;
  *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 1;
  puVar6 = (ulong *)(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe);
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    puVar6 = (ulong *)*puVar6;
  }
  pbVar8 = *(byte **)(param_2 + 0x18);
  if (pbVar8 == PTR_DAT_043730c0) {
    FUN_0029175c((undefined8 *)(param_2 + 0x18),puVar6);
  }
  else if (pbVar8 != pbVar7) {
    uVar1 = *(ulong *)(pbVar7 + 8);
    pbVar2 = *(byte **)(pbVar7 + 0x10);
    if ((*pbVar7 & 1) == 0) {
      pbVar2 = pbVar7 + 1;
      uVar1 = (ulong)(*pbVar7 >> 1);
    }
    FUN_00291910(pbVar8,pbVar2,uVar1);
  }
  uVar3 = *(undefined4 *)(param_1 + 2);
  *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 4;
  *(undefined4 *)(param_2 + 0x28) = uVar3;
  lVar9 = param_1[4];
  lVar4 = FUN_003b8ddc();
  if (lVar9 == lVar4) {
    return;
  }
  *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 2;
  if (*(long *)(param_2 + 0x20) != 0) {
    FUN_003b94fc(*(long *)(param_2 + 0x20),param_1[4]);
    return;
  }
  puVar6 = (ulong *)(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe);
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    puVar6 = (ulong *)*puVar6;
  }
  uVar5 = FUN_003c0a80(puVar6);
  *(undefined8 *)(param_2 + 0x20) = uVar5;
  FUN_003b94fc(uVar5,param_1[4]);
  return;
}


