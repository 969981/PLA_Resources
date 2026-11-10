/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01d9cda8; name: FUN_01d9cda8
 */


void FUN_01d9cda8(long param_1)

{
  int *piVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  int iVar8;
  int iVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  undefined8 *local_98;
  undefined8 uStack_90;
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  puVar6 = PTR_DAT_043794a0;
  puVar5 = PTR_DAT_04379498;
  lVar13 = *(long *)(param_1 + 0xb0);
  lVar2 = *(long *)(param_1 + 0xb8);
  if (lVar13 != lVar2) {
    do {
      local_88 = (undefined8 *)0x0;
      uStack_80 = 0;
      FUN_00bd10a0(&local_88,lVar13);
      local_78 = (undefined8 *)0x0;
      uStack_70 = 0;
      FUN_00bd0e30(&local_78,lVar13 + 0x10);
      puVar7 = local_88;
      if ((local_88 != (undefined8 *)0x0) && (*(int *)((long)local_88 + 0xc) != 0)) {
        piVar1 = (int *)((long)local_88 + 0xc);
        iVar8 = *(int *)((long)local_88 + 0xc);
        do {
          plVar10 = (long *)puVar7[2];
          if (((*PTR_DAT_0437af70 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_0437af70), iVar9 != 0)) {
            if (((*PTR_DAT_043795d8 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar9 != 0)) {
              if (((*PTR_DAT_043794d0 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar9 != 0)) {
                uVar11 = FUN_0087f8f0();
                *(undefined8 *)PTR_DAT_043794d8 = uVar11;
                __cxa_guard_release(PTR_DAT_043794d0);
              }
              *(undefined **)PTR_DAT_043795e0 = PTR_DAT_043794d8;
              __cxa_guard_release(PTR_DAT_043795d8);
            }
            *(undefined **)PTR_DAT_0437af78 = PTR_DAT_043795e0;
            __cxa_guard_release(PTR_DAT_0437af70);
          }
          while( true ) {
            if (plVar10 == (long *)0x0) goto LAB_01d9ce4c;
            if (plVar10 == (long *)PTR_DAT_0437af78) break;
            plVar10 = (long *)*plVar10;
          }
          iVar9 = *piVar1;
          if (iVar9 == iVar8) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar8 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 != '\0') goto LAB_01d9d068;
            lVar15 = puVar7[3];
            if (lVar15 != 0) {
              plVar10 = (long *)(lVar15 + -0x50);
              lVar15 = *(long *)(lVar15 + 8);
              piVar1 = (int *)(lVar15 + 0xc);
              plVar14 = *(long **)(param_1 + 0x160);
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
                *(undefined8 *)(lVar15 + 0x18) = 0;
                (**(code **)(*plVar10 + 0x20))(plVar10);
              }
              if (plVar14 != plVar10) goto LAB_01d9ce54;
              goto LAB_01d9cf14;
            }
            break;
          }
          ClearExclusiveLocal();
LAB_01d9d068:
          iVar8 = iVar9;
        } while (iVar9 != 0);
      }
LAB_01d9ce4c:
      if (*(long *)(param_1 + 0x160) != 0) {
LAB_01d9ce54:
        local_98 = (undefined8 *)0x0;
        uStack_90 = 0;
        FUN_00bd10a0(&local_98,&local_88);
        lVar15 = *(long *)(param_1 + 0x188);
        plVar10 = (long *)(**(code **)(**(long **)(lVar15 + 0xa80) + 0x10))
                                    (*(long **)(lVar15 + 0xa80),0x20,8);
        if (plVar10 == (long *)0x0) {
          (**(code **)(**(long **)(lVar15 + 0xa80) + 0xb8))();
        }
        *plVar10 = 0;
        FUN_01aa8008((undefined8 *)(lVar15 + 0xa80),plVar10 + 2,&local_98);
        puVar7 = local_98;
        plVar10[1] = lVar15 + 0xa68;
        lVar12 = *(long *)(lVar15 + 0xa68);
        *plVar10 = lVar12;
        *(long **)(lVar12 + 8) = plVar10;
        *(long **)(lVar15 + 0xa68) = plVar10;
        *(long *)(lVar15 + 0xa78) = *(long *)(lVar15 + 0xa78) + 1;
        if (local_98 != (undefined8 *)0x0) {
          piVar1 = (int *)(local_98 + 1);
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
            local_98[2] = 0;
            if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
              FUN_00100250(PTR_LAB_04379590,puVar6,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar5);
            }
            lVar15 = *(long *)puVar6;
            *(long *)PTR_DAT_043794a8 = lVar15;
            local_68 = *puVar7;
            FUN_02a44274(lVar15 + 0xd8,&local_68);
          }
        }
      }
LAB_01d9cf14:
      puVar7 = local_78;
      if (local_78 != (undefined8 *)0x0) {
        piVar1 = (int *)(local_78 + 1);
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
          local_78[2] = 0;
          if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
            FUN_00100250(PTR_LAB_04379590,puVar6,&PTR_LOOP_0411a000);
            __cxa_guard_release(puVar5);
          }
          lVar15 = *(long *)puVar6;
          *(long *)PTR_DAT_043794a8 = lVar15;
          local_98 = (undefined8 *)*puVar7;
          FUN_02a44274(lVar15 + 0xd8,&local_98);
        }
      }
      puVar7 = local_88;
      if (local_88 != (undefined8 *)0x0) {
        piVar1 = (int *)(local_88 + 1);
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
          local_88[2] = 0;
          if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
            FUN_00100250(PTR_LAB_04379590,puVar6,&PTR_LOOP_0411a000);
            __cxa_guard_release(puVar5);
          }
          lVar15 = *(long *)puVar6;
          *(long *)PTR_DAT_043794a8 = lVar15;
          local_98 = (undefined8 *)*puVar7;
          FUN_02a44274(lVar15 + 0xd8,&local_98);
        }
      }
      lVar13 = lVar13 + 0x20;
    } while (lVar13 != lVar2);
  }
  return;
}


