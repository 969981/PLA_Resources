/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d2d000; name: FUN_00d2d000
 */


void FUN_00d2d000(long param_1,ulong param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x2c0);
  if ((param_2 & 1) == 0) {
    if ((lVar1 != 0) && (*(char *)(lVar1 + 0x62) == '\0')) {
      *(undefined1 *)(lVar1 + 0x60) = 0;
      FUN_02831b48(*(undefined8 *)(lVar1 + 0x58),0);
      return;
    }
  }
  else if ((lVar1 != 0) && (*(char *)(lVar1 + 0x62) == '\0')) {
    *(undefined1 *)(lVar1 + 0x60) = 1;
    if (*(char *)(lVar1 + 0x61) != '\0') {
      FUN_0283351c(*(undefined8 *)(lVar1 + 0x58),0);
    }
    FUN_02831808(*(undefined8 *)(lVar1 + 0x58),0);
    return;
  }
  return;
}


