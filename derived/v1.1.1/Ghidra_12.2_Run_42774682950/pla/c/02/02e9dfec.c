/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e9dfec; name: FUN_02e9dfec
 */


void FUN_02e9dfec(long *param_1)

{
  MutexType *pMVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  uint uVar7;
  long lVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined4 *puVar14;
  
  if ((*(byte *)(param_1 + 0x30) >> 5 & 1) != 0) {
    FUN_02e9c0e4();
    uVar6 = *(ushort *)(param_1 + 0x30);
    *(ushort *)(param_1 + 0x30) = uVar6 & 0xffdf;
    if ((uVar6 >> 6 & 1) == 0) {
      FUN_02edac28(param_1[0x2d],param_1 + 2,param_1 + 0x20,param_1 + 0x24);
      if ((((*(byte *)((long)param_1 + 0x10c) >> 3 & 1) != 0) &&
          ((ushort)((*(ushort *)((long)param_1 + 0x134) & 7) - 1) < 2)) && (param_1[0x2c] == 0)) {
        lVar13 = param_1[0x2d];
        if ((*(long *)(lVar13 + 0x80) != 0) &&
           (lVar8 = *(long *)(lVar13 + 0x80), (*(uint *)(lVar13 + 0xa0) & 0x20000ffe) == 0)) {
          do {
            lVar13 = lVar8;
            lVar8 = *(long *)(lVar13 + 0x80);
          } while (*(long *)(lVar13 + 0x80) != 0 && (*(uint *)(lVar13 + 0xa0) & 0x20000ffe) == 0);
        }
        if (*(long *)(lVar13 + 0x70) == 0) {
          puVar10 = (undefined8 *)0x0;
        }
        else {
          puVar10 = (undefined8 *)(*DAT_0442d138)(5,0x38);
          if (puVar10 != (undefined8 *)0x0) {
            puVar10[5] = 0;
            puVar10[6] = 0;
            *puVar10 = 0;
            puVar10[3] = 0;
            puVar10[4] = 0;
            puVar10[1] = 0;
            puVar10[2] = 0;
            puVar11 = *(undefined8 **)(lVar13 + 0x70);
            uVar2 = puVar11[1];
            uVar12 = puVar11[2];
            *puVar10 = *puVar11;
            puVar10[1] = uVar2;
            puVar10[2] = uVar12;
            uVar2 = puVar11[3];
            uVar12 = puVar11[4];
            uVar3 = puVar11[6];
            puVar10[5] = puVar11[5];
            puVar10[6] = uVar3;
            puVar10[3] = uVar2;
            puVar10[4] = uVar12;
          }
        }
        param_1[0x2c] = (long)puVar10;
      }
    }
    else {
      param_1[0x20] = 0x3f8000003f000000;
      *(undefined4 *)(param_1 + 0x21) = 0x42c80000;
      *(byte *)((long)param_1 + 0x10c) = *(byte *)((long)param_1 + 0x10c) & 0xf0;
    }
    if (((param_1[0x2c] != 0) && (param_1[0x1e] == 0)) &&
       ((iVar9 = FUN_02e9c708(param_1,0), iVar9 == 1 && (param_1[0x1e] != 0)))) {
      iVar9 = FUN_02edc598(DAT_0440a158,param_1[0x1e],param_1);
      if (iVar9 == 2) {
        param_1[0x1e] = 0;
      }
      else {
        (**(code **)(*param_1 + 0x60))(param_1,param_1[0x1e]);
        if ((iVar9 == 1) && (param_1[0x1e] != 0)) {
          lVar13 = param_1[0x2d];
          do {
            if (*(long *)(lVar13 + 0x70) != 0) {
              lVar13 = *(long *)(lVar13 + 0x70) + 0x38;
              goto LAB_02e9e340;
            }
            lVar13 = *(long *)(lVar13 + 0x80);
          } while (lVar13 != 0);
          lVar13 = 0;
LAB_02e9e340:
          FUN_02edc9e8(DAT_0440a158,param_1[0x1e],lVar13);
        }
      }
    }
    lVar8 = DAT_0440a120;
    lVar13 = param_1[0x27];
    if (lVar13 == 0) {
      uVar4 = *(uint *)((long)param_1 + 0x124);
      if (uVar4 != 0) {
        pMVar1 = (MutexType *)(DAT_0440a120 + 0x150);
        nn::os::LockMutex(pMVar1);
        uVar5 = *(uint *)(lVar8 + 0x178);
        if (uVar5 != 0) {
          uVar7 = 0;
          if (uVar5 != 0) {
            uVar7 = uVar4 / uVar5;
          }
          for (lVar13 = *(long *)(*(long *)(lVar8 + 0x170) + (ulong)(uVar4 - uVar7 * uVar5) * 8);
              lVar13 != 0; lVar13 = *(long *)(lVar13 + 8)) {
            if (*(uint *)(lVar13 + 0x10) == uVar4) {
              *(int *)(lVar13 + 0x14) = *(int *)(lVar13 + 0x14) + 1;
              nn::os::UnlockMutex(pMVar1);
              param_1[0x27] = lVar13;
              goto LAB_02e9e0f8;
            }
          }
        }
        nn::os::UnlockMutex(pMVar1);
        param_1[0x27] = 0;
      }
    }
    else {
LAB_02e9e0f8:
      *(undefined4 *)(param_1 + 0x25) = *(undefined4 *)(lVar13 + 0x20);
      *(undefined4 *)((long)param_1 + 300) = *(undefined4 *)(lVar13 + 0x24);
      *(undefined4 *)(param_1 + 0x26) = *(undefined4 *)(lVar13 + 0x28);
      if (((*(byte *)(param_1 + 0x30) >> 6 & 1) == 0) && (*(int *)(lVar13 + 0xe8) != 0)) {
        puVar14 = *(undefined4 **)(lVar13 + 0xe0);
        do {
          iVar9 = 0;
          if (puVar14[8] != 0) {
            iVar9 = puVar14[8] + -2;
          }
          iVar9 = FUN_02edff20(DAT_0440a160,param_1,*puVar14,puVar14[1],puVar14[2],puVar14[3],
                               puVar14[4],puVar14[9],*(long *)(puVar14 + 6) + 0xc,iVar9,param_1 + 2,
                               0,1);
        } while ((iVar9 == 1) &&
                (puVar14 = puVar14 + 0xc,
                puVar14 !=
                (undefined4 *)(*(long *)(lVar13 + 0xe0) + (ulong)*(uint *)(lVar13 + 0xe8) * 0x30)));
      }
    }
  }
  return;
}


