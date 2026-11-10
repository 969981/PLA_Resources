/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00346574; name: FUN_00346574
 */


void FUN_00346574(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  byte *pbVar2;
  long lVar3;
  undefined8 uVar4;
  ulong *puVar5;
  byte *pbVar6;
  byte *pbVar7;
  long lVar8;
  
  pbVar6 = (byte *)*param_1;
  *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 1;
  puVar5 = (ulong *)(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe);
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    puVar5 = (ulong *)*puVar5;
  }
  pbVar7 = *(byte **)(param_2 + 0x18);
  if (pbVar7 == PTR_DAT_043730c0) {
    FUN_0029175c((undefined8 *)(param_2 + 0x18),puVar5);
    lVar8 = param_1[5];
    lVar3 = FUN_003b7b84();
    if (lVar8 == lVar3) {
      return;
    }
  }
  else {
    if (pbVar7 != pbVar6) {
      uVar1 = *(ulong *)(pbVar6 + 8);
      pbVar2 = *(byte **)(pbVar6 + 0x10);
      if ((*pbVar6 & 1) == 0) {
        pbVar2 = pbVar6 + 1;
        uVar1 = (ulong)(*pbVar6 >> 1);
      }
      FUN_00291910(pbVar7,pbVar2,uVar1);
    }
    lVar8 = param_1[5];
    lVar3 = FUN_003b7b84();
    if (lVar8 == lVar3) {
      return;
    }
  }
  *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 2;
  if (*(long *)(param_2 + 0x20) != 0) {
    FUN_003b81bc(*(long *)(param_2 + 0x20),param_1[5]);
    return;
  }
  puVar5 = (ulong *)(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe);
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    puVar5 = (ulong *)*puVar5;
  }
  uVar4 = FUN_003c0804(puVar5);
  *(undefined8 *)(param_2 + 0x20) = uVar4;
  FUN_003b81bc(uVar4,param_1[5]);
  return;
}


