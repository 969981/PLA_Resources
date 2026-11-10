/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e1039c; name: FUN_01e1039c
 */


undefined4 FUN_01e1039c(long param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0x10);
  puVar1 = *(undefined4 **)(param_1 + 0x18);
  if (puVar1 != puVar2 && puVar2 != puVar1) {
    do {
      if (*(char *)(puVar2 + 2) != '\0') {
        return *puVar2;
      }
      puVar2 = puVar2 + 3;
    } while (puVar1 != puVar2);
  }
  return 0;
}


