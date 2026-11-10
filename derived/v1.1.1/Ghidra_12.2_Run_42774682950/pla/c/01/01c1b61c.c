/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c1b61c; name: FUN_01c1b61c
 */


void FUN_01c1b61c(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  long *plVar11;
  float fVar12;
  long *local_58;
  long *local_48;
  
  puVar5 = PTR_DAT_0437a6e0;
  puVar4 = PTR_DAT_0437a6d8;
  lVar9 = *(long *)(param_1 + 0x290);
  if ((lVar9 != 0) && (*(int *)(lVar9 + 0xc) != 0)) {
    piVar1 = (int *)(lVar9 + 0xc);
    iVar10 = *(int *)(lVar9 + 0xc);
    do {
      plVar11 = *(long **)(lVar9 + 0x10);
      if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
        uVar7 = FUN_00ad3750();
        *(undefined8 *)puVar5 = uVar7;
        __cxa_guard_release(puVar4);
      }
      while( true ) {
        if (plVar11 == (long *)0x0) {
          return;
        }
        if (plVar11 == (long *)puVar5) break;
        plVar11 = (long *)*plVar11;
      }
      iVar6 = *piVar1;
      if (iVar6 == iVar10) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar9 = *(long *)(lVar9 + 0x18);
          if (lVar9 == 0) {
            return;
          }
          plVar11 = (long *)(lVar9 + -0x50);
          FUN_01c1b81c(&local_48,param_1);
          if (local_48 != (long *)0x0) {
            if (*(long *)(param_1 + 0x270) == 0) {
              local_58 = (long *)0x0;
            }
            else {
              FUN_00b911c4(&local_58);
              if (local_58 != (long *)0x0) {
                FUN_02c90b50(plVar11,1);
                fVar12 = (float)FUN_00d8326c(local_48,2);
                lVar8 = FUN_02c90d14(plVar11);
                if (lVar8 != 0) {
                  *(ulong *)(lVar8 + 0x128) = (ulong)(uint)fVar12;
                  *(ulong *)(lVar8 + 0x120) = CONCAT44(fVar12,fVar12);
                  *(ulong *)(lVar8 + 0x148) =
                       CONCAT44((float)((ulong)*(undefined8 *)(lVar8 + 0xf8) >> 0x20) * 0.0,
                                fVar12 * (float)*(undefined8 *)(lVar8 + 0xf8));
                  *(ulong *)(lVar8 + 0x140) =
                       CONCAT44(fVar12 * (float)((ulong)*(undefined8 *)(lVar8 + 0xf0) >> 0x20),
                                fVar12 * (float)*(undefined8 *)(lVar8 + 0xf0));
                }
                if (local_58 != (long *)0x0) {
                  lVar8 = local_58[0xb];
                  piVar1 = (int *)(lVar8 + 0xc);
                  do {
                    iVar10 = *piVar1;
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar3) {
                      *piVar1 = iVar10 + -1;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar2 != '\0');
                  if (iVar10 + -1 == 0) {
                    *(undefined8 *)(lVar8 + 0x18) = 0;
                    (**(code **)(*local_58 + 0x20))();
                  }
                }
              }
            }
            lVar8 = local_48[0xb];
            piVar1 = (int *)(lVar8 + 0xc);
            do {
              iVar10 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar10 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar10 + -1 == 0) {
              *(undefined8 *)(lVar8 + 0x18) = 0;
              (**(code **)(*local_48 + 0x20))(local_48);
            }
          }
          lVar9 = *(long *)(lVar9 + 8);
          piVar1 = (int *)(lVar9 + 0xc);
          do {
            iVar10 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar10 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar10 + -1 == 0) {
            *(undefined8 *)(lVar9 + 0x18) = 0;
            (**(code **)(*plVar11 + 0x20))(plVar11);
            return;
          }
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar10 = iVar6;
    } while (iVar6 != 0);
  }
  return;
}


