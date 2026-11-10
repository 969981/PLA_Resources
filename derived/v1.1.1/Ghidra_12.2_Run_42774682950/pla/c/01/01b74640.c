/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b74640; name: FUN_01b74640
 */


void FUN_01b74640(long param_1,ulong param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  long *plVar8;
  long *local_50 [2];
  long *local_40;
  long *local_38;
  long local_28;
  
  if (*(long *)(param_1 + 0x3d0) == 0) {
    local_38 = (long *)0x0;
  }
  else {
    FUN_01a111e4(&local_38);
    if (local_38 != (long *)0x0) {
      FUN_02be88ac(local_50,local_38,0);
      FUN_00ab5ae0(&local_40,local_50);
      plVar4 = local_50[0];
      if (local_50[0] != (long *)0x0) {
        plVar8 = local_50[0] + 1;
        do {
          iVar5 = (int)*plVar8 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *(int *)plVar8 = iVar5;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 == 0) {
          local_50[0][2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar7 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar7;
          local_28 = *plVar4;
          FUN_02a44274(lVar7 + 0xd8,&local_28);
        }
      }
      if (local_40 != (long *)0x0) {
        uVar6 = 1;
        if ((param_2 & 1) != 0) {
          uVar6 = 2;
        }
        FUN_02bdb2c4(local_40,uVar6);
        if (local_40 != (long *)0x0) {
          lVar7 = local_40[0xb];
          piVar1 = (int *)(lVar7 + 0xc);
          do {
            iVar5 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar5 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar5 + -1 == 0) {
            *(undefined8 *)(lVar7 + 0x18) = 0;
            (**(code **)(*local_40 + 0x20))();
          }
        }
      }
      if (local_38 != (long *)0x0) {
        lVar7 = local_38[0xb];
        piVar1 = (int *)(lVar7 + 0xc);
        do {
          iVar5 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 + -1 == 0) {
          *(undefined8 *)(lVar7 + 0x18) = 0;
          (**(code **)(*local_38 + 0x20))();
        }
      }
    }
  }
  FUN_016c24d0(local_50,param_1 + 0x5b0);
  plVar4 = local_50[0];
  if (local_50[0] != (long *)0x0) {
    plVar8 = (long *)local_50[0][0x58];
    if (plVar8 != (long *)0x0) {
      if ((param_2 & 1) == 0) {
        *(uint *)(plVar8 + 3) = *(uint *)(plVar8 + 3) | 4;
        FUN_01839500(local_50[0]);
        for (plVar8 = (long *)*plVar8; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
          *(uint *)(plVar8 + 3) = *(uint *)(plVar8 + 3) | 4;
          FUN_01839500(plVar4);
        }
      }
      else {
        *(uint *)(plVar8 + 3) = *(uint *)(plVar8 + 3) & 0xfffffffb;
        FUN_01839500(local_50[0]);
        for (plVar8 = (long *)*plVar8; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
          *(uint *)(plVar8 + 3) = *(uint *)(plVar8 + 3) & 0xfffffffb;
          FUN_01839500(plVar4);
        }
      }
    }
    if (local_50[0] != (long *)0x0) {
      lVar7 = local_50[0][0xb];
      piVar1 = (int *)(lVar7 + 0xc);
      do {
        iVar5 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar5 + -1 == 0) {
        *(undefined8 *)(lVar7 + 0x18) = 0;
        (**(code **)(*local_50[0] + 0x20))();
      }
    }
  }
  return;
}


