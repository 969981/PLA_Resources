/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00bf4144; name: FUN_00bf4144
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bf4144(undefined4 *param_1,long param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long *plVar6;
  int iVar7;
  undefined4 *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  undefined8 *local_68 [2];
  long *local_58;
  undefined8 uStack_50;
  undefined8 *local_48 [2];
  undefined8 local_38;
  
  FUN_00b5f5f4(local_48,*(undefined8 *)(param_2 + 0x58));
  if (local_48[0] != (undefined8 *)0x0) {
    FUN_00b911c4(&local_58);
    puVar5 = local_48[0];
    plVar6 = local_58;
    if (local_48[0] != (undefined8 *)0x0) {
      piVar1 = (int *)(local_48[0] + 1);
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
        local_48[0][2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar11 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar11;
        local_58 = (long *)*puVar5;
        FUN_02a44274(lVar11 + 0xd8,&local_58);
      }
    }
    if (plVar6 != (long *)0x0) {
      uVar9 = FUN_01ba021c(plVar6);
      if ((uVar9 & 1) == 0) {
        FUN_00b5f7b8(local_48,*(undefined8 *)(param_2 + 0x58));
        local_58 = (long *)0x0;
        uStack_50 = 0;
        FUN_00ac3fa4(&local_58,*(long *)(param_2 + 0x58) + 0x160);
        FUN_00b5f5f4(local_68,*(undefined8 *)(param_2 + 0x58));
        FUN_00cd8b48(local_48,&local_58,local_68,(int)(*(float *)(param_2 + 0x144) * 30.0),1,0x100);
        puVar5 = local_68[0];
        if (local_68[0] != (undefined8 *)0x0) {
          piVar1 = (int *)(local_68[0] + 1);
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
            local_68[0][2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar11 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar11;
            local_38 = *puVar5;
            FUN_02a44274(lVar11 + 0xd8,&local_38);
          }
        }
        plVar12 = local_58;
        if (local_58 != (long *)0x0) {
          plVar2 = local_58 + 1;
          do {
            iVar7 = (int)*plVar2 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar4) {
              *(int *)plVar2 = iVar7;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar7 == 0) {
            local_58[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar11 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar11;
            local_68[0] = (undefined8 *)*plVar12;
            FUN_02a44274(lVar11 + 0xd8,local_68);
          }
        }
        if (local_48[0] != (undefined8 *)0x0) {
          piVar1 = (int *)(local_48[0] + 1);
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
            local_48[0][2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar11 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar11;
            local_58 = (long *)*local_48[0];
            FUN_02a44274(lVar11 + 0xd8,&local_58);
          }
        }
      }
      if (*(float *)(param_2 + 0x144) <= *(float *)(param_2 + 0x148)) {
        FUN_01b9ee74(plVar6);
        FUN_01ba08e0(plVar6,1);
        FUN_00dac5ac(5,1);
        puVar8 = (undefined4 *)FUN_00cd4380();
      }
      else {
        plVar12 = *(long **)(*(long *)(param_2 + 0x58) + 0x90);
        if (plVar12 == (long *)0x0) {
          *(float *)(param_2 + 0x148) = _DAT_00000084 + *(float *)(param_2 + 0x148);
        }
        else {
          lVar11 = plVar12[0xb];
          if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl("","","",0);
          }
          if (*(long *)(lVar11 + 0x10) == 0) {
            uVar10 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
            *(undefined8 *)(lVar11 + 0x10) = uVar10;
          }
          piVar1 = (int *)(lVar11 + 0xc);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = *piVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          *(float *)(param_2 + 0x148) =
               *(float *)((long)plVar12 + 0x84) + *(float *)(param_2 + 0x148);
          lVar11 = plVar12[0xb];
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
            (**(code **)(*plVar12 + 0x20))(plVar12);
          }
        }
        puVar8 = &DAT_041e7c04;
      }
      *param_1 = *puVar8;
      lVar11 = plVar6[0xb];
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
      if (iVar7 + -1 == 0) {
        *(undefined8 *)(lVar11 + 0x18) = 0;
        (**(code **)(*plVar6 + 0x20))(plVar6);
        return;
      }
      return;
    }
  }
  puVar8 = (undefined4 *)FUN_00cd438c();
  *param_1 = *puVar8;
  return;
}


