/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025cc00c; name: FUN_025cc00c
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_025cc00c(long *param_1,undefined1 (*param_2) [16])

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  undefined1 auVar15 [16];
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined8 local_c0;
  long *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  char *pcStack_98;
  undefined8 local_90;
  long *local_88;
  undefined8 *local_80;
  long local_78;
  long local_70;
  long *local_68;
  
  local_80 = (undefined8 *)0x0;
  local_78 = 0;
  FUN_00ae8374(&local_80,*param_1 + 0x220);
  puVar11 = local_80;
  puVar6 = PTR_DAT_04379e80;
  puVar5 = PTR_DAT_04379e78;
  if (local_80 != (undefined8 *)0x0) {
    if (*(int *)((long)local_80 + 0xc) != 0) {
      piVar1 = (int *)((long)local_80 + 0xc);
      iVar8 = *(int *)((long)local_80 + 0xc);
      do {
        plVar14 = (long *)puVar11[2];
        if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
          uVar9 = FUN_0095a420();
          *(undefined8 *)puVar6 = uVar9;
          __cxa_guard_release(puVar5);
        }
        while( true ) {
          if (plVar14 == (long *)0x0) goto LAB_025cc0d4;
          if (plVar14 == (long *)puVar6) break;
          plVar14 = (long *)*plVar14;
        }
        iVar7 = *piVar1;
        if (iVar7 == iVar8) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar8 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar12 = puVar11[3];
            plVar14 = (long *)0x0;
            puVar11 = local_80;
            if (lVar12 != 0) {
              plVar14 = (long *)(lVar12 + -0x50);
            }
            goto joined_r0x025cc0f8;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar8 = iVar7;
      } while (iVar7 != 0);
    }
LAB_025cc0d4:
    plVar14 = (long *)0x0;
    puVar11 = local_80;
joined_r0x025cc0f8:
    local_80 = puVar11;
    if (puVar11 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar11 + 1);
      do {
        iVar8 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar8 + -1 == 0) {
        puVar11[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar12 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar12;
        local_a0 = *puVar11;
        FUN_02a44274(lVar12 + 0xd8,&local_a0);
      }
    }
    if (plVar14 != (long *)0x0) {
      FUN_00aae1c0(&local_80,plVar14);
      puVar11 = local_80;
      if (local_80 != (undefined8 *)0x0) {
        if (*(int *)((long)local_80 + 0xc) != 0) {
          piVar1 = (int *)((long)local_80 + 0xc);
          iVar8 = *(int *)((long)local_80 + 0xc);
          do {
            plVar13 = (long *)puVar11[2];
            lVar12 = FUN_00a3edb8();
            while( true ) {
              if (plVar13 == (long *)0x0) goto LAB_025cc270;
              if (plVar13 == (long *)lVar12) break;
              plVar13 = (long *)*plVar13;
            }
            iVar7 = *piVar1;
            if (iVar7 == iVar8) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar8 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') {
                lVar12 = puVar11[3];
                plVar13 = (long *)0x0;
                puVar11 = local_80;
                if (lVar12 != 0) {
                  plVar13 = (long *)(lVar12 + -0x50);
                }
                goto joined_r0x025cc268;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            iVar8 = iVar7;
          } while (iVar7 != 0);
        }
LAB_025cc270:
        plVar13 = (long *)0x0;
        puVar11 = local_80;
joined_r0x025cc268:
        local_80 = puVar11;
        if (puVar11 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar11 + 1);
          do {
            iVar8 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar8 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar8 + -1 == 0) {
            puVar11[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar12 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar12;
            local_a0 = *puVar11;
            FUN_02a44274(lVar12 + 0xd8,&local_a0);
          }
        }
        if (plVar13 != (long *)0x0) {
          if (0 < (int)plVar13[0x4e]) {
            iVar8 = 0;
            do {
              plVar10 = (long *)FUN_02a9b354(plVar13,iVar8);
              local_80 = (undefined8 *)*plVar10;
              local_78 = plVar10[1];
              local_70 = plVar10[2];
              local_68 = (long *)plVar10[3];
              if (local_68 != (long *)0x0) {
                (**(code **)(*local_68 + 0x18))();
              }
              puVar11 = (undefined8 *)FUN_02a9b144(plVar13,&local_80);
              plVar10 = (long *)*puVar11;
              if (plVar10 != (long *)0x0) {
                plVar2 = plVar10 + 10;
                do {
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                  if (bVar4) {
                    *(int *)plVar2 = (int)*plVar2 + 1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
              }
              local_a0 = 0xcd754b86c93b29e4;
              pcStack_98 = "ObjectBlendColor";
              local_90 = 0x1f;
              local_88 = (long *)0x0;
              local_b0 = *(undefined8 *)*param_2;
              local_d0 = &DAT_cbf29ce484222645;
              puStack_c8 = &DAT_03996322;
              auVar15 = NEON_ext(*param_2,*param_2,8,1);
              uStack_a8 = auVar15._0_8_;
              local_c0 = 0;
              local_b8 = (long *)0x0;
              FUN_02b39cb4(plVar10,&local_a0,&local_b0,&local_d0);
              if (local_b8 != (long *)0x0) {
                (**(code **)(*local_b8 + 0x20))();
              }
              if (local_88 != (long *)0x0) {
                (**(code **)(*local_88 + 0x20))();
              }
              if (plVar10 != (long *)0x0) {
                plVar2 = plVar10 + 10;
                do {
                  iVar7 = (int)*plVar2 + -1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                  if (bVar4) {
                    *(int *)plVar2 = iVar7;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar7 == 0) {
                  (**(code **)(*plVar10 + 0x10))(plVar10);
                }
              }
              if (local_68 != (long *)0x0) {
                (**(code **)(*local_68 + 0x20))();
              }
              iVar8 = iVar8 + 1;
            } while (iVar8 < (int)plVar13[0x4e]);
          }
          lVar12 = plVar13[0xb];
          piVar1 = (int *)(lVar12 + 0xc);
          do {
            iVar8 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar8 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar8 + -1 == 0) {
            *(undefined8 *)(lVar12 + 0x18) = 0;
            (**(code **)(*plVar13 + 0x20))(plVar13);
          }
        }
      }
      lVar12 = plVar14[0xb];
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        iVar8 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar8 + -1 == 0) {
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*plVar14 + 0x20))(plVar14);
      }
    }
  }
  return;
}


