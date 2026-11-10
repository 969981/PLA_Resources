/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02689540; name: FUN_02689540
 */


void FUN_02689540(undefined8 *param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  code *pcVar14;
  long *plVar15;
  undefined8 in_d3;
  long *local_a8;
  undefined8 local_a0 [3];
  undefined8 *local_88;
  undefined8 uStack_80;
  long *local_70;
  long *local_68;
  
  local_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  FUN_01a9e404(&local_88,param_2 + 0x608);
  puVar4 = local_88;
  puVar8 = PTR_DAT_0437b090;
  puVar7 = PTR_DAT_0437b088;
  puVar6 = PTR_DAT_043795e0;
  puVar5 = PTR_DAT_043794d0;
  if (local_88 == (undefined8 *)0x0) {
LAB_02689580:
    lVar11 = *(long *)(param_2 + 0xbf0);
joined_r0x026896e0:
    if (lVar11 == 0) {
      local_68 = (long *)0x0;
    }
    else {
      FUN_00b91400(&local_68);
      plVar15 = local_68;
      if (local_68 != (long *)0x0) {
        FUN_00956dac(&local_a8,param_2 + 0x1a8);
        (**(code **)(*local_a8 + 0x40))();
        local_a0[0] = in_d3;
        FUN_01c3aa24(&local_88,plVar15,local_a0,0);
        if (local_a8 != (long *)0x0) {
          lVar11 = local_a8[0xb];
          piVar1 = (int *)(lVar11 + 0xc);
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
            *(undefined8 *)(lVar11 + 0x18) = 0;
            (**(code **)(*local_a8 + 0x20))();
          }
        }
        if ((local_88 == (undefined8 *)0x1de9c90f8c5dcb52) ||
           (local_88 == (undefined8 *)0x11fdbc27460f2ce0)) {
          param_2 = param_2 + 0xcd0;
        }
        else {
          param_2 = param_2 + 0xcb0;
        }
        *param_1 = 0;
        param_1[1] = 0;
        FUN_00aeb228(param_1,param_2);
        if (local_70 != (long *)0x0) {
          (**(code **)(*local_70 + 0x20))();
        }
        if (local_68 == (long *)0x0) {
          return;
        }
        lVar11 = local_68[0xb];
        piVar1 = (int *)(lVar11 + 0xc);
        do {
          iVar10 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar10 + -1 != 0) {
          return;
        }
        *(undefined8 *)(lVar11 + 0x18) = 0;
        pcVar14 = *(code **)(*local_68 + 0x20);
        plVar15 = local_68;
        goto LAB_026897d4;
      }
    }
    *param_1 = 0;
    param_1[1] = 0;
    FUN_00aeb228(param_1,param_2 + 0xcb0);
  }
  else {
    if (*(int *)((long)local_88 + 0xc) != 0) {
      piVar1 = (int *)((long)local_88 + 0xc);
      iVar10 = *(int *)((long)local_88 + 0xc);
      do {
        plVar15 = (long *)puVar4[2];
        if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
          if (((*PTR_DAT_043795d8 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar9 != 0)) {
            if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
              uVar13 = FUN_0087f8f0();
              *(undefined8 *)PTR_DAT_043794d8 = uVar13;
              __cxa_guard_release(puVar5);
            }
            *(undefined **)puVar6 = PTR_DAT_043794d8;
            __cxa_guard_release(PTR_DAT_043795d8);
          }
          *(undefined **)puVar8 = puVar6;
          __cxa_guard_release(puVar7);
        }
        while( true ) {
          if (plVar15 == (long *)0x0) goto LAB_02689840;
          if (plVar15 == (long *)puVar8) break;
          plVar15 = (long *)*plVar15;
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
            lVar11 = puVar4[3];
            plVar15 = (long *)0x0;
            puVar4 = local_88;
            if (lVar11 != 0) {
              plVar15 = (long *)(lVar11 + -0x50);
            }
            goto joined_r0x02689640;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar10 = iVar9;
      } while (iVar9 != 0);
    }
LAB_02689840:
    plVar15 = (long *)0x0;
    puVar4 = local_88;
joined_r0x02689640:
    local_88 = puVar4;
    if (puVar4 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar4 + 1);
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
        puVar4[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar11 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar11;
        local_a0[0] = *puVar4;
        FUN_02a44274(lVar11 + 0xd8,local_a0);
      }
    }
    if (plVar15 == (long *)0x0) goto LAB_02689580;
    uVar12 = FUN_0183041c(plVar15);
    if ((uVar12 & 1) == 0) {
      lVar11 = plVar15[0xb];
      piVar1 = (int *)(lVar11 + 0xc);
      do {
        iVar10 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar10 + -1 != 0) goto LAB_02689580;
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*plVar15 + 0x20))(plVar15);
      lVar11 = *(long *)(param_2 + 0xbf0);
      goto joined_r0x026896e0;
    }
    *param_1 = 0;
    param_1[1] = 0;
    FUN_00aeb228(param_1,param_2 + 0xcc0);
    lVar11 = plVar15[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar10 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar10 + -1 != 0) {
      return;
    }
    *(undefined8 *)(lVar11 + 0x18) = 0;
    pcVar14 = *(code **)(*plVar15 + 0x20);
LAB_026897d4:
    (*pcVar14)(plVar15);
  }
  return;
}


