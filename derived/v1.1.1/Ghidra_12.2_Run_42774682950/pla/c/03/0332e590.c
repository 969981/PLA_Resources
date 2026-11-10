/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0332e590; name: FUN_0332e590
 */


void FUN_0332e590(long param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x175) != '\0') {
    if (0 < *(int *)(param_1 + 0x20)) {
      iVar1 = 0;
      do {
        nn::os::AcquireSemaphore((SemaphoreType *)(param_1 + 0x148));
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(param_1 + 0x20));
    }
    *(undefined2 *)(param_1 + 0x174) = 0;
  }
  *(undefined8 *)(param_1 + 0x138) = 0;
  if (*(long *)(param_1 + 0x140) != 0) {
    *(undefined4 *)(*(long *)(param_1 + 0x140) + 0x380) = 0;
    *(undefined8 *)(param_1 + 0x140) = 0;
  }
  return;
}


