/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eb2580; name: FUN_02eb2580
 */


void FUN_02eb2580(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    lVar1 = *(long *)(param_1 + 0x28);
  }
  else {
    FUN_02f59e60(2);
    *(undefined8 *)(param_1 + 0x18) = 0;
    lVar1 = *(long *)(param_1 + 0x28);
  }
  if (lVar1 != 0) {
    FUN_02f59e60(2);
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0x80000000;
  return;
}


