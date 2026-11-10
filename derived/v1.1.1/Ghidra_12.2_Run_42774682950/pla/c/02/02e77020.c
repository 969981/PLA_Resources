/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e77020; name: FUN_02e77020
 */


undefined4
FUN_02e77020(uint param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 *param_6,undefined4 param_7)

{
  MutexType *pMVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined4 uVar6;
  char cVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  long *plVar12;
  
  lVar11 = DAT_0440a120;
  pMVar1 = (MutexType *)(DAT_0440a120 + 0xa8);
  nn::os::LockMutex(pMVar1);
  uVar5 = *(uint *)(lVar11 + 0xd0);
  if (uVar5 != 0) {
    uVar9 = 0;
    if (uVar5 != 0) {
      uVar9 = param_1 / uVar5;
    }
    for (plVar12 = *(long **)(*(long *)(lVar11 + 200) + (ulong)(param_1 - uVar9 * uVar5) * 8);
        plVar12 != (long *)0x0; plVar12 = (long *)plVar12[1]) {
      if (*(uint *)(plVar12 + 2) == param_1) {
        *(int *)((long)plVar12 + 0x14) = *(int *)((long)plVar12 + 0x14) + 1;
        nn::os::UnlockMutex(pMVar1);
        lVar11 = FUN_02e7de5c(DAT_0440a128,1,0x34);
        *(long **)(lVar11 + 0x28) = plVar12;
        *(uint *)(lVar11 + 0x30) = param_1;
        if (param_6 == (undefined8 *)0x0) {
          *(undefined4 *)(lVar11 + 0x24) = 0;
          *(undefined8 *)(lVar11 + 0x14) = 0;
          *(undefined8 *)(lVar11 + 0x1c) = 0;
        }
        else {
          uVar3 = *param_6;
          uVar4 = param_6[1];
          *(undefined4 *)(lVar11 + 0x24) = *(undefined4 *)(param_6 + 2);
          *(undefined8 *)(lVar11 + 0x14) = uVar3;
          *(undefined8 *)(lVar11 + 0x1c) = uVar4;
        }
        do {
          iVar10 = DAT_0440a308 + 1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(0x440a308,0x10);
          if (bVar8) {
            cVar7 = ExclusiveMonitorsStatus();
            DAT_0440a308 = iVar10;
          }
        } while (cVar7 != '\0');
        *(undefined8 *)(lVar11 + 4) = param_2;
        *(int *)(lVar11 + 0xc) = iVar10;
        *(undefined4 *)(lVar11 + 0x10) = param_7;
        iVar10 = FUN_02edcc24(DAT_0440a170,(undefined8 *)(lVar11 + 4),param_4,param_5,param_3,
                              *(undefined4 *)(*(long *)(lVar11 + 0x28) + 0x10));
        if (iVar10 == 1) {
          uVar6 = *(undefined4 *)(lVar11 + 0xc);
        }
        else {
          (**(code **)(*plVar12 + 0x18))(plVar12);
          uVar6 = 0;
          *(undefined2 *)(lVar11 + 2) = 0x3b;
        }
        piVar2 = (int *)(DAT_0440a128 + 0x9c);
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar8) {
            *piVar2 = *piVar2 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        return uVar6;
      }
    }
  }
  nn::os::UnlockMutex(pMVar1);
  return 0;
}


