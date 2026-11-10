/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033277a4; name: FUN_033277a4
 */


void FUN_033277a4(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  
  if (*(int *)(param_1 + 0x40) != 0) {
    puVar3 = *(undefined8 **)(param_1 + 0x38);
    puVar1 = puVar3 + *(int *)(param_1 + 0x40);
    do {
      for (lVar2 = *(long *)*puVar3; lVar2 != 0; lVar2 = *(long *)(lVar2 + 0x60)) {
        FUN_03325f84(lVar2);
        *(undefined1 *)(lVar2 + 0x50) = 0;
      }
      puVar3 = puVar3 + 1;
    } while (puVar3 != puVar1);
  }
  return;
}


