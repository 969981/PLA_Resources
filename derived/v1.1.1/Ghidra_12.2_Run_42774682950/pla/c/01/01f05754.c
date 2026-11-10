/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f05754; name: FUN_01f05754
 */


void FUN_01f05754(long param_1)

{
  long lVar1;
  long lVar2;
  long *local_28;
  
  lVar1 = *(long *)(param_1 + 0x88);
  for (lVar2 = *(long *)(lVar1 + 0x80); lVar2 != *(long *)(lVar1 + 0x88); lVar2 = lVar2 + 0x28) {
    FUN_01943d90(&local_28,lVar2 + 0x10);
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x30))();
      if (local_28 != (long *)0x0) {
        (**(code **)(*local_28 + 0x18))();
      }
    }
  }
  return;
}


