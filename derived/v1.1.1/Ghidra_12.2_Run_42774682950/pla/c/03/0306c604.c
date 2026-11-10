/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0306c604; name: FUN_0306c604
 */


void FUN_0306c604(long param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x30) == 0) {
    FUN_0306ca04(param_1,*(undefined1 *)(*(long *)(param_1 + 0x20) + 0xe));
    FUN_0306c7fc(param_1);
    return;
  }
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
  uVar1 = FUN_0306ca04(param_1,*(undefined1 *)(*(long *)(param_1 + 0x20) + 0xe));
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  return;
}


