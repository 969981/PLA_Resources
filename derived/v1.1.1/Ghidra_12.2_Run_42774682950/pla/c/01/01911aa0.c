/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01911aa0; name: FUN_01911aa0
 */


void FUN_01911aa0(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  long *plVar8;
  undefined8 local_60;
  char *pcStack_58;
  undefined8 local_50;
  long *local_48;
  long *local_38;
  
  lVar6 = *(long *)(param_1 + 0x70);
  if ((lVar6 != 0) && (*(int *)(lVar6 + 0xc) != 0)) {
    piVar1 = (int *)(lVar6 + 0xc);
    iVar7 = *(int *)(lVar6 + 0xc);
    do {
      plVar8 = *(long **)(lVar6 + 0x10);
      lVar5 = FUN_01913b5c();
      while( true ) {
        if (plVar8 == (long *)0x0) {
          return;
        }
        if (plVar8 == (long *)lVar5) break;
        plVar8 = (long *)*plVar8;
      }
      iVar2 = *piVar1;
      if (iVar2 == iVar7) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar6 = *(long *)(lVar6 + 0x18);
          plVar8 = (long *)(lVar6 + -0x50);
          if (lVar6 == 0) {
            return;
          }
          if (*(long *)(param_1 + 0x118) == 0) {
            local_38 = (long *)0x0;
          }
          else {
            FUN_00bd9360(&local_38);
            if (local_38 != (long *)0x0) {
              FUN_01b75890(plVar8);
              local_60 = 0x53795ef0faf9bb1e;
              pcStack_58 = "PLAY_PL_CP_FAILED";
              local_50 = 0x11;
              local_48 = (long *)0x0;
              FUN_0290b66c(local_38,&local_60,0);
              if (local_48 != (long *)0x0) {
                (**(code **)(*local_48 + 0x20))();
              }
              if (local_38 != (long *)0x0) {
                lVar5 = local_38[0xb];
                piVar1 = (int *)(lVar5 + 0xc);
                do {
                  iVar7 = *piVar1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar4) {
                    *piVar1 = iVar7 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar7 + -1 == 0) {
                  *(undefined8 *)(lVar5 + 0x18) = 0;
                  (**(code **)(*local_38 + 0x20))();
                }
              }
            }
          }
          lVar6 = *(long *)(lVar6 + 8);
          piVar1 = (int *)(lVar6 + 0xc);
          do {
            iVar7 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar7 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar7 + -1 == 0) {
            *(undefined8 *)(lVar6 + 0x18) = 0;
            (**(code **)(*plVar8 + 0x20))(plVar8);
            return;
          }
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar7 = iVar2;
    } while (iVar2 != 0);
  }
  return;
}


