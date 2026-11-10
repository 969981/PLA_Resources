/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e5d3e0; name: FUN_02e5d3e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02e5d3e0(long param_1,uint param_2,uint param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  uint *puVar4;
  undefined **local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  uint local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined1 local_78;
  undefined1 local_77;
  undefined4 local_74;
  undefined8 local_70;
  undefined8 local_68;
  
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    puVar1 = (undefined8 *)(param_1 + (ulong)param_2 * 0x10);
    uVar3 = *puVar1;
    FUN_02e54670(uVar3,&local_68,&local_70);
    puVar4 = (uint *)(puVar1 + 1);
    uVar2 = *puVar4;
    if ((uVar2 & 1) != 0) {
      local_88 = DAT_042a5ca8;
      if (3 < DAT_042a5ca8) {
        local_88 = 4;
      }
      local_80 = _DAT_042a5cac;
      uStack_7c = _DAT_042a5ca4;
      local_98 = 0;
      uStack_90 = 0;
      uStack_84 = 1;
      local_77 = 0;
      local_74 = 0x447a0000;
      local_78 = DAT_042a5cb0;
      local_a8 = &PTR_LAB_042a5f18;
      uStack_a0 = 0x40c90fdb40000000;
      FUN_02e600e4(&local_98,uVar3,local_68,&local_a8);
      uVar2 = *puVar4;
    }
    if ((uVar2 >> 1 & 1) != 0) {
      local_88 = DAT_042a5ca8;
      if (3 < DAT_042a5ca8) {
        local_88 = 4;
      }
      local_80 = _DAT_042a5cac;
      uStack_7c = _DAT_042a5ca4;
      local_98 = 0;
      uStack_90 = 0;
      uStack_84 = 1;
      local_77 = 0;
      local_74 = 0x447a0000;
      local_78 = DAT_042a5cb0;
      local_a8 = &PTR_LAB_042a5f18;
      uStack_a0 = 0x40c90fdb40000000;
      FUN_02e600e4(&local_98,uVar3,local_70,&local_a8);
    }
  }
  return;
}


