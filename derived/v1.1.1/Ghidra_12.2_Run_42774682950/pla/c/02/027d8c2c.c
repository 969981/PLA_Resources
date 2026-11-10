/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027d8c2c; name: FUN_027d8c2c
 */


void FUN_027d8c2c(long param_1,long *param_2,long *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  short sVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 *local_60 [3];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  if ((((*param_2 != 0) && (plVar7 = (long *)FUN_0120ccf0(), plVar7 != (long *)0x0)) &&
      (*param_3 != 0)) && (sVar5 = (**(code **)(*plVar7 + 0xd8))(), sVar5 == 2)) {
    lVar8 = (**(code **)(*plVar7 + 200))(plVar7);
    lVar9 = (**(code **)(*plVar7 + 0xf0))(plVar7);
    if (*(long *)(lVar9 + 0x28) == 2) {
      plVar10 = *(long **)(lVar9 + 0x20);
      lVar9 = *plVar10;
      if (lVar9 == lVar8) {
        *(long *)(param_1 + 0x80) = lVar8;
      }
      else {
        *(long *)(param_1 + 0x88) = lVar9;
      }
      lVar9 = plVar10[1];
      if (lVar9 == lVar8) {
        *(long *)(param_1 + 0x80) = lVar8;
      }
      else {
        *(long *)(param_1 + 0x88) = lVar9;
        lVar8 = *(long *)(param_1 + 0x80);
      }
      if ((lVar8 != 0) && (*(long *)(param_1 + 0x88) != 0)) {
        local_40 = 0;
        FUN_027d8ed4(local_60,param_1);
        FUN_02ccb8c8(&local_48,plVar7,&local_40,local_60);
        plVar7 = *(long **)(param_1 + 0x90);
        *(undefined8 *)(param_1 + 0x90) = 0;
        if (plVar7 != (long *)0x0) {
          lVar8 = plVar7[0xb];
          piVar1 = (int *)(lVar8 + 0xc);
          do {
            iVar6 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar6 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar6 + -1 == 0) {
            *(undefined8 *)(lVar8 + 0x18) = 0;
            (**(code **)(*plVar7 + 0x20))();
          }
        }
        uVar4 = local_48;
        local_48 = 0;
        *(undefined8 *)(param_1 + 0x90) = uVar4;
        if (local_60[0] != (undefined8 *)0x0) {
          piVar1 = (int *)(local_60[0] + 1);
          do {
            iVar6 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar6 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar6 + -1 == 0) {
            local_60[0][2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar8 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar8;
            local_38 = *local_60[0];
            FUN_02a44274(lVar8 + 0xd8,&local_38);
          }
        }
        local_38 = *(undefined8 *)(param_1 + 8);
        lVar8 = FUN_0161dc70(&local_48,local_38,&local_38);
        if (lVar8 != 0) {
          piVar1 = (int *)(lVar8 + 0x50);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = *piVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        plVar7 = *(long **)(param_1 + 0x98);
        *(undefined8 *)(param_1 + 0x98) = 0;
        if (plVar7 != (long *)0x0) {
          plVar10 = plVar7 + 10;
          do {
            iVar6 = (int)*plVar10 + -1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar3) {
              *(int *)plVar10 = iVar6;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar6 == 0) {
            (**(code **)(*plVar7 + 0x10))();
          }
        }
        *(long *)(param_1 + 0x98) = lVar8;
        FUN_01146f84(&local_38,*(undefined8 *)(param_1 + 8));
        plVar7 = *(long **)(param_1 + 0x70);
        *(undefined8 *)(param_1 + 0x70) = 0;
        if (plVar7 != (long *)0x0) {
          lVar8 = plVar7[0xb];
          piVar1 = (int *)(lVar8 + 0xc);
          do {
            iVar6 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar6 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar6 + -1 == 0) {
            *(undefined8 *)(lVar8 + 0x18) = 0;
            (**(code **)(*plVar7 + 0x20))();
          }
        }
        *(undefined8 *)(param_1 + 0x70) = local_38;
        FUN_01123a18(local_38,*param_3);
      }
    }
  }
  return;
}


