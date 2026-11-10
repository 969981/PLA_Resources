/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030ceed4; name: FUN_030ceed4
 */


void FUN_030ceed4(undefined8 *param_1,long param_2,uint param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  FUN_0305bddc(param_1,*(undefined8 *)(param_2 + 8));
  uVar1 = *(undefined8 *)(param_2 + 0x4e0);
  param_1[10] = *param_1;
  param_1[0xc] = uVar1;
  param_1[0xd] = 0;
  *(undefined4 *)((long)param_1 + 0x74) = 0;
  FUN_0301e73c(param_1 + 0x10);
  param_1[0x20] = 0;
  param_1[0x25] = 0;
  param_1[0x2d] = 0;
  param_1[0x32] = 0;
  param_1[0x52] = param_4;
  param_1[0x53] = param_2;
  param_1[0x34] = param_1 + 0x38;
  param_1[0x35] = 0x8000001800000000;
  param_1[0x55] = *(long *)(*(long *)(param_2 + 8) + 0x150) + (ulong)param_3 * 0x80;
  *(uint *)(param_1 + 0x54) = param_3;
  *(undefined2 *)(param_1 + 0x96) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0xffffff;
  *(undefined2 *)((long)param_1 + 0x84) = 0;
  *(undefined4 *)((long)param_1 + 0xf4) = 0;
  param_1[0x12] = param_1 + 10;
  param_1[0x14] = param_4;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x11) = 2;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  return;
}


