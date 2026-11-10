/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 017d4c90; name: FUN_017d4c90
 */


void FUN_017d4c90(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  int *piVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long *local_c8;
  undefined8 uStack_c0;
  long *local_b8;
  undefined8 uStack_b0;
  long *local_a8;
  undefined8 uStack_a0;
  long *local_98;
  undefined8 uStack_90;
  long *local_88;
  undefined8 uStack_80;
  long *local_78;
  long *local_70;
  undefined8 uStack_68;
  
  local_98 = (long *)0x0;
  uStack_90 = 0;
  FUN_017db6d4(&local_98);
  puVar9 = PTR_DAT_043794a8;
  puVar8 = PTR_DAT_043794a0;
  puVar7 = PTR_DAT_04379498;
  lVar14 = *(long *)(param_1 + 0x78);
  do {
    if (lVar14 == param_1 + 0x70) {
      local_88 = (long *)0x0;
      uStack_80 = 0;
      local_78 = (long *)0x0;
      plVar6 = local_98;
joined_r0x017d51fc:
      local_98 = plVar6;
      if (plVar6 != (long *)0x0) {
        plVar1 = plVar6 + 1;
        do {
          iVar10 = (int)*plVar1 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *(int *)plVar1 = iVar10;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar10 == 0) {
          plVar6[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar14 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar14;
          local_70 = (long *)*plVar6;
          FUN_02a44274(lVar14 + 0xd8,&local_70);
        }
      }
      plVar6 = local_78;
      if (local_78 == (long *)0x0) {
        FUN_017d52fc(&local_70,*(undefined8 *)(param_1 + 8));
        plVar6 = local_78;
        local_78 = (long *)0x0;
        if (plVar6 != (long *)0x0) {
          lVar14 = plVar6[0xb];
          piVar2 = (int *)(lVar14 + 0xc);
          do {
            iVar10 = *piVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = iVar10 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar10 + -1 == 0) {
            *(undefined8 *)(lVar14 + 0x18) = 0;
            (**(code **)(*plVar6 + 0x20))();
          }
        }
        plVar6 = local_70;
        local_b8 = (long *)0x0;
        uStack_b0 = 0;
        local_78 = local_70;
        FUN_017db6d4(&local_b8,param_2);
        FUN_017d5204(plVar6,&local_b8);
        plVar6 = local_b8;
        if (local_b8 != (long *)0x0) {
          plVar1 = local_b8 + 1;
          do {
            iVar10 = (int)*plVar1 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *(int *)plVar1 = iVar10;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar10 == 0) {
            local_b8[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar14 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar14;
            local_70 = (long *)*plVar6;
            FUN_02a44274(lVar14 + 0xd8,&local_70);
          }
        }
        plVar6 = local_78;
        local_c8 = (long *)0x0;
        uStack_c0 = 0;
        FUN_017db6d4(&local_c8,param_3);
        FUN_017d5204(plVar6,&local_c8);
        plVar6 = local_c8;
        if (local_c8 != (long *)0x0) {
          plVar1 = local_c8 + 1;
          do {
            iVar10 = (int)*plVar1 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *(int *)plVar1 = iVar10;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar10 == 0) {
            local_c8[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar14 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar14;
            local_70 = (long *)*plVar6;
            FUN_02a44274(lVar14 + 0xd8,&local_70);
          }
        }
        FUN_017d5378(local_78);
        FUN_017d54ac(param_1 + 0x70,&local_78);
      }
      else {
        local_a8 = (long *)0x0;
        uStack_a0 = 0;
        FUN_017db6d4(&local_a8,param_3);
        FUN_017d5204(plVar6,&local_a8);
        plVar6 = local_a8;
        if (local_a8 != (long *)0x0) {
          plVar1 = local_a8 + 1;
          do {
            iVar10 = (int)*plVar1 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *(int *)plVar1 = iVar10;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar10 == 0) {
            local_a8[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar14 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar14;
            local_70 = (long *)*plVar6;
            FUN_02a44274(lVar14 + 0xd8,&local_70);
          }
        }
      }
      if (local_78 != (long *)0x0) {
        lVar14 = local_78[0xb];
        piVar2 = (int *)(lVar14 + 0xc);
        do {
          iVar10 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = iVar10 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar10 + -1 == 0) {
          *(undefined8 *)(lVar14 + 0x18) = 0;
          (**(code **)(*local_78 + 0x20))();
        }
      }
      return;
    }
    uVar13 = *(undefined8 *)(lVar14 + 0x10);
    local_70 = (long *)0x0;
    uStack_68 = 0;
    FUN_017db6d4(&local_70,&local_98);
    uVar11 = FUN_017d9c14(uVar13,&local_70);
    plVar6 = local_70;
    if (local_70 != (long *)0x0) {
      plVar1 = local_70 + 1;
      do {
        iVar10 = (int)*plVar1 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *(int *)plVar1 = iVar10;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar10 == 0) {
        local_70[2] = 0;
        uVar11 = uVar11 & 0xffffffff;
        if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar7), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_04379590,puVar8,&PTR_LOOP_0411a000);
          __cxa_guard_release(puVar7);
        }
        lVar12 = *(long *)puVar8;
        *(long *)puVar9 = lVar12;
        local_88 = (long *)*plVar6;
        FUN_02a44274(lVar12 + 0xd8,&local_88);
      }
    }
    if ((uVar11 & 1) != 0) {
      FUN_017d5e94(&local_88,*(undefined8 *)(lVar14 + 0x10));
      if (local_88 == (long *)0x0) {
        local_78 = (long *)0x0;
        plVar6 = local_98;
      }
      else {
        FUN_017dce5c(&local_78);
        plVar1 = local_88;
        plVar6 = local_98;
        if (local_88 != (long *)0x0) {
          plVar3 = local_88 + 1;
          do {
            iVar10 = (int)*plVar3 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
            if (bVar5) {
              *(int *)plVar3 = iVar10;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar10 == 0) {
            local_88[2] = 0;
            if (((*puVar7 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar14 = *(long *)puVar8;
            *(long *)puVar9 = lVar14;
            local_70 = (long *)*plVar1;
            FUN_02a44274(lVar14 + 0xd8,&local_70);
            plVar6 = local_98;
          }
        }
      }
      goto joined_r0x017d51fc;
    }
    lVar14 = *(long *)(lVar14 + 8);
  } while( true );
}


