/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ffefa0; name: FUN_02ffefa0
 */


void FUN_02ffefa0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined2 *)((long)param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined2 *)((long)param_1 + 0x14) = 0;
  *(undefined1 *)((long)param_1 + 0x16) = 0xff;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  uVar2 = DAT_03aae468;
  uVar1 = DAT_03aae460;
  *(undefined4 *)((long)param_1 + 0x94) = 0;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  param_1[8] = uVar1;
  param_1[9] = uVar2;
  *(undefined4 *)(param_1 + 0xe) = 0xbf800000;
  *(undefined2 *)(param_1 + 0x11) = 0xffff;
  *(undefined8 *)((long)param_1 + 0x8c) = 0x7fffffff00ffffff;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  return;
}


