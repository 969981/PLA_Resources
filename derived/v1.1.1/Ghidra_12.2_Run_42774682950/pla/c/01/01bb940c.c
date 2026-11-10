/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bb940c; name: FUN_01bb940c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01bb940c(long param_1)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  int iVar13;
  int iVar14;
  undefined8 uVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long *local_118;
  undefined8 *local_100;
  undefined8 local_f8;
  long local_f0;
  long lStack_e8;
  long local_e0;
  long lStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  long *local_98;
  long *local_90;
  undefined8 uStack_88;
  long *local_80;
  undefined8 uStack_78;
  long *local_70 [2];
  
  puVar12 = PTR_DAT_043795d8;
  puVar11 = PTR_DAT_043794d0;
  puVar10 = PTR_DAT_043794a8;
  puVar9 = PTR_DAT_043794a0;
  puVar8 = PTR_DAT_04379498;
  uVar7 = _UNK_03889978;
  uVar6 = _DAT_03889970;
  lVar19 = *(long *)(param_1 + 0x580);
  lVar20 = *(long *)(param_1 + 0x588);
  if (lVar19 != lVar20) {
    do {
      local_90 = (long *)0x0;
      uStack_88 = 0;
      FUN_00b63bec(&local_90,lVar19);
      local_80 = (long *)0x0;
      uStack_78 = 0;
      FUN_00b63974(&local_80,lVar19 + 0x10);
      if (local_90 == (long *)0x0) {
        local_98 = (long *)0x0;
        plVar17 = local_80;
      }
      else {
        FUN_00b911c4(&local_98);
        plVar17 = local_80;
        if (local_98 != (long *)0x0) {
          FUN_01a73640(&local_100);
          puVar5 = local_100;
          if (local_100 != (undefined8 *)0x0) {
            if (*(int *)((long)local_100 + 0xc) != 0) {
              piVar2 = (int *)((long)local_100 + 0xc);
              iVar13 = *(int *)((long)local_100 + 0xc);
              do {
                plVar17 = (long *)puVar5[2];
                if (((*PTR_DAT_04379e88 & 1) == 0) &&
                   (iVar14 = __cxa_guard_acquire(PTR_DAT_04379e88), iVar14 != 0)) {
                  if (((*puVar12 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar12), iVar14 != 0))
                  {
                    if (((*puVar11 & 1) == 0) &&
                       (iVar14 = __cxa_guard_acquire(puVar11), iVar14 != 0)) {
                      uVar15 = FUN_0087f8f0();
                      *(undefined8 *)PTR_DAT_043794d8 = uVar15;
                      __cxa_guard_release(puVar11);
                    }
                    *(undefined **)PTR_DAT_043795e0 = PTR_DAT_043794d8;
                    __cxa_guard_release(puVar12);
                  }
                  *(undefined **)PTR_DAT_04379e90 = PTR_DAT_043795e0;
                  __cxa_guard_release(PTR_DAT_04379e88);
                }
                while( true ) {
                  if (plVar17 == (long *)0x0) goto LAB_01bb9770;
                  if (plVar17 == (long *)PTR_DAT_04379e90) break;
                  plVar17 = (long *)*plVar17;
                }
                iVar14 = *piVar2;
                if (iVar14 == iVar13) {
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar4) {
                    *piVar2 = iVar13 + 1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                  if (cVar3 == '\0') {
                    lVar16 = puVar5[3];
                    local_118 = (long *)0x0;
                    puVar5 = local_100;
                    if (lVar16 != 0) {
                      local_118 = (long *)(lVar16 + -0x50);
                    }
                    goto joined_r0x01bb96d4;
                  }
                }
                else {
                  ClearExclusiveLocal();
                }
                iVar13 = iVar14;
              } while (iVar14 != 0);
            }
LAB_01bb9770:
            local_118 = (long *)0x0;
            puVar5 = local_100;
joined_r0x01bb96d4:
            local_100 = puVar5;
            if (puVar5 != (undefined8 *)0x0) {
              piVar2 = (int *)(puVar5 + 1);
              do {
                iVar13 = *piVar2;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar4) {
                  *piVar2 = iVar13 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar13 + -1 == 0) {
                puVar5[2] = 0;
                if (((*puVar8 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar8), iVar13 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,puVar9,&PTR_LOOP_0411a000);
                  __cxa_guard_release(puVar8);
                }
                lVar16 = *(long *)puVar9;
                *(long *)puVar10 = lVar16;
                local_70[0] = (long *)*puVar5;
                FUN_02a44274(lVar16 + 0xd8,local_70);
              }
            }
            if (local_118 != (long *)0x0) {
              lVar16 = FUN_01bbdeac(local_118 + 10);
              if (lVar16 != 0) {
                local_100 = (undefined8 *)0x13f2aaaab;
                local_e0 = 0;
                lStack_d8 = 0;
                local_d0 = 0;
                local_c8 = 0;
                local_f0 = *(long *)PTR_DAT_0437a120;
                local_c0 = 0;
                uStack_b8 = 0;
                local_b0 = 0;
                uStack_a8 = 0;
                lStack_e8 = *(long *)(PTR_DAT_0437a120 + 8);
                local_f8 = 0x3f2aaaab00000000;
                FUN_009c69bc(local_70,local_98);
                lStack_e8 = local_70[0][0x17];
                local_f0 = local_70[0][0x16];
                if (local_70[0] != (long *)0x0) {
                  lVar18 = local_70[0][0xb];
                  piVar2 = (int *)(lVar18 + 0xc);
                  do {
                    iVar13 = *piVar2;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                    if (bVar4) {
                      *piVar2 = iVar13 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (iVar13 + -1 == 0) {
                    *(undefined8 *)(lVar18 + 0x18) = 0;
                    (**(code **)(*local_70[0] + 0x20))();
                  }
                }
                FUN_009c69bc(local_70,param_1);
                lStack_d8 = local_70[0][0x1b];
                local_e0 = local_70[0][0x1a];
                if (local_70[0] != (long *)0x0) {
                  lVar18 = local_70[0][0xb];
                  piVar2 = (int *)(lVar18 + 0xc);
                  do {
                    iVar13 = *piVar2;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                    if (bVar4) {
                      *piVar2 = iVar13 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (iVar13 + -1 == 0) {
                    *(undefined8 *)(lVar18 + 0x18) = 0;
                    (**(code **)(*local_70[0] + 0x20))();
                  }
                }
                local_c8 = *(undefined8 *)(param_1 + 0x5c8);
                local_d0 = *(undefined8 *)(param_1 + 0x5c0);
                uStack_b8 = uVar7;
                local_c0 = uVar6;
                uStack_a8 = uVar7;
                local_b0 = uVar6;
                FUN_01b445c4(lVar16,&local_100);
                *(undefined1 *)(param_1 + 0x3a9) = 1;
              }
              lVar16 = local_118[0xb];
              piVar2 = (int *)(lVar16 + 0xc);
              do {
                iVar13 = *piVar2;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar4) {
                  *piVar2 = iVar13 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar13 + -1 == 0) {
                *(undefined8 *)(lVar16 + 0x18) = 0;
                (**(code **)(*local_118 + 0x20))();
              }
            }
          }
          plVar17 = local_80;
          if (local_98 != (long *)0x0) {
            lVar16 = local_98[0xb];
            piVar2 = (int *)(lVar16 + 0xc);
            do {
              iVar13 = *piVar2;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar4) {
                *piVar2 = iVar13 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar13 + -1 == 0) {
              *(undefined8 *)(lVar16 + 0x18) = 0;
              (**(code **)(*local_98 + 0x20))();
              plVar17 = local_80;
            }
          }
        }
      }
      local_80 = plVar17;
      if (plVar17 != (long *)0x0) {
        plVar1 = plVar17 + 1;
        do {
          iVar13 = (int)*plVar1 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = iVar13;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar13 == 0) {
          plVar17[2] = 0;
          if (((*puVar8 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar8), iVar13 != 0)) {
            FUN_00100250(PTR_LAB_04379590,puVar9,&PTR_LOOP_0411a000);
            __cxa_guard_release(puVar8);
          }
          lVar16 = *(long *)puVar9;
          *(long *)puVar10 = lVar16;
          local_100 = (undefined8 *)*plVar17;
          FUN_02a44274(lVar16 + 0xd8,&local_100);
        }
      }
      plVar17 = local_90;
      if (local_90 != (long *)0x0) {
        plVar1 = local_90 + 1;
        do {
          iVar13 = (int)*plVar1 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = iVar13;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar13 == 0) {
          local_90[2] = 0;
          if (((*puVar8 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar8), iVar13 != 0)) {
            FUN_00100250(PTR_LAB_04379590,puVar9,&PTR_LOOP_0411a000);
            __cxa_guard_release(puVar8);
          }
          lVar16 = *(long *)puVar9;
          *(long *)puVar10 = lVar16;
          local_100 = (undefined8 *)*plVar17;
          FUN_02a44274(lVar16 + 0xd8,&local_100);
        }
      }
      lVar19 = lVar19 + 0x20;
    } while (lVar19 != lVar20);
  }
  return;
}


