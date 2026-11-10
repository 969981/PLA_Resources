/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ea7390; name: FUN_02ea7390
 */


undefined8 FUN_02ea7390(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if (*(char *)(param_1 + 0xb8) == '\0') {
    lVar2 = DAT_0440a410;
    do {
      if (lVar2 == 0) {
        FUN_02e43d1c();
        lVar2 = DAT_0440a410;
      }
    } while (*(char *)(lVar2 + 0xb8) == '\0');
    uVar1 = FUN_02ea677c(param_1 + 0x20,lVar2 + 0x20);
    if ((int)uVar1 == 1) {
      *(char *)(param_1 + 0xb8) = (char)uVar1;
      return uVar1;
    }
  }
  return 0;
}


