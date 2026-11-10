/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031c4e70; name: FUN_031c4e70
 */


void FUN_031c4e70(undefined8 *param_1,long param_2,uint param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  MutexType *pMVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  
  lVar3 = tpidr_el0;
  lVar10 = *(long *)(lVar3 + 0x38d490);
  if (lVar10 == 0) {
    lVar10 = FUN_0333d16c(0,1);
    *(long *)(lVar3 + 0x38d490) = lVar10;
  }
  plVar4 = *(long **)(*(long *)(lVar10 + 8) + 0x58);
  puVar5 = (undefined8 *)(**(code **)(*plVar4 + 0x10))(plVar4,0x30,0);
  *puVar5 = &PTR_LAB_0430b710;
  puVar5[1] = 0xffffffff;
  puVar5[2] = 1;
  puVar5[3] = 0;
  puVar5[4] = 0x8000000000000000;
  lVar10 = *(long *)(lVar3 + 0x38d490);
  if (lVar10 == 0) {
    lVar10 = FUN_0333d16c(0,1);
    *(long *)(lVar3 + 0x38d490) = lVar10;
  }
  plVar4 = *(long **)(*(long *)(lVar10 + 8) + 0x58);
  pMVar6 = (MutexType *)(**(code **)(*plVar4 + 0x10))(plVar4,0x20,0);
  nn::os::InitializeMutex(pMVar6,true,0);
  puVar5[5] = pMVar6;
  *param_1 = puVar5;
  iVar9 = *(int *)(param_2 + 0x20);
  if ((int)(*(uint *)((long)puVar5 + 0x24) & 0x3fffffff) < iVar9) {
    uVar7 = FUN_031c5dd8(PTR_PTR_0434a080,iVar9,puVar5[3],*(undefined4 *)(puVar5 + 4),
                         (long)puVar5 + 0x24);
    puVar5[3] = uVar7;
    iVar9 = *(int *)(param_2 + 0x20);
  }
  if (0 < iVar9) {
    lVar10 = 0;
    do {
      lVar11 = *(long *)(*(long *)(param_2 + 0x18) + lVar10 * 8);
      if (lVar11 == 0) {
        iVar9 = *(int *)(puVar5 + 4);
        *(undefined8 *)(puVar5[3] + (long)iVar9 * 8) = 0;
        *(int *)(puVar5 + 4) = iVar9 + 1;
      }
      else if ((1 << (ulong)((uint)lVar10 & 0x1f) & param_3) == 0) {
        lVar11 = *(long *)(lVar3 + 0x38d490);
        if (lVar11 == 0) {
          lVar11 = FUN_0333d16c(0,1);
          *(long *)(lVar3 + 0x38d490) = lVar11;
        }
        plVar4 = *(long **)(*(long *)(lVar11 + 8) + 0x58);
        plVar4 = (long *)(**(code **)(*plVar4 + 0x10))(plVar4,0x60,0);
        *plVar4 = (long)&PTR_LAB_04305d88;
        plVar4[1] = 0xffffffff;
        plVar12 = plVar4 + 2;
        *plVar12 = 1;
        *(char *)(plVar4 + 3) = (char)lVar10;
        plVar4[4] = 0;
        plVar4[5] = -0x8000000000000000;
        plVar4[6] = 0;
        plVar4[7] = -0x8000000000000000;
        plVar4[8] = 0;
        plVar4[9] = -0x8000000000000000;
        plVar4[10] = 0;
        plVar4[0xb] = -0x8000000000000000;
        iVar9 = *(int *)(puVar5 + 4) + 1;
        *(long **)(puVar5[3] + (long)*(int *)(puVar5 + 4) * 8) = plVar4;
        if (plVar4 == (long *)0x0) {
          *(int *)(puVar5 + 4) = iVar9;
        }
        else {
          if (plVar4[1] != 0) {
            do {
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
              if (bVar2) {
                *plVar12 = *plVar12 + 1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
          *(int *)(puVar5 + 4) = iVar9;
          if (plVar4[1] != 0) {
            do {
              lVar11 = *plVar12 + -1;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
              if (bVar2) {
                *plVar12 = lVar11;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            goto LAB_031c5060;
          }
        }
      }
      else {
        iVar9 = *(int *)(puVar5 + 4);
        *(long *)(puVar5[3] + (long)iVar9 * 8) = lVar11;
        if (*(long *)(lVar11 + 8) != 0) {
          plVar4 = (long *)(lVar11 + 0x10);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar2) {
              *plVar4 = *plVar4 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        *(int *)(puVar5 + 4) = iVar9 + 1;
        lVar11 = *(long *)(lVar3 + 0x38d490);
        if (lVar11 == 0) {
          lVar11 = FUN_0333d16c(0,1);
          *(long *)(lVar3 + 0x38d490) = lVar11;
        }
        plVar4 = *(long **)(*(long *)(lVar11 + 8) + 0x58);
        puVar8 = (undefined8 *)(**(code **)(*plVar4 + 0x10))(plVar4,0x60,0);
        *puVar8 = &PTR_LAB_04305d88;
        puVar8[1] = 0xffffffff;
        puVar8[2] = 1;
        *(char *)(puVar8 + 3) = (char)lVar10;
        puVar8[4] = 0;
        puVar8[5] = 0x8000000000000000;
        puVar8[6] = 0;
        puVar8[7] = 0x8000000000000000;
        puVar8[8] = 0;
        puVar8[9] = 0x8000000000000000;
        puVar8[10] = 0;
        puVar8[0xb] = 0x8000000000000000;
        plVar4 = *(long **)(*(long *)(param_2 + 0x18) + lVar10 * 8);
        *(undefined8 **)(*(long *)(param_2 + 0x18) + lVar10 * 8) = puVar8;
        if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
          plVar12 = plVar4 + 2;
          do {
            lVar11 = *plVar12 + -1;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar2) {
              *plVar12 = lVar11;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
LAB_031c5060:
          if (lVar11 == 0) {
            (**(code **)(*plVar4 + 0x18))();
          }
        }
      }
      lVar10 = lVar10 + 1;
    } while (lVar10 < *(int *)(param_2 + 0x20));
  }
  return;
}


