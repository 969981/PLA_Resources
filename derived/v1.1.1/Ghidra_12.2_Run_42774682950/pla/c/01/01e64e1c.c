/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e64e1c; name: FUN_01e64e1c
 */


void FUN_01e64e1c(undefined8 *param_1)

{
  FUN_01e64e98();
  *param_1 = &PTR_FUN_04255c28;
  param_1[9] = &PTR_LAB_04255c58;
  FUN_01e64fcc(param_1 + 10);
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined1 *)((long)param_1 + 0x84) = 0;
  param_1[0x11] = 0xffffffff;
  param_1[0x12] = 0;
  FUN_01e650b4(param_1 + 0x13,param_1[1]);
  FUN_01e6512c(param_1 + 0x14,param_1[1]);
  *(uint *)(param_1 + 0x11) = *(uint *)(param_1 + 0x11) & 0xfffffffd;
  *(uint *)((long)param_1 + 0x8c) = *(uint *)((long)param_1 + 0x8c) | 0x200;
  return;
}


