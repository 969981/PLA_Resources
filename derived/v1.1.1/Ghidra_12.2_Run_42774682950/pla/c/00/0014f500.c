/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0014f500; name: FUN_0014f500
 */


long FUN_0014f500(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = 0;
  if (param_1 != 0) {
    uVar2 = *(ulong *)(param_1 + -8) & 3;
    if (uVar2 == 1) {
      return 0;
    }
    lVar1 = 0x10;
    if (uVar2 != 0) {
      lVar1 = 8;
    }
    lVar1 = (*(ulong *)(param_1 + -8) & 0xfffffffffffffff8) - lVar1;
  }
  return lVar1;
}


