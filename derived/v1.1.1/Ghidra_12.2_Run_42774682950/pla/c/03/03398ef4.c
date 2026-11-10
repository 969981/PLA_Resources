/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03398ef4; name: FUN_03398ef4
 */


void FUN_03398ef4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[2];
  param_1[2] = uVar2;
  if ((uVar2 & 1) != 0) {
    FUN_032e0c28(uVar2 & 0xfffffffffffffffe);
  }
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  FUN_033067ac(param_1 + 4,param_3);
  return;
}


