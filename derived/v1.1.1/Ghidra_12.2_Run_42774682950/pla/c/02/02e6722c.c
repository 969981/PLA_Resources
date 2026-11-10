/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e6722c; name: FUN_02e6722c
 */


void FUN_02e6722c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    if (param_1 != *(long *)(param_1 + 8)) {
      FUN_02f59e70(0);
    }
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  return;
}


