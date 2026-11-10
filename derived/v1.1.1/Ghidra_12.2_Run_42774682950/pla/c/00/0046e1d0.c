/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0046e1d0; name: FUN_0046e1d0
 */


undefined8 FUN_0046e1d0(undefined8 *param_1)

{
  long lVar1;
  
  FUN_00444880(param_1[2]);
  FUN_00444880(param_1[3]);
  FUN_00444880(param_1[1]);
  *param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  FUN_004006a0((long)param_1 + 0x24,0x90);
  if (param_1[2] == 0) {
    lVar1 = FUN_00444930();
    param_1[2] = lVar1;
    if (lVar1 == 0) goto LAB_0046e268;
  }
  if (param_1[3] == 0) {
    lVar1 = FUN_00444930();
    param_1[3] = lVar1;
    if (lVar1 == 0) goto LAB_0046e268;
  }
  if (param_1[1] != 0) {
    return 1;
  }
  lVar1 = FUN_00444930();
  param_1[1] = lVar1;
  if (lVar1 != 0) {
    return 1;
  }
LAB_0046e268:
  FUN_00444880(param_1[2]);
  FUN_00444880(param_1[3]);
  FUN_00444880(param_1[1]);
  *param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  FUN_004006a0((long)param_1 + 0x24,0x90);
  return 0;
}


