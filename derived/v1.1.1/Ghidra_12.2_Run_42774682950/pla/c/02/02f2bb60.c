/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f2bb60; name: FUN_02f2bb60
 */


void FUN_02f2bb60(long param_1)

{
  MutexType *pMVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  long lVar6;
  int *piVar7;
  int *piVar8;
  long lVar9;
  float fVar10;
  
  if (*(int *)(param_1 + 0x140) == 3) {
    lVar9 = *(long *)(param_1 + 0x128);
    lVar6 = *(long *)(param_1 + 0x138);
    if (lVar6 == 0) {
      fVar10 = 1.0;
    }
    else {
      fVar10 = (float)NEON_ucvtf(*(undefined4 *)(lVar6 + 0x44));
      fVar10 = (fVar10 * 1.5258789e-05) / *(float *)(lVar6 + 0x74);
    }
    *(byte *)(*(long *)(lVar9 + 0x18) + 0x2a2) =
         *(byte *)(*(long *)(lVar9 + 0x18) + 0x2a2) & 0x9f | 0x18;
    puVar4 = DAT_0440a178;
    iVar2 = *(int *)(*(long *)(lVar9 + 0x18) + 0x210);
    pMVar1 = (MutexType *)(DAT_0440a178 + 4);
    nn::os::LockMutex(pMVar1);
    piVar7 = (int *)*puVar4;
    uVar3 = *(uint *)(puVar4 + 1);
    piVar8 = piVar7;
    if (uVar3 == 0) {
LAB_02f2bbf0:
      if (piVar8 != piVar7 + (ulong)uVar3 * 10) {
        *(undefined8 *)(piVar8 + 4) = puVar4[8];
        piVar8[7] = (int)fVar10;
      }
    }
    else {
      lVar6 = (ulong)uVar3 * 0x28;
      do {
        if ((*piVar8 == iVar2) && (*(long *)(piVar8 + 2) == lVar9)) goto LAB_02f2bbf0;
        lVar6 = lVar6 + -0x28;
        piVar8 = piVar8 + 10;
      } while (lVar6 != 0);
    }
    nn::os::UnlockMutex(pMVar1);
    uVar5 = 1;
  }
  else {
    if (*(int *)(param_1 + 0x140) == 1) {
      return;
    }
    if (*(long *)(param_1 + 0x128) != 0) {
      lVar6 = *(long *)(*(long *)(param_1 + 0x128) + 0x18);
      *(byte *)(lVar6 + 0x2a2) = *(byte *)(lVar6 + 0x2a2) & 0x87;
    }
    uVar5 = 2;
  }
  *(undefined4 *)(param_1 + 0x140) = uVar5;
  return;
}


