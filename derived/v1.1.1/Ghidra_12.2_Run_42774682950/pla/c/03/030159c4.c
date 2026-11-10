/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030159c4; name: FUN_030159c4
 */


void FUN_030159c4(long param_1,long param_2)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  long lVar5;
  MutexType *pMVar6;
  
  pMVar6 = *(MutexType **)(param_1 + 0x340);
  bVar2 = *(byte *)(param_2 + 0x5e);
  nn::os::LockMutex(pMVar6);
  uVar1 = *(uint *)(param_2 + 0x4c);
  piVar4 = (int *)(param_1 + (ulong)bVar2 * 0x18 + 0x48);
  if (uVar1 < (uint)((long)*piVar4 + -1)) {
    lVar5 = param_1 + (ulong)bVar2 * 0x18;
    iVar3 = *(int *)(*(long *)(lVar5 + 0x40) + ((long)*piVar4 + -1) * 4);
    *(uint *)(*(long *)(param_1 + 0x10) + (long)iVar3 * 0x80 + 0x4c) = uVar1;
    *(int *)(*(long *)(lVar5 + 0x40) + (long)(int)uVar1 * 4) = iVar3;
  }
  *(undefined1 *)(param_2 + 0x5e) = 0xff;
  *(undefined4 *)(param_2 + 0x4c) = 0x7fffffff;
  *piVar4 = *piVar4 + -1;
  nn::os::UnlockMutex(pMVar6);
  return;
}


