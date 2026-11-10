/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01830730; name: FUN_01830730
 */


ulong FUN_01830730(ulong param_1,undefined8 param_2,long param_3)

{
  int *piVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  byte bVar5;
  long *plVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  ulong unaff_x20;
  undefined8 *puVar16;
  undefined8 uVar17;
  long *plVar18;
  char local_70;
  undefined7 uStack_6f;
  uint local_5c;
  long *local_58;
  undefined8 local_48;
  
  if (param_3 == 0) {
    uVar14 = 0;
  }
  else {
    unaff_x20 = param_1;
    if (*(long *)(param_3 + 0x18) == 0) {
      uVar14 = 0;
    }
    else {
      FUN_018316b8(&local_70);
      plVar6 = (long *)CONCAT71(uStack_6f,local_70);
      if (plVar6 == (long *)0x0) {
        uVar14 = 0;
      }
      else {
        FUN_01a23904(&local_70,plVar6);
        puVar8 = PTR_DAT_04379e80;
        puVar7 = PTR_DAT_04379e78;
        lVar13 = CONCAT71(uStack_6f,local_70);
        if (lVar13 == 0) {
          plVar15 = (long *)0x0;
        }
        else {
          if (*(int *)(lVar13 + 0xc) != 0) {
            piVar1 = (int *)(lVar13 + 0xc);
            iVar10 = *(int *)(lVar13 + 0xc);
            do {
              plVar15 = *(long **)(lVar13 + 0x10);
              if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
                uVar12 = FUN_0095a420();
                *(undefined8 *)puVar8 = uVar12;
                __cxa_guard_release(puVar7);
              }
              while( true ) {
                if (plVar15 == (long *)0x0) goto LAB_018308c8;
                if (plVar15 == (long *)puVar8) break;
                plVar15 = (long *)*plVar15;
              }
              iVar9 = *piVar1;
              if (iVar9 == iVar10) {
                cVar2 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar10 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
                if (cVar2 == '\0') {
                  plVar15 = (long *)0x0;
                  if (*(long *)(lVar13 + 0x18) != 0) {
                    plVar15 = (long *)(*(long *)(lVar13 + 0x18) + -0x50);
                  }
                  puVar16 = (undefined8 *)CONCAT71(uStack_6f,local_70);
                  if (puVar16 == (undefined8 *)0x0) goto LAB_01830948;
                  goto LAB_018308f0;
                }
              }
              else {
                ClearExclusiveLocal();
              }
              iVar10 = iVar9;
            } while (iVar9 != 0);
          }
LAB_018308c8:
          plVar15 = (long *)0x0;
          puVar16 = (undefined8 *)CONCAT71(uStack_6f,local_70);
          if (puVar16 != (undefined8 *)0x0) {
LAB_018308f0:
            piVar1 = (int *)(puVar16 + 1);
            do {
              iVar10 = *piVar1;
              cVar2 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar10 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar10 + -1 == 0) {
              puVar16[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar13 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar13;
              local_48 = *puVar16;
              FUN_02a44274(lVar13 + 0xd8,&local_48);
            }
          }
LAB_01830948:
          if (((plVar15 != (long *)0x0) && (lVar13 = plVar15[0x3e], lVar13 != 0)) &&
             (*(int *)(lVar13 + 0xc) != 0)) {
            piVar1 = (int *)(lVar13 + 0xc);
            iVar10 = *(int *)(lVar13 + 0xc);
            do {
              plVar18 = *(long **)(lVar13 + 0x10);
              lVar11 = FUN_00a3edb8();
              while( true ) {
                if (plVar18 == (long *)0x0) goto LAB_018307f0;
                if (plVar18 == (long *)lVar11) break;
                plVar18 = (long *)*plVar18;
              }
              iVar9 = *piVar1;
              if (iVar9 == iVar10) {
                cVar2 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar10 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
                if (cVar2 != '\0') goto LAB_018309a0;
                lVar13 = *(long *)(lVar13 + 0x18);
                if (lVar13 != 0) {
                  uVar17 = *(undefined8 *)(param_1 + 0x260);
                  plVar18 = (long *)(lVar13 + -0x50);
                  FUN_02a4754c(&local_70,PTR_DAT_0437a770);
                  uVar12 = FUN_02a9b144(plVar18,&local_70);
                  FUN_02b0fbc0(uVar17,uVar12);
                  if (local_58 != (long *)0x0) {
                    (**(code **)(*local_58 + 0x20))();
                  }
                  FUN_02b0fc14(&local_70,*(undefined8 *)(param_1 + 0x260),param_2);
                  cVar2 = local_70;
                  param_1 = (ulong)local_5c;
                  if (local_70 != '\0') {
                    local_70 = '\0';
                  }
                  lVar13 = *(long *)(lVar13 + 8);
                  piVar1 = (int *)(lVar13 + 0xc);
                  do {
                    iVar10 = *piVar1;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar4) {
                      *piVar1 = iVar10 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (iVar10 + -1 == 0) {
                    *(undefined8 *)(lVar13 + 0x18) = 0;
                    (**(code **)(*plVar18 + 0x20))(plVar18);
                  }
                  if (cVar2 == '\0') break;
                  bVar5 = 1;
                  unaff_x20 = param_1;
                  goto joined_r0x01830ab0;
                }
                break;
              }
              ClearExclusiveLocal();
LAB_018309a0:
              iVar10 = iVar9;
            } while (iVar9 != 0);
          }
        }
LAB_018307f0:
        bVar5 = 0;
        unaff_x20 = param_1;
joined_r0x01830ab0:
        if (plVar15 != (long *)0x0) {
          lVar13 = plVar15[0xb];
          piVar1 = (int *)(lVar13 + 0xc);
          do {
            iVar10 = *piVar1;
            cVar2 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar10 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar10 + -1 == 0) {
            *(undefined8 *)(lVar13 + 0x18) = 0;
            (**(code **)(*plVar15 + 0x20))(plVar15);
          }
        }
        uVar14 = (ulong)bVar5;
        if (plVar6 != (long *)0x0) {
          lVar13 = plVar6[0xb];
          piVar1 = (int *)(lVar13 + 0xc);
          do {
            iVar10 = *piVar1;
            cVar2 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar10 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar10 + -1 == 0) {
            *(undefined8 *)(lVar13 + 0x18) = 0;
            (**(code **)(*plVar6 + 0x20))();
          }
        }
      }
    }
  }
  return uVar14 | unaff_x20 << 0x20;
}


