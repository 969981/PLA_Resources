/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e4daf4; name: FUN_02e4daf4
 */


void FUN_02e4daf4(undefined8 *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  undefined8 *puVar3;
  
  uVar2 = *(int *)(param_1 + 1) - 1;
  if (*(int *)(param_1 + 1) == 0 || uVar2 == 0) {
    *(undefined4 *)(param_1 + 1) = 0;
    return;
  }
  puVar3 = (undefined8 *)*param_1;
  uVar1 = (puVar3 + (ulong)uVar2 * 2)[1];
  *puVar3 = puVar3[(ulong)uVar2 * 2];
  puVar3[1] = uVar1;
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + -1;
  FUN_02e4f7e4();
  return;
}


