/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e9abac; name: FUN_02e9abac
 */


void FUN_02e9abac(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_042a87f8;
  FUN_02e9a9ac();
  if (param_1[0x1c] == 0) {
    lVar1 = param_1[6];
  }
  else {
    *(undefined4 *)(param_1 + 0x1d) = 0;
    (*DAT_0442d150)(0);
    param_1[0x1c] = 0;
    *(undefined4 *)((long)param_1 + 0xec) = 0;
    lVar1 = param_1[6];
  }
  if (lVar1 != 0) {
    (*DAT_0442d150)(0);
    param_1[6] = 0;
  }
  param_1[7] = 0;
  if (param_1[9] != 0) {
    (*DAT_0442d150)(0);
    param_1[9] = 0;
  }
  param_1[10] = 0;
  if (param_1[0xc] != 0) {
    (*DAT_0442d150)(0);
    param_1[0xc] = 0;
  }
  param_1[0xd] = 0;
  if (param_1[0xf] != 0) {
    (*DAT_0442d150)(0);
    param_1[0xf] = 0;
  }
  param_1[0x10] = 0;
  if (param_1[0x12] != 0) {
    (*DAT_0442d150)(0);
    param_1[0x12] = 0;
  }
  param_1[0x13] = 0;
  if (param_1[0x15] != 0) {
    (*DAT_0442d150)(0);
    param_1[0x15] = 0;
  }
  param_1[0x16] = 0;
  if (param_1[0x18] != 0) {
    (*DAT_0442d150)(0);
    param_1[0x18] = 0;
  }
  param_1[0x19] = 0;
  FUN_02eb2770(param_1);
  return;
}


