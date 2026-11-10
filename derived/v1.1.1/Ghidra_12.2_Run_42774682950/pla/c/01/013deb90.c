/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013deb90; name: FUN_013deb90
 */


undefined8 FUN_013deb90(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 < *(uint *)(param_1 + 1)) {
    if (*(uint *)(param_3 + 1) < uVar1) {
      uVar3 = *param_1;
      uVar2 = *(undefined4 *)(param_1 + 1);
      uVar4 = *param_3;
      *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_3 + 1);
      *param_1 = uVar4;
      *(undefined4 *)(param_3 + 1) = uVar2;
      *param_3 = uVar3;
    }
    else {
      uVar3 = *param_1;
      uVar1 = *(uint *)(param_1 + 1);
      uVar4 = *param_2;
      *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
      *param_1 = uVar4;
      *(uint *)(param_2 + 1) = uVar1;
      *param_2 = uVar3;
      if (*(uint *)(param_3 + 1) < uVar1) {
        uVar3 = *param_2;
        uVar2 = *(undefined4 *)(param_2 + 1);
        uVar4 = *param_3;
        *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_3 + 1);
        *param_2 = uVar4;
        *(undefined4 *)(param_3 + 1) = uVar2;
        *param_3 = uVar3;
        return 2;
      }
    }
  }
  else {
    if (uVar1 <= *(uint *)(param_3 + 1)) {
      return 0;
    }
    uVar3 = *param_2;
    uVar2 = *(undefined4 *)(param_2 + 1);
    uVar4 = *param_3;
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_3 + 1);
    *param_2 = uVar4;
    *(undefined4 *)(param_3 + 1) = uVar2;
    *param_3 = uVar3;
    if (*(uint *)(param_2 + 1) < *(uint *)(param_1 + 1)) {
      uVar3 = *param_1;
      uVar2 = *(undefined4 *)(param_1 + 1);
      uVar4 = *param_2;
      *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
      *param_1 = uVar4;
      *(undefined4 *)(param_2 + 1) = uVar2;
      *param_2 = uVar3;
      return 2;
    }
  }
  return 1;
}


