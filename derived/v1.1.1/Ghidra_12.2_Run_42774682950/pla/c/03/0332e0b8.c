/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0332e0b8; name: FUN_0332e0b8
 */


void FUN_0332e0b8(long *param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  
  *param_1 = (long)&PTR_LAB_0435e6b8;
  FUN_0332e590();
  uVar1 = *(uint *)(param_1 + 4);
  if (0 < (int)uVar1) {
    uVar4 = 0;
    do {
      lVar3 = *(long *)(param_1[3] + uVar4 * 8);
      *(undefined1 *)(lVar3 + 0x18) = 1;
      nn::os::ReleaseSemaphore((SemaphoreType *)(lVar3 + 0x20),1);
      uVar4 = uVar4 + 1;
    } while (uVar1 != uVar4);
    uVar4 = 0;
    do {
      lVar3 = *(long *)(param_1[3] + uVar4 * 8);
      if (lVar3 != 0) {
        if (*(long **)(lVar3 + 0x58) != (long *)0x0) {
          (**(code **)(**(long **)(lVar3 + 0x58) + 8))();
        }
        nn::os::FinalizeSemaphore((SemaphoreType *)(lVar3 + 0x20));
        FUN_032cf640(lVar3,0x60);
      }
      uVar4 = uVar4 + 1;
    } while (uVar1 != uVar4);
  }
  nn::os::FinalizeSemaphore((SemaphoreType *)(param_1 + 0x29));
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x24)) && (param_1[3] != 0)) {
    FUN_032cf244(PTR_PTR_0434a080,param_1[3],8,*(uint *)((long)param_1 + 0x24) & 0x3fffffff);
  }
  param_1[3] = 0;
  puVar2 = PTR_DAT_043723c0;
  *(undefined4 *)((long)param_1 + 0x24) = 0x80000000;
  *param_1 = (long)(puVar2 + 0x10);
  return;
}


