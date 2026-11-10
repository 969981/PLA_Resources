/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0275f458; name: FUN_0275f458
 */


void FUN_0275f458(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  if (*(long **)(param_1 + 0x90) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x90) + 0x18))();
    uVar1 = (**(code **)(**(long **)(param_1 + 0x90) + 0x10))();
    if ((uVar1 & 1) == 0) {
      lVar2 = *(long *)(param_1 + 0x90);
      *(undefined8 *)(param_1 + 0x90) = 0;
      if (lVar2 != 0) {
        FUN_02767350(param_1 + 0x98);
      }
    }
  }
  if (*(long **)(param_1 + 0xb0) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xb0) + 0x18))();
    uVar1 = (**(code **)(**(long **)(param_1 + 0xb0) + 0x10))();
    if ((uVar1 & 1) == 0) {
      lVar2 = *(long *)(param_1 + 0xb0);
      *(undefined8 *)(param_1 + 0xb0) = 0;
      if (lVar2 != 0) {
        FUN_02767350(param_1 + 0xb8);
        return;
      }
    }
  }
  return;
}


