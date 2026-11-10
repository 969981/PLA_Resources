/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02adb6c8; name: FUN_02adb6c8
 */


uint FUN_02adb6c8(long param_1,uint param_2)

{
  long lVar1;
  
  if (*(char *)(param_1 + 0x69) != '\0') {
    lVar1 = *(long *)(param_1 + 0x10);
    if ((lVar1 != 0) && (*(long *)(param_1 + 8) != 0)) {
      if ((param_2 & 3) != 0) {
        FUN_02adaca4(param_1 + -0x58);
        lVar1 = *(long *)(param_1 + 0x10);
      }
      if ((~*(uint *)(lVar1 + 200) & 3) == 0) {
        FUN_02bbd098(*(undefined8 *)(lVar1 + 0x68),lVar1 + 0x60,lVar1 + 0x80,
                     *(undefined4 *)(lVar1 + 0x90));
      }
    }
    if (*(char *)(param_1 + 0x68) != '\0') {
      param_2 = param_2 | 3;
      *(undefined1 *)(param_1 + 0x68) = 0;
    }
  }
  return param_2;
}


