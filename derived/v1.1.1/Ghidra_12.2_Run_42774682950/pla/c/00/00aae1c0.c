/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00aae1c0; name: FUN_00aae1c0
 */


void FUN_00aae1c0(undefined8 *param_1,long param_2)

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
  long *plVar12;
  undefined8 *local_70;
  undefined8 uStack_68;
  undefined8 *local_60;
  undefined8 uStack_58;
  undefined8 local_48;
  
  puVar5 = PTR_DAT_0437a150;
  puVar4 = PTR_DAT_0437a148;
  lVar11 = *(long *)(param_2 + 0x1f0);
  if ((lVar11 != 0) && (*(int *)(lVar11 + 0xc) != 0)) {
    piVar1 = (int *)(lVar11 + 0xc);
    iVar8 = *(int *)(lVar11 + 0xc);
    do {
      plVar12 = *(long **)(lVar11 + 0x10);
      if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar4), iVar7 != 0)) {
        uVar9 = FUN_009b19b4();
        *(undefined8 *)puVar5 = uVar9;
        __cxa_guard_release(puVar4);
      }
      while( true ) {
        if (plVar12 == (long *)0x0) goto LAB_00aae1e4;
        if (plVar12 == (long *)puVar5) break;
        plVar12 = (long *)*plVar12;
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
          lVar11 = *(long *)(lVar11 + 0x18);
          if (lVar11 != 0) {
            local_60 = (undefined8 *)0x0;
            uStack_58 = 0;
            FUN_008802f0(&local_60,(long *)(lVar11 + 8));
            local_70 = (undefined8 *)0x0;
            uStack_68 = 0;
            FUN_00880560(&local_70,&local_60);
            puVar6 = local_60;
            if (local_60 != (undefined8 *)0x0) {
              piVar1 = (int *)(local_60 + 1);
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
                local_60[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar10 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar10;
                local_48 = *puVar6;
                FUN_02a44274(lVar10 + 0xd8,&local_48);
              }
            }
            *param_1 = 0;
            param_1[1] = 0;
            FUN_00ab3c84(param_1,&local_70);
            puVar6 = local_70;
            if (local_70 != (undefined8 *)0x0) {
              piVar1 = (int *)(local_70 + 1);
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
                local_70[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar10 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar10;
                local_60 = (undefined8 *)*puVar6;
                FUN_02a44274(lVar10 + 0xd8,&local_60);
              }
            }
            lVar10 = *(long *)(lVar11 + 8);
            piVar1 = (int *)(lVar10 + 0xc);
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
      iVar8 = iVar7;
    } while (iVar7 != 0);
  }
LAB_00aae1e4:
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


