/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02762fb0; name: FUN_02762fb0
 */


void FUN_02762fb0(undefined8 *param_1,byte *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00612290();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = uVar1;
  if ((*param_2 & 1) == 0) {
    uVar1 = *(undefined8 *)param_2;
    uVar2 = *(undefined8 *)(param_2 + 0x10);
    param_1[1] = *(undefined8 *)(param_2 + 8);
    param_1[2] = uVar2;
    *param_1 = uVar1;
    return;
  }
  FUN_027625d0(param_1,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 8));
  return;
}


