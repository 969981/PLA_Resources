/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f2ba48; name: FUN_02f2ba48
 */


void FUN_02f2ba48(long param_1)

{
  MutexType *pMVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  long lVar8;
  long lVar9;
  
  if (*(int *)(param_1 + 0x140) == 1) {
    lVar9 = *(long *)(param_1 + 0x128);
    *(byte *)(*(long *)(lVar9 + 0x18) + 0x2a2) =
         *(byte *)(*(long *)(lVar9 + 0x18) + 0x2a2) & 0x8f | 8;
    puVar4 = DAT_0440a178;
    iVar2 = *(int *)(*(long *)(lVar9 + 0x18) + 0x210);
    pMVar1 = (MutexType *)(DAT_0440a178 + 4);
    nn::os::LockMutex(pMVar1);
    piVar6 = (int *)*puVar4;
    uVar3 = *(uint *)(puVar4 + 1);
    piVar7 = piVar6;
    if (uVar3 == 0) {
LAB_02f2bab0:
      if (piVar7 != piVar6 + (ulong)uVar3 * 10) {
        *(undefined8 *)(piVar7 + 4) = puVar4[8];
        piVar7[7] = 0;
      }
    }
    else {
      lVar8 = (ulong)uVar3 * 0x28;
      do {
        if ((*piVar7 == iVar2) && (*(long *)(piVar7 + 2) == lVar9)) goto LAB_02f2bab0;
        lVar8 = lVar8 + -0x28;
        piVar7 = piVar7 + 10;
      } while (lVar8 != 0);
    }
    nn::os::UnlockMutex(pMVar1);
    uVar5 = 3;
  }
  else {
    if (*(int *)(param_1 + 0x140) == 3) {
      return;
    }
    if (*(long *)(param_1 + 0x128) != 0) {
      lVar9 = *(long *)(*(long *)(param_1 + 0x128) + 0x18);
      *(byte *)(lVar9 + 0x2a2) = *(byte *)(lVar9 + 0x2a2) & 0x87;
    }
    uVar5 = 2;
  }
  *(undefined4 *)(param_1 + 0x140) = uVar5;
  return;
}


