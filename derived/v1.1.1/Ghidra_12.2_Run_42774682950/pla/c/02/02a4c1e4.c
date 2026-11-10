/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a4c1e4; name: FUN_02a4c1e4
 */


void FUN_02a4c1e4(undefined8 *param_1,undefined4 param_2)

{
  FUN_02a4c2c8();
  *param_1 = &PTR_FUN_0427d928;
  param_1[9] = &PTR_LAB_0427da28;
  param_1[10] = &PTR_LAB_0427db08;
  nn::os::InitializeLightEvent((long)param_1 + 0x7c,0,1);
  param_1[0x11] = 0;
  nn::os::InitializeLightEvent((long)param_1 + 0x94,0,1);
  param_1[0x14] = 0;
  nn::os::InitializeLightEvent((long)param_1 + 0xb4,0,1);
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  nn::os::InitializeLightEvent((long)param_1 + 0xd4,0,1);
  param_1[0x1c] = 0;
  FUN_02a4d750(param_1 + 0x1d);
  FUN_02a4d750(param_1 + 0x24);
  FUN_02a4d750(param_1 + 0x2b);
  *(undefined4 *)(param_1 + 0x32) = 0;
  *(undefined4 *)(param_1 + 0x34) = param_2;
  *(undefined2 *)((long)param_1 + 0x1ec) = 0;
  param_1[0x39] = &DAT_cbf29ce484222645;
  param_1[0x3a] = &DAT_03996322;
  *(undefined4 *)(param_1 + 0x3d) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0x1ee) = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  return;
}


