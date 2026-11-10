/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0260e730; name: FUN_0260e730
 */


void FUN_0260e730(long param_1)

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
  long lVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  undefined8 *local_80;
  undefined8 uStack_78;
  long *local_70;
  long *local_68;
  undefined8 *local_60 [2];
  undefined8 local_48;
  
  puVar6 = PTR_DAT_04379e80;
  puVar5 = PTR_DAT_04379e78;
  lVar11 = *(long *)(param_1 + 0x3b0);
  if (lVar11 == 0) {
    return;
  }
  if (*(int *)(lVar11 + 0xc) == 0) {
    return;
  }
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
      if (plVar12 == (long *)0x0) {
        return;
      }
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
        lVar11 = *(long *)(lVar11 + 0x18);
        if (lVar11 == 0) {
          return;
        }
        plVar12 = (long *)(lVar11 + -0x50);
        FUN_00aae1c0(local_60,plVar12);
        puVar4 = local_60[0];
        if (local_60[0] == (undefined8 *)0x0) goto LAB_0260e804;
        if (*(int *)((long)local_60[0] + 0xc) == 0) goto LAB_0260e8cc;
        piVar1 = (int *)((long)local_60[0] + 0xc);
        iVar8 = *(int *)((long)local_60[0] + 0xc);
        break;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar8 = iVar7;
    if (iVar7 == 0) {
      return;
    }
  } while( true );
LAB_0260e878:
  plVar13 = (long *)puVar4[2];
  lVar10 = FUN_00a3edb8();
  while( true ) {
    if (plVar13 == (long *)0x0) goto LAB_0260e8cc;
    if (plVar13 == (long *)lVar10) break;
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
      lVar10 = puVar4[3];
      plVar13 = (long *)0x0;
      puVar4 = local_60[0];
      if (lVar10 != 0) {
        plVar13 = (long *)(lVar10 + -0x50);
      }
      goto joined_r0x0260e8c4;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  iVar8 = iVar7;
  if (iVar7 == 0) {
LAB_0260e8cc:
    plVar13 = (long *)0x0;
    puVar4 = local_60[0];
joined_r0x0260e8c4:
    local_60[0] = puVar4;
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
        lVar10 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar10;
        local_80 = (undefined8 *)*puVar4;
        FUN_02a44274(lVar10 + 0xd8,&local_80);
      }
    }
    if (plVar13 != (long *)0x0) {
      local_60[0] = (undefined8 *)&DAT_befd67b6f18a9151;
      FUN_009c69bc(&local_70,plVar13);
      FUN_017d31f8(&local_68,local_60,&local_70);
      if (local_70 != (long *)0x0) {
        lVar10 = local_70[0xb];
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
          (**(code **)(*local_70 + 0x20))();
        }
      }
      FUN_02c90b44(local_68);
      (**(code **)(*local_68 + 0x10))(local_60);
      local_80 = (undefined8 *)0x0;
      uStack_78 = 0;
      FUN_00ad3450(&local_80,local_60);
      puVar4 = local_60[0];
      if (local_60[0] != (undefined8 *)0x0) {
        piVar1 = (int *)(local_60[0] + 1);
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
          local_60[0][2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar10 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar10;
          local_48 = *puVar4;
          FUN_02a44274(lVar10 + 0xd8,&local_48);
        }
      }
      FUN_00ad52f4(param_1 + 0x380,&local_80);
      puVar4 = local_80;
      if (local_80 != (undefined8 *)0x0) {
        piVar1 = (int *)(local_80 + 1);
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
          local_80[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar10 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar10;
          local_60[0] = (undefined8 *)*puVar4;
          FUN_02a44274(lVar10 + 0xd8,local_60);
        }
      }
      if (local_68 != (long *)0x0) {
        lVar10 = local_68[0xb];
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
          (**(code **)(*local_68 + 0x20))();
        }
      }
      lVar10 = plVar13[0xb];
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
        (**(code **)(*plVar13 + 0x20))(plVar13);
      }
    }
LAB_0260e804:
    lVar11 = *(long *)(lVar11 + 8);
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
    return;
  }
  goto LAB_0260e878;
}


