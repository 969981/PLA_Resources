/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bb80b4; name: FUN_01bb80b4
 */


void FUN_01bb80b4(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined8 *local_78;
  undefined8 uStack_70;
  long *local_68;
  
  if (*(char *)((long)param_1 + 0x671) == '\0') {
    FUN_01bb8044(param_1);
    FUN_00db0d34("throw_object",1);
    return;
  }
  (**(code **)(*param_1 + 0x110))(param_1);
  FUN_01bb8044(param_1);
  FUN_00db0d34("throw_object",1);
  puVar7 = PTR_DAT_043794a8;
  puVar6 = PTR_DAT_043794a0;
  puVar5 = PTR_DAT_04379498;
  if (*(char *)((long)param_1 + 0x3aa) == '\0') {
    lVar10 = param_1[0xb0];
    lVar11 = param_1[0xb1];
    if (lVar10 != lVar11) {
      do {
        local_88 = (undefined8 *)0x0;
        uStack_80 = 0;
        FUN_00b63bec(&local_88,lVar10);
        local_78 = (undefined8 *)0x0;
        uStack_70 = 0;
        FUN_00b63974(&local_78,lVar10 + 0x10);
        if (*(char *)((long)param_1 + 0x3a9) == '\0') {
          FUN_016c24d0(&local_68,&local_78);
          puVar4 = local_78;
          if ((local_68 != (long *)0x0) &&
             (FUN_01836814(local_68,0), puVar4 = local_78, local_68 != (long *)0x0)) {
            lVar9 = local_68[0xb];
            piVar1 = (int *)(lVar9 + 0xc);
            do {
              iVar8 = *piVar1 + -1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar8;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
LAB_01bb8288:
            puVar4 = local_78;
            if (iVar8 == 0) {
              *(undefined8 *)(lVar9 + 0x18) = 0;
              (**(code **)(*local_68 + 0x20))();
              puVar4 = local_78;
            }
          }
        }
        else if (local_88 == (undefined8 *)0x0) {
          local_68 = (long *)0x0;
          puVar4 = local_78;
        }
        else {
          FUN_00b911c4(&local_68);
          puVar4 = local_78;
          if (local_68 != (long *)0x0) {
            FUN_01bb839c(param_1);
            FUN_01ba08ec(local_68);
            FUN_01ba0a50(local_68);
            puVar4 = local_78;
            if (local_68 != (long *)0x0) {
              lVar9 = local_68[0xb];
              piVar1 = (int *)(lVar9 + 0xc);
              do {
                iVar8 = *piVar1 + -1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar8;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              goto LAB_01bb8288;
            }
          }
        }
        local_78 = puVar4;
        if (puVar4 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar4 + 1);
          do {
            iVar8 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar8 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar8 + -1 == 0) {
            puVar4[2] = 0;
            if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
              FUN_00100250(PTR_LAB_04379590,puVar6,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar5);
            }
            lVar9 = *(long *)puVar6;
            *(long *)puVar7 = lVar9;
            local_68 = (long *)*puVar4;
            FUN_02a44274(lVar9 + 0xd8,&local_68);
          }
        }
        puVar4 = local_88;
        if (local_88 != (undefined8 *)0x0) {
          piVar1 = (int *)(local_88 + 1);
          do {
            iVar8 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar8 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar8 + -1 == 0) {
            local_88[2] = 0;
            if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
              FUN_00100250(PTR_LAB_04379590,puVar6,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar5);
            }
            lVar9 = *(long *)puVar6;
            *(long *)puVar7 = lVar9;
            local_68 = (long *)*puVar4;
            FUN_02a44274(lVar9 + 0xd8,&local_68);
          }
        }
        lVar10 = lVar10 + 0x20;
      } while (lVar10 != lVar11);
    }
    *(undefined1 *)((long)param_1 + 0x3ab) = 1;
    *(undefined1 *)(param_1 + 0x75) = 0;
    FUN_01bb86a0(param_1 + 0x6e,(long)*(int *)((long)param_1 + 0x36c));
    FUN_01bbf298(param_1 + 0xb0,param_1[0xb0]);
  }
  *(undefined1 *)((long)param_1 + 0x671) = 0;
  return;
}


