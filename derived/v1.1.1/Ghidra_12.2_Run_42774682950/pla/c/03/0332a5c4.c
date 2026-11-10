/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0332a5c4; name: FUN_0332a5c4
 */


void FUN_0332a5c4(long param_1)

{
  int *piVar1;
  int *piVar2;
  ulong *puVar3;
  SemaphoreType *pSVar4;
  long lVar5;
  int iVar6;
  char cVar7;
  bool bVar8;
  ulong uVar9;
  SemaphoreType *pSVar10;
  int *piVar11;
  ulong uVar12;
  ulong uVar13;
  int iVar14;
  
  DataMemoryBarrier(2,3);
  iVar14 = *(int *)(param_1 + 0x30);
  if (iVar14 != *(int *)(param_1 + 0x28)) {
    piVar1 = (int *)(param_1 + 0x30);
    do {
      iVar6 = *piVar1;
      if (iVar6 == iVar14) {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar8) {
          *piVar1 = iVar14 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
        if (cVar7 == '\0') {
          lVar5 = *(long *)(param_1 + 0x20) + (long)iVar14 * 0x80;
          nn::os::LockMutex((MutexType *)(lVar5 + 0x28));
          piVar11 = (int *)(lVar5 + 0x20);
          iVar6 = *piVar11;
          if (iVar6 == 0) {
            piVar2 = (int *)(param_1 + 0x50);
            *piVar11 = 1;
            do {
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar8) {
                *piVar2 = *piVar2 + 1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            cVar7 = *(char *)(lVar5 + 0x1d);
            if (cVar7 != '\x02') goto LAB_0332a730;
            pSVar10 = (SemaphoreType *)(lVar5 + 0x50);
LAB_0332a67c:
            nn::os::ReleaseSemaphore(pSVar10,1);
          }
          else {
            if (iVar6 != 3) {
              if (iVar6 != 5) {
                do {
                    /* WARNING: Do nothing block with infinite loop */
                } while( true );
              }
              pSVar10 = *(SemaphoreType **)(param_1 + 0x48);
              pSVar4 = pSVar10 + 0x2c;
              do {
                iVar6 = *(int *)pSVar4;
                cVar7 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(pSVar4,0x10);
                if (bVar8) {
                  *(int *)pSVar4 = iVar6 + 1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              *(int *)(*(long *)(pSVar10 + 0x30) + (long)iVar6 * 4) = iVar14;
              goto LAB_0332a67c;
            }
            *piVar11 = 4;
            cVar7 = *(char *)(lVar5 + 0x1d);
LAB_0332a730:
            if (cVar7 == '\x01') {
              FUN_032ba220(*(undefined8 *)(lVar5 + 0x10),2);
            }
          }
          nn::os::UnlockMutex((MutexType *)(lVar5 + 0x28));
          if (*(long *)(param_1 + 0x58) != 0) {
            uVar12 = *(ulong *)(param_1 + 0x60);
            uVar9 = nn::os::GetSystemTick();
            if (uVar12 < uVar9) {
              puVar3 = (ulong *)(param_1 + 0x60);
              do {
                uVar13 = *puVar3;
                if (uVar13 == uVar12) {
                  cVar7 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(puVar3,0x10);
                  if (bVar8) {
                    *puVar3 = uVar9;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                  if (cVar7 == '\0') break;
                }
                else {
                  ClearExclusiveLocal();
                }
                uVar12 = uVar13;
              } while (uVar13 < uVar9);
            }
          }
          iVar6 = iVar14 + 1;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar14 = iVar6;
    } while (iVar14 != *(int *)(param_1 + 0x28));
  }
  return;
}


