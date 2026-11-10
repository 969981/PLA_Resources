/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0332c498; name: FUN_0332c498
 */


/* WARNING: Removing unreachable block (ram,0x0332c618) */

void FUN_0332c498(long *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  uVar6 = *(uint *)((long)param_1 + 0xc);
  if (uVar6 != 1) {
    if (uVar6 == 0x200) {
      *(undefined4 *)((long)param_1 + 0xc) = 0x100;
    }
    else {
      if ((uVar6 & 0x102) != 0) {
        FUN_0332c35c(param_1);
        uVar6 = *(uint *)((long)param_1 + 0xc);
      }
      if (uVar6 == 0x20) {
        iVar2 = *(int *)(*param_1 + 0x90);
        uVar6 = *(uint *)(*param_1 + 0x40);
        if (-1 < iVar2) {
          iVar7 = 0;
          do {
            uVar6 = uVar6 >> 0x15;
            if (*(int *)((long)param_1 + 0x14) < (int)uVar6) goto LAB_0332c604;
            DataMemoryBarrier(2,2);
            Yield();
            uVar6 = *(uint *)(*param_1 + 0x40);
            if (*(long *)(*param_1 + 0x80) != 0) {
              iVar7 = iVar7 + 1;
            }
          } while (iVar7 <= iVar2);
        }
        uVar8 = uVar6 >> 0x15;
        if ((int)uVar8 <= *(int *)((long)param_1 + 0x14)) {
          do {
            puVar1 = (uint *)(*param_1 + 0x40);
            uVar3 = *puVar1;
            if (uVar3 == uVar6) {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar5) {
                *puVar1 = uVar6 & 0xffe00000 |
                          uVar6 & 0x3fff | (uVar6 + 0x4000 >> 0xe & 0x7f) << 0xe;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 != '\0') goto LAB_0332c598;
              nn::os::AcquireSemaphore
                        (*(SemaphoreType **)
                          (*param_1 + ((ulong)(*(uint *)((long)param_1 + 0x14) >> 1) & 1) * 8 + 0x80
                          ));
              uVar6 = *(uint *)(*param_1 + 0x40) >> 0x15;
LAB_0332c604:
              *(uint *)(param_1 + 1) = uVar6;
              goto LAB_0332c688;
            }
            ClearExclusiveLocal();
LAB_0332c598:
            DataMemoryBarrier(2,2);
            Yield();
            uVar8 = uVar3 >> 0x15;
            uVar6 = uVar3;
          } while ((int)uVar8 <= *(int *)((long)param_1 + 0x14));
        }
        *(uint *)(param_1 + 1) = uVar8;
      }
      else if (uVar6 == 0x10) {
        puVar1 = (uint *)(*param_1 + 0x40);
        uVar8 = *(uint *)(*param_1 + 0x40);
        uVar3 = *puVar1;
        uVar6 = (uVar8 >> 0x15) + 1;
        if (uVar3 != uVar8) {
          ClearExclusiveLocal();
          uVar9 = uVar3;
          goto LAB_0332c628;
        }
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = uVar6 * 0x200000 | uVar8 & 0x7f;
          cVar4 = ExclusiveMonitorsStatus();
        }
        while (uVar9 = uVar3, cVar4 != '\0') {
LAB_0332c628:
          while( true ) {
            puVar1 = (uint *)(*param_1 + 0x40);
            uVar3 = *puVar1;
            uVar6 = (uVar9 >> 0x15) + 1;
            if (uVar3 == uVar9) break;
            ClearExclusiveLocal();
            uVar9 = uVar3;
          }
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          uVar8 = uVar9;
          if (bVar5) {
            *puVar1 = uVar9 & 0x7f | uVar6 * 0x200000;
            cVar4 = ExclusiveMonitorsStatus();
          }
        }
        uVar8 = uVar8 >> 0xe & 0x7f;
        *(uint *)(param_1 + 1) = uVar6 & 0x7ff;
        if (uVar8 != 0) {
          nn::os::ReleaseSemaphore
                    (*(SemaphoreType **)
                      (*param_1 + ((ulong)(*(uint *)((long)param_1 + 0x14) >> 1) & 1) * 8 + 0x80),
                     uVar8);
        }
      }
LAB_0332c688:
      *(undefined4 *)((long)param_1 + 0xc) = 0x100;
      *(int *)((long)param_1 + 0x14) = *(int *)((long)param_1 + 0x14) + 1;
    }
  }
  return;
}


