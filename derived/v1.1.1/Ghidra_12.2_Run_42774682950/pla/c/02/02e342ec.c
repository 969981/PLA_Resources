/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e342ec; name: FUN_02e342ec
 */


void FUN_02e342ec(long param_1)

{
  long lVar1;
  undefined4 *puVar2;
  long lVar3;
  ulong uVar4;
  
  puVar2 = *(undefined4 **)(param_1 + 0x50);
  if ((puVar2 != (undefined4 *)0x0) && (*(int *)(param_1 + 0x38) != 0)) {
    FUN_02e34b20(puVar2);
    puVar2[3] = *puVar2;
    if (1 < *(uint *)(param_1 + 0x38)) {
      lVar3 = 0;
      uVar4 = 1;
      do {
        lVar1 = *(long *)(param_1 + 0x50) + lVar3;
        FUN_02e34b20(lVar1 + 0x20);
        *(undefined4 *)(lVar1 + 0x2c) = *(undefined4 *)(lVar1 + 0x20);
        uVar4 = uVar4 + 1;
        lVar3 = lVar3 + 0x20;
      } while (uVar4 < *(uint *)(param_1 + 0x38));
    }
  }
  return;
}


