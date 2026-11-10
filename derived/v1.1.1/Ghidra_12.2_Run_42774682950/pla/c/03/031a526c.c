/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031a526c; name: FUN_031a526c
 */


void FUN_031a526c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x38);
  if (lVar1 != 0) {
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(lVar1 + 0x18);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(lVar1 + 0x20);
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(lVar1 + 0x28);
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(lVar1 + 0x30);
  }
  return;
}


