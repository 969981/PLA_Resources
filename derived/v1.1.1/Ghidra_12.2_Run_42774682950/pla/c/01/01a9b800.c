/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a9b800; name: FUN_01a9b800
 */


void FUN_01a9b800(undefined8 *param_1,long param_2)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long *local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 local_48;
  
  local_58 = 0;
  local_60 = (undefined8 *)0x0;
  FUN_00ae8374(&local_60,param_2 + 0x220);
  puVar5 = local_60;
  puVar7 = PTR_DAT_04379e80;
  puVar6 = PTR_DAT_04379e78;
  if (local_60 != (undefined8 *)0x0) {
    if (*(int *)((long)local_60 + 0xc) != 0) {
      piVar1 = (int *)((long)local_60 + 0xc);
      iVar9 = *(int *)((long)local_60 + 0xc);
      do {
        plVar13 = (long *)puVar5[2];
        if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar6), iVar8 != 0)) {
          uVar10 = FUN_0095a420();
          *(undefined8 *)puVar7 = uVar10;
          __cxa_guard_release(puVar6);
        }
        while( true ) {
          if (plVar13 == (long *)0x0) goto LAB_01a9b8c0;
          if (plVar13 == (long *)puVar7) break;
          plVar13 = (long *)*plVar13;
        }
        iVar8 = *piVar1;
        if (iVar8 == iVar9) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar9 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar11 = puVar5[3];
            plVar13 = (long *)0x0;
            puVar5 = local_60;
            if (lVar11 != 0) {
              plVar13 = (long *)(lVar11 + -0x50);
            }
            goto joined_r0x01a9b8e4;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar9 = iVar8;
      } while (iVar8 != 0);
    }
LAB_01a9b8c0:
    plVar13 = (long *)0x0;
    puVar5 = local_60;
joined_r0x01a9b8e4:
    local_60 = puVar5;
    if (puVar5 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar5 + 1);
      do {
        iVar9 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar9 + -1 == 0) {
        puVar5[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar11 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar11;
        local_48 = *puVar5;
        FUN_02a44274(lVar11 + 0xd8,&local_48);
      }
    }
    if (plVar13 != (long *)0x0) {
      FUN_00aae1c0(&local_60,plVar13);
      puVar5 = local_60;
      bVar4 = false;
      if (local_60 != (undefined8 *)0x0) {
        if (*(int *)((long)local_60 + 0xc) != 0) {
          piVar1 = (int *)((long)local_60 + 0xc);
          iVar9 = *(int *)((long)local_60 + 0xc);
          do {
            plVar12 = (long *)puVar5[2];
            lVar11 = FUN_00a3edb8();
            while( true ) {
              if (plVar12 == (long *)0x0) goto LAB_01a9ba68;
              if (plVar12 == (long *)lVar11) break;
              plVar12 = (long *)*plVar12;
            }
            iVar8 = *piVar1;
            if (iVar8 == iVar9) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar9 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') {
                lVar11 = puVar5[3];
                plVar12 = (long *)0x0;
                puVar5 = local_60;
                if (lVar11 != 0) {
                  plVar12 = (long *)(lVar11 + -0x50);
                }
                goto joined_r0x01a9ba60;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            iVar9 = iVar8;
          } while (iVar8 != 0);
        }
LAB_01a9ba68:
        plVar12 = (long *)0x0;
        puVar5 = local_60;
joined_r0x01a9ba60:
        local_60 = puVar5;
        if (puVar5 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar5 + 1);
          do {
            iVar9 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar9 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar9 + -1 == 0) {
            puVar5[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar11 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar11;
            local_48 = *puVar5;
            FUN_02a44274(lVar11 + 0xd8,&local_48);
          }
        }
        bVar4 = false;
        if (plVar12 != (long *)0x0) {
          FUN_009c69bc(&local_68,plVar12);
          (**(code **)(*local_68 + 0x10))(&local_60);
          *param_1 = 0;
          param_1[1] = 0;
          FUN_0087f944(param_1,&local_60);
          puVar5 = local_60;
          if (local_60 != (undefined8 *)0x0) {
            piVar1 = (int *)(local_60 + 1);
            do {
              iVar9 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar9 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar9 + -1 == 0) {
              local_60[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar11 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar11;
              local_48 = *puVar5;
              FUN_02a44274(lVar11 + 0xd8,&local_48);
            }
          }
          if (local_68 != (long *)0x0) {
            lVar11 = local_68[0xb];
            piVar1 = (int *)(lVar11 + 0xc);
            do {
              iVar9 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar9 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar9 + -1 == 0) {
              *(undefined8 *)(lVar11 + 0x18) = 0;
              (**(code **)(*local_68 + 0x20))();
            }
          }
          lVar11 = plVar12[0xb];
          piVar1 = (int *)(lVar11 + 0xc);
          do {
            iVar9 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar9 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar9 == 1) {
            *(undefined8 *)(lVar11 + 0x18) = 0;
            (**(code **)(*plVar12 + 0x20))(plVar12);
          }
          bVar4 = true;
        }
      }
      lVar11 = plVar13[0xb];
      piVar1 = (int *)(lVar11 + 0xc);
      do {
        iVar9 = *piVar1;
        cVar3 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar2) {
          *piVar1 = iVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar11 + 0x18) = 0;
        (**(code **)(*plVar13 + 0x20))(plVar13);
      }
      if (bVar4) {
        return;
      }
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


