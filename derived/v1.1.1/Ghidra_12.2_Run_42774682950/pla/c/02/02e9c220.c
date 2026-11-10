/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e9c220; name: FUN_02e9c220
 */


/* WARNING: Type propagation algorithm not settling */

ulong FUN_02e9c220(undefined4 param_1,long *param_2,undefined8 param_3,uint param_4,
                  undefined4 *param_5,undefined8 param_6,undefined8 param_7)

{
  MutexType *pMVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ushort uVar5;
  uint uVar6;
  float fVar7;
  long lVar8;
  bool bVar9;
  uint uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  uint uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  long lVar16;
  undefined4 *puVar17;
  float fVar18;
  float fVar19;
  
  *(undefined4 *)(param_2 + 0x2f) = param_1;
  if ((*(byte *)(param_2 + 0x30) >> 6 & 1) == 0) {
    FUN_02edac28(param_2[0x2d],param_2 + 2,param_2 + 0x20,param_2 + 0x24);
    if ((((*(byte *)((long)param_2 + 0x10c) >> 3 & 1) == 0) ||
        (1 < (ushort)((*(ushort *)((long)param_2 + 0x134) & 7) - 1))) || (param_2[0x2c] != 0)) {
      lVar16 = param_2[0x27];
      goto joined_r0x02e9c5ac;
    }
    lVar16 = param_2[0x2d];
    if ((*(long *)(lVar16 + 0x80) != 0) &&
       (lVar8 = *(long *)(lVar16 + 0x80), (*(uint *)(lVar16 + 0xa0) & 0x20000ffe) == 0)) {
      do {
        lVar16 = lVar8;
        lVar8 = *(long *)(lVar16 + 0x80);
      } while (*(long *)(lVar16 + 0x80) != 0 && (*(uint *)(lVar16 + 0xa0) & 0x20000ffe) == 0);
    }
    if (*(long *)(lVar16 + 0x70) == 0) {
      param_2[0x2c] = 0;
      lVar16 = param_2[0x27];
      goto joined_r0x02e9c5ac;
    }
    puVar12 = (undefined8 *)(*DAT_0442d138)(5,0x38);
    if (puVar12 != (undefined8 *)0x0) {
      puVar12[5] = 0;
      puVar12[6] = 0;
      *puVar12 = 0;
      puVar12[3] = 0;
      puVar12[4] = 0;
      puVar12[1] = 0;
      puVar12[2] = 0;
      puVar14 = *(undefined8 **)(lVar16 + 0x70);
      uVar3 = puVar14[1];
      uVar15 = puVar14[2];
      *puVar12 = *puVar14;
      puVar12[1] = uVar3;
      puVar12[2] = uVar15;
      uVar3 = puVar14[3];
      uVar15 = puVar14[4];
      uVar4 = puVar14[6];
      puVar12[5] = puVar14[5];
      puVar12[6] = uVar4;
      puVar12[3] = uVar3;
      puVar12[4] = uVar15;
    }
    param_2[0x2c] = (long)puVar12;
    lVar16 = param_2[0x27];
    if (lVar16 == 0) goto LAB_02e9c490;
LAB_02e9c2a0:
    *(undefined4 *)(param_2 + 0x25) = *(undefined4 *)(lVar16 + 0x20);
    *(undefined4 *)((long)param_2 + 300) = *(undefined4 *)(lVar16 + 0x24);
    *(undefined4 *)(param_2 + 0x26) = *(undefined4 *)(lVar16 + 0x28);
    if (((*(byte *)(param_2 + 0x30) >> 6 & 1) == 0) && (*(int *)(lVar16 + 0xe8) != 0)) {
      puVar17 = *(undefined4 **)(lVar16 + 0xe0);
      do {
        iVar2 = 0;
        if (puVar17[8] != 0) {
          iVar2 = puVar17[8] + -2;
        }
        uVar11 = FUN_02edff20(DAT_0440a160,param_2,*puVar17,puVar17[1],puVar17[2],puVar17[3],
                              puVar17[4],puVar17[9],*(long *)(puVar17 + 6) + 0xc,iVar2,param_2 + 2,0
                              ,1);
        if ((int)uVar11 != 1) {
          return uVar11;
        }
        puVar17 = puVar17 + 0xc;
      } while (puVar17 !=
               (undefined4 *)(*(long *)(lVar16 + 0xe0) + (ulong)*(uint *)(lVar16 + 0xe8) * 0x30));
    }
LAB_02e9c2c8:
    lVar16 = param_2[0x2c];
  }
  else {
    param_2[0x20] = 0x3f8000003f000000;
    *(undefined4 *)(param_2 + 0x21) = 0x42c80000;
    *(byte *)((long)param_2 + 0x10c) = *(byte *)((long)param_2 + 0x10c) & 0xf0;
    lVar16 = param_2[0x27];
joined_r0x02e9c5ac:
    if (lVar16 != 0) goto LAB_02e9c2a0;
LAB_02e9c490:
    lVar16 = DAT_0440a120;
    uVar10 = *(uint *)((long)param_2 + 0x124);
    if (uVar10 == 0) goto LAB_02e9c2c8;
    pMVar1 = (MutexType *)(DAT_0440a120 + 0x150);
    nn::os::LockMutex(pMVar1);
    uVar13 = *(uint *)(lVar16 + 0x178);
    if (uVar13 != 0) {
      uVar6 = 0;
      if (uVar13 != 0) {
        uVar6 = uVar10 / uVar13;
      }
      for (lVar16 = *(long *)(*(long *)(lVar16 + 0x170) + (ulong)(uVar10 - uVar6 * uVar13) * 8);
          lVar16 != 0; lVar16 = *(long *)(lVar16 + 8)) {
        if (*(uint *)(lVar16 + 0x10) == uVar10) {
          *(int *)(lVar16 + 0x14) = *(int *)(lVar16 + 0x14) + 1;
          nn::os::UnlockMutex(pMVar1);
          param_2[0x27] = lVar16;
          goto LAB_02e9c2a0;
        }
      }
    }
    nn::os::UnlockMutex(pMVar1);
    param_2[0x27] = 0;
    lVar16 = param_2[0x2c];
  }
  if ((lVar16 != 0) && (param_2[0x1e] == 0)) {
    uVar10 = FUN_02e9c708(param_2,param_3);
    if (uVar10 != 1) {
      uVar5 = *(ushort *)(param_2 + 0x30);
      goto joined_r0x02e9c654;
    }
    if (param_2[0x1e] != 0) {
      uVar10 = FUN_02edc598(DAT_0440a158,param_2[0x1e],param_2);
      if (uVar10 == 2) {
        param_2[0x1e] = 0;
        uVar5 = *(ushort *)(param_2 + 0x30);
      }
      else {
        (**(code **)(*param_2 + 0x60))(param_2,param_2[0x1e]);
        uVar5 = *(ushort *)(param_2 + 0x30);
      }
      goto joined_r0x02e9c654;
    }
  }
  uVar10 = 1;
  uVar5 = *(ushort *)(param_2 + 0x30);
joined_r0x02e9c654:
  if ((uVar5 & 1) == 0) {
    (**(code **)(*param_2 + 0x50))(param_2,param_6);
  }
  else if ((uVar5 >> 4 & 1) != 0) {
    (**(code **)(*param_2 + 0x58))(param_2);
  }
  fVar7 = DAT_042ac988;
  if (*(float *)(param_2 + 0xc) * 0.05 < -37.0) {
    fVar18 = 0.0;
  }
  else {
    uVar13 = (uint)(*(float *)(param_2 + 0xc) * 1393317.6 + 1.0653532e+09);
    fVar18 = (float)(uVar13 & 0x7fffff | 0x3f800000);
    fVar18 = (fVar18 * (fVar18 * 0.32518977 + 0.020805772) + 0.65304345) *
             (float)(uVar13 & 0xff800000);
  }
  fVar19 = *(float *)(param_2 + 0x19);
  bVar9 = uVar10 == 1;
  *(bool *)param_7 = fVar19 * fVar18 <= DAT_042ac988;
  if (bVar9 && (param_4 & 1) == 0) {
    uVar10 = 1;
  }
  uVar11 = (ulong)uVar10;
  if ((bVar9 && (param_4 & 1) == 0) && (fVar19 * fVar18 <= fVar7)) {
    if ((*(byte *)(param_2 + 0x30) >> 6 & 1) == 0) {
      uVar11 = 3;
      *param_5 = 0x29;
    }
    else {
      uVar11 = 1;
    }
  }
  return uVar11;
}


