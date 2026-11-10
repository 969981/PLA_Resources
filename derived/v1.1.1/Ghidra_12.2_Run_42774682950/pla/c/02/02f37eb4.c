/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f37eb4; name: FUN_02f37eb4
 */


void FUN_02f37eb4(long *param_1)

{
  uint *puVar1;
  MutexType *pMVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  uint *puVar9;
  long lVar10;
  long lVar11;
  byte bVar12;
  long *plVar13;
  uint *puVar14;
  uint *puVar15;
  undefined8 *puVar16;
  long lVar17;
  uint uVar18;
  
  plVar13 = (long *)&DAT_0442c008;
  plVar7 = (long *)0x0;
  do {
    plVar6 = plVar7;
    plVar7 = (long *)*plVar13;
    plVar13 = plVar7 + 0xe;
  } while (plVar7 != (long *)0x0 && plVar7 != param_1);
  if (plVar7 != (long *)0x0) {
    plVar13 = (long *)&DAT_0442c008;
    if (DAT_0442c008 != plVar7) {
      plVar13 = plVar6 + 0xe;
    }
    *plVar13 = plVar7[0xe];
    if (DAT_0442c000 == plVar7) {
      lVar17 = param_1[0xc];
      DAT_0442c000 = plVar6;
      goto joined_r0x02f37f28;
    }
  }
  lVar17 = param_1[0xc];
joined_r0x02f37f28:
  if (lVar17 == 0) {
    return;
  }
  uVar18 = *(uint *)(lVar17 + 0x2c);
  if (uVar18 != 0) {
    if ((*(byte *)((long)param_1 + 0x22) >> 5 & 1) != 0) {
      nn::os::LockMutex((MutexType *)&DAT_0442c020);
      puVar14 = DAT_0442c010 + (ulong)DAT_0442c018 * 0xe;
      puVar15 = DAT_0442c010;
      if ((DAT_0442c018 != 0) && (*DAT_0442c010 != uVar18)) {
        lVar5 = (ulong)DAT_0442c018 * 0x38;
        puVar9 = DAT_0442c010;
        do {
          lVar5 = lVar5 + -0x38;
          if (lVar5 == 0) goto LAB_02f37f8c;
          puVar15 = puVar9 + 0xe;
          puVar1 = puVar9 + 0xe;
          puVar9 = puVar15;
        } while (*puVar1 != uVar18);
      }
      if (puVar14 != puVar15) {
        if (puVar15 < puVar14 + -0xe) {
          do {
            puVar9 = puVar15 + 0xe;
            *(undefined8 *)(puVar15 + 4) = *(undefined8 *)(puVar15 + 0x12);
            *(undefined8 *)(puVar15 + 6) = *(undefined8 *)(puVar15 + 0x14);
            *(undefined8 *)(puVar15 + 0xc) = *(undefined8 *)(puVar15 + 0x1a);
            *(undefined8 *)(puVar15 + 8) = *(undefined8 *)(puVar15 + 0x16);
            *(undefined8 *)(puVar15 + 10) = *(undefined8 *)(puVar15 + 0x18);
            *(undefined8 *)puVar15 = *(undefined8 *)puVar9;
            *(undefined8 *)(puVar15 + 2) = *(undefined8 *)(puVar15 + 0x10);
            puVar15 = puVar9;
          } while (puVar9 < puVar14 + -0xe);
        }
        DAT_0442c018 = DAT_0442c018 - 1;
      }
LAB_02f37f8c:
      nn::os::UnlockMutex((MutexType *)&DAT_0442c020);
      uVar18 = *(uint *)(lVar17 + 0x2c);
    }
    plVar13 = DAT_0440a170;
    pMVar2 = (MutexType *)(DAT_0440a170 + 3);
    nn::os::LockMutex(pMVar2);
    uVar3 = *(uint *)(plVar13 + 1);
    if (uVar3 != 0) {
      uVar4 = 0;
      if (uVar3 != 0) {
        uVar4 = uVar18 / uVar3;
      }
      for (lVar5 = *(long *)(*plVar13 + (ulong)(uVar18 - uVar4 * uVar3) * 8); lVar5 != 0;
          lVar5 = *(long *)(lVar5 + 0x68)) {
        if (*(uint *)(lVar5 + 0x4c) == uVar18) {
          *(int *)(lVar5 + 0x20) = *(int *)(lVar5 + 0x20) + -1;
          FUN_02edcd9c(plVar13,uVar18);
          goto LAB_02f37ff0;
        }
      }
    }
    nn::os::UnlockMutex(pMVar2);
LAB_02f37ff0:
    lVar5 = (**(code **)(*param_1 + 0xd0))(param_1);
    if (lVar5 != 0) {
      plVar13 = (long *)(**(code **)(*param_1 + 0xd0))(param_1);
      (**(code **)(*plVar13 + 0x138))(plVar13,1);
      lVar5 = (**(code **)(*param_1 + 0xd0))(param_1);
      lVar8 = *(long *)(lVar5 + 0x78);
      if (((lVar8 != 0) && (bVar12 = *(byte *)(lVar8 + 0x98), (bVar12 >> 1 & 1) != 0)) &&
         (*(short *)(lVar8 + 0x94) == 0)) {
        puVar16 = &DAT_0440ad60;
        plVar13 = &DAT_0440ad60;
        lVar11 = 0;
        do {
          lVar10 = lVar11;
          lVar11 = *plVar13;
          plVar13 = (long *)(lVar11 + 0x40);
        } while (lVar11 != 0 && lVar11 != lVar5);
        if (lVar11 != 0) {
          if (DAT_0440ad60 != lVar11) {
            puVar16 = (undefined8 *)(lVar10 + 0x40);
          }
          *puVar16 = *(undefined8 *)(lVar11 + 0x40);
          if (DAT_0440ad58 == lVar11) {
            DAT_0440ad58 = lVar10;
          }
          DAT_0440ad50 = DAT_0440ad50 + -1;
          lVar8 = *(long *)(lVar5 + 0x78);
          bVar12 = *(byte *)(lVar8 + 0x98);
        }
        *(byte *)(lVar8 + 0x98) = bVar12 & 0xfd;
      }
    }
  }
  FUN_02f3d164(lVar17);
                    /* WARNING: Could not recover jumptable at 0x02f38064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_0442d150)(0,lVar17);
  return;
}


