/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0082dc1c; name: FUN_0082dc1c
 */


void FUN_0082dc1c(undefined2 *param_1)

{
  long lVar1;
  
  if (*(char *)(param_1 + 0x30) != '\0') {
    *(undefined8 *)(param_1 + 0x2c) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(char *)(param_1 + 0x2a) != '\0') {
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(undefined8 *)(param_1 + 0x14) = 0;
      *(undefined1 *)(param_1 + 0x2a) = 0;
    }
    *(undefined1 *)(param_1 + 0x30) = 0;
  }
  lVar1 = *(long *)(param_1 + 0x34);
  if (lVar1 != 0) {
    FUN_0081a840(lVar1);
    FUN_0081a800(lVar1);
    *(undefined8 *)(param_1 + 0x34) = 0;
  }
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    FUN_0081a840(lVar1);
    FUN_0081a800(lVar1);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  lVar1 = *(long *)(param_1 + 4);
  if (lVar1 != 0) {
    FUN_0081a840(lVar1);
    FUN_0081a800(lVar1);
    *(undefined8 *)(param_1 + 4) = 0;
  }
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}


