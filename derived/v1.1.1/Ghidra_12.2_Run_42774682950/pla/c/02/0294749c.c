/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0294749c; name: FUN_0294749c
 */


bool FUN_0294749c(long param_1,byte param_2)

{
  int iVar1;
  byte bVar2;
  undefined1 *puVar3;
  
  iVar1 = *(int *)(param_1 + 0x110);
  bVar2 = *(byte *)(param_1 + 0x130);
  if (iVar1 != 2) {
    if (iVar1 == 1) {
      if (4 < bVar2) {
        return false;
      }
      puVar3 = &DAT_03a7ebe5;
      goto LAB_029474dc;
    }
    if (iVar1 != 0) {
      return false;
    }
  }
  if (4 < bVar2) {
    return false;
  }
  puVar3 = &DAT_03a7ebe0;
LAB_029474dc:
  bVar2 = puVar3[bVar2];
  if (bVar2 < 2) {
    if ((bVar2 == param_2) || (param_2 == 3)) {
      return true;
    }
    if (param_2 == 5) {
      return bVar2 != 1;
    }
    if (param_2 == 4) {
      return bVar2 != 0;
    }
  }
  return false;
}


