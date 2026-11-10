/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03374c0c; name: FUN_03374c0c
 */


void FUN_03374c0c(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  *param_1 = &PTR_LAB_04367df0;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  lVar1 = *(long *)(param_2 + 0x18);
  param_1[3] = lVar1;
  if (lVar1 != 0) {
    FUN_032d645c();
  }
  *param_1 = &PTR_LAB_043661e0;
  param_1[4] = 0;
  lVar1 = *(long *)(param_2 + 0x28);
  param_1[5] = lVar1;
  if (lVar1 != 0) {
    FUN_032d645c();
  }
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0x30);
  lVar1 = FUN_032cf5b0(0x40);
  FUN_03368e24(lVar1,*(undefined8 *)(param_2 + 0x20));
  lVar2 = param_1[4];
  if ((lVar2 == lVar1) || (param_1[4] = lVar1, lVar2 == 0)) {
    return;
  }
  FUN_032d647c();
  return;
}


