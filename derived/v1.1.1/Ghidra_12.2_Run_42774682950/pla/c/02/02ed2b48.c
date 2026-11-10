/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ed2b48; name: FUN_02ed2b48
 */


byte FUN_02ed2b48(long param_1,long param_2)

{
  byte bVar1;
  bool bVar2;
  
  bVar1 = 0;
  if (param_1 != 0) {
    bVar2 = false;
    do {
      bVar1 = param_1 == param_2;
      if ((bVar2) || ((bool)bVar1)) {
LAB_02ed2b88:
        param_1 = *(long *)(param_1 + 0x80);
      }
      else {
        if (*(long *)(param_1 + 0x88) != 0) {
          bVar1 = FUN_02ea29f8(*(long *)(param_1 + 0x88),param_2);
          bVar2 = true;
          goto LAB_02ed2b88;
        }
        bVar2 = false;
        param_1 = *(long *)(param_1 + 0x80);
        bVar1 = 0;
      }
    } while ((param_1 != 0) && ((bVar1 & 1) == 0));
  }
  return bVar1 & 1;
}


