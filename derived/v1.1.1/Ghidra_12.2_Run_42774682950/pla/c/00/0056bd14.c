/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0056bd14; name: FUN_0056bd14
 */


void FUN_0056bd14(long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  void *__dest;
  long lVar3;
  int iVar4;
  
  if (*(char *)(param_1 + 0x48) != '\0') {
    return;
  }
  if (*(int *)(param_1 + 0xa0) != 0) {
    if (*(int *)(param_1 + 0x4c) == 1) {
      param_2 = FUN_0056be54(param_1,*(int *)(param_1 + 0xa0),param_2);
    }
    else {
      iVar4 = *(int *)(param_1 + 0x68);
      if (iVar4 < *(int *)(param_1 + 0x6c)) {
        uVar1 = *(uint *)(param_1 + 0x60);
        if ((int)uVar1 <= iVar4) {
          uVar2 = 8;
          if (uVar1 != 0) {
            uVar2 = uVar1;
          }
          do {
            uVar1 = uVar2;
            uVar2 = uVar1 << 1;
          } while ((int)uVar1 <= iVar4);
          __dest = (void *)FUN_002e2e80(PTR_FUN_04373078,
                                        -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 |
                                        (ulong)uVar1 << 3);
          if (*(void **)(param_1 + 0x58) != (void *)0x0) {
            memmove(__dest,*(void **)(param_1 + 0x58),(long)*(int *)(param_1 + 0x68) << 3);
          }
          uVar2 = uVar1 - *(int *)(param_1 + 0x68);
          memset((void *)((long)__dest + (long)*(int *)(param_1 + 0x68) * 8),0,
                 -(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar2 << 3);
          lVar3 = *(long *)(param_1 + 0x58);
          *(void **)(param_1 + 0x58) = __dest;
          if (lVar3 != 0) {
            FUN_002e2ea0(PTR_LAB_04373088);
          }
          iVar4 = *(int *)(param_1 + 0x68);
          *(uint *)(param_1 + 0x60) = uVar1;
        }
        *(int *)(param_1 + 0x68) = iVar4 + 1;
        if (iVar4 < 0) {
          param_2 = 0;
        }
        else {
          FUN_00552a88(*(long *)(param_1 + 0x58) + (long)iVar4 * 8,*(undefined4 *)(param_1 + 0xa0),
                       param_2);
          param_2 = iVar4;
        }
      }
      else {
        param_2 = 0;
        *(undefined1 *)(param_1 + 0x48) = 1;
      }
    }
  }
  *(int *)(param_1 + 0xa0) = param_2;
  return;
}


