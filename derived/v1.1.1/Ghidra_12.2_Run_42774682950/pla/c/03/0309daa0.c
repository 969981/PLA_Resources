/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0309daa0; name: FUN_0309daa0
 */


void FUN_0309daa0(undefined8 *param_1)

{
  undefined *puVar1;
  
  *param_1 = &PTR_FUN_042b4268;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[0x22] = 0x7fffffffffffffff;
  param_1[0x23] = 0;
  *(undefined2 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  *(undefined4 *)((long)param_1 + 0x184) = 0;
  *(undefined1 *)((long)param_1 + 0x122) = 0;
  param_1[0x31] = 0;
  *(undefined8 *)((long)param_1 + 300) = 0x5f7ffff05f7ffff0;
  *(undefined8 *)((long)param_1 + 0x124) = 0x5f7ffff05f7ffff0;
  *(undefined1 *)(param_1 + 0x35) = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  *(undefined8 *)((long)param_1 + 0x1b4) = 0;
  *(undefined1 *)((long)param_1 + 0x1bc) = 0;
  *(undefined8 *)((long)param_1 + 0x1ac) = 0xffffffff;
  param_1[0x2d] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  puVar1 = PTR_PTR_0434a080;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x154)) && (param_1[0x29] != 0)) {
    FUN_032cf244(puVar1,param_1[0x29],4,*(uint *)((long)param_1 + 0x154) & 0x3fffffff);
  }
  param_1[0x29] = 0;
  *(undefined4 *)((long)param_1 + 0x154) = 0x80000000;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x144)) && (param_1[0x27] != 0)) {
    FUN_032cf244(puVar1,param_1[0x27],1,*(uint *)((long)param_1 + 0x144) & 0x3fffffff);
  }
  param_1[0x27] = 0;
  *(undefined4 *)((long)param_1 + 0x144) = 0x80000000;
  *(undefined4 *)(param_1 + 0x21) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x10c)) && (param_1[0x20] != 0)) {
    FUN_032cf244(puVar1,param_1[0x20],4,*(uint *)((long)param_1 + 0x10c) & 0x3fffffff);
  }
  param_1[0x20] = 0;
  *(undefined4 *)((long)param_1 + 0x10c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xec)) && (param_1[0x1c] != 0)) {
    FUN_032cf244(puVar1,param_1[0x1c],4,*(uint *)((long)param_1 + 0xec) & 0x3fffffff);
  }
  param_1[0x1c] = 0;
  *(undefined4 *)((long)param_1 + 0xec) = 0x80000000;
  if (param_1[0x1b] != 0) {
    FUN_032d647c();
  }
  *(undefined4 *)(param_1 + 0x1a) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xd4)) && (param_1[0x19] != 0)) {
    FUN_032cf244(puVar1,param_1[0x19],2,*(uint *)((long)param_1 + 0xd4) & 0x3fffffff);
  }
  param_1[0x19] = 0;
  *(undefined4 *)((long)param_1 + 0xd4) = 0x80000000;
  *(undefined4 *)(param_1 + 0x18) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xc4)) && (param_1[0x17] != 0)) {
    FUN_032cf244(puVar1,param_1[0x17],2,*(uint *)((long)param_1 + 0xc4) & 0x3fffffff);
  }
  param_1[0x17] = 0;
  *(undefined4 *)((long)param_1 + 0xc4) = 0x80000000;
  *(undefined4 *)(param_1 + 0x16) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xb4)) && (param_1[0x15] != 0)) {
    FUN_032cf244(puVar1,param_1[0x15],0x20,*(uint *)((long)param_1 + 0xb4) & 0x3fffffff);
  }
  param_1[0x15] = 0;
  *(undefined4 *)((long)param_1 + 0xb4) = 0x80000000;
  *(undefined4 *)(param_1 + 0x14) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xa4)) && (param_1[0x13] != 0)) {
    FUN_032cf244(puVar1,param_1[0x13],0x20,*(uint *)((long)param_1 + 0xa4) & 0x3fffffff);
  }
  param_1[0x13] = 0;
  *(undefined4 *)((long)param_1 + 0xa4) = 0x80000000;
  *(undefined4 *)(param_1 + 0x12) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x94)) && (param_1[0x11] != 0)) {
    FUN_032cf244(puVar1,param_1[0x11],0x40,*(uint *)((long)param_1 + 0x94) & 0x3fffffff);
  }
  param_1[0x11] = 0;
  *(undefined4 *)((long)param_1 + 0x94) = 0x80000000;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x84)) && (param_1[0xf] != 0)) {
    FUN_032cf244(puVar1,param_1[0xf],0x40,*(uint *)((long)param_1 + 0x84) & 0x3fffffff);
  }
  param_1[0xf] = 0;
  *(undefined4 *)((long)param_1 + 0x84) = 0x80000000;
  *(undefined4 *)(param_1 + 0xe) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x74)) && (param_1[0xd] != 0)) {
    FUN_032cf244(puVar1,param_1[0xd],0x20,*(uint *)((long)param_1 + 0x74) & 0x3fffffff);
  }
  param_1[0xd] = 0;
  *(undefined4 *)((long)param_1 + 0x74) = 0x80000000;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 100)) && (param_1[0xb] != 0)) {
    FUN_032cf244(puVar1,param_1[0xb],8,*(uint *)((long)param_1 + 100) & 0x3fffffff);
  }
  param_1[0xb] = 0;
  *(undefined4 *)((long)param_1 + 100) = 0x80000000;
  *(undefined4 *)(param_1 + 10) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x54)) && (param_1[9] != 0)) {
    FUN_032cf244(puVar1,param_1[9],0xc,*(uint *)((long)param_1 + 0x54) & 0x3fffffff);
  }
  param_1[9] = 0;
  *(undefined4 *)((long)param_1 + 0x54) = 0x80000000;
  *(undefined4 *)(param_1 + 8) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x44)) && (param_1[7] != 0)) {
    FUN_032cf244(puVar1,param_1[7],0x70,*(uint *)((long)param_1 + 0x44) & 0x3fffffff);
  }
  param_1[7] = 0;
  *(undefined4 *)((long)param_1 + 0x44) = 0x80000000;
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x24)) && (param_1[3] != 0)) {
    FUN_032cf244(puVar1,param_1[3],0x20,*(uint *)((long)param_1 + 0x24) & 0x3fffffff);
  }
  param_1[3] = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 0x80000000;
  *(undefined4 *)(param_1 + 2) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x14)) && (param_1[1] != 0)) {
    FUN_032cf244(puVar1,param_1[1],0x10,*(uint *)((long)param_1 + 0x14) & 0x3fffffff);
  }
  param_1[1] = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0x80000000;
  return;
}


