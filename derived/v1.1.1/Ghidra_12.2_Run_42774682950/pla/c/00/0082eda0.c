/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0082eda0; name: FUN_0082eda0
 */


void FUN_0082eda0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 != 0) {
    FUN_0081a840(lVar1);
    FUN_0081a800(lVar1);
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  lVar1 = *(long *)(param_1 + 0x38);
  if (lVar1 != 0) {
    FUN_0081a840(lVar1);
    FUN_0081a800(lVar1);
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
    FUN_0081a840(lVar1);
    FUN_0081a800(lVar1);
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  FUN_0082ee44(param_1);
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_0082dc1c();
    lVar1 = *(long *)(param_1 + 0x10);
    if (lVar1 != 0) {
      if (*(char *)(lVar1 + 0x54) != '\0') {
        *(undefined4 *)(lVar1 + 0x50) = 0;
        *(undefined8 *)(lVar1 + 0x28) = 0;
        *(undefined1 *)(lVar1 + 0x54) = 0;
      }
      FUN_0081a800();
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
  }
  return;
}


