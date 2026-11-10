/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e737b0; name: FUN_02e737b0
 */


void FUN_02e737b0(long param_1,long *param_2,long param_3)

{
  MutexType *pMVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  char cVar6;
  ushort uVar7;
  uint uVar8;
  long lVar9;
  bool bVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined4 local_a4;
  
  lVar14 = DAT_0440a120;
  uVar7 = *(ushort *)(param_1 + 0x134);
  fVar21 = 0.0;
  if ((uVar7 >> 6 & 1) == 0) {
LAB_02e73a18:
    plVar12 = (long *)0x0;
    plVar11 = (long *)0x0;
  }
  else {
    lVar13 = *(long *)(param_1 + 0x138);
    if (lVar13 == 0) {
      uVar2 = *(uint *)(param_1 + 0x124);
      if (uVar2 == 0) goto LAB_02e73a18;
      pMVar1 = (MutexType *)(DAT_0440a120 + 0x150);
      nn::os::LockMutex(pMVar1);
      uVar3 = *(uint *)(lVar14 + 0x178);
      if (uVar3 != 0) {
        uVar8 = 0;
        if (uVar3 != 0) {
          uVar8 = uVar2 / uVar3;
        }
        for (lVar13 = *(long *)(*(long *)(lVar14 + 0x170) + (ulong)(uVar2 - uVar8 * uVar3) * 8);
            lVar13 != 0; lVar13 = *(long *)(lVar13 + 8)) {
          if (*(uint *)(lVar13 + 0x10) == uVar2) {
            *(int *)(lVar13 + 0x14) = *(int *)(lVar13 + 0x14) + 1;
            nn::os::UnlockMutex(pMVar1);
            *(long *)(param_1 + 0x138) = lVar13;
            goto LAB_02e73800;
          }
        }
      }
      nn::os::UnlockMutex(pMVar1);
      plVar12 = (long *)0x0;
      plVar11 = (long *)0x0;
      *(undefined8 *)(param_1 + 0x138) = 0;
    }
    else {
LAB_02e73800:
      if (((ulong)*(byte *)(lVar13 + 0xdb) == 0xff) ||
         (plVar11 = (long *)(lVar13 + (ulong)*(byte *)(lVar13 + 0xdb) * 0x18 + 0x30), *plVar11 == 0)
         ) {
        plVar11 = (long *)0x0;
      }
      if (((ulong)*(byte *)(lVar13 + 0xdc) == 0xff) ||
         (plVar12 = (long *)(lVar13 + (ulong)*(byte *)(lVar13 + 0xdc) * 0x18 + 0x30), *plVar12 == 0)
         ) {
        plVar12 = (long *)0x0;
        bVar5 = *(byte *)(lVar13 + 0xdf);
      }
      else {
        bVar5 = *(byte *)(lVar13 + 0xdf);
      }
      if ((bVar5 & 1) != 0) {
        fVar19 = *(float *)(param_1 + 300);
        fVar21 = *(float *)(param_1 + 0x130);
        goto LAB_02e73844;
      }
    }
  }
  fVar19 = 0.0;
LAB_02e73844:
  lVar14 = *(long *)(param_3 + 0xd0);
  if (*(long *)(param_1 + 0x170) == 0) {
    bVar10 = false;
    fVar24 = 100.0;
  }
  else {
    fVar24 = 100.0;
    bVar10 = false;
    if (((uVar7 >> 9 & 1) != 0) && (1 < (ushort)((uVar7 & 7) - 1))) {
      bVar10 = *(short *)(**(long **)(*(long *)(param_1 + 0x10) + 0x38) + 0x38) == 1;
      fVar24 = 0.0;
      if (!bVar10) {
        fVar24 = 100.0;
      }
    }
  }
  lVar13 = *param_2;
  fVar25 = 0.0;
  fVar23 = fVar24;
  do {
    if (lVar14 == *(long *)(lVar13 + 0x50)) {
      uVar20 = *(undefined4 *)(lVar13 + 0x24);
      fVar15 = 0.0;
      if (plVar11 != (long *)0x0) {
        local_a4 = (undefined4)plVar11[2];
        fVar15 = (float)FUN_02e74568(uVar20,plVar11,&local_a4);
        *(undefined4 *)(plVar11 + 2) = local_a4;
      }
      fVar16 = 0.0;
      if (plVar12 != (long *)0x0) {
        local_a4 = (undefined4)plVar12[2];
        fVar16 = (float)FUN_02e74568(uVar20,plVar12,&local_a4);
        *(undefined4 *)(plVar12 + 2) = local_a4;
      }
      lVar9 = DAT_0440a168;
      fVar18 = *(float *)(lVar13 + 0x5c) * fVar19;
      fVar22 = *(float *)(lVar13 + 0x5c) * fVar21;
      fVar17 = *(float *)(lVar13 + 0x3c);
      if (fVar15 <= fVar18) {
        fVar15 = fVar18;
      }
      if (((*(char *)(DAT_0440a168 + 4) != '\0') && (fVar17 != 0.0)) &&
         (*(long *)(DAT_0440a168 + 0x68) != 0)) {
        local_a4 = *(undefined4 *)(DAT_0440a168 + 0x78);
        fVar18 = (float)FUN_02e74568(DAT_0440a168 + 0x68,&local_a4);
        if (fVar15 <= fVar18) {
          fVar15 = fVar18;
        }
        *(undefined4 *)(lVar9 + 0x78) = local_a4;
      }
      lVar9 = DAT_0440a168;
      if (fVar16 <= fVar22) {
        fVar16 = fVar22;
      }
      if (((*(char *)(DAT_0440a168 + 5) == '\0') || (fVar17 == 0.0)) ||
         (*(long *)(DAT_0440a168 + 0x80) == 0)) {
        if (*(int *)(param_3 + 0x164) == 0) goto LAB_02e73958;
LAB_02e73990:
        *(float *)(lVar13 + 0x60) = fVar15;
        *(float *)(lVar13 + 100) = fVar16;
      }
      else {
        local_a4 = *(undefined4 *)(DAT_0440a168 + 0x90);
        fVar17 = (float)FUN_02e74568(DAT_0440a168 + 0x80,&local_a4);
        if (fVar16 <= fVar17) {
          fVar16 = fVar17;
        }
        *(undefined4 *)(lVar9 + 0x90) = local_a4;
        if (*(int *)(param_3 + 0x164) != 0) goto LAB_02e73990;
LAB_02e73958:
        lVar9 = DAT_0440a168;
        fVar17 = *(float *)(lVar13 + 0x40);
        if (((*(char *)(DAT_0440a168 + 1) == '\0') || (fVar17 == 0.0)) ||
           (*(long *)(DAT_0440a168 + 0x20) == 0)) {
          cVar6 = *(char *)(DAT_0440a168 + 2);
        }
        else {
          local_a4 = *(undefined4 *)(DAT_0440a168 + 0x30);
          fVar18 = (float)FUN_02e74568(fVar17,DAT_0440a168 + 0x20,&local_a4);
          if (fVar15 <= fVar18) {
            fVar15 = fVar18;
          }
          *(undefined4 *)(lVar9 + 0x30) = local_a4;
          cVar6 = *(char *)(DAT_0440a168 + 2);
          lVar9 = DAT_0440a168;
        }
        DAT_0440a168 = lVar9;
        if (((cVar6 == '\0') || (fVar17 == 0.0)) || (*(long *)(lVar9 + 0x38) == 0))
        goto LAB_02e73990;
        local_a4 = *(undefined4 *)(lVar9 + 0x48);
        fVar17 = (float)FUN_02e74568(lVar9 + 0x38,&local_a4);
        if (fVar16 <= fVar17) {
          fVar16 = fVar17;
        }
        *(undefined4 *)(lVar9 + 0x48) = local_a4;
        *(float *)(lVar13 + 0x60) = fVar15;
        *(float *)(lVar13 + 100) = fVar16;
      }
      if (bVar10) {
        iVar4 = *(int *)(param_3 + 0x164);
        if (iVar4 == 0) {
          fVar17 = *(float *)(lVar13 + 0x30);
        }
        else if (iVar4 == 2) {
          fVar17 = *(float *)(lVar13 + 0x38);
        }
        else {
          fVar17 = 1.0;
          if (iVar4 == 1) {
            fVar17 = *(float *)(lVar13 + 0x34);
          }
        }
        fVar18 = (float)NEON_fminnm(fVar15 * (fVar15 * (fVar15 * 9.302722e-07 + -0.00017546544) +
                                             -0.0011517591) + 0.9843052,0x3f800000);
        fVar22 = (float)NEON_fminnm(fVar16 * (fVar16 * fVar16 * -1.3191276e-10 + 0.0031678583) +
                                    0.98224795,0x3f800000);
        if (fVar22 <= 0.0) {
          fVar22 = 0.0;
        }
        if (fVar18 <= 0.0) {
          fVar18 = 0.0;
        }
        fVar18 = fVar18 * fVar22 * fVar17;
        fVar18 = fVar18 * fVar18;
        fVar25 = fVar18 + fVar25;
        fVar24 = fVar24 + fVar15 * fVar18;
        fVar23 = fVar23 + fVar16 * fVar18;
      }
      else {
        fVar24 = (float)NEON_fminnm(fVar24,fVar15);
        fVar23 = (float)NEON_fminnm(fVar23,fVar16);
      }
    }
    lVar13 = lVar13 + 0x68;
    if (lVar13 == *param_2 + (ulong)*(uint *)(param_2 + 1) * 0x68) {
      if (bVar10 && 0.0 < fVar25) {
        fVar23 = fVar23 / fVar25;
        fVar24 = fVar24 / fVar25;
      }
      fVar21 = *(float *)(param_3 + 0xd8);
      if (*(float *)(param_3 + 0xd8) <= fVar24) {
        fVar21 = fVar24;
      }
      *(float *)(param_3 + 0xd8) = fVar21;
      fVar21 = *(float *)(param_3 + 0xdc);
      if (*(float *)(param_3 + 0xdc) <= fVar23) {
        fVar21 = fVar23;
      }
      *(float *)(param_3 + 0xdc) = fVar21;
      return;
    }
  } while( true );
}


