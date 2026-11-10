/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ec7038; name: FUN_02ec7038
 */


void FUN_02ec7038(long *param_1)

{
  long lVar1;
  
  for (param_1 = (long *)*param_1; param_1 != (long *)0x0; param_1 = (long *)*param_1) {
    lVar1 = param_1[1];
    *(undefined8 *)(lVar1 + 0x18) = 0;
    if (*(long *)(lVar1 + 0x20) != 0) {
      *(undefined4 *)(lVar1 + 0x28) = 0;
      FUN_02f59e60(0);
      *(undefined8 *)(lVar1 + 0x20) = 0;
      *(undefined4 *)(lVar1 + 0x2c) = 0;
    }
  }
  return;
}


