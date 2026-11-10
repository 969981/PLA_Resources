/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001dffa4; name: FUN_001dffa4
 */


void FUN_001dffa4(long param_1)

{
  long lVar1;
  
  if (param_1 != 0) {
    do {
      FUN_002044d4(*(undefined8 *)(param_1 + 0x20));
      FUN_002044d4(*(undefined8 *)(param_1 + 0x18));
      lVar1 = *(long *)(param_1 + 0x28);
      FUN_002044d4(param_1);
      param_1 = lVar1;
    } while (lVar1 != 0);
  }
  return;
}


