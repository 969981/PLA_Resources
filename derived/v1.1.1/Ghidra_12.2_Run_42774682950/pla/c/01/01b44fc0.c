/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b44fc0; name: FUN_01b44fc0
 */


bool FUN_01b44fc0(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long *local_50;
  long *local_48;
  undefined8 *local_40;
  undefined8 uStack_38;
  long *local_30;
  undefined8 local_28;
  
  local_40 = (undefined8 *)0x0;
  uStack_38 = 0;
  FUN_01a2bf84(&local_40,param_1 + 0x5c8);
  if (local_40 == (undefined8 *)0x0) {
    local_30 = (long *)0x0;
  }
  else {
    FUN_00ba1e00(&local_30);
    puVar4 = local_40;
    if (local_40 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_40 + 1);
      do {
        iVar6 = *piVar1;
        cVar2 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar6 + -1 == 0) {
        local_40[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar8 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar8;
        local_28 = *puVar4;
        FUN_02a44274(lVar8 + 0xd8,&local_28);
      }
    }
  }
  if (local_30 == (long *)0x0) {
    return false;
  }
  uVar7 = FUN_01c0148c();
  if (((uVar7 & 1) != 0) && (*(int *)(param_1 + 0x918) != 1)) {
    if (*(long *)(param_1 + 0xe90) == 0) {
      local_48 = (long *)0x0;
    }
    else {
      FUN_018e3920(&local_48);
      if (local_48 != (long *)0x0) {
        FUN_01c26c14(&local_40);
        if (local_40 == (undefined8 *)0x0) {
          local_50 = (long *)0x0;
LAB_01b45108:
          if (local_50 == (long *)0x0) goto LAB_01b45218;
LAB_01b45110:
          iVar6 = FUN_00af6630();
          bVar5 = iVar6 != 0;
          if (local_50 != (long *)0x0) {
            lVar8 = local_50[0xb];
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
              (**(code **)(*local_50 + 0x20))();
            }
          }
        }
        else {
          FUN_00ab39e4(&local_50);
          puVar4 = local_40;
          if (local_40 == (undefined8 *)0x0) goto LAB_01b45108;
          piVar1 = (int *)(local_40 + 1);
          do {
            iVar6 = *piVar1;
            cVar2 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar6 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar6 + -1 != 0) goto LAB_01b45108;
          local_40[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar8 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar8;
          local_28 = *puVar4;
          FUN_02a44274(lVar8 + 0xd8,&local_28);
          if (local_50 != (long *)0x0) goto LAB_01b45110;
LAB_01b45218:
          bVar5 = true;
        }
        if (local_48 != (long *)0x0) {
          lVar8 = local_48[0xb];
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
            (**(code **)(*local_48 + 0x20))();
          }
        }
        bVar5 = !bVar5;
        goto joined_r0x01b45008;
      }
    }
  }
  bVar5 = false;
joined_r0x01b45008:
  if (local_30 != (long *)0x0) {
    lVar8 = local_30[0xb];
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
      (**(code **)(*local_30 + 0x20))();
    }
  }
  return bVar5;
}


