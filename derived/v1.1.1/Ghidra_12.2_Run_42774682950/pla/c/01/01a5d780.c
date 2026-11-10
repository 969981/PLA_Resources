/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a5d780; name: FUN_01a5d780
 */


void FUN_01a5d780(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 local_48;
  
  local_58 = 0;
  local_60 = (undefined8 *)0x0;
  FUN_01a68600(&local_60,param_1 + 0x880);
  puVar7 = local_60;
  puVar6 = PTR_DAT_04382480;
  puVar5 = PTR_DAT_04382478;
  if (local_60 != (undefined8 *)0x0) {
    puVar4 = local_60;
    if (*(int *)((long)local_60 + 0xc) != 0) {
      piVar1 = (int *)((long)local_60 + 0xc);
      iVar9 = *(int *)((long)local_60 + 0xc);
      do {
        plVar12 = (long *)puVar7[2];
        if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
          uVar10 = FUN_009cdcc0();
          *(undefined8 *)puVar6 = uVar10;
          __cxa_guard_release(puVar5);
        }
        while( true ) {
          puVar4 = local_60;
          if (plVar12 == (long *)0x0) goto joined_r0x01a5d9b4;
          if (plVar12 == (long *)puVar6) break;
          plVar12 = (long *)*plVar12;
        }
        iVar8 = *piVar1;
        if (iVar8 == iVar9) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar9 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar11 = puVar7[3];
            if (lVar11 != 0) {
              plVar12 = (long *)(lVar11 + -0x50);
              if (((0 < (int)((ulong)(*(long *)(lVar11 + 200) - *(long *)(lVar11 + 0xc0)) >> 4) *
                        -0x5cc0ed73) &&
                  (FUN_02ddd794(plVar12,0),
                  1 < (int)((ulong)(*(long *)(lVar11 + 200) - *(long *)(lVar11 + 0xc0)) >> 4) *
                      -0x5cc0ed73)) &&
                 (FUN_02ddd794(plVar12,1),
                 2 < (int)((ulong)(*(long *)(lVar11 + 200) - *(long *)(lVar11 + 0xc0)) >> 4) *
                     -0x5cc0ed73)) {
                iVar9 = 2;
                do {
                  FUN_02ddd794(plVar12,iVar9);
                  iVar9 = iVar9 + 1;
                } while (iVar9 < (int)((ulong)(*(long *)(lVar11 + 200) - *(long *)(lVar11 + 0xc0))
                                      >> 4) * -0x5cc0ed73);
              }
              lVar11 = *(long *)(lVar11 + 8);
              piVar1 = (int *)(lVar11 + 0xc);
              do {
                iVar9 = *piVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar9 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              puVar4 = local_60;
              if (iVar9 + -1 == 0) {
                *(undefined8 *)(lVar11 + 0x18) = 0;
                (**(code **)(*plVar12 + 0x20))(plVar12);
                puVar4 = local_60;
              }
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar9 = iVar8;
      } while (iVar8 != 0);
    }
joined_r0x01a5d9b4:
    if (puVar4 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar4 + 1);
      do {
        iVar9 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar9 + -1 == 0) {
        puVar4[2] = 0;
        local_60 = puVar4;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar11 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar11;
        local_48 = *puVar4;
        FUN_02a44274(lVar11 + 0xd8,&local_48);
      }
    }
  }
  local_60 = (undefined8 *)0x0;
  local_58 = 0;
  FUN_01a68600(&local_60,param_1 + 0x890);
  puVar7 = local_60;
  puVar6 = PTR_DAT_04382480;
  puVar5 = PTR_DAT_04382478;
  if (local_60 != (undefined8 *)0x0) {
    if (*(int *)((long)local_60 + 0xc) != 0) {
      piVar1 = (int *)((long)local_60 + 0xc);
      iVar9 = *(int *)((long)local_60 + 0xc);
      do {
        plVar12 = (long *)puVar7[2];
        if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
          uVar10 = FUN_009cdcc0();
          *(undefined8 *)puVar6 = uVar10;
          __cxa_guard_release(puVar5);
        }
        while( true ) {
          if (plVar12 == (long *)0x0) goto LAB_01a5daf8;
          if (plVar12 == (long *)puVar6) break;
          plVar12 = (long *)*plVar12;
        }
        iVar8 = *piVar1;
        if (iVar8 == iVar9) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar9 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 != '\0') goto LAB_01a5da20;
          lVar11 = puVar7[3];
          if (lVar11 != 0) {
            plVar12 = (long *)(lVar11 + -0x50);
            if (((0 < (int)((ulong)(*(long *)(lVar11 + 200) - *(long *)(lVar11 + 0xc0)) >> 4) *
                      -0x5cc0ed73) &&
                (FUN_02ddd794(plVar12,0),
                1 < (int)((ulong)(*(long *)(lVar11 + 200) - *(long *)(lVar11 + 0xc0)) >> 4) *
                    -0x5cc0ed73)) &&
               (FUN_02ddd794(plVar12,1),
               2 < (int)((ulong)(*(long *)(lVar11 + 200) - *(long *)(lVar11 + 0xc0)) >> 4) *
                   -0x5cc0ed73)) {
              iVar9 = 2;
              do {
                FUN_02ddd794(plVar12,iVar9);
                iVar9 = iVar9 + 1;
              } while (iVar9 < (int)((ulong)(*(long *)(lVar11 + 200) - *(long *)(lVar11 + 0xc0)) >>
                                    4) * -0x5cc0ed73);
            }
            lVar11 = *(long *)(lVar11 + 8);
            piVar1 = (int *)(lVar11 + 0xc);
            do {
              iVar9 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar9 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar9 + -1 != 0) break;
            *(undefined8 *)(lVar11 + 0x18) = 0;
            (**(code **)(*plVar12 + 0x20))(plVar12);
            if (local_60 == (undefined8 *)0x0) {
              return;
            }
            goto LAB_01a5db00;
          }
          break;
        }
        ClearExclusiveLocal();
LAB_01a5da20:
        iVar9 = iVar8;
      } while (iVar8 != 0);
    }
LAB_01a5daf8:
    if (local_60 != (undefined8 *)0x0) {
LAB_01a5db00:
      puVar7 = local_60;
      piVar1 = (int *)(local_60 + 1);
      do {
        iVar9 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar9 + -1 == 0) {
        local_60[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar11 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar11;
        local_48 = *puVar7;
        FUN_02a44274(lVar11 + 0xd8,&local_48);
      }
    }
  }
  return;
}


