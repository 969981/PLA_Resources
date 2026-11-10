/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007e173c; name: FUN_007e173c
 */


void FUN_007e173c(long param_1)

{
  undefined2 *puVar1;
  long lVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 0x68) != 0) {
    lVar2 = 0;
    uVar3 = 0;
    do {
      puVar1 = (undefined2 *)(*(long *)(param_1 + 0x60) + lVar2);
      *puVar1 = 0;
      *(undefined8 *)(puVar1 + 4) = 0;
      memset(puVar1 + 8,0,4);
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 0x18;
    } while (uVar3 < *(uint *)(param_1 + 0x68));
  }
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  FUN_00847354(param_1);
  return;
}


