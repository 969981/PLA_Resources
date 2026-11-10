/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013959c8; name: FUN_013959c8
 */


undefined8 FUN_013959c8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (*(char *)(param_1 + 0x41) != '\0') {
    return 1;
  }
  lVar2 = *(long *)(param_1 + 8);
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar2 != lVar3) {
    do {
      FUN_013955c4(lVar2);
      lVar2 = lVar2 + 0x318;
    } while (lVar3 != lVar2);
    lVar2 = *(long *)(param_1 + 8);
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar2 != lVar3) {
      lVar1 = lVar2;
      while (*(int *)(lVar1 + 0x314) == 2) {
        lVar1 = lVar1 + 0x318;
        if (lVar3 == lVar1) {
          return 2;
        }
      }
      do {
        while (*(int *)(lVar2 + 0x314) == 2) {
          lVar2 = FUN_01395a98((long *)(param_1 + 8));
          lVar3 = *(long *)(param_1 + 0x10);
          if (lVar2 == lVar3) goto LAB_01395a74;
        }
        lVar2 = lVar2 + 0x318;
      } while (lVar2 != lVar3);
LAB_01395a74:
      *(undefined1 *)(param_1 + 0x40) = 1;
      return 0;
    }
  }
  return 3;
}


