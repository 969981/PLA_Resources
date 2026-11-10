/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ece984; name: FUN_02ece984
 */


int FUN_02ece984(float param_1,long param_2)

{
  MutexType *pMVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  lVar6 = DAT_0440a120;
  fVar10 = *(float *)(param_2 + 0x2b4);
  lVar7 = *(long *)(param_2 + 0x150);
  if (lVar7 == 0) {
    uVar2 = *(uint *)(param_2 + 0x13c);
    if (uVar2 != 0) {
      pMVar1 = (MutexType *)(DAT_0440a120 + 0x150);
      nn::os::LockMutex(pMVar1);
      uVar3 = *(uint *)(lVar6 + 0x178);
      if (uVar3 != 0) {
        uVar4 = 0;
        if (uVar3 != 0) {
          uVar4 = uVar2 / uVar3;
        }
        for (lVar7 = *(long *)(*(long *)(lVar6 + 0x170) + (ulong)(uVar2 - uVar4 * uVar3) * 8);
            lVar7 != 0; lVar7 = *(long *)(lVar7 + 8)) {
          if (*(uint *)(lVar7 + 0x10) == uVar2) {
            *(int *)(lVar7 + 0x14) = *(int *)(lVar7 + 0x14) + 1;
            nn::os::UnlockMutex(pMVar1);
            *(long *)(param_2 + 0x150) = lVar7;
            goto LAB_02ece9ac;
          }
        }
      }
      nn::os::UnlockMutex(pMVar1);
      *(undefined8 *)(param_2 + 0x150) = 0;
    }
  }
  else {
LAB_02ece9ac:
    uVar5 = (ulong)*(byte *)(lVar7 + 0xd8);
    if ((uVar5 != 0xff) && (lVar6 = *(long *)(lVar7 + uVar5 * 0x18 + 0x30), lVar6 != 0)) {
      fVar8 = *(float *)(param_2 + 0x2b8);
      fVar9 = 0.0;
      if (fVar8 != 0.0) {
        fVar9 = *(float *)(lVar6 + (ulong)(*(int *)(lVar7 + uVar5 * 0x18 + 0x38) - 2) * 0xc);
        if ((fVar9 <= param_1) || (fVar9 <= 0.0)) {
          fVar9 = fVar8;
        }
        else {
          fVar9 = (fVar8 * param_1) / fVar9;
        }
      }
      fVar10 = (float)NEON_fminnm(fVar9 + fVar10,0x42c80000);
    }
  }
  return (int)fVar10;
}


