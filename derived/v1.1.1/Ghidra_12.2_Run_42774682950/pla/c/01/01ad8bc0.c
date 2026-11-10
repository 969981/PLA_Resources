/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ad8bc0; name: FUN_01ad8bc0
 */


void FUN_01ad8bc0(long *param_1,undefined1 *param_2,long *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 *local_a0;
  undefined8 uStack_98;
  undefined8 *local_90;
  undefined8 uStack_88;
  long *local_80;
  long *local_78;
  undefined8 *local_70 [2];
  undefined8 local_58;
  
  puVar7 = PTR_DAT_0437a0f0;
  puVar6 = PTR_DAT_0437a0e8;
  puVar5 = PTR_DAT_043794d8;
  puVar4 = PTR_DAT_043794d0;
  lVar13 = *param_3;
  if ((lVar13 != 0) && (*(int *)(lVar13 + 0xc) != 0)) {
    piVar1 = (int *)(lVar13 + 0xc);
    iVar10 = *(int *)(lVar13 + 0xc);
    do {
      puVar15 = *(undefined8 **)(lVar13 + 0x10);
      if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar6), iVar9 != 0)) {
        if (((*puVar4 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar4), iVar9 != 0)) {
          uVar14 = FUN_0087f8f0();
          *(undefined8 *)puVar5 = uVar14;
          __cxa_guard_release(puVar4);
        }
        *(undefined **)puVar7 = puVar5;
        __cxa_guard_release(puVar6);
      }
      while( true ) {
        if (puVar15 == (undefined8 *)0x0) goto LAB_01ad8be8;
        if (puVar15 == (undefined8 *)puVar7) break;
        puVar15 = (undefined8 *)*puVar15;
      }
      iVar9 = *piVar1;
      if (iVar9 == iVar10) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar13 = *(long *)(lVar13 + 0x18);
          if (lVar13 != 0) {
            plVar12 = (long *)(lVar13 + -0x50);
            FUN_01847290(&local_78,plVar12);
            if (local_78 == (long *)0x0) goto LAB_01ad8cf0;
            if (param_2 == &DAT_cbf29ce484222645) goto LAB_01ad8cd4;
            FUN_01ad9044(&local_80,local_78,0x28,param_2);
            plVar8 = local_80;
            if (local_80 != (long *)0x0) {
              if (param_1[0xb6] == 0) {
                puVar15 = (undefined8 *)PTR_DAT_04379c88;
              }
              else {
                puVar15 = (undefined8 *)(param_1[0xb6] + 0x58);
              }
              uVar14 = *puVar15;
              (**(code **)(*param_1 + 0x18))(local_70,param_1);
              local_a0 = (undefined8 *)0x0;
              uStack_98 = 0;
              FUN_00b6171c(&local_a0,local_70);
              puVar15 = local_70[0];
              if (local_70[0] != (undefined8 *)0x0) {
                piVar1 = (int *)(local_70[0] + 1);
                do {
                  iVar10 = *piVar1;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar3) {
                    *piVar1 = iVar10 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (iVar10 + -1 == 0) {
                  local_70[0][2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar11 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar11;
                  local_58 = *puVar15;
                  FUN_02a44274(lVar11 + 0xd8,&local_58);
                }
              }
              local_90 = (undefined8 *)0x0;
              uStack_88 = 0;
              FUN_01adb12c(&local_90,&local_a0);
              FUN_01f84dc8(plVar8,uVar14,&local_90,0);
              puVar15 = local_90;
              if (local_90 != (undefined8 *)0x0) {
                piVar1 = (int *)(local_90 + 1);
                do {
                  iVar10 = *piVar1;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar3) {
                    *piVar1 = iVar10 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (iVar10 + -1 == 0) {
                  local_90[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar11 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar11;
                  local_70[0] = (undefined8 *)*puVar15;
                  FUN_02a44274(lVar11 + 0xd8,local_70);
                }
              }
              puVar15 = local_a0;
              if (local_a0 != (undefined8 *)0x0) {
                piVar1 = (int *)(local_a0 + 1);
                do {
                  iVar10 = *piVar1;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar3) {
                    *piVar1 = iVar10 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (iVar10 + -1 == 0) {
                  local_a0[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar11 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar11;
                  local_70[0] = (undefined8 *)*puVar15;
                  FUN_02a44274(lVar11 + 0xd8,local_70);
                }
              }
              lVar11 = param_1[0xb9];
              FUN_01f86f18(local_80);
              FUN_01855a28(lVar11);
              if (local_80 != (long *)0x0) {
                lVar11 = local_80[0xb];
                piVar1 = (int *)(lVar11 + 0xc);
                do {
                  iVar10 = *piVar1;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar3) {
                    *piVar1 = iVar10 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (iVar10 + -1 == 0) {
                  *(undefined8 *)(lVar11 + 0x18) = 0;
                  (**(code **)(*local_80 + 0x20))();
                }
              }
            }
            if (local_78 != (long *)0x0) {
LAB_01ad8cd4:
              lVar11 = local_78[0xb];
              piVar1 = (int *)(lVar11 + 0xc);
              do {
                iVar10 = *piVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar10 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar10 + -1 == 0) {
                *(undefined8 *)(lVar11 + 0x18) = 0;
                (**(code **)(*local_78 + 0x20))();
              }
            }
LAB_01ad8cf0:
            lVar13 = *(long *)(lVar13 + 8);
            piVar1 = (int *)(lVar13 + 0xc);
            do {
              iVar10 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar10 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar10 + -1 == 0) {
              *(undefined8 *)(lVar13 + 0x18) = 0;
              (**(code **)(*plVar12 + 0x20))(plVar12);
            }
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar10 = iVar9;
    } while (iVar9 != 0);
  }
LAB_01ad8be8:
  param_1[0xe1] = (long)param_2;
  return;
}


