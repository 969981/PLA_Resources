/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00a99788; name: FUN_00a99788
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00a99788(undefined8 param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long *local_80;
  long *local_78;
  long *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  long *local_58;
  undefined8 local_48;
  
  if (((*PTR_DAT_04379578 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379578), iVar8 != 0))
  {
    FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379578);
  }
  *(undefined8 *)PTR_DAT_04379588 = *(undefined8 *)PTR_DAT_04379580;
  uVar9 = FUN_00954924();
  local_68 = 0;
  FUN_00994130(&local_58,uVar9,&local_68);
  local_70 = local_58;
  if (local_58 != (long *)0x0) {
    lVar11 = local_58[0xb];
    if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) goto LAB_00a99ad4;
    if (*(long *)(lVar11 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
      *(undefined8 *)(lVar11 + 0x10) = uVar9;
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
  }
  FUN_00aae454(&local_68,&local_70);
  puVar6 = PTR_DAT_04379e80;
  puVar5 = PTR_DAT_04379e78;
  lVar11 = CONCAT44(uStack_64,local_68);
  if (lVar11 == 0) {
    plVar12 = (long *)0x0;
LAB_00a99840:
    if (local_70 == (long *)0x0) goto LAB_00a99864;
LAB_00a99848:
    lVar11 = local_70[0xb];
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
    if (iVar8 + -1 != 0) goto LAB_00a99864;
    *(undefined8 *)(lVar11 + 0x18) = 0;
    (**(code **)(*local_70 + 0x20))();
    if (plVar12 != (long *)0x0) goto LAB_00a99868;
LAB_00a99890:
    uVar10 = FUN_00ab0c78();
  }
  else {
    if (*(int *)(lVar11 + 0xc) != 0) {
      piVar1 = (int *)(lVar11 + 0xc);
      iVar8 = *(int *)(lVar11 + 0xc);
      do {
        plVar12 = *(long **)(lVar11 + 0x10);
        if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
          uVar9 = FUN_0095a420();
          *(undefined8 *)puVar6 = uVar9;
          __cxa_guard_release(puVar5);
        }
        while( true ) {
          if (plVar12 == (long *)0x0) goto LAB_00a99b34;
          if (plVar12 == (long *)puVar6) break;
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
            plVar12 = (long *)0x0;
            if (*(long *)(lVar11 + 0x18) != 0) {
              plVar12 = (long *)(*(long *)(lVar11 + 0x18) + -0x50);
            }
            puVar4 = (undefined8 *)CONCAT44(uStack_64,local_68);
            goto joined_r0x00a99b58;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar8 = iVar7;
      } while (iVar7 != 0);
    }
LAB_00a99b34:
    plVar12 = (long *)0x0;
    puVar4 = (undefined8 *)CONCAT44(uStack_64,local_68);
joined_r0x00a99b58:
    if (puVar4 == (undefined8 *)0x0) goto LAB_00a99840;
    piVar1 = (int *)(puVar4 + 1);
    do {
      iVar8 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 + -1 != 0) goto LAB_00a99840;
    puVar4[2] = 0;
    if (((*PTR_DAT_04379498 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379498);
    }
    lVar11 = *(long *)PTR_DAT_043794a0;
    *(long *)PTR_DAT_043794a8 = lVar11;
    local_48 = *puVar4;
    FUN_02a44274(lVar11 + 0xd8,&local_48);
    if (local_70 != (long *)0x0) goto LAB_00a99848;
LAB_00a99864:
    if (plVar12 == (long *)0x0) goto LAB_00a99890;
LAB_00a99868:
    FUN_01bdbed8(param_1,plVar12);
    lVar11 = plVar12[0xb];
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
    if (iVar8 + -1 != 0) goto LAB_00a99890;
    *(undefined8 *)(lVar11 + 0x18) = 0;
    (**(code **)(*plVar12 + 0x20))(plVar12);
    uVar10 = FUN_00ab0c78();
  }
  if ((uVar10 & 1) != 0) {
    FUN_00ab0f5c(&local_78);
    local_80 = local_78;
    if (local_78 != (long *)0x0) {
      lVar11 = local_78[0xb];
      if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) {
LAB_00a99ad4:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar11 + 0x10) == 0) {
        uVar9 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
        *(undefined8 *)(lVar11 + 0x10) = uVar9;
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
    }
    FUN_00aae454(&local_68,&local_80);
    puVar6 = PTR_DAT_04379e80;
    puVar5 = PTR_DAT_04379e78;
    lVar11 = CONCAT44(uStack_64,local_68);
    if (lVar11 == 0) {
      plVar12 = (long *)0x0;
    }
    else {
      if (*(int *)(lVar11 + 0xc) != 0) {
        piVar1 = (int *)(lVar11 + 0xc);
        iVar8 = *(int *)(lVar11 + 0xc);
        do {
          plVar12 = *(long **)(lVar11 + 0x10);
          if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
            uVar9 = FUN_0095a420();
            *(undefined8 *)puVar6 = uVar9;
            __cxa_guard_release(puVar5);
          }
          while( true ) {
            if (plVar12 == (long *)0x0) goto LAB_00a99c68;
            if (plVar12 == (long *)puVar6) break;
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
              plVar12 = (long *)0x0;
              if (*(long *)(lVar11 + 0x18) != 0) {
                plVar12 = (long *)(*(long *)(lVar11 + 0x18) + -0x50);
              }
              puVar4 = (undefined8 *)CONCAT44(uStack_64,local_68);
              goto joined_r0x00a99c8c;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar8 = iVar7;
        } while (iVar7 != 0);
      }
LAB_00a99c68:
      plVar12 = (long *)0x0;
      puVar4 = (undefined8 *)CONCAT44(uStack_64,local_68);
joined_r0x00a99c8c:
      if (puVar4 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar4 + 1);
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
          puVar4[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar11 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar11;
          local_48 = *puVar4;
          FUN_02a44274(lVar11 + 0xd8,&local_48);
        }
      }
    }
    if (local_80 != (long *)0x0) {
      lVar11 = *(long *)((long)local_80 + 0x58);
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
        (**(code **)(*local_80 + 0x20))();
      }
    }
    if (plVar12 != (long *)0x0) {
      FUN_01bdbed8(param_1,plVar12);
      lVar11 = *(long *)((long)plVar12 + 0x58);
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
        (**(code **)(*plVar12 + 0x20))(plVar12);
      }
    }
    if (local_78 != (long *)0x0) {
      lVar11 = local_78[0xb];
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
        (**(code **)(*local_78 + 0x20))();
      }
    }
  }
  if (local_58 != (long *)0x0) {
    lVar11 = local_58[0xb];
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
      (**(code **)(*local_58 + 0x20))();
    }
  }
  return;
}


