/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f622fc; name: FUN_01f622fc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f622fc(long param_1)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  undefined8 *local_70 [2];
  long *local_60;
  undefined8 local_58;
  
  puVar8 = PTR_DAT_043796e8;
  puVar7 = PTR_DAT_043796e0;
  puVar6 = PTR_DAT_043794d8;
  puVar5 = PTR_DAT_043794d0;
  lVar12 = *(long *)(param_1 + 0x70);
  if ((lVar12 != 0) && (*(int *)(lVar12 + 0xc) != 0)) {
    piVar1 = (int *)(lVar12 + 0xc);
    iVar10 = *(int *)(lVar12 + 0xc);
    do {
      plVar14 = *(long **)(lVar12 + 0x10);
      if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
        if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
          uVar11 = FUN_0087f8f0();
          *(undefined8 *)puVar6 = uVar11;
          __cxa_guard_release(puVar5);
        }
        *(undefined **)puVar8 = puVar6;
        __cxa_guard_release(puVar7);
      }
      while( true ) {
        if (plVar14 == (long *)0x0) {
          return;
        }
        if (plVar14 == (long *)puVar8) break;
        plVar14 = (long *)*plVar14;
      }
      iVar9 = *piVar1;
      if (iVar9 == iVar10) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar12 = *(long *)(lVar12 + 0x18);
          if (lVar12 == 0) {
            return;
          }
          plVar14 = (long *)(lVar12 + -0x50);
          FUN_019a1b5c(local_70,plVar14);
          if (local_70[0] == (undefined8 *)0x0) {
            local_60 = (long *)0x0;
          }
          else {
            FUN_016c38dc(&local_60);
            if (local_70[0] != (undefined8 *)0x0) {
              piVar1 = (int *)(local_70[0] + 1);
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
                local_70[0][2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar13 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar13;
                local_58 = *local_70[0];
                FUN_02a44274(lVar13 + 0xd8,&local_58);
              }
            }
          }
          if (local_60 != (long *)0x0) {
            uVar2 = *(uint *)((long)local_60 + 0x74) & 0xfffffff7;
            if ((_DAT_043d4b04 & 0x3c7) != 0) {
              uVar2 = *(uint *)((long)local_60 + 0x74) | 8;
            }
            *(uint *)((long)local_60 + 0x74) = uVar2;
            lVar13 = local_60[0xb];
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
              (**(code **)(*local_60 + 0x20))();
            }
          }
          lVar12 = *(long *)(lVar12 + 8);
          piVar1 = (int *)(lVar12 + 0xc);
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
            *(undefined8 *)(lVar12 + 0x18) = 0;
            (**(code **)(*plVar14 + 0x20))(plVar14);
            return;
          }
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar10 = iVar9;
    } while (iVar9 != 0);
  }
  return;
}


