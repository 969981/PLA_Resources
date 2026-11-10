/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e9ed88; name: FUN_02e9ed88
 */


void FUN_02e9ed88(undefined8 *param_1,undefined4 param_2)

{
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 2) = param_2;
  *(undefined4 *)((long)param_1 + 0x14) = 1;
  *(undefined1 *)(param_1 + 4) = 1;
  param_1[9] = &PTR_FUN_042aac58;
  param_1[10] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = &PTR_FUN_042aac58;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(uint *)((long)param_1 + 0xaa) = *(uint *)((long)param_1 + 0xaa) & 0xe0090000 | 0x4000;
  *param_1 = &PTR_FUN_042a88b0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[3] = &PTR_LAB_042a8b50;
  param_1[0x19] = 0;
  param_1[0x1d] = 0;
  param_1[0x2f] = 0;
  *(byte *)((long)param_1 + 0x184) = *(byte *)((long)param_1 + 0x184) & 0x80 | 0x30;
  param_1[5] = 0;
  param_1[6] = &PTR_LAB_042a8be8;
  *(undefined4 *)(param_1 + 0x1e) = 0xc2c0999a;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  return;
}


