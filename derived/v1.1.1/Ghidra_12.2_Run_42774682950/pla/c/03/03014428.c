/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03014428; name: FUN_03014428
 */


/* WARNING: Removing unreachable block (ram,0x03014548) */
/* WARNING: Removing unreachable block (ram,0x0301461c) */

void FUN_03014428(long param_1,ulong param_2)

{
  uint *puVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  MutexType *pMVar12;
  uint uVar13;
  
  pMVar12 = *(MutexType **)(param_1 + 0x40);
  nn::os::LockMutex(pMVar12);
  param_2 = param_2 & 0xffff;
  FUN_0301428c(param_1 + 0x30,param_1,param_2);
  uVar13 = (uint)param_2;
  if (((int)uVar13 < *(int *)(param_1 + 0x50)) &&
     (lVar6 = *(long *)(param_1 + 0x48), 0.0 <= *(float *)(lVar6 + param_2 * 0x50 + 0x28))) {
    if (*(long *)(lVar6 + param_2 * 0x50 + 8) != 0) {
      FUN_032d647c();
    }
    uVar7 = *(ulong *)(lVar6 + param_2 * 0x50);
    if ((uVar7 & 1) != 0) {
      lVar6 = tpidr_el0;
      lVar11 = *(long *)(lVar6 + 0x38d490);
      if (lVar11 == 0) {
        lVar11 = FUN_0333d16c(0,1);
        *(long *)(lVar6 + 0x38d490) = lVar11;
      }
      plVar5 = *(long **)(*(long *)(lVar11 + 8) + 0x58);
      *(undefined8 *)(uVar7 - 0x11) = 0;
      (**(code **)(*plVar5 + 0x18))
                (plVar5,(undefined8 *)(uVar7 - 0x11),(long)*(int *)(uVar7 - 9) + 0x10);
    }
    puVar8 = (undefined8 *)(*(long *)(param_1 + 0x48) + param_2 * 0x50);
    puVar8[2] = 0;
    puVar8[3] = 0x3f003f000000;
    puVar8[8] = 0;
    puVar8[9] = 0;
    *puVar8 = 0;
    puVar8[1] = 0;
    puVar8[6] = 0;
    puVar8[7] = 0x40a00000;
    puVar8[4] = 0;
    puVar8[5] = 0x3f800000bf800000;
    *(undefined2 *)(puVar8 + 4) = 0x201;
    *(undefined4 *)((long)puVar8 + 0x24) = 0x3d4ccccd;
    *(undefined1 *)(puVar8 + 6) = 0;
    *(undefined2 *)((long)puVar8 + 0x32) = 0x3f80;
    uVar10 = *(uint *)(param_1 + 100);
    uVar9 = uVar10 & 0xffffff;
    puVar1 = (uint *)(param_1 + 100);
    if (uVar9 == 0xffffff) {
      uVar9 = 0xffffffff;
    }
    *(uint *)(*(long *)(param_1 + 0x48) + param_2 * 0x50 + 0x10) = uVar9;
    uVar9 = *puVar1;
    if (uVar9 != uVar10) {
      ClearExclusiveLocal();
      uVar10 = uVar9;
      goto LAB_030145dc;
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar4) {
      *puVar1 = uVar10 & 0xff000000 | uVar13;
      cVar3 = ExclusiveMonitorsStatus();
    }
    while (uVar10 = uVar9, cVar3 != '\0') {
LAB_030145dc:
      while( true ) {
        uVar9 = 0xffffffff;
        if ((uVar10 & 0xffffff) != 0xffffff) {
          uVar9 = uVar10 & 0xffffff;
        }
        *(uint *)(*(long *)(param_1 + 0x48) + param_2 * 0x50 + 0x10) = uVar9;
        uVar9 = *puVar1;
        if (uVar9 == uVar10) break;
        ClearExclusiveLocal();
        uVar10 = uVar9;
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar10 & 0xff000000 | uVar13;
        cVar3 = ExclusiveMonitorsStatus();
      }
    }
    piVar2 = (int *)(param_1 + 0x68);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = *piVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  nn::os::UnlockMutex(pMVar12);
  return;
}


