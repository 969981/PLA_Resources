/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e5c8d0; name: FUN_02e5c8d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02e5c8d0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 local_b0;
  undefined8 uStack_a8;
  uint local_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined1 local_90;
  undefined1 local_8f;
  undefined4 local_8c;
  uint local_84;
  undefined8 auStack_80 [2];
  undefined1 auStack_70 [16];
  
  local_84 = 2;
  if (*(uint *)(*(long *)(param_1 + 8) + 0x40) < 6) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 8) + 0x38) + 0x28);
  }
  FUN_02e5c540(uVar1,param_2,auStack_80,auStack_70,&local_84);
  uVar3 = (ulong)local_84;
  if (local_84 != 0) {
    uVar2 = *(uint *)(param_1 + 0x38);
    uVar4 = (ulong)uVar2;
    uVar6 = 0;
    while( true ) {
      if (uVar2 != 0) {
        puVar5 = *(undefined8 **)(param_1 + 0x30);
        do {
          uVar1 = FUN_02e45f34(param_2,*puVar5);
          local_a0 = DAT_042a5ca8;
          if (3 < DAT_042a5ca8) {
            local_a0 = 4;
          }
          local_98 = _DAT_042a5cac;
          uStack_94 = _DAT_042a5ca4;
          local_b0 = 0;
          uStack_a8 = 0;
          uStack_9c = 1;
          local_8f = 0;
          local_8c = 0x447a0000;
          local_90 = DAT_042a5cb0;
          FUN_02e610dc(&local_b0,DAT_042a5cb1);
          FUN_02e60cd8(&local_b0,uVar1,puVar5,auStack_80[uVar6],param_1);
          FUN_02e58ec8(puVar5 + 1);
          puVar5 = puVar5 + 0x10;
          uVar4 = (ulong)*(uint *)(param_1 + 0x38);
        } while (puVar5 != (undefined8 *)(*(long *)(param_1 + 0x30) + uVar4 * 0x80));
      }
      uVar6 = uVar6 + 1;
      if (uVar6 == uVar3) break;
      uVar2 = (uint)uVar4;
    }
  }
  return;
}


