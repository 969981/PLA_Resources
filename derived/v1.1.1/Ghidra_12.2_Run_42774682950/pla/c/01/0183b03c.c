/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0183b03c; name: FUN_0183b03c
 */


undefined8 FUN_0183b03c(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  byte bVar10;
  uint uVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  bool bVar16;
  long *plVar17;
  undefined8 *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long *local_68;
  
  puVar9 = PTR_LAB_04379590;
  puVar8 = PTR_DAT_043794a8;
  puVar7 = PTR_DAT_043794a0;
  puVar6 = PTR_DAT_04379498;
  if (*(char *)(param_1 + 0x200) == '\0') {
    lVar14 = *(long *)(param_1 + 0x400);
    lVar15 = *(long *)(param_1 + 0x408);
    if (lVar14 != lVar15) {
      bVar16 = false;
      do {
        local_80 = (undefined8 *)0x0;
        uStack_78 = 0;
        FUN_0095aa3c(&local_80,lVar14);
        local_70 = *(undefined8 *)(lVar14 + 0x10);
        FUN_0183af10(&local_68,&local_80);
        plVar17 = local_68;
        if (local_68 != (long *)0x0) {
          if (*(char *)((long)local_68 + 0xc) == '\0') {
            bVar10 = (**(code **)(*local_68 + 0x40))(local_68);
            *(byte *)((long)plVar17 + 0xc) = bVar10 & 1;
            lVar13 = plVar17[1];
            *(int *)(plVar17 + 1) = (int)lVar13 + 1;
            if (((bVar10 & 1) == 0) && ((int)lVar13 < 0x3ff)) {
              bVar16 = true;
            }
          }
          (**(code **)(*plVar17 + 0x18))(plVar17);
        }
        puVar5 = local_80;
        if (local_80 != (undefined8 *)0x0) {
          piVar1 = (int *)(local_80 + 1);
          do {
            iVar12 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar12 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar12 + -1 == 0) {
            local_80[2] = 0;
            if (((*puVar6 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar6), iVar12 != 0)) {
              FUN_00100250(puVar9,puVar7,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar6);
            }
            lVar13 = *(long *)puVar7;
            *(long *)puVar8 = lVar13;
            local_68 = (long *)*puVar5;
            FUN_02a44274(lVar13 + 0xd8,&local_68);
          }
        }
        lVar14 = lVar14 + 0x18;
      } while (lVar14 != lVar15);
      if (bVar16) {
        return 0;
      }
    }
    puVar8 = PTR_LAB_04379590;
    puVar7 = PTR_DAT_043794a0;
    puVar6 = PTR_DAT_04379498;
    lVar14 = *(long *)(param_1 + 0x2f8);
    lVar15 = *(long *)(param_1 + 0x300);
    if (lVar14 != lVar15) {
      do {
        local_80 = (undefined8 *)0x0;
        uStack_78 = 0;
        FUN_01841e68(&local_80,lVar14);
        puVar5 = local_80;
        if (local_80 != (undefined8 *)0x0) {
          if (*(int *)((long)local_80 + 0xc) != 0) {
            piVar1 = (int *)((long)local_80 + 0xc);
            iVar12 = *(int *)((long)local_80 + 0xc);
            do {
              plVar17 = (long *)puVar5[2];
              lVar13 = FUN_018415dc();
              while( true ) {
                if (plVar17 == (long *)0x0) goto LAB_0183b318;
                if (plVar17 == (long *)lVar13) break;
                plVar17 = (long *)*plVar17;
              }
              iVar2 = *piVar1;
              if (iVar2 == iVar12) {
                cVar3 = '\x01';
                bVar16 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar16) {
                  *piVar1 = iVar12 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
                if (cVar3 == '\0') {
                  lVar13 = puVar5[3];
                  if (lVar13 == 0) {
                    uVar11 = 0;
                    puVar5 = local_80;
                  }
                  else {
                    plVar17 = (long *)(lVar13 + -0x50);
                    uVar11 = FUN_01beb4c4(plVar17);
                    uVar11 = ~uVar11 & 1;
                    lVar13 = *(long *)(lVar13 + 8);
                    piVar1 = (int *)(lVar13 + 0xc);
                    do {
                      iVar12 = *piVar1;
                      cVar3 = '\x01';
                      bVar16 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                      if (bVar16) {
                        *piVar1 = iVar12 + -1;
                        cVar3 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar3 != '\0');
                    puVar5 = local_80;
                    if (iVar12 + -1 == 0) {
                      *(undefined8 *)(lVar13 + 0x18) = 0;
                      (**(code **)(*plVar17 + 0x20))(plVar17);
                      puVar5 = local_80;
                    }
                  }
                  goto joined_r0x0183b2e8;
                }
              }
              else {
                ClearExclusiveLocal();
              }
              iVar12 = iVar2;
            } while (iVar2 != 0);
          }
LAB_0183b318:
          uVar11 = 0;
          puVar5 = local_80;
joined_r0x0183b2e8:
          if (puVar5 != (undefined8 *)0x0) {
            piVar1 = (int *)(puVar5 + 1);
            do {
              iVar12 = *piVar1;
              cVar3 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar16) {
                *piVar1 = iVar12 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar12 + -1 == 0) {
              puVar5[2] = 0;
              local_80 = puVar5;
              if (((*puVar6 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar6), iVar12 != 0)) {
                FUN_00100250(puVar8,puVar7,&PTR_LOOP_0411a000);
                __cxa_guard_release(puVar6);
              }
              lVar13 = *(long *)puVar7;
              *(long *)PTR_DAT_043794a8 = lVar13;
              local_68 = (long *)*puVar5;
              FUN_02a44274(lVar13 + 0xd8,&local_68);
            }
          }
          if (uVar11 != 0) {
            return 0;
          }
        }
        lVar14 = lVar14 + 0x10;
        if (lVar14 == lVar15) {
          return 1;
        }
      } while( true );
    }
  }
  return 1;
}


