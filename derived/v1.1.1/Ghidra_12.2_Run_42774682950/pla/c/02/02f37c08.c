/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f37c08; name: FUN_02f37c08
 */


undefined8 FUN_02f37c08(long *param_1,long param_2,undefined8 param_3,uint param_4)

{
  MutexType *pMVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  byte bVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  uint uVar14;
  
  lVar5 = (*DAT_0442d138)(0,0x88);
  if (lVar5 != 0) {
    FUN_02f3d038(lVar5,param_1,param_2,param_3,param_4 & 1);
    plVar6 = (long *)(**(code **)(*param_1 + 0xd0))(param_1);
    if (plVar6 != (long *)0x0) {
      uVar7 = (**(code **)(*plVar6 + 0x130))(plVar6,1);
      if ((uVar7 & 1) != 0) {
        lVar8 = plVar6[0xf];
        if ((lVar8 != 0) && (bVar9 = *(byte *)(lVar8 + 0x98), (bVar9 >> 1 & 1) == 0)) {
          plVar12 = (long *)&DAT_0440ad60;
          do {
            plVar13 = (long *)*plVar12;
            plVar12 = plVar13 + 8;
          } while (plVar13 != (long *)0x0 && plVar13 != plVar6);
          if (plVar13 == (long *)0x0) {
            plVar6[8] = 0;
            if (DAT_0440ad60 == (long *)0x0) {
              DAT_0440ad60 = plVar6;
            }
            else {
              DAT_0440ad58[8] = (long)plVar6;
              lVar8 = plVar6[0xf];
            }
            DAT_0440ad50 = DAT_0440ad50 + 1;
            bVar9 = *(byte *)(lVar8 + 0x98);
            DAT_0440ad58 = plVar6;
          }
          *(byte *)(lVar8 + 0x98) = bVar9 | 2;
        }
        if (DAT_0442c008 == (long *)0x0) {
          DAT_0442c000 = param_1;
        }
        plVar6 = param_1;
        param_1[0xe] = (long)DAT_0442c008;
        DAT_0442c008 = plVar6;
        param_1[0xc] = lVar5;
        plVar6 = DAT_0440a170;
        uVar14 = *(uint *)(param_2 + 0x14);
        if (uVar14 == 0) {
          return 2;
        }
        pMVar1 = (MutexType *)(DAT_0440a170 + 3);
        nn::os::LockMutex(pMVar1);
        uVar2 = *(uint *)(plVar6 + 1);
        if (uVar2 != 0) {
          uVar3 = 0;
          if (uVar2 != 0) {
            uVar3 = uVar14 / uVar2;
          }
          for (lVar5 = *(long *)(*plVar6 + (ulong)(uVar14 - uVar3 * uVar2) * 8); lVar5 != 0;
              lVar5 = *(long *)(lVar5 + 0x68)) {
            if (*(uint *)(lVar5 + 0x4c) == uVar14) {
              uVar14 = *(uint *)(lVar5 + 0x60);
              *(int *)(lVar5 + 0x20) = *(int *)(lVar5 + 0x20) + 1;
              goto LAB_02f37d68;
            }
          }
        }
        uVar14 = 0;
LAB_02f37d68:
        nn::os::UnlockMutex(pMVar1);
        *(uint *)(param_1 + 4) = uVar14;
        if (((uVar14 >> 0x15 & 1) != 0) &&
           (iVar4 = FUN_02f52adc(&DAT_0442c010,*(undefined4 *)(param_2 + 0x14)), iVar4 != 1)) {
          *(uint *)(param_1 + 4) = uVar14 & 0xffdfffff;
        }
        FUN_02edd1bc(DAT_0440a170,*(undefined4 *)(param_2 + 0x14));
        return 1;
      }
      (**(code **)(*plVar6 + 0x138))(plVar6,1);
      lVar8 = plVar6[0xf];
      if (((lVar8 != 0) && (bVar9 = *(byte *)(lVar8 + 0x98), (bVar9 >> 1 & 1) != 0)) &&
         (*(short *)(lVar8 + 0x94) == 0)) {
        plVar13 = (long *)&DAT_0440ad60;
        plVar12 = (long *)&DAT_0440ad60;
        plVar11 = (long *)0x0;
        do {
          plVar10 = plVar11;
          plVar11 = (long *)*plVar12;
          plVar12 = plVar11 + 8;
        } while (plVar11 != (long *)0x0 && plVar11 != plVar6);
        if (plVar11 != (long *)0x0) {
          if (DAT_0440ad60 != plVar11) {
            plVar13 = plVar10 + 8;
          }
          *plVar13 = plVar11[8];
          if (DAT_0440ad58 == plVar11) {
            DAT_0440ad58 = plVar10;
          }
          DAT_0440ad50 = DAT_0440ad50 + -1;
          lVar8 = plVar6[0xf];
          bVar9 = *(byte *)(lVar8 + 0x98);
        }
        *(byte *)(lVar8 + 0x98) = bVar9 & 0xfd;
      }
    }
    FUN_02f3d164(lVar5);
    (*DAT_0442d150)(0,lVar5);
  }
  return 2;
}


