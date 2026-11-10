/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00aade28; name: FUN_00aade28
 */


void FUN_00aade28(undefined8 *param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  undefined8 *local_78 [2];
  undefined8 *local_68;
  undefined8 uStack_60;
  long *local_58;
  undefined8 local_48;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar10 = FUN_009b807c(*param_2 + 0xf0,&local_68);
  if (lVar10 != 0) {
    local_68 = (undefined8 *)0x0;
    uStack_60 = 0;
    FUN_00ac3fa4(&local_68,lVar10 + 0x248);
    FUN_0099c748(&local_58,&local_68);
    puVar7 = local_68;
    if (local_68 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_68 + 1);
      do {
        iVar9 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar9 + -1 == 0) {
        local_68[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar10 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar10;
        local_78[0] = (undefined8 *)*puVar7;
        FUN_02a44274(lVar10 + 0xd8,local_78);
      }
    }
    if (local_58 != (long *)0x0) {
      local_68 = (undefined8 *)0x0;
      uStack_60 = 0;
      FUN_00ae8374(&local_68,local_58 + 0x44);
      puVar7 = local_68;
      puVar6 = PTR_DAT_04379e80;
      puVar5 = PTR_DAT_04379e78;
      if (local_68 != (undefined8 *)0x0) {
        puVar4 = local_68;
        if (*(int *)((long)local_68 + 0xc) != 0) {
          piVar1 = (int *)((long)local_68 + 0xc);
          iVar9 = *(int *)((long)local_68 + 0xc);
          do {
            plVar13 = (long *)puVar7[2];
            if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
              uVar11 = FUN_0095a420();
              *(undefined8 *)puVar6 = uVar11;
              __cxa_guard_release(puVar5);
            }
            while( true ) {
              puVar4 = local_68;
              if (plVar13 == (long *)0x0) goto joined_r0x00aae11c;
              if (plVar13 == (long *)puVar6) break;
              plVar13 = (long *)*plVar13;
            }
            iVar8 = *piVar1;
            if (iVar8 == iVar9) {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar9 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') {
                lVar10 = puVar7[3];
                if (lVar10 != 0) {
                  plVar13 = (long *)(lVar10 + -0x50);
                  FUN_00aae1c0(local_78,plVar13);
                  FUN_00ab196c(param_1,local_78);
                  puVar7 = local_78[0];
                  if (local_78[0] != (undefined8 *)0x0) {
                    piVar1 = (int *)(local_78[0] + 1);
                    do {
                      iVar9 = *piVar1;
                      cVar2 = '\x01';
                      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                      if (bVar3) {
                        *piVar1 = iVar9 + -1;
                        cVar2 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar2 != '\0');
                    if (iVar9 + -1 == 0) {
                      local_78[0][2] = 0;
                      if (((*PTR_DAT_04379498 & 1) == 0) &&
                         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
                        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                        __cxa_guard_release(PTR_DAT_04379498);
                      }
                      lVar12 = *(long *)PTR_DAT_043794a0;
                      *(long *)PTR_DAT_043794a8 = lVar12;
                      local_48 = *puVar7;
                      FUN_02a44274(lVar12 + 0xd8,&local_48);
                    }
                  }
                  lVar10 = *(long *)(lVar10 + 8);
                  piVar1 = (int *)(lVar10 + 0xc);
                  do {
                    iVar9 = *piVar1;
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar3) {
                      *piVar1 = iVar9 + -1;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar2 != '\0');
                  puVar4 = local_68;
                  if (iVar9 + -1 == 0) {
                    *(undefined8 *)(lVar10 + 0x18) = 0;
                    (**(code **)(*plVar13 + 0x20))(plVar13);
                    puVar4 = local_68;
                  }
                }
                break;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            iVar9 = iVar8;
          } while (iVar8 != 0);
        }
joined_r0x00aae11c:
        local_68 = puVar4;
        if (puVar4 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar4 + 1);
          do {
            iVar9 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar9 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar9 + -1 == 0) {
            puVar4[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar10 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar10;
            local_78[0] = (undefined8 *)*puVar4;
            FUN_02a44274(lVar10 + 0xd8,local_78);
          }
        }
      }
      if (local_58 != (long *)0x0) {
        lVar10 = local_58[0xb];
        piVar1 = (int *)(lVar10 + 0xc);
        do {
          iVar9 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar9 + -1 == 0) {
          *(undefined8 *)(lVar10 + 0x18) = 0;
          (**(code **)(*local_58 + 0x20))();
        }
      }
    }
  }
  return;
}


