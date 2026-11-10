/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0302f4b4; name: FUN_0302f4b4
 */


void FUN_0302f4b4(long param_1,long param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  MutexType *pMVar6;
  ulong uVar7;
  long lVar8;
  
  if ((*(byte *)(param_2 + 0x54) >> 3 & 1) != 0) {
    if (*(uint *)(param_2 + 0x84) == *(uint *)(param_2 + 0x50)) {
      FUN_03001d40(param_1 + 0x28);
      return;
    }
    pMVar6 = *(MutexType **)(param_1 + 0x128);
    lVar8 = *(long *)(param_1 + 0x38);
    uVar7 = (ulong)*(uint *)(param_2 + 0x50) & 0xffffff;
    nn::os::LockMutex(pMVar6);
    uVar4 = (long)*(int *)(param_1 + 0xf0) - 1;
    iVar3 = *(int *)(*(long *)(param_1 + 0x108) + uVar7 * 4);
    if (iVar3 < (int)uVar4) {
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0xe8) + uVar4 * 0x10);
      uVar5 = *puVar1;
      uVar2 = *(uint *)(puVar1 + 1);
      *(int *)(*(long *)(param_1 + 0x108) + ((ulong)uVar2 & 0xffffff) * 4) = iVar3;
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0xe8) + (long)iVar3 * 0x10);
      *puVar1 = uVar5;
      *(uint *)(puVar1 + 1) = uVar2;
      uVar4 = (ulong)(*(int *)(param_1 + 0xf0) - 1);
    }
    *(int *)(param_1 + 0xf0) = (int)uVar4;
    nn::os::UnlockMutex(pMVar6);
    *(undefined1 *)(*(long *)(param_1 + 0xf8) + uVar7) = 0xff;
    lVar8 = lVar8 + uVar7 * 0xc0;
    *(uint *)(lVar8 + 0x54) = *(uint *)(lVar8 + 0x54) & 0xfffffff7;
    *(ushort *)(lVar8 + 0x58) = *(ushort *)(lVar8 + 0x58) | 0x228;
    *(undefined4 *)(*(long *)(param_1 + 0x108) + uVar7 * 4) = 0xffffffff;
  }
  return;
}


