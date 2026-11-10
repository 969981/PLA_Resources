/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0054ac68; name: FUN_0054ac68
 */


void FUN_0054ac68(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x30);
  while (lVar1 = lVar2, lVar1 != 0) {
    param_1 = lVar1;
    lVar2 = *(long *)(lVar1 + 0x30);
  }
  FUN_0054b2a0(param_1 + 0x28,*(undefined8 *)(param_1 + 0x20),0,*(undefined8 *)(param_1 + 0x18));
  return;
}


