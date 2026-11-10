/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f076a0; name: FUN_02f076a0
 */


void FUN_02f076a0(long param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    puVar2 = *(undefined4 **)(param_1 + 0x10);
    do {
      puVar1 = puVar2 + 1;
      (**(code **)(*DAT_0440a098 + 0x50))(DAT_0440a098,*puVar2,*(undefined1 *)(param_1 + 0x30));
      puVar2 = puVar1;
    } while (puVar1 != (undefined4 *)
                       (*(long *)(param_1 + 0x10) + (ulong)*(uint *)(param_1 + 0x18) * 4));
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    puVar2 = *(undefined4 **)(param_1 + 0x20);
    do {
      puVar1 = puVar2 + 1;
      (**(code **)(*DAT_0440a098 + 0x50))(DAT_0440a098,*puVar2,*(undefined1 *)(param_1 + 0x31));
      puVar2 = puVar1;
    } while (puVar1 != (undefined4 *)
                       (*(long *)(param_1 + 0x20) + (ulong)*(uint *)(param_1 + 0x28) * 4));
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}


