/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002793a4; name: FUN_002793a4
 */


long FUN_002793a4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  if (param_2 != -1) {
    if (0 < *(int *)(param_1 + 0x68)) {
      lVar1 = *(long *)(param_1 + 0x78);
      lVar2 = 0;
      do {
        if (*(long *)(lVar1 + 0x18) == param_2) {
          return lVar1;
        }
        lVar2 = lVar2 + 1;
        lVar1 = lVar1 + 0x98;
      } while (lVar2 < *(int *)(param_1 + 0x68));
    }
    lVar2 = 0;
    if ((*(long *)(param_1 + 0x4a8) == 0) || (lVar2 = FUN_002793a4(), lVar2 != 0)) {
      return lVar2;
    }
    FUN_00271a10("Appointed Primitive is not found from Resident Resource.\n");
  }
  return 0;
}


