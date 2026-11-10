/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bb839c; name: FUN_01bb839c
 */


void FUN_01bb839c(long param_1)

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
  undefined8 *local_b8;
  char *pcStack_b0;
  undefined8 local_a8;
  long *local_a0;
  long *local_98;
  long *local_90;
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  puVar7 = PTR_DAT_043794a8;
  puVar6 = PTR_DAT_043794a0;
  puVar5 = PTR_DAT_04379498;
  lVar10 = *(long *)(param_1 + 0x580);
  lVar11 = *(long *)(param_1 + 0x588);
  if (lVar10 != lVar11) {
    do {
      local_88 = (undefined8 *)0x0;
      uStack_80 = 0;
      FUN_00b63bec(&local_88,lVar10);
      local_78 = (undefined8 *)0x0;
      uStack_70 = 0;
      FUN_00b63974(&local_78,lVar10 + 0x10);
      if (local_88 == (undefined8 *)0x0) {
        local_90 = (long *)0x0;
        puVar4 = local_78;
      }
      else {
        FUN_00b911c4(&local_90);
        puVar4 = local_78;
        if (local_90 != (long *)0x0) {
          FUN_01ba1d84(&local_b8);
          if (local_b8 == (undefined8 *)0x0) {
            local_98 = (long *)0x0;
          }
          else {
            FUN_019174ac(&local_98);
            puVar4 = local_b8;
            if (local_b8 != (undefined8 *)0x0) {
              piVar1 = (int *)(local_b8 + 1);
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
                local_b8[2] = 0;
                if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,puVar6,&PTR_LOOP_0411a000);
                  __cxa_guard_release(puVar5);
                }
                lVar9 = *(long *)puVar6;
                *(long *)puVar7 = lVar9;
                local_68 = *puVar4;
                FUN_02a44274(lVar9 + 0xd8,&local_68);
              }
            }
            if (local_98 != (long *)0x0) {
              local_b8 = (undefined8 *)0x79479c9171128967;
              pcStack_b0 = "field";
              local_a8 = 5;
              local_a0 = (long *)0x0;
              FUN_00b52884(local_98,&local_b8);
              if (local_a0 != (long *)0x0) {
                (**(code **)(*local_a0 + 0x20))();
              }
              if (local_98 != (long *)0x0) {
                lVar9 = local_98[0xb];
                piVar1 = (int *)(lVar9 + 0xc);
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
                  *(undefined8 *)(lVar9 + 0x18) = 0;
                  (**(code **)(*local_98 + 0x20))();
                }
              }
            }
          }
          puVar4 = local_78;
          if (local_90 != (long *)0x0) {
            lVar9 = local_90[0xb];
            piVar1 = (int *)(lVar9 + 0xc);
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
              *(undefined8 *)(lVar9 + 0x18) = 0;
              (**(code **)(*local_90 + 0x20))();
              puVar4 = local_78;
            }
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
          local_b8 = (undefined8 *)*puVar4;
          FUN_02a44274(lVar9 + 0xd8,&local_b8);
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
          local_b8 = (undefined8 *)*puVar4;
          FUN_02a44274(lVar9 + 0xd8,&local_b8);
        }
      }
      lVar10 = lVar10 + 0x20;
    } while (lVar10 != lVar11);
  }
  return;
}


