/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032ccf80; name: FUN_032ccf80
 */


void FUN_032ccf80(undefined8 *param_1,ulong param_2,ulong param_3,ulong param_4,undefined *param_5,
                 undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  
  FUN_032cd00c();
  if (param_5 == (undefined *)0x0) {
    param_5 = PTR_PTR_0434a080;
  }
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = param_3;
  if (param_3 <= param_2) {
    uVar1 = (param_2 + param_3) - 1 & -param_3;
  }
  param_1[4] = 0;
  param_1[5] = param_4;
  *param_1 = 0;
  param_1[1] = uVar1;
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = param_4 / uVar1;
  }
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = param_5;
  param_1[0xb] = param_6;
  param_1[6] = param_3;
  param_1[7] = uVar2;
  return;
}


