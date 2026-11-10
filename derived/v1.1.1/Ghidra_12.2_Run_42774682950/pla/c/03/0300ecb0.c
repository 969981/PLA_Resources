/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0300ecb0; name: FUN_0300ecb0
 */


void FUN_0300ecb0(undefined8 *param_1)

{
  *param_1 = &DAT_042da9d8;
  param_1[1] = 0xffffffff;
  *(undefined2 *)(param_1 + 6) = 3;
  param_1[2] = 1;
  param_1[3] = 0;
  *(undefined2 *)(param_1 + 0xc) = 0x17;
  *(undefined2 *)(param_1 + 4) = 6;
  *(undefined2 *)(param_1 + 0xe) = 6;
  *(undefined8 *)((long)param_1 + 100) = 0x7f7fffee7f7fffee;
  *(undefined4 *)((long)param_1 + 0x6c) = 0x5f7ffff0;
  param_1[0x10] = 0;
  param_1[0x11] = 0xbf800000bf800000;
  param_1[0x12] = 0x3f8000003f800000;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  return;
}


