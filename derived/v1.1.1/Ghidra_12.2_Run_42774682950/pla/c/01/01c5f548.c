/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c5f548; name: FUN_01c5f548
 */


void FUN_01c5f548(long param_1)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  undefined1 in_q3 [16];
  undefined8 uVar19;
  long *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long *local_58;
  
  puVar5 = PTR_DAT_043796e8;
  puVar8 = PTR_DAT_043796e0;
  puVar7 = PTR_DAT_043794d8;
  puVar6 = PTR_DAT_043794d0;
  uVar19 = in_q3._8_8_;
  uVar18 = in_q3._0_8_;
  uStack_68 = 0;
  local_70 = 0;
  lVar14 = *(long *)(param_1 + 0x3a0);
  if ((lVar14 != 0) && (*(int *)(lVar14 + 0xc) != 0)) {
    piVar2 = (int *)(lVar14 + 0xc);
    iVar10 = *(int *)(lVar14 + 0xc);
    do {
      plVar15 = *(long **)(lVar14 + 0x10);
      if (((*puVar8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar8), iVar11 != 0)) {
        if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar6), iVar11 != 0)) {
          uVar12 = FUN_0087f8f0();
          *(undefined8 *)puVar7 = uVar12;
          __cxa_guard_release(puVar6);
        }
        *(undefined **)puVar5 = puVar7;
        __cxa_guard_release(puVar8);
      }
      while( true ) {
        if (plVar15 == (long *)0x0) goto LAB_01c5f578;
        if (plVar15 == (long *)puVar5) break;
        plVar15 = (long *)*plVar15;
      }
      iVar11 = *piVar2;
      if (iVar11 == iVar10) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar14 = *(long *)(lVar14 + 0x18);
          plVar15 = (long *)(lVar14 + -0x50);
          if (lVar14 != 0) {
            FUN_0199c138(&local_58,plVar15);
            if (local_58 != (long *)0x0) {
              FUN_009c69bc(&local_78);
              (**(code **)(*local_78 + 0x40))();
              local_70 = uVar18;
              uStack_68 = uVar19;
              if (local_78 != (long *)0x0) {
                lVar13 = local_78[0xb];
                piVar2 = (int *)(lVar13 + 0xc);
                do {
                  iVar10 = *piVar2;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar4) {
                    *piVar2 = iVar10 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar10 + -1 == 0) {
                  *(undefined8 *)(lVar13 + 0x18) = 0;
                  (**(code **)(*local_78 + 0x20))();
                }
              }
              if (local_58 != (long *)0x0) {
                lVar13 = local_58[0xb];
                piVar2 = (int *)(lVar13 + 0xc);
                do {
                  iVar10 = *piVar2;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar4) {
                    *piVar2 = iVar10 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar10 + -1 == 0) {
                  *(undefined8 *)(lVar13 + 0x18) = 0;
                  (**(code **)(*local_58 + 0x20))();
                }
              }
            }
            lVar14 = *(long *)(lVar14 + 8);
            piVar2 = (int *)(lVar14 + 0xc);
            do {
              iVar10 = *piVar2;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar4) {
                *piVar2 = iVar10 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar10 + -1 == 0) {
              *(undefined8 *)(lVar14 + 0x18) = 0;
              (**(code **)(*plVar15 + 0x20))(plVar15);
            }
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar10 = iVar11;
    } while (iVar11 != 0);
  }
LAB_01c5f578:
  FUN_01c624dc(param_1,&local_70);
  puVar8 = PTR_DAT_043794a8;
  puVar7 = PTR_DAT_043794a0;
  puVar6 = PTR_DAT_04379498;
  puVar16 = *(undefined8 **)(param_1 + 0x2c0);
  if (*(undefined8 **)(param_1 + 0x2c8) != puVar16) {
    puVar17 = *(undefined8 **)(param_1 + 0x2c8) + -2;
    plVar15 = (long *)*puVar17;
    puVar5 = PTR_LAB_04379590;
    puVar9 = PTR_LAB_04379590;
    if (plVar15 != (long *)0x0) {
      plVar1 = plVar15 + 1;
      do {
        iVar10 = (int)*plVar1 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = iVar10;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      puVar5 = PTR_LAB_04379590;
      puVar9 = PTR_LAB_04379590;
      if (iVar10 == 0) {
        plVar15[2] = 0;
        if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar14 = *(long *)puVar7;
        *(long *)puVar8 = lVar14;
        local_58 = (long *)*plVar15;
        FUN_02a44274(lVar14 + 0xd8,&local_58);
        puVar5 = PTR_LAB_04379590;
        puVar9 = PTR_LAB_04379590;
      }
    }
    while (PTR_LAB_04379590 = puVar9, puVar9 = PTR_LAB_04379590, PTR_LAB_04379590 = puVar5,
          puVar17 != puVar16) {
      puVar17 = puVar17 + -2;
      plVar15 = (long *)*puVar17;
      if (plVar15 != (long *)0x0) {
        plVar1 = plVar15 + 1;
        do {
          iVar10 = (int)*plVar1 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = iVar10;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        puVar5 = PTR_LAB_04379590;
        if (iVar10 == 0) {
          plVar15[2] = 0;
          if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar6), iVar10 != 0)) {
            FUN_00100250(puVar9,puVar7,&PTR_LOOP_0411a000);
            __cxa_guard_release(puVar6);
          }
          lVar14 = *(long *)puVar7;
          *(long *)puVar8 = lVar14;
          local_58 = (long *)*plVar15;
          FUN_02a44274(lVar14 + 0xd8,&local_58);
          puVar5 = PTR_LAB_04379590;
        }
      }
    }
  }
  *(undefined8 **)(param_1 + 0x2c8) = puVar16;
  return;
}


