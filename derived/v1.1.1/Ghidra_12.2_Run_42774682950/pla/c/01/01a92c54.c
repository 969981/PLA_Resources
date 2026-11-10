/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a92c54; name: FUN_01a92c54
 */


void FUN_01a92c54(undefined8 *param_1,long param_2)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long *local_70;
  long *local_68;
  undefined8 *local_60 [2];
  undefined8 local_48;
  
  if (*(long *)(param_2 + 0x618) == 0) {
    local_68 = (long *)0x0;
  }
  else {
    FUN_01aa5214(&local_68,*(long *)(param_2 + 0x618));
    if (local_68 != (long *)0x0) {
      FUN_01813750(&local_70,local_68);
      if (local_70 == (long *)0x0) {
        bVar4 = false;
      }
      else {
        (**(code **)(*local_70 + 0x10))(local_60);
        *param_1 = 0;
        param_1[1] = 0;
        FUN_01a0b7c0(param_1,local_60);
        if (local_60[0] != (undefined8 *)0x0) {
          piVar1 = (int *)(local_60[0] + 1);
          do {
            iVar7 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar7 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar7 + -1 == 0) {
            local_60[0][2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar11 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar11;
            local_48 = *local_60[0];
            FUN_02a44274(lVar11 + 0xd8,&local_48);
          }
        }
        if (local_70 != (long *)0x0) {
          lVar11 = local_70[0xb];
          piVar1 = (int *)(lVar11 + 0xc);
          do {
            iVar7 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar7 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar7 == 1) {
            *(undefined8 *)(lVar11 + 0x18) = 0;
            (**(code **)(*local_70 + 0x20))();
          }
        }
        bVar4 = true;
      }
      if (local_68 != (long *)0x0) {
        lVar11 = local_68[0xb];
        piVar1 = (int *)(lVar11 + 0xc);
        do {
          iVar7 = *piVar1;
          cVar3 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar2) {
            *piVar1 = iVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar7 + -1 == 0) {
          *(undefined8 *)(lVar11 + 0x18) = 0;
          (**(code **)(*local_68 + 0x20))();
        }
      }
      if (bVar4) {
        return;
      }
    }
  }
  puVar6 = PTR_DAT_0437f498;
  puVar5 = PTR_DAT_0437f490;
  lVar11 = *(long *)(param_2 + 0x240);
  if ((lVar11 != 0) && (*(int *)(lVar11 + 0xc) != 0)) {
    piVar1 = (int *)(lVar11 + 0xc);
    iVar7 = *(int *)(lVar11 + 0xc);
    do {
      plVar12 = *(long **)(lVar11 + 0x10);
      if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
        uVar9 = FUN_01443f54();
        *(undefined8 *)puVar6 = uVar9;
        __cxa_guard_release(puVar5);
      }
      while( true ) {
        if (plVar12 == (long *)0x0) goto LAB_01a92c84;
        if (plVar12 == (long *)puVar6) break;
        plVar12 = (long *)*plVar12;
      }
      iVar8 = *piVar1;
      if (iVar8 == iVar7) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar11 = *(long *)(lVar11 + 0x18);
          if (lVar11 != 0) {
            *param_1 = 0;
            param_1[1] = 0;
            FUN_01a6f974(param_1,lVar11 + 0x1a0);
            lVar10 = *(long *)(lVar11 + 8);
            piVar1 = (int *)(lVar10 + 0xc);
            do {
              iVar7 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar7 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar7 + -1 == 0) {
              *(undefined8 *)(lVar10 + 0x18) = 0;
              (**(code **)(*(long *)(lVar11 + -0x50) + 0x20))((long *)(lVar11 + -0x50));
              return;
            }
            return;
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar7 = iVar8;
    } while (iVar8 != 0);
  }
LAB_01a92c84:
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


