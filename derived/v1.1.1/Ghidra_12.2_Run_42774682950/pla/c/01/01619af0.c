/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01619af0; name: FUN_01619af0
 */


/* WARNING: Type propagation algorithm not settling */

bool FUN_01619af0(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  long *plVar15;
  long *local_80;
  long *local_78;
  undefined8 *local_70;
  undefined8 uStack_68;
  undefined8 local_58;
  
  FUN_0165a7a0(&local_70);
  puVar5 = local_70;
  puVar9 = PTR_DAT_043796e8;
  puVar8 = PTR_DAT_043796e0;
  puVar7 = PTR_DAT_043794d8;
  puVar6 = PTR_DAT_043794d0;
  if (local_70 != (undefined8 *)0x0) {
    if (*(int *)((long)local_70 + 0xc) != 0) {
      piVar1 = (int *)((long)local_70 + 0xc);
      iVar11 = *(int *)((long)local_70 + 0xc);
      do {
        plVar15 = (long *)puVar5[2];
        if (((*puVar8 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar8), iVar10 != 0)) {
          if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar6), iVar10 != 0)) {
            uVar13 = FUN_0087f8f0();
            *(undefined8 *)puVar7 = uVar13;
            __cxa_guard_release(puVar6);
          }
          *(undefined **)puVar9 = puVar7;
          __cxa_guard_release(puVar8);
        }
        while( true ) {
          if (plVar15 == (long *)0x0) goto LAB_01619d30;
          if (plVar15 == (long *)puVar9) break;
          plVar15 = (long *)*plVar15;
        }
        iVar10 = *piVar1;
        if (iVar10 == iVar11) {
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar11 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar14 = puVar5[3];
            local_80 = (long *)0x0;
            puVar5 = local_70;
            if (lVar14 != 0) {
              local_80 = (long *)(lVar14 + -0x50);
            }
            goto joined_r0x01619c10;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar11 = iVar10;
      } while (iVar10 != 0);
    }
LAB_01619d30:
    local_80 = (long *)0x0;
    puVar5 = local_70;
joined_r0x01619c10:
    local_70 = puVar5;
    if (puVar5 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar5 + 1);
      do {
        iVar11 = *piVar1;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar11 + -1 == 0) {
        puVar5[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar14 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar14;
        local_58 = *puVar5;
        FUN_02a44274(lVar14 + 0xd8,&local_58);
      }
    }
    if (local_80 != (long *)0x0) {
      FUN_0199c304(&local_70,local_80);
      if (local_70 == (undefined8 *)0x0) {
        local_78 = (long *)0x0;
LAB_01619c8c:
        if (local_78 == (long *)0x0) goto LAB_01619cac;
LAB_01619c94:
        local_70 = (undefined8 *)0x0;
        uStack_68 = 0;
        FUN_00b645bc(&local_70,local_78 + 0xd);
        puVar5 = local_70;
        puVar9 = PTR_DAT_0437a0f0;
        puVar8 = PTR_DAT_0437a0e8;
        if (local_70 == (undefined8 *)0x0) goto LAB_01619cac;
        if (*(int *)((long)local_70 + 0xc) != 0) {
          piVar1 = (int *)((long)local_70 + 0xc);
          iVar11 = *(int *)((long)local_70 + 0xc);
          do {
            plVar15 = (long *)puVar5[2];
            if (((*puVar8 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar8), iVar10 != 0)) {
              if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar6), iVar10 != 0)) {
                uVar13 = FUN_0087f8f0();
                *(undefined8 *)puVar7 = uVar13;
                __cxa_guard_release(puVar6);
              }
              *(undefined **)puVar9 = puVar7;
              __cxa_guard_release(puVar8);
            }
            while( true ) {
              if (plVar15 == (long *)0x0) goto LAB_01619fb4;
              if (plVar15 == (long *)puVar9) break;
              plVar15 = (long *)*plVar15;
            }
            iVar10 = *piVar1;
            if (iVar10 == iVar11) {
              cVar2 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar11 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') {
                lVar14 = puVar5[3];
                plVar15 = (long *)0x0;
                puVar5 = local_70;
                if (lVar14 != 0) {
                  plVar15 = (long *)(lVar14 + -0x50);
                }
                goto joined_r0x01619ec8;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            iVar11 = iVar10;
          } while (iVar10 != 0);
        }
LAB_01619fb4:
        plVar15 = (long *)0x0;
        puVar5 = local_70;
joined_r0x01619ec8:
        local_70 = puVar5;
        if (puVar5 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar5 + 1);
          do {
            iVar11 = *piVar1;
            cVar2 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar11 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar11 + -1 == 0) {
            puVar5[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar14 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar14;
            local_58 = *puVar5;
            FUN_02a44274(lVar14 + 0xd8,&local_58);
          }
        }
        if (plVar15 == (long *)0x0) goto LAB_01619cac;
        uVar12 = FUN_01845504(plVar15,param_2);
        lVar14 = plVar15[0xb];
        piVar1 = (int *)(lVar14 + 0xc);
        do {
          iVar11 = *piVar1;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar11 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar11 + -1 == 0) {
          *(undefined8 *)(lVar14 + 0x18) = 0;
          (**(code **)(*plVar15 + 0x20))(plVar15);
        }
        if ((uVar12 & 1) == 0) goto LAB_01619cac;
        bVar4 = true;
        if (local_78 != (long *)0x0) goto LAB_01619cb8;
LAB_01619cd4:
        if (bVar4) goto LAB_01619cd8;
LAB_01619cfc:
        bVar4 = false;
      }
      else {
        FUN_009acf14(&local_78);
        puVar5 = local_70;
        if (local_70 == (undefined8 *)0x0) goto LAB_01619c8c;
        piVar1 = (int *)(local_70 + 1);
        do {
          iVar11 = *piVar1;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar11 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar11 + -1 != 0) goto LAB_01619c8c;
        local_70[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar14 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar14;
        local_58 = *puVar5;
        FUN_02a44274(lVar14 + 0xd8,&local_58);
        if (local_78 != (long *)0x0) goto LAB_01619c94;
LAB_01619cac:
        bVar4 = false;
        if (local_78 == (long *)0x0) goto LAB_01619cd4;
LAB_01619cb8:
        lVar14 = local_78[0xb];
        piVar1 = (int *)(lVar14 + 0xc);
        do {
          iVar11 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar11 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar11 + -1 != 0) goto LAB_01619cd4;
        *(undefined8 *)(lVar14 + 0x18) = 0;
        (**(code **)(*local_78 + 0x20))();
        if (!bVar4) goto LAB_01619cfc;
LAB_01619cd8:
        bVar4 = true;
      }
      if (local_80 != (long *)0x0) {
        lVar14 = local_80[0xb];
        piVar1 = (int *)(lVar14 + 0xc);
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
          *(undefined8 *)(lVar14 + 0x18) = 0;
          (**(code **)(*local_80 + 0x20))();
        }
      }
      goto LAB_01619b4c;
    }
  }
  bVar4 = false;
LAB_01619b4c:
  return !bVar4;
}


