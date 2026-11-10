/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018cee14; name: FUN_018cee14
 */


undefined8 FUN_018cee14(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 *local_58 [2];
  undefined8 local_48;
  
  puVar5 = PTR_DAT_04381ee0;
  puVar4 = PTR_DAT_04381ed8;
  lVar11 = *(long *)(param_1 + 0x80);
  if ((lVar11 != 0) && (*(int *)(lVar11 + 0xc) != 0)) {
    piVar1 = (int *)(lVar11 + 0xc);
    iVar7 = *(int *)(lVar11 + 0xc);
    do {
      puVar13 = *(undefined8 **)(lVar11 + 0x10);
      if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
        uVar12 = FUN_018cf5f0();
        *(undefined8 *)puVar5 = uVar12;
        __cxa_guard_release(puVar4);
      }
      if (puVar13 == (undefined8 *)0x0) {
        return 0;
      }
      while (puVar13 != (undefined8 *)puVar5) {
        puVar13 = (undefined8 *)*puVar13;
        if (puVar13 == (undefined8 *)0x0) {
          return 0;
        }
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
          lVar11 = *(long *)(lVar11 + 0x18);
          if (lVar11 == 0) {
            return 0;
          }
          plVar10 = (long *)(lVar11 + -0x50);
          FUN_01be98d0(local_58,plVar10);
          if (local_58[0] == (undefined8 *)0x0) goto LAB_018ceed4;
          uVar8 = FUN_02a43a8c();
          puVar13 = local_58[0];
          if (local_58[0] != (undefined8 *)0x0) {
            piVar1 = (int *)(local_58[0] + 1);
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
              local_58[0][2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar9 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar9;
              local_48 = *puVar13;
              FUN_02a44274(lVar9 + 0xd8,&local_48);
            }
          }
          if ((uVar8 & 1) == 0) {
            FUN_018ce974(param_1,0);
            uVar12 = 1;
          }
          else {
LAB_018ceed4:
            uVar12 = 0;
          }
          FUN_01be98e0(local_58,plVar10);
          if (local_58[0] != (undefined8 *)0x0) {
            uVar8 = FUN_02a43a8c();
            if (local_58[0] != (undefined8 *)0x0) {
              piVar1 = (int *)(local_58[0] + 1);
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
                local_58[0][2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar9 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar9;
                local_48 = *local_58[0];
                FUN_02a44274(lVar9 + 0xd8,&local_48);
              }
            }
            if ((uVar8 & 1) == 0) {
              uVar12 = 1;
              FUN_018ce974(param_1,1);
            }
          }
          lVar11 = *(long *)(lVar11 + 8);
          piVar1 = (int *)(lVar11 + 0xc);
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
            *(undefined8 *)(lVar11 + 0x18) = 0;
            (**(code **)(*plVar10 + 0x20))(plVar10);
          }
          return uVar12;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar7 = iVar6;
    } while (iVar6 != 0);
  }
  return 0;
}


