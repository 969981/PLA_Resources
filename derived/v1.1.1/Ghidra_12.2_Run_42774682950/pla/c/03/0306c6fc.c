/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0306c6fc; name: FUN_0306c6fc
 */


void FUN_0306c6fc(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (*(int *)(param_1 + 0x40) == 0) {
    FUN_0306c7b8(param_1,*(undefined1 *)(param_1 + 0x52));
    puVar3 = *(undefined8 **)(param_1 + 8);
    *(undefined8 **)(param_1 + 0x30) = puVar3;
    while (puVar3 != (undefined8 *)0x0) {
      uVar2 = puVar3[1];
      *(undefined8 *)(param_1 + 0x44) = *puVar3;
      *(undefined8 *)(param_1 + 0x4c) = uVar2;
      *(int *)(param_1 + 0x40) = *(int *)(puVar3 + 1) + -1;
      iVar1 = *(int *)(param_1 + 0x14) + -1;
      *(int *)(param_1 + 0x14) = iVar1;
      if (iVar1 < 1) {
        FUN_032bfafc(param_1);
        puVar3 = *(undefined8 **)(param_1 + 8);
      }
      else {
        puVar3 = puVar3 + 2;
        *(undefined8 **)(param_1 + 8) = puVar3;
      }
      *(undefined8 **)(param_1 + 0x38) = puVar3;
      if (*(int *)(param_1 + 0x4c) != 0) {
        return;
      }
      *(undefined8 **)(param_1 + 0x30) = puVar3;
    }
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  else {
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
    uVar2 = FUN_0306c7b8(param_1,*(undefined1 *)(param_1 + 0x52));
    *(undefined8 *)(param_1 + 0x38) = uVar2;
  }
  return;
}


