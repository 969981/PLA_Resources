/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001e419c; name: FUN_001e419c
 */


undefined8 FUN_001e419c(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    uVar2 = 0x2b;
  }
  else {
    FUN_002044d4(*(undefined8 *)(param_1 + 0x68));
    *(undefined8 *)(param_1 + 0x68) = 0;
    if (param_2 != 0) {
      lVar1 = FUN_002044f4(param_2);
      *(long *)(param_1 + 0x68) = lVar1;
      if (lVar1 == 0) {
        return 0x1b;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}


