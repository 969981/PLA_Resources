/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0223a6c4; name: FUN_0223a6c4
 */


void FUN_0223a6c4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  param_1 = (undefined8 *)*param_1;
  memset(param_1,0,0x1d0);
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined8 *)((long)param_1 + 0xc) = 0;
  puVar3 = PTR_DAT_0437a120;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *param_1 = 0x3e2aaaab3dccccce;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  uVar1 = *(undefined8 *)puVar3;
  uVar2 = *(undefined8 *)(puVar3 + 8);
  param_1[6] = 0;
  param_1[0xd] = 0;
  param_1[0x2b] = 0;
  *(undefined1 *)((long)param_1 + 0x192) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[4] = uVar1;
  param_1[5] = uVar2;
  *(undefined2 *)(param_1 + 0x32) = 1;
  param_1[0x38] = 0x1100000014;
  *(undefined4 *)(param_1 + 0x39) = 0x14;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  return;
}


