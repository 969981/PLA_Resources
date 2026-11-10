/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b77558; name: FUN_01b77558
 */


void FUN_01b77558(long param_1,undefined4 param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  long *local_78;
  undefined8 *local_70 [2];
  long *local_60;
  undefined8 local_58;
  
  puVar8 = PTR_DAT_04379fd0;
  puVar7 = PTR_DAT_04379fc8;
  puVar6 = PTR_DAT_043794d8;
  puVar5 = PTR_DAT_043794d0;
  lVar13 = *(long *)(param_1 + 0x2b0);
  if ((lVar13 != 0) && (*(int *)(lVar13 + 0xc) != 0)) {
    piVar1 = (int *)(lVar13 + 0xc);
    iVar11 = *(int *)(lVar13 + 0xc);
    do {
      plVar14 = *(long **)(lVar13 + 0x10);
      if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar7), iVar10 != 0)) {
        if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar5), iVar10 != 0)) {
          uVar12 = FUN_0087f8f0();
          *(undefined8 *)puVar6 = uVar12;
          __cxa_guard_release(puVar5);
        }
        *(undefined **)puVar8 = puVar6;
        __cxa_guard_release(puVar7);
      }
      while( true ) {
        if (plVar14 == (long *)0x0) goto LAB_01b7757c;
        if (plVar14 == (long *)puVar8) break;
        plVar14 = (long *)*plVar14;
      }
      iVar10 = *piVar1;
      if (iVar10 == iVar11) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar11 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 != '\0') goto LAB_01b77650;
        if (*(long *)(lVar13 + 0x18) != 0) {
          plVar14 = (long *)(*(long *)(lVar13 + 0x18) + -0x50);
          FUN_018f98bc(local_70,plVar14);
          if (local_70[0] == (undefined8 *)0x0) {
            local_60 = (long *)0x0;
          }
          else {
            FUN_009b8630(&local_60);
            puVar9 = local_70[0];
            if (local_70[0] != (undefined8 *)0x0) {
              piVar1 = (int *)(local_70[0] + 1);
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
                local_70[0][2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar13 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar13;
                local_58 = *puVar9;
                FUN_02a44274(lVar13 + 0xd8,&local_58);
              }
            }
          }
          if (local_60 != (long *)0x0) {
            FUN_01a4ad8c(local_70);
            if (local_70[0] == (undefined8 *)0x0) {
              local_78 = (long *)0x0;
              plVar4 = local_78;
            }
            else {
              FUN_009e659c(&local_78);
              plVar4 = local_78;
              if (local_70[0] != (undefined8 *)0x0) {
                piVar1 = (int *)(local_70[0] + 1);
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
                  local_70[0][2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar13 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar13;
                  local_58 = *local_70[0];
                  FUN_02a44274(lVar13 + 0xd8,&local_58);
                  plVar4 = local_78;
                }
              }
            }
            local_78 = plVar4;
            if (plVar4 != (long *)0x0) {
              uVar12 = FUN_0191cf20(param_2);
              FUN_01c2f7c4(plVar4,uVar12);
              if (local_78 != (long *)0x0) {
                lVar13 = local_78[0xb];
                piVar1 = (int *)(lVar13 + 0xc);
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
                  *(undefined8 *)(lVar13 + 0x18) = 0;
                  (**(code **)(*local_78 + 0x20))();
                }
              }
            }
            goto joined_r0x01b77724;
          }
          goto LAB_01b77584;
        }
        break;
      }
      ClearExclusiveLocal();
LAB_01b77650:
      iVar11 = iVar10;
    } while (iVar10 != 0);
  }
LAB_01b7757c:
  plVar14 = (long *)0x0;
  local_60 = (long *)0x0;
LAB_01b77584:
  local_78 = (long *)0x0;
joined_r0x01b77724:
  if (local_60 != (long *)0x0) {
    lVar13 = local_60[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
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
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*local_60 + 0x20))();
    }
  }
  if (plVar14 != (long *)0x0) {
    lVar13 = plVar14[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
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
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*plVar14 + 0x20))(plVar14);
    }
  }
  return;
}


