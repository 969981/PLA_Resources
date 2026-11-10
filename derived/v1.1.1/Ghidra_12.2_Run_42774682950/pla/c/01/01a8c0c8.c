/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a8c0c8; name: FUN_01a8c0c8
 */


void FUN_01a8c0c8(undefined8 *param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long *local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 local_48;
  
  local_58 = 0;
  local_60 = (undefined8 *)0x0;
  FUN_00af7e30(&local_60,param_2 + 0x230);
  puVar9 = local_60;
  puVar6 = PTR_DAT_0437a558;
  puVar5 = PTR_DAT_0437a550;
  if (local_60 != (undefined8 *)0x0) {
    if (*(int *)((long)local_60 + 0xc) != 0) {
      piVar1 = (int *)((long)local_60 + 0xc);
      iVar7 = *(int *)((long)local_60 + 0xc);
      do {
        plVar13 = (long *)puVar9[2];
        if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
          uVar10 = FUN_00aa0310();
          *(undefined8 *)puVar6 = uVar10;
          __cxa_guard_release(puVar5);
        }
        while( true ) {
          if (plVar13 == (long *)0x0) goto LAB_01a8c4c0;
          if (plVar13 == (long *)puVar6) break;
          plVar13 = (long *)*plVar13;
        }
        iVar8 = *piVar1;
        if (iVar8 == iVar7) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar7 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar11 = puVar9[3];
            plVar13 = (long *)0x0;
            puVar9 = local_60;
            if (lVar11 != 0) {
              plVar13 = (long *)(lVar11 + -0x50);
            }
            goto joined_r0x01a8c23c;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar7 = iVar8;
      } while (iVar8 != 0);
    }
LAB_01a8c4c0:
    plVar13 = (long *)0x0;
    puVar9 = local_60;
joined_r0x01a8c23c:
    local_60 = puVar9;
    if (puVar9 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar9 + 1);
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
        puVar9[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar11 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar11;
        local_48 = *puVar9;
        FUN_02a44274(lVar11 + 0xd8,&local_48);
      }
    }
    if (plVar13 != (long *)0x0) {
      FUN_00a9ecd4(&local_60,plVar13);
      FUN_009983e4(&local_68,&local_60);
      puVar9 = local_60;
      if (local_60 != (undefined8 *)0x0) {
        piVar1 = (int *)(local_60 + 1);
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
          local_60[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar11 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar11;
          local_48 = *puVar9;
          FUN_02a44274(lVar11 + 0xd8,&local_48);
        }
      }
      if (local_68 == (long *)0x0) {
        bVar3 = false;
      }
      else {
        puVar9 = (undefined8 *)FUN_0289f788();
        plVar12 = (long *)*puVar9;
        bVar3 = false;
        if (plVar12 != (long *)0x0) {
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
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = *piVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          local_60 = (undefined8 *)0x0;
          local_58 = 0;
          FUN_008802f0(&local_60,plVar12 + 0xb);
          *param_1 = 0;
          param_1[1] = 0;
          FUN_01a64088(param_1,&local_60);
          puVar9 = local_60;
          if (local_60 != (undefined8 *)0x0) {
            piVar1 = (int *)(local_60 + 1);
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
              local_60[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar11 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar11;
              local_48 = *puVar9;
              FUN_02a44274(lVar11 + 0xd8,&local_48);
            }
          }
          lVar11 = plVar12[0xb];
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
          if (iVar7 == 1) {
            *(undefined8 *)(lVar11 + 0x18) = 0;
            (**(code **)(*plVar12 + 0x20))(plVar12);
          }
          bVar3 = true;
        }
        if (local_68 != (long *)0x0) {
          lVar11 = local_68[0xb];
          piVar1 = (int *)(lVar11 + 0xc);
          do {
            iVar7 = *piVar1;
            cVar2 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar7 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar7 + -1 == 0) {
            *(undefined8 *)(lVar11 + 0x18) = 0;
            (**(code **)(*local_68 + 0x20))();
          }
        }
      }
      lVar11 = plVar13[0xb];
      piVar1 = (int *)(lVar11 + 0xc);
      do {
        iVar7 = *piVar1;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar7 + -1 == 0) {
        *(undefined8 *)(lVar11 + 0x18) = 0;
        (**(code **)(*plVar13 + 0x20))(plVar13);
      }
      if (bVar3) {
        return;
      }
    }
  }
  local_60 = (undefined8 *)0x0;
  local_58 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_01a64088(param_1,&local_60);
  puVar9 = local_60;
  if (local_60 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_60 + 1);
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
      local_60[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar11 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar11;
      local_48 = *puVar9;
      FUN_02a44274(lVar11 + 0xd8,&local_48);
    }
  }
  return;
}


