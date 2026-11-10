/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f63144; name: FUN_01f63144
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_01f63144(long param_1,ulong param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long *local_80;
  undefined8 *local_78 [2];
  long *local_68;
  undefined8 local_58;
  
  puVar7 = PTR_DAT_043796e8;
  puVar6 = PTR_DAT_043796e0;
  puVar5 = PTR_DAT_043794d8;
  puVar4 = PTR_DAT_043794d0;
  lVar12 = *(long *)(param_1 + 0x70);
  if ((lVar12 != 0) && (*(int *)(lVar12 + 0xc) != 0)) {
    piVar1 = (int *)(lVar12 + 0xc);
    iVar10 = *(int *)(lVar12 + 0xc);
    do {
      plVar14 = *(long **)(lVar12 + 0x10);
      if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar6), iVar9 != 0)) {
        if (((*puVar4 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar4), iVar9 != 0)) {
          uVar11 = FUN_0087f8f0();
          *(undefined8 *)puVar5 = uVar11;
          __cxa_guard_release(puVar4);
        }
        *(undefined **)puVar7 = puVar5;
        __cxa_guard_release(puVar6);
      }
      while( true ) {
        if (plVar14 == (long *)0x0) {
          return;
        }
        if (plVar14 == (long *)puVar7) break;
        plVar14 = (long *)*plVar14;
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
          lVar12 = *(long *)(lVar12 + 0x18);
          if (lVar12 == 0) {
            return;
          }
          plVar14 = (long *)(lVar12 + -0x50);
          FUN_0199c048(local_78,plVar14);
          if (local_78[0] == (undefined8 *)0x0) {
            local_68 = (long *)0x0;
          }
          else {
            FUN_00ccf754(&local_68);
            puVar8 = local_78[0];
            if (local_78[0] != (undefined8 *)0x0) {
              piVar1 = (int *)(local_78[0] + 1);
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
                local_78[0][2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar13 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar13;
                local_58 = *puVar8;
                FUN_02a44274(lVar13 + 0xd8,&local_58);
              }
            }
          }
          if (local_68 != (long *)0x0) {
            FUN_019bbbdc(local_78);
            if (local_78[0] == (undefined8 *)0x0) {
              local_80 = (long *)0x0;
              iVar10 = DAT_043d4b00;
            }
            else {
              FUN_00ccf8c8(&local_80);
              iVar10 = DAT_043d4b00;
              if (local_78[0] != (undefined8 *)0x0) {
                piVar1 = (int *)(local_78[0] + 1);
                do {
                  iVar9 = *piVar1;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar3) {
                    *piVar1 = iVar9 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                iVar10 = DAT_043d4b00;
                if (iVar9 + -1 == 0) {
                  local_78[0][2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar13 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar13;
                  local_58 = *local_78[0];
                  FUN_02a44274(lVar13 + 0xd8,&local_58);
                  iVar10 = DAT_043d4b00;
                }
              }
            }
            DAT_043d4b00 = iVar10;
            if (local_80 != (long *)0x0) {
              if ((param_2 & 1) == 0) {
                DAT_043d4b00 = iVar10 + -1;
                if (DAT_043d4b00 == 0 || iVar10 < 1) {
                  FUN_019531a0(local_80,2);
                  DAT_043d4b00 = 0;
                }
              }
              else {
                DAT_043d4b00 = iVar10 + 1;
                FUN_019530dc(local_80,2);
              }
              if (local_80 != (long *)0x0) {
                lVar13 = local_80[0xb];
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
                  (**(code **)(*local_80 + 0x20))();
                }
              }
            }
            if (local_68 != (long *)0x0) {
              lVar13 = local_68[0xb];
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
                (**(code **)(*local_68 + 0x20))();
              }
            }
          }
          lVar12 = *(long *)(lVar12 + 8);
          piVar1 = (int *)(lVar12 + 0xc);
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
      param_2 = param_2 & 0xffffffff;
      iVar10 = iVar9;
    } while (iVar9 != 0);
  }
  return;
}


