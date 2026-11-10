/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d68088; name: FUN_00d68088
 */


void FUN_00d68088(long param_1,uint param_2)

{
  long lVar1;
  
  FUN_02837c00(*(undefined8 *)(param_1 + 0x5b0),param_2 & 1);
  if (*(long *)(param_1 + 0x5c0) == 0) {
    return;
  }
  lVar1 = *(long *)(param_1 + 0x440);
  *(undefined1 *)(param_1 + 0x5e0) = 0;
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x62) == '\0')) {
    *(undefined1 *)(lVar1 + 0x60) = 0;
    FUN_02831b48(*(undefined8 *)(lVar1 + 0x58),0);
    if (*(long *)(param_1 + 0x5c0) == 0) {
      return;
    }
  }
  FUN_00d48450();
  return;
}


