/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b7926c; name: FUN_01b7926c
 */


void FUN_01b7926c(long param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  int iVar8;
  int iVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  undefined8 *local_70;
  undefined8 uStack_68;
  long *local_60;
  long *local_58 [2];
  long local_48;
  
  (**(code **)(*param_2 + 0x10))(local_58,param_2);
  if (local_58[0] == (long *)0x0) {
    local_60 = (long *)0x0;
  }
  else {
    FUN_01b7e59c(&local_60);
    if (local_58[0] != (long *)0x0) {
      plVar10 = local_58[0] + 1;
      do {
        iVar8 = (int)*plVar10 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *(int *)plVar10 = iVar8;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar8 == 0) {
        local_58[0][2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar12 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar12;
        local_70 = (undefined8 *)*local_58[0];
        FUN_02a44274(lVar12 + 0xd8,&local_70);
      }
    }
  }
  plVar10 = local_60;
  puVar6 = PTR_DAT_0437a740;
  puVar5 = PTR_DAT_043794d8;
  puVar4 = PTR_DAT_043794d0;
  lVar12 = param_2[0x65];
  if (lVar12 == 0) {
    local_58[0] = (long *)0x0;
  }
  else {
    if (*(int *)(lVar12 + 0xc) != 0) {
      piVar1 = (int *)(lVar12 + 0xc);
      plVar13 = (long *)PTR_DAT_0437a748;
      iVar8 = *(int *)(lVar12 + 0xc);
      do {
        plVar14 = *(long **)(lVar12 + 0x10);
        if ((*puVar6 & 1) == 0) {
          iVar9 = __cxa_guard_acquire(puVar6);
          plVar13 = (long *)PTR_DAT_0437a748;
          if (iVar9 != 0) {
            if (((*puVar4 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar4), iVar9 != 0)) {
              uVar11 = FUN_0087f8f0();
              *(undefined8 *)puVar5 = uVar11;
              __cxa_guard_release(puVar4);
            }
            plVar13 = (long *)PTR_DAT_0437a748;
            *(undefined **)PTR_DAT_0437a748 = puVar5;
            __cxa_guard_release(puVar6);
            if (plVar14 != (long *)0x0) goto LAB_01b795bc;
            break;
          }
        }
        while( true ) {
          if (plVar14 == (long *)0x0) goto LAB_01b79664;
LAB_01b795bc:
          if (plVar14 == plVar13) break;
          plVar14 = (long *)*plVar14;
        }
        iVar9 = *piVar1;
        if (iVar9 == iVar8) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar8 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            local_58[0] = (long *)0x0;
            if (*(long *)(lVar12 + 0x18) != 0) {
              local_58[0] = (long *)(*(long *)(lVar12 + 0x18) + -0x50);
            }
            goto LAB_01b792bc;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar8 = iVar9;
      } while (iVar9 != 0);
    }
LAB_01b79664:
    local_58[0] = (long *)0x0;
  }
LAB_01b792bc:
  plVar10 = (long *)FUN_01b7e710(plVar10,plVar10[1],local_58);
  if (local_58[0] != (long *)0x0) {
    lVar12 = local_58[0][0xb];
    piVar1 = (int *)(lVar12 + 0xc);
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
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*local_58[0] + 0x20))();
    }
  }
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x18))(local_58,plVar10);
    local_70 = (undefined8 *)0x0;
    uStack_68 = 0;
    FUN_00ad3450(&local_70,local_58);
    plVar10 = local_58[0];
    if (local_58[0] != (long *)0x0) {
      plVar13 = local_58[0] + 1;
      do {
        iVar8 = (int)*plVar13 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar3) {
          *(int *)plVar13 = iVar8;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar8 == 0) {
        local_58[0][2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar12 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar12;
        local_48 = *plVar10;
        FUN_02a44274(lVar12 + 0xd8,&local_48);
      }
    }
    FUN_00ad52f4(param_1 + 8,&local_70);
    puVar7 = local_70;
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
        lVar12 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar12;
        local_58[0] = (long *)*puVar7;
        FUN_02a44274(lVar12 + 0xd8,local_58);
      }
    }
  }
  if (local_60 != (long *)0x0) {
    lVar12 = local_60[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
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
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*local_60 + 0x20))();
    }
  }
  return;
}


