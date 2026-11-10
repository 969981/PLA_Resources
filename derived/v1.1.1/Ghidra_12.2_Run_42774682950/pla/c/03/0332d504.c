/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0332d504; name: FUN_0332d504
 */


void FUN_0332d504(long param_1,long param_2)

{
  long lVar1;
  ushort uVar2;
  long lVar3;
  uint uVar4;
  
  if (0 < *(int *)(param_1 + 0xb8)) {
    lVar3 = 0;
    do {
      lVar1 = param_2 + lVar3 * 2;
      uVar2 = *(ushort *)(lVar1 + 0x2a);
      uVar4 = (uint)uVar2;
      *(undefined2 *)(lVar1 + 0x2a) = 0;
      if (uVar2 != 0) {
        do {
          nn::os::ReleaseSemaphore(*(SemaphoreType **)(param_1 + lVar3 * 8 + 0x90),1);
          uVar4 = uVar4 - 1;
        } while (0 < (int)uVar4);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(param_1 + 0xb8));
  }
  return;
}


