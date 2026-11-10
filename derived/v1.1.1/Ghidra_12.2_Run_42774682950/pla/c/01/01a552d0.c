/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a552d0; name: FUN_01a552d0
 */


void FUN_01a552d0(long param_1)

{
  int *piVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  code *pcVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long *plVar15;
  code *local_e0;
  code *local_d8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  int *local_c0 [12];
  long *local_60;
  int local_54;
  undefined8 local_48;
  
  *(undefined1 *)(param_1 + 0x8a5) = 0;
  puVar6 = PTR_DAT_0437a558;
  puVar5 = PTR_DAT_0437a550;
  local_54 = 0;
  lVar12 = *(long *)(param_1 + 0x8a8);
  if ((lVar12 != 0) && (*(int *)(lVar12 + 0xc) != 0)) {
    piVar1 = (int *)(lVar12 + 0xc);
    iVar8 = *(int *)(lVar12 + 0xc);
    do {
      plVar15 = *(long **)(lVar12 + 0x10);
      if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
        uVar9 = FUN_00aa0310();
        *(undefined8 *)puVar6 = uVar9;
        __cxa_guard_release(puVar5);
      }
      while( true ) {
        if (plVar15 == (long *)0x0) goto LAB_01a552fc;
        if (plVar15 == (long *)puVar6) break;
        plVar15 = (long *)*plVar15;
      }
      iVar7 = *piVar1;
      if (iVar7 == iVar8) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar12 = *(long *)(lVar12 + 0x18);
          if (lVar12 != 0) {
            plVar15 = (long *)(lVar12 + -0x50);
            FUN_00a9ecd4(&local_e0,plVar15);
            FUN_009983e4(&local_60,&local_e0);
            pcVar11 = local_e0;
            if (local_e0 != (code *)0x0) {
              pcVar2 = local_e0 + 8;
              do {
                iVar8 = *(int *)pcVar2;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
                if (bVar4) {
                  *(int *)pcVar2 = iVar8 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar8 + -1 == 0) {
                *(undefined8 *)(local_e0 + 0x10) = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar10 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar10;
                local_48 = *(undefined8 *)pcVar11;
                FUN_02a44274(lVar10 + 0xd8,&local_48);
              }
            }
            if (local_60 != (long *)0x0) {
              local_e0 = FUN_01a6f944;
              local_d8 = FUN_01a6f958;
              local_c0[0] = &local_54;
              local_d0 = &LAB_01a6f95c;
              puStack_c8 = &LAB_01a6f968;
              puVar14 = (undefined8 *)local_60[0x4a];
              puVar13 = (undefined8 *)local_60[0x4b];
              pcVar11 = FUN_01a6f958;
              if (puVar14 == puVar13) {
LAB_01a554f0:
                local_d0 = (undefined1 *)0x0;
                puStack_c8 = (undefined1 *)0x0;
                local_e0 = (code *)0x0;
                local_d8 = (code *)0x0;
                (*pcVar11)(local_c0);
              }
              else {
                FUN_01a6f944(local_c0,&local_48);
                if (puVar14 + 1 != puVar13) {
                  local_48 = puVar14[1];
                  (*local_e0)(local_c0,&local_48);
                  if (puVar14 + 2 != puVar13) {
                    local_48 = puVar14[2];
                    (*local_e0)(local_c0,&local_48);
                    for (puVar14 = puVar14 + 3; puVar14 != puVar13; puVar14 = puVar14 + 1) {
                      local_48 = *puVar14;
                      (*local_e0)(local_c0,&local_48);
                    }
                  }
                }
                pcVar11 = local_d8;
                if (local_d8 != (code *)0x0) goto LAB_01a554f0;
              }
              if (local_60 != (long *)0x0) {
                lVar10 = local_60[0xb];
                piVar1 = (int *)(lVar10 + 0xc);
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
                  *(undefined8 *)(lVar10 + 0x18) = 0;
                  (**(code **)(*local_60 + 0x20))();
                }
              }
            }
            lVar12 = *(long *)(lVar12 + 8);
            piVar1 = (int *)(lVar12 + 0xc);
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
              *(undefined8 *)(lVar12 + 0x18) = 0;
              (**(code **)(*plVar15 + 0x20))(plVar15);
            }
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar8 = iVar7;
    } while (iVar7 != 0);
  }
LAB_01a552fc:
  *(bool *)(param_1 + 0x8a5) = 1 < local_54;
  return;
}


