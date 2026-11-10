/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018d8d5c; name: FUN_018d8d5c
 */


void FUN_018d8d5c(undefined8 *param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  long *local_50;
  undefined8 *local_48;
  undefined8 uStack_40;
  long *local_38;
  long *local_30;
  undefined8 local_28;
  
  FUN_018d6bd0(&local_30,param_2 + 0x738);
  if (local_30 != (long *)0x0) {
    local_48 = (undefined8 *)0x0;
    uStack_40 = 0;
    FUN_00ac3fa4(&local_48,local_30 + 0x49);
    FUN_0099c748(&local_38,&local_48);
    puVar5 = local_48;
    if (local_48 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_48 + 1);
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
        local_48[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar8 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar8;
        local_28 = *puVar5;
        FUN_02a44274(lVar8 + 0xd8,&local_28);
      }
    }
    if (local_38 == (long *)0x0) {
      bVar3 = false;
    }
    else {
      FUN_01a82160(&local_48);
      if (local_48 == (undefined8 *)0x0) {
        local_50 = (long *)0x0;
        *param_1 = 0;
        puVar5 = local_48;
      }
      else {
        FUN_00ba1e00(&local_50);
        *param_1 = local_50;
        puVar5 = local_48;
        if (local_50 != (long *)0x0) {
          lVar8 = local_50[0xb];
          if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl("","","",0);
          }
          if (*(long *)(lVar8 + 0x10) == 0) {
            uVar7 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
            *(undefined8 *)(lVar8 + 0x10) = uVar7;
          }
          piVar1 = (int *)(lVar8 + 0xc);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = *piVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          puVar5 = local_48;
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
              puVar5 = local_48;
            }
          }
        }
      }
      local_48 = puVar5;
      if (puVar5 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar5 + 1);
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
          puVar5[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar8 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar8;
          local_28 = *puVar5;
          FUN_02a44274(lVar8 + 0xd8,&local_28);
        }
      }
      if (local_38 != (long *)0x0) {
        lVar8 = local_38[0xb];
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
        if (iVar6 == 1) {
          *(undefined8 *)(lVar8 + 0x18) = 0;
          (**(code **)(*local_38 + 0x20))();
        }
      }
      bVar3 = true;
    }
    if (local_30 != (long *)0x0) {
      lVar8 = local_30[0xb];
      piVar1 = (int *)(lVar8 + 0xc);
      do {
        iVar6 = *piVar1;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar6 + -1 == 0) {
        *(undefined8 *)(lVar8 + 0x18) = 0;
        (**(code **)(*local_30 + 0x20))();
      }
    }
    if (bVar3) {
      return;
    }
  }
  *param_1 = 0;
  return;
}


