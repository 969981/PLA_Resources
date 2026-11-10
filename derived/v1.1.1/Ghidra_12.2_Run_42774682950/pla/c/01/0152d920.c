/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0152d920; name: FUN_0152d920
 */


void FUN_0152d920(undefined8 *param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 *local_50 [2];
  undefined8 local_38;
  
  lVar7 = *(long *)(param_2 + 0x1f0);
  if ((lVar7 != 0) && (*(int *)(lVar7 + 0xc) != 0)) {
    piVar1 = (int *)(lVar7 + 0xc);
    iVar5 = *(int *)(lVar7 + 0xc);
    do {
      plVar8 = *(long **)(lVar7 + 0x10);
      lVar6 = FUN_01091efc();
      while( true ) {
        if (plVar8 == (long *)0x0) goto LAB_0152d944;
        if (plVar8 == (long *)lVar6) break;
        plVar8 = (long *)*plVar8;
      }
      iVar2 = *piVar1;
      if (iVar2 == iVar5) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar5 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar7 = *(long *)(lVar7 + 0x18);
          if (lVar7 != 0) {
            plVar8 = (long *)(lVar7 + -0x50);
            (**(code **)(*plVar8 + 0x18))(local_50,plVar8);
            *param_1 = 0;
            param_1[1] = 0;
            FUN_015300dc(param_1,local_50);
            if (local_50[0] != (undefined8 *)0x0) {
              piVar1 = (int *)(local_50[0] + 1);
              do {
                iVar5 = *piVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar5 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar5 + -1 == 0) {
                local_50[0][2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar6 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar6;
                local_38 = *local_50[0];
                FUN_02a44274(lVar6 + 0xd8,&local_38);
              }
            }
            lVar7 = *(long *)(lVar7 + 8);
            piVar1 = (int *)(lVar7 + 0xc);
            do {
              iVar5 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar5 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar5 + -1 == 0) {
              *(undefined8 *)(lVar7 + 0x18) = 0;
              (**(code **)(*plVar8 + 0x20))(plVar8);
              return;
            }
            return;
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar5 = iVar2;
    } while (iVar2 != 0);
  }
LAB_0152d944:
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


