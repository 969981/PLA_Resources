/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032dcb78; name: FUN_032dcb78
 */


void FUN_032dcb78(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  
  FUN_0330a27c();
  *param_1 = &PTR_LAB_0434afe8;
  uVar1 = param_2[1];
  param_1[3] = *param_2;
  param_1[4] = uVar1;
  uVar2 = param_2[2];
  param_1[5] = uVar2;
  if ((uVar2 & 1) == 0) {
    return;
  }
  FUN_032e0c28(uVar2 & 0xfffffffffffffffe);
  return;
}


