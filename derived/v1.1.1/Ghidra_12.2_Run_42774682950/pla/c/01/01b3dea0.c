/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b3dea0; name: FUN_01b3dea0
 */


void FUN_01b3dea0(long param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  int iVar6;
  long lVar7;
  undefined8 *local_48;
  undefined8 uStack_40;
  long *local_38;
  long *local_30;
  undefined8 local_28;
  
  uVar2 = param_2 & 1;
  *(uint *)(param_1 + 0x918) = uVar2;
  if (*(long *)(param_1 + 0xe90) == 0) {
    local_30 = (long *)0x0;
  }
  else {
    FUN_018e3920(&local_30,*(long *)(param_1 + 0xe90));
    if (local_30 != (long *)0x0) {
      *(uint *)(local_30 + 0xa3) = uVar2;
      FUN_01c26c14(&local_48,local_30);
      if (local_48 == (undefined8 *)0x0) {
        local_38 = (long *)0x0;
      }
      else {
        FUN_00ab39e4(&local_38);
        puVar5 = local_48;
        if (local_48 != (undefined8 *)0x0) {
          piVar1 = (int *)(local_48 + 1);
          do {
            iVar6 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar6 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar6 + -1 == 0) {
            local_48[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar7 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar7;
            local_28 = *puVar5;
            FUN_02a44274(lVar7 + 0xd8,&local_28);
          }
        }
      }
      if ((local_38 != (long *)0x0) && (FUN_00af5224(local_38,uVar2), local_38 != (long *)0x0)) {
        lVar7 = local_38[0xb];
        piVar1 = (int *)(lVar7 + 0xc);
        do {
          iVar6 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar6 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar6 + -1 == 0) {
          *(undefined8 *)(lVar7 + 0x18) = 0;
          (**(code **)(*local_38 + 0x20))();
        }
      }
      if ((param_2 & 1) != 0) {
        FUN_01c26998(&local_48,local_30);
        if (local_48 == (undefined8 *)0x0) {
          local_38 = (long *)0x0;
        }
        else {
          FUN_009b17f0(&local_38);
          if (local_48 != (undefined8 *)0x0) {
            piVar1 = (int *)(local_48 + 1);
            do {
              iVar6 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar6 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar6 + -1 == 0) {
              local_48[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar7 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar7;
              local_28 = *local_48;
              FUN_02a44274(lVar7 + 0xd8,&local_28);
            }
          }
        }
        if ((local_38 != (long *)0x0) && (FUN_01c0ed40(local_38,1), local_38 != (long *)0x0)) {
          lVar7 = local_38[0xb];
          piVar1 = (int *)(lVar7 + 0xc);
          do {
            iVar6 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar6 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar6 + -1 == 0) {
            *(undefined8 *)(lVar7 + 0x18) = 0;
            (**(code **)(*local_38 + 0x20))();
          }
        }
      }
      if (local_30 != (long *)0x0) {
        lVar7 = local_30[0xb];
        piVar1 = (int *)(lVar7 + 0xc);
        do {
          iVar6 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar6 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar6 + -1 == 0) {
          *(undefined8 *)(lVar7 + 0x18) = 0;
          (**(code **)(*local_30 + 0x20))(local_30);
        }
      }
    }
  }
  local_48 = (undefined8 *)0x0;
  uStack_40 = 0;
  FUN_01a9e67c(&local_48,param_1 + 0x618);
  if (local_48 == (undefined8 *)0x0) {
    local_30 = (long *)0x0;
  }
  else {
    FUN_01aa5214(&local_30);
    puVar5 = local_48;
    if (local_48 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_48 + 1);
      do {
        iVar6 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 + -1 == 0) {
        local_48[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar7 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar7;
        local_28 = *puVar5;
        FUN_02a44274(lVar7 + 0xd8,&local_28);
      }
    }
  }
  if ((local_30 != (long *)0x0) && (FUN_0181353c(local_30,param_2 & 1), local_30 != (long *)0x0)) {
    lVar7 = local_30[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*local_30 + 0x20))();
    }
  }
  return;
}


