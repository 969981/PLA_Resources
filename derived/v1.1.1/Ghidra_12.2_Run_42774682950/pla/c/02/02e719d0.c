/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e719d0; name: FUN_02e719d0
 */


void FUN_02e719d0(ThreadType *param_1)

{
  nn::os::DestroyThread(param_1);
  if (*(long *)(param_1 + 0x1c8) != 0) {
    free(*(void **)(param_1 + 0x1c0));
  }
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  return;
}


