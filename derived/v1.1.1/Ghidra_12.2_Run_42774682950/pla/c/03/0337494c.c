/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0337494c; name: FUN_0337494c
 */


void FUN_0337494c(long *param_1,long param_2,long param_3,long param_4,undefined8 *param_5)

{
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  long local_190;
  long local_188;
  long local_180;
  long local_178;
  long local_170;
  long local_168;
  undefined1 auStack_160 [16];
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [32];
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [32];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [32];
  long local_a0;
  long lStack_98;
  long local_90;
  long lStack_88;
  long local_80;
  long lStack_78;
  long local_70;
  long lStack_68;
  long local_60;
  long lStack_58;
  long local_50;
  long lStack_48;
  
  local_60 = *param_1 >> 0xe;
  lStack_58 = param_1[1] >> 0xe;
  local_50 = param_1[2] >> 0xe;
  lStack_48 = param_1[3] >> 0xe;
  local_80 = param_1[8] >> 0xe;
  lStack_78 = param_1[9] >> 0xe;
  local_70 = param_1[10] >> 0xe;
  lStack_68 = param_1[0xb] >> 0xe;
  local_a0 = param_1[0x10] >> 0xe;
  lStack_98 = param_1[0x11] >> 0xe;
  local_90 = param_1[0x12] >> 0xe;
  lStack_88 = param_1[0x13] >> 0xe;
  FUN_0336f600(auStack_e0,&local_60,&local_80);
  FUN_0336f600(auStack_120,&local_80,&local_a0);
  FUN_0336f600(auStack_160,&local_a0,&local_60);
  local_170 = param_1[3];
  local_168 = (param_1[2] << 0x35) >> 0x35;
  local_180 = param_1[0xb];
  local_178 = (param_1[10] << 0x35) >> 0x35;
  local_190 = param_1[0x13];
  local_188 = (param_1[0x12] << 0x35) >> 0x35;
  if (param_2 != 0) {
    FUN_033738cc(&local_1b0,&local_170,auStack_120);
    FUN_03373ae8(&local_1b0,&local_180,auStack_160);
    FUN_03373ae8(&local_1b0,&local_190,auStack_e0);
    FUN_0337380c(param_2,&local_1b0);
  }
  if (param_3 != 0) {
    FUN_033738cc(&local_1b0,&local_170,auStack_110);
    FUN_03373ae8(&local_1b0,&local_180,auStack_150);
    FUN_03373ae8(&local_1b0,&local_190,auStack_d0);
    FUN_0337380c(param_3,&local_1b0);
  }
  if (param_4 != 0) {
    FUN_033738cc(&local_1b0,&local_170,auStack_100);
    FUN_03373ae8(&local_1b0,&local_180,auStack_140);
    FUN_03373ae8(&local_1b0,&local_190,auStack_c0);
    FUN_0337380c(param_4,&local_1b0);
  }
  if (param_5 != (undefined8 *)0x0) {
    FUN_0336f68c(&local_1b0,auStack_120,&local_60);
    param_5[2] = local_1a0;
    param_5[3] = uStack_198;
    *param_5 = local_1b0;
    param_5[1] = uStack_1a8;
  }
  return;
}


