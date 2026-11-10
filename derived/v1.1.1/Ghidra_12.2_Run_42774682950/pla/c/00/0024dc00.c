/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0024dc00; name: FUN_0024dc00
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0024dc00(long param_1,long param_2)

{
  ulong uVar1;
  undefined1 *puVar2;
  undefined1 auStack_170 [64];
  undefined4 local_130;
  undefined4 local_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  float local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [56];
  undefined4 *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 *local_90;
  undefined8 *puStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined1 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_38;
  
  local_a8 = (undefined4 *)0x0;
  local_60 = 0xff;
  local_3c = 0xff;
  local_38 = 0;
  local_90 = (undefined1 *)0x0;
  puStack_88 = (undefined8 *)0x0;
  local_70 = 0x3f800000;
  local_5c = 0;
  local_6c = 0x3f8000003f800000;
  local_64 = 0x3f800000;
  local_48 = 0x3f8000003f800000;
  local_40 = 0x3f800000;
  local_a0 = 0;
  uStack_98 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_58 = 0;
  uStack_50 = 0x3f80000000000000;
  FUN_0024dd4c(param_1,auStack_e0,param_2);
  uStack_108 = _UNK_03889a88;
  local_110 = _DAT_03889a80;
  puStack_88 = &local_110;
  uStack_f8 = DAT_0388a148;
  local_100 = DAT_0388a140;
  uStack_e8 = _UNK_03888d18;
  uStack_f0 = _DAT_03888d10;
  if ((*(byte *)(param_1 + 0x114) >> 3 & 1) != 0) {
    local_130 = *(undefined4 *)(param_1 + 300);
    local_12c = *(undefined4 *)(param_1 + 0x130);
    local_128 = *(undefined8 *)(param_1 + 0x11c);
    uStack_120 = *(undefined8 *)(param_1 + 0x124);
    local_118 = *(float *)(param_1 + 0x134) * *(float *)(param_1 + 0xf8);
    local_a8 = &local_130;
  }
  local_90 = auStack_e0;
  FUN_0024d9f8(param_1,&local_a8);
  if ((*(byte *)(param_1 + 0x62) >> 1 & 1) == 0) {
    puVar2 = (undefined1 *)(param_2 + 0x10);
  }
  else {
    FUN_002447fc(param_1,auStack_170);
    uVar1 = FUN_002430e4(param_1);
    puVar2 = auStack_170;
    if ((uVar1 & 1) != 0) {
      local_60 = 0xff;
      puVar2 = auStack_170;
    }
  }
  FUN_0021c1b4(*(undefined8 *)(param_1 + 0x148),puVar2,&local_a8,
               *(ushort *)(param_1 + 0x114) >> 0xb & 1,*(ushort *)(param_1 + 0x114) >> 0xc & 1);
  return;
}


