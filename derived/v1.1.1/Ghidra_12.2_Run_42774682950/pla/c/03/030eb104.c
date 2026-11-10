/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030eb104; name: FUN_030eb104
 */


void FUN_030eb104(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  *param_1 = &PTR_LAB_042b5058;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  param_1[4] = &PTR_LAB_042b5098;
  param_1[0xe] = param_1 + 0x10;
  param_1[0xf] = 0x8000001100000000;
  param_1[0x98] = param_1 + 0x9a;
  param_1[0x12a] = param_1 + 300;
  param_1[0x1b4] = param_1 + 0x1b6;
  param_1[0x246] = param_1 + 0x248;
  param_1[0x99] = 0x8000001100000000;
  param_1[299] = 0x8000001100000000;
  param_1[0x1b5] = 0x8000001100000000;
  param_1[0x247] = 0x8000001100000000;
  param_1[0x35a] = param_2;
  param_1[0x2d0] = param_1 + 0x2d2;
  param_1[0x2d1] = 0x8000001100000000;
  param_1[0x35d] = param_3[1];
  param_1[0x35c] = *param_3;
  FUN_0332bcc0(param_1 + 6,1,*(int *)(param_2 + 0x174) + 1,1);
  FUN_0332bcc0(param_1 + 0x122,1,*(int *)(param_1[0x35a] + 0x5c) + 1,1);
  FUN_0332bcc0(param_1 + 0x23e,1,*(int *)(param_1[0x35a] + 0x5c) + 1,1);
  return;
}


