/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00aaf168; name: FUN_00aaf168
 */


void FUN_00aaf168(undefined8 *param_1,long *param_2,ulong param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  int iVar5;
  long lVar6;
  long *local_58;
  undefined8 *local_50;
  undefined8 uStack_48;
  undefined8 *local_40;
  undefined8 uStack_38;
  undefined8 *local_30 [2];
  undefined8 local_18;
  
  *param_1 = 0;
  param_1[1] = 0;
  if ((param_3 & 1) != 0) {
    lVar6 = FUN_00ab346c(*param_2 + 0xf0,local_30);
    local_40 = (undefined8 *)0x0;
    uStack_38 = 0;
    FUN_01c2b428(&local_40,lVar6 + 0x4b0);
    if (local_40 != (undefined8 *)0x0) {
      puVar4 = local_40;
      if (*(int *)((long)local_40 + 0xc) != 0) {
        if (local_40 == (undefined8 *)0x0) {
          local_58 = (long *)0x0;
        }
        else {
          FUN_009cdd5c(&local_58);
        }
        (**(code **)(*local_58 + 0x18))(local_30);
        local_50 = (undefined8 *)0x0;
        uStack_48 = 0;
        FUN_00ab226c(&local_50,local_30);
        puVar4 = local_30[0];
        if (local_30[0] != (undefined8 *)0x0) {
          piVar1 = (int *)(local_30[0] + 1);
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
            local_30[0][2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar6 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar6;
            local_18 = *puVar4;
            FUN_02a44274(lVar6 + 0xd8,&local_18);
          }
        }
        FUN_00ab256c(param_1,&local_50);
        puVar4 = local_50;
        if (local_50 != (undefined8 *)0x0) {
          piVar1 = (int *)(local_50 + 1);
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
            local_50[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar6 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar6;
            local_30[0] = (undefined8 *)*puVar4;
            FUN_02a44274(lVar6 + 0xd8,local_30);
          }
        }
        puVar4 = local_40;
        if (local_58 != (long *)0x0) {
          lVar6 = local_58[0xb];
          piVar1 = (int *)(lVar6 + 0xc);
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
            *(undefined8 *)(lVar6 + 0x18) = 0;
            (**(code **)(*local_58 + 0x20))();
            puVar4 = local_40;
          }
        }
      }
      if (puVar4 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar4 + 1);
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
          puVar4[2] = 0;
          local_40 = puVar4;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar6 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar6;
          local_30[0] = (undefined8 *)*puVar4;
          FUN_02a44274(lVar6 + 0xd8,local_30);
        }
      }
    }
  }
  return;
}


