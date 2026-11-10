/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00212108; name: FUN_00212108
 */


long FUN_00212108(long param_1)

{
  long lVar1;
  long lVar2;
  
  for (; (*(long *)(param_1 + 0xa8) == 0 || ((*(byte *)(param_1 + 0xe4) & 0xc) != 0));
      param_1 = param_1 + -0x10) {
    param_1 = FUN_00211560(param_1 + 0x18);
    if (param_1 == 0) {
      return 0;
    }
  }
  lVar2 = *(long *)(param_1 + 0x70);
  if (lVar2 == 0) {
    return *(long *)(param_1 + 0xa8);
  }
  lVar1 = param_1;
  do {
    *(undefined8 *)(lVar2 + 0x50) = *(undefined8 *)(lVar1 + 0x58);
    lVar1 = *(long *)(lVar1 + 0x70);
    lVar2 = *(long *)(lVar1 + 0x70);
  } while (lVar2 != 0);
  return *(long *)(param_1 + 0xa8);
}


