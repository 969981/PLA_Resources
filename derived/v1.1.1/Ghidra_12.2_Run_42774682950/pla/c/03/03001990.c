/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03001990; name: FUN_03001990
 */


void FUN_03001990(long *param_1,ulong param_2)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  MutexType *pMVar8;
  long lVar9;
  long lVar10;
  
  lVar5 = param_1[2];
  param_2 = param_2 & 0xffffff;
  lVar9 = lVar5 + param_2 * 0xc0;
  lVar10 = *(long *)(param_1[1] + 0x10);
  *(uint *)(lVar9 + 0x54) = *(uint *)(lVar9 + 0x54) | 8;
  *(ushort *)(lVar9 + 0x58) = *(ushort *)(lVar9 + 0x58) | 0x220;
  pMVar8 = (MutexType *)param_1[0x20];
  iVar3 = *(int *)(lVar9 + 0x80);
  nn::os::LockMutex(pMVar8);
  *(int *)(param_1[0x1c] + param_2 * 4) = (int)param_1[0x19];
  lVar4 = param_1[0x19];
  uVar2 = *(uint *)(lVar9 + 0x50);
  puVar7 = (undefined8 *)(param_1[0x18] + (long)(int)lVar4 * 0x10);
  *puVar7 = *(undefined8 *)(lVar9 + 0xb0);
  puVar7[1] = (ulong)uVar2;
  *(int *)(param_1 + 0x19) = (int)lVar4 + 1;
  nn::os::UnlockMutex(pMVar8);
  *(undefined1 *)(param_1[0x1a] + param_2) = *(undefined1 *)(lVar10 + (long)iVar3 * 0x80 + 0x5e);
  if (*(int *)(*param_1 + 0x808) - 4U < 0x1d) {
    lVar5 = lVar5 + param_2 * 0xc0;
    puVar7 = (undefined8 *)(param_1[0xb] + param_2 * 0x18);
    uVar1 = *(undefined8 *)(lVar5 + 0x60);
    uVar6 = *(undefined8 *)(lVar5 + 0x70);
    puVar7[1] = *(undefined8 *)(lVar5 + 0x68);
    puVar7[2] = uVar6;
    *puVar7 = uVar1;
  }
  return;
}


