/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0183ba94; name: FUN_0183ba94
 */


undefined4 FUN_0183ba94(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  byte bVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  undefined4 local_8c;
  undefined8 *local_80;
  undefined8 uStack_78;
  long *local_70;
  undefined8 local_68;
  
  puVar9 = PTR_LAB_04379590;
  puVar8 = PTR_DAT_043794d8;
  puVar7 = PTR_DAT_043794d0;
  puVar6 = PTR_DAT_043794a0;
  puVar5 = PTR_DAT_04379498;
  lVar16 = *(long *)(param_1 + 0x3c8);
  lVar17 = *(long *)(param_1 + 0x3d0);
  if (lVar16 == lVar17) {
    local_8c = 1;
  }
  else {
    local_8c = 1;
    do {
      local_80 = (undefined8 *)0x0;
      uStack_78 = 0;
      FUN_0095aa3c(&local_80,lVar16);
      puVar10 = local_80;
      local_70 = *(long **)(lVar16 + 0x10);
      if (local_80 != (undefined8 *)0x0) {
        if (*(int *)((long)local_80 + 0xc) != 0) {
          piVar1 = (int *)((long)local_80 + 0xc);
          iVar13 = *(int *)((long)local_80 + 0xc);
          do {
            plVar18 = (long *)puVar10[2];
            plVar4 = local_70;
            if ((*puVar7 & 1) == 0) {
              iVar12 = __cxa_guard_acquire(puVar7);
              plVar4 = local_70;
              if (iVar12 != 0) {
                uVar14 = FUN_0087f8f0();
                *(undefined8 *)puVar8 = uVar14;
                __cxa_guard_release(puVar7);
                plVar4 = local_70;
              }
            }
            while( true ) {
              local_70 = plVar4;
              if (plVar18 == (long *)0x0) goto LAB_0183bc3c;
              if (plVar18 == (long *)puVar8) break;
              plVar18 = (long *)*plVar18;
            }
            iVar12 = *piVar1;
            if (iVar12 == iVar13) {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar13 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') {
                lVar15 = puVar10[3];
                if (lVar15 != 0) {
                  plVar18 = (long *)(lVar15 + -8);
                  if (plVar4 == (long *)0x0) {
                    lVar15 = *plVar18;
                  }
                  else {
                    (**(code **)(*plVar4 + 0x10))(plVar4);
                    (**(code **)(*plVar18 + 0x18))(plVar18);
                    if (*(char *)((long)plVar4 + 0xc) == '\0') {
                      bVar11 = (**(code **)(*plVar4 + 0x30))(plVar4);
                      *(byte *)((long)plVar4 + 0xc) = bVar11 & 1;
                      lVar15 = plVar4[1];
                      *(int *)(plVar4 + 1) = (int)lVar15 + 1;
                      if (((bVar11 & 1) == 0) && ((int)lVar15 < 0x3ff)) {
                        local_8c = 0;
                      }
                    }
                    lVar15 = *plVar4;
                    plVar18 = plVar4;
                  }
                  (**(code **)(lVar15 + 0x18))(plVar18);
                }
                break;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            iVar13 = iVar12;
          } while (iVar12 != 0);
        }
LAB_0183bc3c:
        puVar10 = local_80;
        if (local_80 != (undefined8 *)0x0) {
          piVar1 = (int *)(local_80 + 1);
          do {
            iVar13 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar13 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar13 + -1 == 0) {
            local_80[2] = 0;
            if (((*puVar5 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar5), iVar13 != 0)) {
              FUN_00100250(puVar9,puVar6,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar5);
            }
            lVar15 = *(long *)puVar6;
            *(long *)PTR_DAT_043794a8 = lVar15;
            local_68 = *puVar10;
            FUN_02a44274(lVar15 + 0xd8,&local_68);
          }
        }
      }
      lVar16 = lVar16 + 0x18;
    } while (lVar16 != lVar17);
  }
  return local_8c;
}


