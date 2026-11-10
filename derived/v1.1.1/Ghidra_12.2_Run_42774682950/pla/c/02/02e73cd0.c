/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e73cd0; name: FUN_02e73cd0
 */


void FUN_02e73cd0(long param_1,long *param_2)

{
  MutexType *pMVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  bool bVar5;
  char *pcVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  byte bVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 local_74;
  
  lVar15 = DAT_0440a120;
  if ((*(byte *)(param_1 + 0x134) >> 6 & 1) != 0) {
    lVar14 = *(long *)(param_1 + 0x138);
    if (lVar14 != 0) {
LAB_02e73d14:
      if (((ulong)*(byte *)(lVar14 + 0xd8) == 0xff) ||
         (plVar11 = (long *)(lVar14 + (ulong)*(byte *)(lVar14 + 0xd8) * 0x18 + 0x30), *plVar11 == 0)
         ) {
        plVar11 = (long *)0x0;
      }
      if (((ulong)*(byte *)(lVar14 + 0xd9) == 0xff) ||
         (plVar12 = (long *)(lVar14 + (ulong)*(byte *)(lVar14 + 0xd9) * 0x18 + 0x30), *plVar12 == 0)
         ) {
        plVar12 = (long *)0x0;
      }
      if (((ulong)*(byte *)(lVar14 + 0xda) == 0xff) ||
         (plVar13 = (long *)(lVar14 + (ulong)*(byte *)(lVar14 + 0xda) * 0x18 + 0x30), *plVar13 == 0)
         ) {
        plVar13 = (long *)0x0;
      }
      bVar5 = true;
      goto LAB_02e73d6c;
    }
    uVar9 = *(uint *)(param_1 + 0x124);
    if (uVar9 != 0) {
      pMVar1 = (MutexType *)(DAT_0440a120 + 0x150);
      nn::os::LockMutex(pMVar1);
      uVar2 = *(uint *)(lVar15 + 0x178);
      if (uVar2 != 0) {
        uVar4 = 0;
        if (uVar2 != 0) {
          uVar4 = uVar9 / uVar2;
        }
        for (lVar14 = *(long *)(*(long *)(lVar15 + 0x170) + (ulong)(uVar9 - uVar4 * uVar2) * 8);
            lVar14 != 0; lVar14 = *(long *)(lVar14 + 8)) {
          if (*(uint *)(lVar14 + 0x10) == uVar9) {
            *(int *)(lVar14 + 0x14) = *(int *)(lVar14 + 0x14) + 1;
            nn::os::UnlockMutex(pMVar1);
            *(long *)(param_1 + 0x138) = lVar14;
            goto LAB_02e73d14;
          }
        }
      }
      nn::os::UnlockMutex(pMVar1);
      *(undefined8 *)(param_1 + 0x138) = 0;
    }
  }
  bVar5 = false;
  lVar14 = 0;
  plVar13 = (long *)0x0;
  plVar12 = (long *)0x0;
  plVar11 = (long *)0x0;
LAB_02e73d6c:
  lVar15 = *param_2;
  if (DAT_0440a168[3] == '\0') {
    bVar7 = false;
    cVar3 = *DAT_0440a168;
  }
  else {
    bVar7 = *(long *)(DAT_0440a168 + 0x50) != 0;
    cVar3 = *DAT_0440a168;
  }
  if (cVar3 == '\0') {
    bVar8 = false;
  }
  else {
    bVar8 = *(long *)(DAT_0440a168 + 8) != 0;
  }
  if (bVar5) {
    bVar10 = *(byte *)(lVar14 + 0xdf) & 1;
  }
  else {
    bVar10 = 0;
  }
  do {
    pcVar6 = DAT_0440a168;
    if (bVar5) {
      uVar16 = 0x3f800000;
      if (plVar11 != (long *)0x0) {
        local_74 = (undefined4)plVar11[2];
        uVar16 = FUN_02e74568(*(undefined4 *)(lVar15 + 0x24),plVar11,&local_74);
        *(undefined4 *)(plVar11 + 2) = local_74;
        *(undefined4 *)(lVar15 + 0x30) = uVar16;
      }
      if (plVar12 != (long *)0x0) {
        uVar17 = uVar16;
        if (plVar12 != plVar11) {
          local_74 = (undefined4)plVar12[2];
          uVar17 = FUN_02e74568(*(undefined4 *)(lVar15 + 0x24),plVar12,&local_74);
          *(undefined4 *)(plVar12 + 2) = local_74;
        }
        *(undefined4 *)(lVar15 + 0x34) = uVar17;
      }
      if (plVar13 != (long *)0x0) {
        if (plVar13 != plVar11) {
          local_74 = (undefined4)plVar13[2];
          uVar16 = FUN_02e74568(*(undefined4 *)(lVar15 + 0x24),plVar13,&local_74);
          *(undefined4 *)(plVar13 + 2) = local_74;
        }
        *(undefined4 *)(lVar15 + 0x38) = uVar16;
      }
      pcVar6 = DAT_0440a168;
      if (bVar10 != 0) {
        fVar18 = *(float *)(lVar14 + 0x18);
        fVar19 = *(float *)(lVar15 + 0x28);
        if (fVar19 <= fVar18) {
          *(undefined4 *)(lVar15 + 0x5c) = 0;
          fVar18 = 1.0;
        }
        else {
          fVar20 = 1.0;
          if (fVar19 < *(float *)(lVar14 + 0x1c)) {
            fVar20 = (fVar19 - fVar18) / (*(float *)(lVar14 + 0x1c) - fVar18);
          }
          fVar19 = fVar20 * *(float *)(param_1 + 0x128);
          fVar18 = 0.0;
          *(float *)(lVar15 + 0x5c) = fVar20;
          if (-37.0 <= fVar19 * 0.05) {
            uVar9 = (uint)(fVar19 * 1393317.6 + 1.0653532e+09);
            fVar18 = (float)(uVar9 & 0x7fffff | 0x3f800000);
            fVar18 = (fVar18 * (fVar18 * 0.32518977 + 0.020805772) + 0.65304345) *
                     (float)(uVar9 & 0xff800000);
          }
        }
        *(float *)(lVar15 + 0x30) = *(float *)(lVar15 + 0x30) * fVar18;
        pcVar6 = DAT_0440a168;
      }
    }
    if ((bVar7) && (*(float *)(lVar15 + 0x3c) != 0.0)) {
      local_74 = *(undefined4 *)(pcVar6 + 0x60);
      DAT_0440a168 = pcVar6;
      fVar18 = (float)FUN_02e74568(pcVar6 + 0x50,&local_74);
      *(undefined4 *)(pcVar6 + 0x60) = local_74;
      *(float *)(lVar15 + 0x34) = *(float *)(lVar15 + 0x34) * fVar18;
      *(float *)(lVar15 + 0x30) = *(float *)(lVar15 + 0x30) * fVar18;
      *(float *)(lVar15 + 0x38) = *(float *)(lVar15 + 0x38) * fVar18;
      pcVar6 = DAT_0440a168;
    }
    DAT_0440a168 = pcVar6;
    if ((bVar8) && (*(float *)(lVar15 + 0x40) != 0.0)) {
      local_74 = *(undefined4 *)(pcVar6 + 0x18);
      fVar18 = (float)FUN_02e74568(pcVar6 + 8,&local_74);
      *(undefined4 *)(pcVar6 + 0x18) = local_74;
      *(float *)(lVar15 + 0x30) = *(float *)(lVar15 + 0x30) * fVar18;
    }
    lVar15 = lVar15 + 0x68;
  } while (lVar15 != *param_2 + (ulong)*(uint *)(param_2 + 1) * 0x68);
  return;
}


