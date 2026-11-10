/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0332e404; name: FUN_0332e404
 */


void FUN_0332e404(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x18) + (long)*(int *)(param_1 + 0x20) * 8 + -8);
  *(undefined1 *)(lVar1 + 0x18) = 1;
  nn::os::ReleaseSemaphore((SemaphoreType *)(lVar1 + 0x20),1);
  if (lVar1 != 0) {
    if (*(long **)(lVar1 + 0x58) != (long *)0x0) {
      (**(code **)(**(long **)(lVar1 + 0x58) + 8))();
    }
    nn::os::FinalizeSemaphore((SemaphoreType *)(lVar1 + 0x20));
    FUN_032cf640(lVar1,0x60);
  }
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
  return;
}


