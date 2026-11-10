/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e47810; name: FUN_02e47810
 */


void FUN_02e47810(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 7) = 1;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[8] = param_2;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  puVar1 = PTR_DAT_04388620;
  *(undefined2 *)((long)param_1 + 0x94) = 1;
  param_1[0x11] = puVar1 + 0x10;
  *(undefined4 *)(param_1 + 0x15) = 0xffffffff;
  *(undefined8 *)((long)param_1 + 0xac) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0xb4) = 0;
  FUN_02e478e4(param_1 + 0x18);
  FUN_02e478e4(param_1 + 0x6e);
  param_1[0xc5] = 0;
  param_1[0xc4] = 0;
  param_1[199] = 0;
  param_1[200] = 0;
  *(undefined4 *)(param_1 + 0xc9) = 0;
  param_1[0xca] = 0;
  param_1[0xcb] = 0;
  param_1[0xcc] = 0;
  param_1[0xce] = 0;
  param_1[0xcf] = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  param_1[0xd1] = 0;
  *(undefined1 *)(param_1 + 0xd2) = 0;
  lVar2 = FUN_02f59e30(9,0x10);
  param_1[5] = lVar2;
  if (lVar2 != 0) {
    *(undefined4 *)((long)param_1 + 0x34) = 2;
  }
  return;
}


