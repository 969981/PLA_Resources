/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b3bb24; name: FUN_02b3bb24
 */


bool FUN_02b3bb24(long param_1)

{
  long lVar1;
  bool bVar2;
  byte bVar3;
  int *piVar4;
  long lVar5;
  
  if ((*(long *)(param_1 + 0xb8) != 0) && (*(char *)(*(long *)(param_1 + 0xb8) + 0x1e1) != '\0')) {
    piVar4 = *(int **)(param_1 + 0x130);
    if (piVar4 != *(int **)(param_1 + 0x138)) {
      bVar2 = true;
      do {
        lVar5 = *(long *)(*(long *)(param_1 + 0xe8) + (long)*piVar4 * 8);
        if (lVar5 == 0) {
LAB_02b3bb4c:
          bVar3 = 0;
        }
        else {
          for (lVar1 = *(long *)(lVar5 + 0x58); lVar1 != *(long *)(lVar5 + 0x60);
              lVar1 = lVar1 + 0x30) {
            if (*(char *)(*(long *)(lVar1 + 8) + 0x2d8) == '\0') goto LAB_02b3bb4c;
          }
          bVar3 = 1;
        }
        piVar4 = piVar4 + 3;
        bVar2 = (bool)(bVar2 & bVar3);
      } while (piVar4 != *(int **)(param_1 + 0x138));
      if (!bVar2) {
        return false;
      }
    }
    lVar5 = *(long *)(param_1 + 0x120);
    if (lVar5 != 0) {
      for (lVar1 = *(long *)(lVar5 + 0x60); lVar1 != *(long *)(lVar5 + 0x68); lVar1 = lVar1 + 0x30)
      {
        if (*(char *)(*(long *)(lVar1 + 8) + 0x2e0) == '\0') {
          return false;
        }
      }
      if (*(long *)(param_1 + 0x128) == 0) {
        return true;
      }
      lVar5 = *(long *)(*(long *)(param_1 + 0x128) + 0x60);
      if (lVar5 != 0) {
        return *(char *)(lVar5 + 0x1e1) != '\0';
      }
    }
  }
  return false;
}


