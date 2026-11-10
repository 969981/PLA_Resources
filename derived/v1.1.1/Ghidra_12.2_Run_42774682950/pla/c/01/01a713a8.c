/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a713a8; name: FUN_01a713a8
 */


void FUN_01a713a8(long *param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  long *plVar13;
  undefined8 *local_e0;
  undefined8 uStack_d8;
  undefined8 *local_d0;
  code *local_c8;
  code *local_c0;
  undefined1 *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_48;
  
  if (*param_2 != 0) {
    FUN_028928a4(&local_d0);
    FUN_01a78270(param_1 + 0x40,&local_d0);
    puVar6 = local_d0;
    if (local_d0 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_d0 + 1);
      do {
        iVar8 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar8 + -1 == 0) {
        local_d0[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar10 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar10;
        local_e0 = (undefined8 *)*puVar6;
        FUN_02a44274(lVar10 + 0xd8,&local_e0);
      }
    }
    puVar5 = PTR_DAT_0437de28;
    puVar4 = PTR_DAT_0437de20;
    lVar10 = param_1[0x40];
    if ((lVar10 != 0) && (*(int *)(lVar10 + 0xc) != 0)) {
      piVar1 = (int *)(lVar10 + 0xc);
      iVar8 = *(int *)(lVar10 + 0xc);
      do {
        plVar13 = *(long **)(lVar10 + 0x10);
        if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar4), iVar7 != 0)) {
          uVar9 = FUN_00fd7558();
          *(undefined8 *)puVar5 = uVar9;
          __cxa_guard_release(puVar4);
        }
        while( true ) {
          if (plVar13 == (long *)0x0) {
            return;
          }
          if (plVar13 == (long *)puVar5) break;
          plVar13 = (long *)*plVar13;
        }
        iVar7 = *piVar1;
        if (iVar7 == iVar8) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar8 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar10 = *(long *)(lVar10 + 0x18);
            if (lVar10 == 0) {
              return;
            }
            (**(code **)(*param_1 + 0x10))(&local_d0,param_1);
            local_e0 = (undefined8 *)0x0;
            uStack_d8 = 0;
            FUN_00b5ff1c(&local_e0,&local_d0);
            if (local_d0 != (undefined8 *)0x0) {
              piVar1 = (int *)(local_d0 + 1);
              do {
                iVar8 = *piVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar8 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar8 + -1 == 0) {
                local_d0[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar11 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar11;
                local_48 = *local_d0;
                FUN_02a44274(lVar11 + 0xd8,&local_48);
              }
            }
            local_d0 = (undefined8 *)0x0;
            local_c8 = (code *)0x0;
            local_c0 = (code *)0x0;
            local_b8 = (undefined1 *)0x0;
            local_b0 = 0;
            uStack_a8 = 0;
            FUN_00b6021c(&local_b0,&local_e0);
            local_d0 = (undefined8 *)&LAB_01a78570;
            local_c8 = FUN_01a787fc;
            local_c0 = FUN_01a788bc;
            local_b8 = &LAB_01a788d0;
            pcVar12 = *(code **)(lVar10 + 0x58);
            if (pcVar12 != (code *)0x0) {
              *(undefined8 *)(lVar10 + 0x60) = 0;
              *(undefined8 *)(lVar10 + 0x68) = 0;
              *(undefined8 *)(lVar10 + 0x50) = 0;
              *(undefined8 *)(lVar10 + 0x58) = 0;
              (*pcVar12)(lVar10 + 0x70);
              if (local_c0 == (code *)0x0) goto LAB_01a71624;
            }
            (*local_c0)(&local_b0,lVar10 + 0x70);
            *(code **)(lVar10 + 0x58) = local_c8;
            *(undefined1 **)(lVar10 + 0x68) = local_b8;
            *(code **)(lVar10 + 0x60) = local_c0;
            *(undefined8 *)(lVar10 + 0x50) = local_d0;
LAB_01a71624:
            pcVar12 = local_c8;
            if (local_c8 != (code *)0x0) {
              local_c0 = (code *)0x0;
              local_b8 = (undefined1 *)0x0;
              local_d0 = (undefined8 *)0x0;
              local_c8 = (code *)0x0;
              (*pcVar12)(&local_b0);
            }
            puVar6 = local_e0;
            if (local_e0 != (undefined8 *)0x0) {
              piVar1 = (int *)(local_e0 + 1);
              do {
                iVar8 = *piVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar8 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar8 + -1 == 0) {
                local_e0[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar11 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar11;
                local_48 = *puVar6;
                FUN_02a44274(lVar11 + 0xd8,&local_48);
              }
            }
            lVar11 = *(long *)(lVar10 + 8);
            piVar1 = (int *)(lVar11 + 0xc);
            do {
              iVar8 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar8 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar8 + -1 == 0) {
              *(undefined8 *)(lVar11 + 0x18) = 0;
              (**(code **)(*(long *)(lVar10 + -0x50) + 0x20))((long *)(lVar10 + -0x50));
              return;
            }
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar8 = iVar7;
      } while (iVar7 != 0);
    }
  }
  return;
}


