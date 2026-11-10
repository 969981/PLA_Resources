/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00203ed8; name: FUN_00203ed8
 */


void FUN_00203ed8(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (*(int *)(param_1 + 0x16c8) != 0) {
    lVar1 = *(long *)(param_1 + 0x16d0);
    if (0 < *(int *)(param_1 + 0x16c8)) {
      lVar2 = 0;
      do {
        FUN_001f86a8(*(undefined8 *)(lVar1 + lVar2 * 8));
        *(undefined8 *)(*(long *)(param_1 + 0x16d0) + lVar2 * 8) = 0;
        lVar1 = *(long *)(param_1 + 0x16d0);
        lVar2 = lVar2 + 1;
      } while (lVar2 < *(int *)(param_1 + 0x16c8));
    }
    FUN_002044d4();
    *(undefined8 *)(param_1 + 0x16d0) = 0;
    *(undefined4 *)(param_1 + 0x16c8) = 0;
  }
  return;
}


