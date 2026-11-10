/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e9ba4c; name: FUN_01e9ba4c
 */


void FUN_01e9ba4c(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  undefined8 *local_90;
  undefined8 uStack_88;
  long *local_80;
  undefined8 *local_78 [2];
  undefined8 local_68;
  
  (**(code **)(*param_1 + 0x140))();
  FUN_01e9ac98(param_1);
  (**(code **)(*param_1 + 0x128))(param_1);
  *(undefined2 *)(param_1 + 0x9b) = 0;
  *(undefined1 *)((long)param_1 + 0x4da) = 0;
  *(undefined1 *)((long)param_1 + 0x4dc) = 0;
  *(undefined4 *)(param_1 + 0xbd) = 0;
  *(undefined1 *)((long)param_1 + 0x636) = 0;
  *(undefined1 *)(param_1 + 199) = 0;
  *(undefined2 *)((long)param_1 + 0x63a) = 0;
  *(undefined1 *)((long)param_1 + 0x63c) = 0;
  *(undefined1 *)((long)param_1 + 0x63f) = 0;
  FUN_01e98c2c(&local_80,param_1);
  puVar8 = PTR_DAT_0437a880;
  puVar7 = PTR_DAT_0437a878;
  puVar6 = PTR_DAT_043795e0;
  puVar5 = PTR_DAT_043794d8;
  puVar4 = PTR_DAT_043794d0;
  if (local_80 != (long *)0x0) {
    lVar13 = param_1[0xb8];
    if ((lVar13 != 0) && (*(int *)(lVar13 + 0xc) != 0)) {
      piVar1 = (int *)(lVar13 + 0xc);
      iVar11 = *(int *)(lVar13 + 0xc);
      do {
        plVar15 = *(long **)(lVar13 + 0x10);
        if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar7), iVar10 != 0)) {
          if (((*PTR_DAT_043795d8 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar10 != 0)) {
            if (((*puVar4 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar4), iVar10 != 0)) {
              uVar12 = FUN_0087f8f0();
              *(undefined8 *)puVar5 = uVar12;
              __cxa_guard_release(puVar4);
            }
            *(undefined **)puVar6 = puVar5;
            __cxa_guard_release(PTR_DAT_043795d8);
          }
          *(undefined **)puVar8 = puVar6;
          __cxa_guard_release(puVar7);
        }
        while( true ) {
          if (plVar15 == (long *)0x0) goto LAB_01e9bad4;
          if (plVar15 == (long *)puVar8) break;
          plVar15 = (long *)*plVar15;
        }
        iVar10 = *piVar1;
        if (iVar10 == iVar11) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar11 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 != '\0') goto LAB_01e9bbb0;
          lVar13 = *(long *)(lVar13 + 0x18);
          plVar15 = (long *)(lVar13 + -0x50);
          if (lVar13 != 0) {
            (**(code **)(*local_80 + 0x18))(local_78);
            local_90 = (undefined8 *)0x0;
            uStack_88 = 0;
            FUN_0087f944(&local_90,local_78);
            puVar9 = local_78[0];
            if (local_78[0] != (undefined8 *)0x0) {
              piVar1 = (int *)(local_78[0] + 1);
              do {
                iVar11 = *piVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar11 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar11 + -1 == 0) {
                local_78[0][2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar14 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar14;
                local_68 = *puVar9;
                FUN_02a44274(lVar14 + 0xd8,&local_68);
              }
            }
            FUN_00d804f8(plVar15,&local_90,1);
            puVar9 = local_90;
            if (local_90 != (undefined8 *)0x0) {
              piVar1 = (int *)(local_90 + 1);
              do {
                iVar11 = *piVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar11 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar11 + -1 == 0) {
                local_90[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar14 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar14;
                local_78[0] = (undefined8 *)*puVar9;
                FUN_02a44274(lVar14 + 0xd8,local_78);
              }
            }
            lVar13 = *(long *)(lVar13 + 8);
            piVar1 = (int *)(lVar13 + 0xc);
            do {
              iVar11 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar11 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar11 + -1 != 0) break;
            *(undefined8 *)(lVar13 + 0x18) = 0;
            (**(code **)(*plVar15 + 0x20))(plVar15);
            if (local_80 == (long *)0x0) goto LAB_01e9baf8;
            goto LAB_01e9badc;
          }
          break;
        }
        ClearExclusiveLocal();
LAB_01e9bbb0:
        iVar11 = iVar10;
      } while (iVar10 != 0);
    }
LAB_01e9bad4:
    if (local_80 != (long *)0x0) {
LAB_01e9badc:
      lVar13 = local_80[0xb];
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        iVar11 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar11 + -1 == 0) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*local_80 + 0x20))();
      }
    }
  }
LAB_01e9baf8:
  *(undefined1 *)((long)param_1 + 0x632) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  return;
}


