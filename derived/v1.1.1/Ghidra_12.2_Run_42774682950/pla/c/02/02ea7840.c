/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ea7840; name: FUN_02ea7840
 */


void FUN_02ea7840(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    puVar3 = *(undefined8 **)(param_1 + 8);
    do {
      puVar2 = (undefined8 *)FUN_02ef21f4(DAT_0440a140,*puVar3);
      if (puVar2 != (undefined8 *)0x0) {
        FUN_02e42e10();
        iVar1 = *(int *)(puVar2 + 10);
        *(int *)(puVar2 + 10) = iVar1 + -1;
        if (iVar1 + -1 == 0) {
          (**(code **)*puVar2)(puVar2);
          FUN_02f59e60(4,puVar2);
        }
      }
      puVar3 = puVar3 + 1;
    } while (puVar3 != (undefined8 *)(*(long *)(param_1 + 8) + (ulong)*(uint *)(param_1 + 0x10) * 8)
            );
  }
  return;
}


