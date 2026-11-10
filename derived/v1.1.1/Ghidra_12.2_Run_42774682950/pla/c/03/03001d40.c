/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03001d40; name: FUN_03001d40
 */


void FUN_03001d40(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  ulong uVar5;
  undefined8 uVar6;
  uint *puVar7;
  MutexType *pMVar8;
  byte *pbVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  
  lVar10 = *(long *)(param_1 + 0x10);
  uVar13 = param_2 & 0xffffff;
  if ((*(byte *)(lVar10 + uVar13 * 0xc0 + 0x88) & 1) != 0) {
    pMVar8 = *(MutexType **)(param_1 + 0x100);
    uVar12 = (ulong)*(uint *)(lVar10 + uVar13 * 0xc0 + 0x50) & 0xffffff;
    nn::os::LockMutex(pMVar8);
    uVar5 = (long)*(int *)(param_1 + 200) - 1;
    iVar3 = *(int *)(*(long *)(param_1 + 0xe0) + uVar12 * 4);
    if (iVar3 < (int)uVar5) {
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0xc0) + uVar5 * 0x10);
      uVar6 = *puVar1;
      uVar2 = *(uint *)(puVar1 + 1);
      *(int *)(*(long *)(param_1 + 0xe0) + ((ulong)uVar2 & 0xffffff) * 4) = iVar3;
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0xc0) + (long)iVar3 * 0x10);
      *puVar1 = uVar6;
      *(uint *)(puVar1 + 1) = uVar2;
      uVar5 = (ulong)(*(int *)(param_1 + 200) - 1);
    }
    *(int *)(param_1 + 200) = (int)uVar5;
    nn::os::UnlockMutex(pMVar8);
    *(undefined1 *)(*(long *)(param_1 + 0xd0) + uVar12) = 0xff;
    lVar10 = lVar10 + uVar12 * 0xc0;
    *(uint *)(lVar10 + 0x54) = *(uint *)(lVar10 + 0x54) & 0xfffffff7;
    *(ushort *)(lVar10 + 0x58) = *(ushort *)(lVar10 + 0x58) | 0x228;
    *(undefined4 *)(*(long *)(param_1 + 0xe0) + uVar12 * 4) = 0xffffffff;
    lVar10 = *(long *)(param_1 + 0x10);
  }
  uVar2 = *(uint *)(lVar10 + uVar13 * 0xc0 + 0x84);
  while (uVar2 != (uint)param_2) {
    uVar13 = (ulong)(uVar2 & 0xffffff);
    if ((*(byte *)(lVar10 + uVar13 * 0xc0 + 0x88) & 1) != 0) {
      pMVar8 = *(MutexType **)(param_1 + 0x100);
      uVar12 = (ulong)*(uint *)(lVar10 + uVar13 * 0xc0 + 0x50) & 0xffffff;
      nn::os::LockMutex(pMVar8);
      uVar5 = (long)*(int *)(param_1 + 200) - 1;
      iVar3 = *(int *)(*(long *)(param_1 + 0xe0) + uVar12 * 4);
      if (iVar3 < (int)uVar5) {
        puVar1 = (undefined8 *)(*(long *)(param_1 + 0xc0) + uVar5 * 0x10);
        uVar6 = *puVar1;
        uVar2 = *(uint *)(puVar1 + 1);
        *(int *)(*(long *)(param_1 + 0xe0) + ((ulong)uVar2 & 0xffffff) * 4) = iVar3;
        puVar1 = (undefined8 *)(*(long *)(param_1 + 0xc0) + (long)iVar3 * 0x10);
        *puVar1 = uVar6;
        *(uint *)(puVar1 + 1) = uVar2;
        uVar5 = (ulong)(*(int *)(param_1 + 200) - 1);
      }
      *(int *)(param_1 + 200) = (int)uVar5;
      nn::os::UnlockMutex(pMVar8);
      *(undefined1 *)(*(long *)(param_1 + 0xd0) + uVar12) = 0xff;
      lVar10 = lVar10 + uVar12 * 0xc0;
      *(uint *)(lVar10 + 0x54) = *(uint *)(lVar10 + 0x54) & 0xfffffff7;
      *(ushort *)(lVar10 + 0x58) = *(ushort *)(lVar10 + 0x58) | 0x228;
      *(undefined4 *)(*(long *)(param_1 + 0xe0) + uVar12 * 4) = 0xffffffff;
      lVar10 = *(long *)(param_1 + 0x10);
    }
    uVar2 = *(uint *)(lVar10 + uVar13 * 0xc0 + 0x84);
  }
  lVar11 = *(long *)(param_1 + 8);
  lVar10 = *(long *)(lVar11 + 0x10) +
           (long)*(int *)(lVar10 + (param_2 & 0xffffff) * 0xc0 + 0x80) * 0x80;
  pbVar9 = (byte *)(lVar10 + 0x5e);
  uVar13 = (ulong)*pbVar9;
  pMVar8 = *(MutexType **)(lVar11 + 0x340);
  nn::os::LockMutex(pMVar8);
  puVar7 = (uint *)(lVar10 + 0x4c);
  uVar2 = *puVar7;
  piVar4 = (int *)(lVar11 + uVar13 * 0x18 + 0x48);
  if (uVar2 < (uint)((long)*piVar4 + -1)) {
    lVar10 = lVar11 + uVar13 * 0x18;
    iVar3 = *(int *)(*(long *)(lVar10 + 0x40) + ((long)*piVar4 + -1) * 4);
    *(uint *)(*(long *)(lVar11 + 0x10) + (long)iVar3 * 0x80 + 0x4c) = uVar2;
    *(int *)(*(long *)(lVar10 + 0x40) + (long)(int)uVar2 * 4) = iVar3;
  }
  *pbVar9 = 0xff;
  *puVar7 = 0x7fffffff;
  *piVar4 = *piVar4 + -1;
  nn::os::UnlockMutex(pMVar8);
  return;
}


