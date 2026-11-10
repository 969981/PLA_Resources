/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e5d230; name: FUN_02e5d230
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02e5d230(long param_1,uint param_2,uint param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  undefined8 local_a0;
  undefined8 uStack_98;
  uint local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined2 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    FUN_02e5d1b4(param_1 + (ulong)param_2 * 0x30,param_5,&local_68,&local_70,&local_78);
    local_90 = DAT_042a5ca8;
    if (3 < DAT_042a5ca8) {
      local_90 = 4;
    }
    uStack_8c = 1;
    local_a0 = 0;
    uStack_98 = 0;
    local_88 = _DAT_042a5cac;
    uStack_84 = _DAT_042a5ca4;
    local_7c = 0x447a0000;
    local_80 = 1;
    FUN_02e610dc(&local_a0,DAT_042a5cb1);
    lVar1 = param_1 + (ulong)param_2 * 0x30 + 0x10;
    FUN_02e60e18(&local_a0,local_68,local_70,local_78,lVar1);
    FUN_02e58ec8(lVar1);
  }
  return;
}


