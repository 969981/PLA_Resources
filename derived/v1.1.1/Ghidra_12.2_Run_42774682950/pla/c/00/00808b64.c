/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00808b64; name: FUN_00808b64
 */


void FUN_00808b64(undefined8 param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined4 local_50 [4];
  undefined4 local_38 [2];
  
  if (*(char *)(param_2 + 0x10) == '\0') {
    local_50[0] = 0;
    local_38[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_38);
    FUN_007ee578(param_1,local_50);
  }
  else {
    nn::os::LockMutex((MutexType *)(param_2 + 0x60));
    if (*(short *)(param_2 + 0x92) != 0) {
      lVar3 = 0;
      uVar4 = 0;
      do {
        FUN_007f0d34(*(long *)(param_2 + 0x80) + lVar3);
        *(undefined2 *)(*(long *)(param_2 + 0x88) + uVar4 * 2) = 0;
        uVar4 = uVar4 + 1;
        lVar3 = lVar3 + 0x20;
      } while (uVar4 < *(ushort *)(param_2 + 0x92));
    }
    *(undefined1 *)(param_2 + 0x90) = 0xfd;
    lVar3 = FUN_00855004(*(undefined8 *)PTR_DAT_043773c0);
    if (*(long *)(lVar3 + 0x98) != 0) {
      *(undefined1 *)(param_2 + 0x90) = *(undefined1 *)(*(long *)(lVar3 + 0x98) + 0x28);
    }
    for (lVar5 = *(long *)(lVar3 + 0x20); lVar5 != lVar3 + 0x18; lVar5 = *(long *)(lVar5 + 8)) {
      lVar2 = *(long *)(lVar5 + 0x10);
      if (*(int *)(lVar2 + 0x3c) == 2) {
        bVar1 = *(byte *)(lVar2 + 0x28);
        if (((ushort)bVar1 != (ushort)*(byte *)(param_2 + 0x90)) &&
           ((ushort)bVar1 < *(ushort *)(param_2 + 0x92))) {
          FUN_007f0f88(*(long *)(param_2 + 0x80) + (ulong)bVar1 * 0x20,lVar2 + 8);
          *(undefined2 *)(*(long *)(param_2 + 0x88) + (ulong)bVar1 * 2) =
               *(undefined2 *)(*(long *)(lVar5 + 0x10) + 0x38);
        }
      }
    }
    local_50[0] = 0;
    local_38[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_38);
    FUN_007ee578(param_1,local_50);
    nn::os::UnlockMutex((MutexType *)(param_2 + 0x60));
  }
  return;
}


