/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03001a84; name: FUN_03001a84
 */


void FUN_03001a84(long *param_1,ulong param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  uint *puVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  MutexType *pMVar14;
  long *plVar15;
  byte *pbVar16;
  ulong uVar17;
  long lVar18;
  undefined8 local_70;
  ulong uStack_68;
  
  iVar3 = *(int *)(param_1[2] + (param_2 & 0xffffff) * 0xc0 + 0x80);
  lVar1 = *(long *)(param_1[1] + 0x10) + (long)iVar3 * 0x80;
  local_70 = CONCAT44((float)*(double *)(lVar1 + 0x18),(float)*(double *)(lVar1 + 0x10));
  uStack_68 = (ulong)(uint)(float)*(double *)(lVar1 + 0x20);
  bVar7 = (**(code **)(*param_3 + 0x20))(param_3,&local_70);
  plVar15 = (long *)param_1[1];
  pbVar16 = (byte *)(lVar1 + 0x5e);
  uVar17 = (ulong)*pbVar16;
  if (*pbVar16 != bVar7) {
    puVar8 = (uint *)(lVar1 + 0x4c);
    if (*puVar8 == 0 || *puVar8 == 0x7fffffff) {
      *pbVar16 = bVar7;
    }
    else {
      pMVar14 = (MutexType *)plVar15[0x68];
      nn::os::LockMutex(pMVar14);
      uVar5 = *puVar8;
      plVar10 = plVar15 + uVar17 * 3 + 9;
      lVar18 = (long)(int)*plVar10 + -1;
      if (uVar5 < (uint)lVar18) {
        iVar6 = *(int *)(plVar15[uVar17 * 3 + 8] + lVar18 * 4);
        *(uint *)(plVar15[2] + (long)iVar6 * 0x80 + 0x4c) = uVar5;
        *(int *)(plVar15[uVar17 * 3 + 8] + (long)(int)uVar5 * 4) = iVar6;
      }
      *pbVar16 = 0xff;
      *puVar8 = 0x7fffffff;
      *(int *)plVar10 = (int)*plVar10 + -1;
      nn::os::UnlockMutex(pMVar14);
      *pbVar16 = bVar7;
      FUN_030157ec(plVar15,lVar1,iVar3);
    }
    uVar5 = *(uint *)(lVar1 + 0x48);
    lVar18 = *plVar15;
    uVar4 = uVar5;
    do {
      lVar12 = *(long *)(lVar18 + 0x10);
      uVar17 = (ulong)uVar4 & 0xffffff;
      if ((*(byte *)(lVar12 + uVar17 * 0xc0 + 0x54) >> 3 & 1) != 0) {
        *(byte *)(*(long *)(lVar18 + 0xd0) + uVar17) = bVar7;
      }
      lVar12 = lVar12 + uVar17 * 0xc0;
      *(ushort *)(lVar12 + 0x58) = *(ushort *)(lVar12 + 0x58) | 0x20;
      uVar4 = *(uint *)(lVar12 + 0x84);
    } while (uVar4 != uVar5);
  }
  lVar18 = param_1[2];
  uVar17 = param_2 & 0xffffffff;
  do {
    uVar17 = uVar17 & 0xffffff;
    puVar8 = (uint *)(lVar18 + uVar17 * 0xc0 + 0x54);
    uVar5 = *puVar8;
    if (((uVar5 >> 3 & 1) == 0) && ((*(byte *)(lVar18 + uVar17 * 0xc0 + 0x88) & 1) != 0)) {
      lVar13 = lVar18 + uVar17 * 0xc0;
      *puVar8 = uVar5 | 8;
      *(ushort *)(lVar13 + 0x58) = *(ushort *)(lVar13 + 0x58) | 0x220;
      pMVar14 = (MutexType *)param_1[0x20];
      nn::os::LockMutex(pMVar14);
      *(int *)(param_1[0x1c] + uVar17 * 4) = (int)param_1[0x19];
      lVar12 = param_1[0x19];
      uVar5 = *(uint *)(lVar13 + 0x50);
      puVar11 = (undefined8 *)(param_1[0x18] + (long)(int)lVar12 * 0x10);
      *puVar11 = *(undefined8 *)(lVar13 + 0xb0);
      puVar11[1] = (ulong)uVar5;
      *(int *)(param_1 + 0x19) = (int)lVar12 + 1;
      nn::os::UnlockMutex(pMVar14);
      *(byte *)(param_1[0x1a] + uVar17) = *pbVar16;
      if (*(int *)(*param_1 + 0x808) - 4U < 0x1d) {
        lVar18 = lVar18 + uVar17 * 0xc0;
        puVar11 = (undefined8 *)(param_1[0xb] + uVar17 * 0x18);
        uVar2 = *(undefined8 *)(lVar18 + 0x60);
        uVar9 = *(undefined8 *)(lVar18 + 0x70);
        puVar11[1] = *(undefined8 *)(lVar18 + 0x68);
        puVar11[2] = uVar9;
        *puVar11 = uVar2;
      }
    }
    lVar18 = param_1[2];
    uVar5 = *(uint *)(lVar18 + uVar17 * 0xc0 + 0x84);
    uVar17 = (ulong)uVar5;
  } while (uVar5 != (uint)param_2);
  if (*(int *)(lVar1 + 0x4c) == 0x7fffffff) {
    FUN_030157ec(param_1[1],lVar1,iVar3);
  }
  return;
}


