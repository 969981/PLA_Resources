/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ef37d4; name: FUN_01ef37d4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ef37d4(undefined8 param_1,undefined4 param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5,undefined4 param_6,uint param_7,undefined1 param_8)

{
  undefined4 local_170 [4];
  undefined1 *local_160;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  char local_130 [136];
  undefined1 *local_a8;
  undefined1 *puStack_a0;
  undefined8 local_98;
  long *local_90;
  undefined1 local_88;
  undefined4 local_84;
  undefined1 local_80;
  undefined8 local_7c;
  undefined1 local_74;
  undefined4 local_70;
  undefined2 local_6c;
  
  local_170[0] = 0;
  local_160 = &DAT_cbf29ce484222645;
  local_150 = 0;
  local_148 = 0;
  local_130[0x80] = 0;
  local_130[0] = '\0';
  local_130[1] = '\0';
  local_130[2] = '\0';
  local_130[3] = '\0';
  local_130[4] = '\0';
  local_130[5] = '\0';
  local_130[6] = '\0';
  local_130[7] = '\0';
  local_130[8] = '\0';
  local_130[9] = '\0';
  local_130[10] = '\0';
  local_130[0xb] = '\0';
  local_130[0xc] = '\0';
  local_130[0xd] = '\0';
  local_130[0xe] = '\0';
  local_130[0xf] = '\0';
  uStack_138 = _UNK_0388a138;
  local_140 = _DAT_0388a130;
  local_130[0x10] = '\0';
  local_130[0x11] = '\0';
  local_130[0x12] = '\0';
  local_130[0x13] = '\0';
  local_130[0x14] = '\0';
  local_130[0x15] = '\0';
  local_130[0x16] = '\0';
  local_130[0x17] = '\0';
  local_130[0x18] = '\0';
  local_130[0x19] = '\0';
  local_130[0x1a] = '\0';
  local_130[0x1b] = '\0';
  local_130[0x1c] = '\0';
  local_130[0x1d] = '\0';
  local_130[0x1e] = '\0';
  local_130[0x1f] = '\0';
  local_130[0x20] = '\0';
  local_130[0x21] = '\0';
  local_130[0x22] = '\0';
  local_130[0x23] = '\0';
  local_130[0x24] = '\0';
  local_130[0x25] = '\0';
  local_130[0x26] = '\0';
  local_130[0x27] = '\0';
  local_130[0x28] = '\0';
  local_130[0x29] = '\0';
  local_130[0x2a] = '\0';
  local_130[0x2b] = '\0';
  local_130[0x2c] = '\0';
  local_130[0x2d] = '\0';
  local_130[0x2e] = '\0';
  local_130[0x2f] = '\0';
  local_130[0x30] = '\0';
  local_130[0x31] = '\0';
  local_130[0x32] = '\0';
  local_130[0x33] = '\0';
  local_130[0x34] = '\0';
  local_130[0x35] = '\0';
  local_130[0x36] = '\0';
  local_130[0x37] = '\0';
  local_130[0x38] = '\0';
  local_130[0x39] = '\0';
  local_130[0x3a] = '\0';
  local_130[0x3b] = '\0';
  local_130[0x3c] = '\0';
  local_130[0x3d] = '\0';
  local_130[0x3e] = '\0';
  local_130[0x3f] = '\0';
  local_130[0x40] = '\0';
  local_130[0x41] = '\0';
  local_130[0x42] = '\0';
  local_130[0x43] = '\0';
  local_130[0x44] = '\0';
  local_130[0x45] = '\0';
  local_130[0x46] = '\0';
  local_130[0x47] = '\0';
  local_130[0x48] = '\0';
  local_130[0x49] = '\0';
  local_130[0x4a] = '\0';
  local_130[0x4b] = '\0';
  local_130[0x4c] = '\0';
  local_130[0x4d] = '\0';
  local_130[0x4e] = '\0';
  local_130[0x4f] = '\0';
  local_130[0x50] = '\0';
  local_130[0x51] = '\0';
  local_130[0x52] = '\0';
  local_130[0x53] = '\0';
  local_130[0x54] = '\0';
  local_130[0x55] = '\0';
  local_130[0x56] = '\0';
  local_130[0x57] = '\0';
  local_130[0x58] = '\0';
  local_130[0x59] = '\0';
  local_130[0x5a] = '\0';
  local_130[0x5b] = '\0';
  local_130[0x5c] = '\0';
  local_130[0x5d] = '\0';
  local_130[0x5e] = '\0';
  local_130[0x5f] = '\0';
  local_130[0x60] = '\0';
  local_130[0x61] = '\0';
  local_130[0x62] = '\0';
  local_130[99] = '\0';
  local_130[100] = '\0';
  local_130[0x65] = '\0';
  local_130[0x66] = '\0';
  local_130[0x67] = '\0';
  local_130[0x68] = '\0';
  local_130[0x69] = '\0';
  local_130[0x6a] = '\0';
  local_130[0x6b] = '\0';
  local_130[0x6c] = '\0';
  local_130[0x6d] = '\0';
  local_130[0x6e] = '\0';
  local_130[0x6f] = '\0';
  local_130[0x70] = '\0';
  local_130[0x71] = '\0';
  local_130[0x72] = '\0';
  local_130[0x73] = '\0';
  local_130[0x74] = '\0';
  local_130[0x75] = '\0';
  local_130[0x76] = '\0';
  local_130[0x77] = '\0';
  local_130[0x78] = '\0';
  local_130[0x79] = '\0';
  local_130[0x7a] = '\0';
  local_130[0x7b] = '\0';
  local_130[0x7c] = '\0';
  local_130[0x7d] = '\0';
  local_130[0x7e] = '\0';
  local_130[0x7f] = '\0';
  local_130[0x81] = '\x01';
  local_130[0x82] = '\x01';
  local_130[0x83] = '\0';
  local_130[0x84] = '\0';
  local_88 = 0;
  local_80 = 0;
  local_a8 = &DAT_cbf29ce484222645;
  puStack_a0 = &DAT_03996322;
  local_84 = 0x43340000;
  local_98 = 0;
  local_90 = (long *)0x0;
  local_7c = 0x1000000000000;
  local_74 = 0;
  local_70 = 0;
  local_6c = 1;
  strncpy(local_130,(char *)param_3[1],0x80);
  local_160 = (undefined1 *)*param_3;
  local_148 = param_4[1];
  local_150 = *param_4;
  uStack_138 = param_5[1];
  local_140 = *param_5;
  local_6c = CONCAT11(local_6c._1_1_,param_8) & 0xff01;
  local_84 = param_2;
  local_70 = param_6;
  FUN_01ef3618(param_3,local_170);
  if ((param_7 & 1) != 0) {
    local_7c._0_6_ = CONCAT15(1,(undefined5)local_7c);
  }
  FUN_01ef2358(param_1,local_170);
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x20))();
  }
  return;
}


