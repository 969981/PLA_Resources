/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d7f54c; name: FUN_00d7f54c
 */


void FUN_00d7f54c(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *local_58;
  long *local_48;
  
  puVar5 = PTR_DAT_0437b4b8;
  puVar4 = PTR_DAT_0437b4b0;
  lVar9 = *(long *)(param_1 + 0x270);
  if ((lVar9 != 0) && (*(int *)(lVar9 + 0xc) != 0)) {
    piVar1 = (int *)(lVar9 + 0xc);
    iVar7 = *(int *)(lVar9 + 0xc);
    do {
      plVar12 = *(long **)(lVar9 + 0x10);
      if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
        uVar8 = FUN_00ad3750();
        *(undefined8 *)puVar5 = uVar8;
        __cxa_guard_release(puVar4);
      }
      while( true ) {
        if (plVar12 == (long *)0x0) {
          return;
        }
        if (plVar12 == (long *)puVar5) break;
        plVar12 = (long *)*plVar12;
      }
      iVar6 = *piVar1;
      if (iVar6 == iVar7) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar9 = *(long *)(lVar9 + 0x18);
          if (lVar9 == 0) {
            return;
          }
          FUN_009c69bc(&local_48,param_1);
          (**(code **)(*local_48 + 0x58))();
          if (local_48 != (long *)0x0) {
            lVar10 = local_48[0xb];
            piVar1 = (int *)(lVar10 + 0xc);
            do {
              iVar7 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar7 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar7 + -1 == 0) {
              *(undefined8 *)(lVar10 + 0x18) = 0;
              (**(code **)(*local_48 + 0x20))();
            }
          }
          puVar11 = *(undefined8 **)(param_1 + 0x270);
          *(undefined8 *)(param_1 + 0x270) = 0;
          if (puVar11 != (undefined8 *)0x0) {
            piVar1 = (int *)(puVar11 + 1);
            do {
              iVar7 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar7 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar7 + -1 == 0) {
              puVar11[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar10 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar10;
              local_48 = (long *)*puVar11;
              FUN_02a44274(lVar10 + 0xd8,&local_48);
            }
          }
          *(undefined8 *)(param_1 + 0x278) = 0;
          if ((*(long *)(param_1 + 0x260) != 0) && (*(long *)(param_1 + 0x268) != 0)) {
            FUN_009c69bc(&local_58,param_1);
            FUN_00da9be0(&local_58,param_1 + 0x260);
            if (local_58 != (long *)0x0) {
              lVar10 = local_58[0xb];
              piVar1 = (int *)(lVar10 + 0xc);
              do {
                iVar7 = *piVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar7 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar7 + -1 == 0) {
                *(undefined8 *)(lVar10 + 0x18) = 0;
                (**(code **)(*local_58 + 0x20))();
              }
            }
          }
          lVar10 = *(long *)(lVar9 + 8);
          piVar1 = (int *)(lVar10 + 0xc);
          do {
            iVar7 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar7 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar7 + -1 == 0) {
            *(undefined8 *)(lVar10 + 0x18) = 0;
            (**(code **)(*(long *)(lVar9 + -0x50) + 0x20))((long *)(lVar9 + -0x50));
            return;
          }
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar7 = iVar6;
    } while (iVar6 != 0);
  }
  return;
}


