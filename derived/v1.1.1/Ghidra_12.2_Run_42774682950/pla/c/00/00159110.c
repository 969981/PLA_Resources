/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00159110; name: FUN_00159110
 */


undefined8 FUN_00159110(long param_1,int param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_2 < 0) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x20);
  if (param_2 != 0) {
    do {
      if (lVar2 == param_1 + 0x60) break;
      lVar2 = *(long *)(lVar2 + 0x10);
      param_2 = param_2 + -1;
    } while (0 < param_2);
  }
  uVar1 = 0;
  if ((param_2 == 0) && (lVar2 != param_1 + 0x60)) {
    uVar1 = 1;
    *(long *)(param_3 + 0x78) = lVar2;
  }
  return uVar1;
}


