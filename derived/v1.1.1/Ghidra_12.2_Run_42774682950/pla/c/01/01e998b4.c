/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e998b4; name: FUN_01e998b4
 */


void FUN_01e998b4(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  undefined8 *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  puVar7 = PTR_DAT_0437aea0;
  puVar6 = PTR_DAT_0437ae98;
  lVar12 = *(long *)(param_1 + 0x540);
  if ((lVar12 != 0) && (*(int *)(lVar12 + 0xc) != 0)) {
    piVar1 = (int *)(lVar12 + 0xc);
    iVar9 = *(int *)(lVar12 + 0xc);
    do {
      plVar13 = *(long **)(lVar12 + 0x10);
      if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar6), iVar8 != 0)) {
        uVar10 = FUN_00ab38cc();
        *(undefined8 *)puVar7 = uVar10;
        __cxa_guard_release(puVar6);
      }
      while( true ) {
        if (plVar13 == (long *)0x0) goto LAB_01e998d8;
        if (plVar13 == (long *)puVar7) break;
        plVar13 = (long *)*plVar13;
      }
      iVar8 = *piVar1;
      if (iVar8 == iVar9) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar9 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar12 = *(long *)(lVar12 + 0x18);
          if (lVar12 != 0) {
            local_68 = (undefined8 *)0x0;
            uStack_60 = 0;
            FUN_00aeb228(&local_68,lVar12 + 0x358);
            puVar5 = local_68;
            puVar7 = PTR_DAT_0437a6e0;
            puVar6 = PTR_DAT_0437a6d8;
            if (local_68 == (undefined8 *)0x0) goto LAB_01e999a8;
            if (*(int *)((long)local_68 + 0xc) == 0) goto LAB_01e99a98;
            piVar1 = (int *)((long)local_68 + 0xc);
            iVar9 = *(int *)((long)local_68 + 0xc);
            goto LAB_01e99a5c;
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar9 = iVar8;
    } while (iVar8 != 0);
  }
  goto LAB_01e998d8;
LAB_01e99cd4:
  plVar13 = (long *)puVar5[2];
  if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar6), iVar8 != 0)) {
    uVar10 = FUN_00ad3750();
    *(undefined8 *)puVar7 = uVar10;
    __cxa_guard_release(puVar6);
  }
  while( true ) {
    if (plVar13 == (long *)0x0) goto LAB_01e99d10;
    if (plVar13 == (long *)puVar7) break;
    plVar13 = (long *)*plVar13;
  }
  iVar8 = *piVar1;
  if (iVar8 == iVar9) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar9 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') {
      lVar11 = puVar5[3];
      plVar13 = (long *)0x0;
      puVar5 = local_68;
      if (lVar11 != 0) {
        plVar13 = (long *)(lVar11 + -0x50);
      }
      goto joined_r0x01e99d34;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  iVar9 = iVar8;
  if (iVar8 == 0) {
LAB_01e99d10:
    plVar13 = (long *)0x0;
    puVar5 = local_68;
joined_r0x01e99d34:
    local_68 = puVar5;
    if (puVar5 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar5 + 1);
      do {
        iVar9 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar9 + -1 == 0) {
        puVar5[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar11 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar11;
        local_58 = *puVar5;
        FUN_02a44274(lVar11 + 0xd8,&local_58);
      }
    }
    if (plVar13 != (long *)0x0) {
      lVar11 = plVar13[0x5d];
      if ((*(long *)(lVar11 + 0xe8) != 0) &&
         (*(int *)(lVar11 + 0xf0) == *(int *)(*(long *)(lVar11 + 0xe8) + 0x2c))) {
        FUN_002669c8(lVar11 + 0xe8);
        FUN_002667b4();
      }
      lVar11 = plVar13[0xb];
      piVar1 = (int *)(lVar11 + 0xc);
      do {
        iVar9 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar11 + 0x18) = 0;
        (**(code **)(*plVar13 + 0x20))(plVar13);
      }
    }
LAB_01e99c50:
    lVar11 = *(long *)(lVar12 + 8);
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*(long *)(lVar12 + -0x50) + 0x20))((long *)(lVar12 + -0x50));
      return;
    }
    return;
  }
  goto LAB_01e99cd4;
LAB_01e99a5c:
  do {
    plVar13 = (long *)puVar5[2];
    if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar6), iVar8 != 0)) {
      uVar10 = FUN_00ad3750();
      *(undefined8 *)puVar7 = uVar10;
      __cxa_guard_release(puVar6);
    }
    while( true ) {
      if (plVar13 == (long *)0x0) goto LAB_01e99a98;
      if (plVar13 == (long *)puVar7) break;
      plVar13 = (long *)*plVar13;
    }
    iVar8 = *piVar1;
    if (iVar8 == iVar9) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        lVar11 = puVar5[3];
        plVar13 = (long *)0x0;
        puVar5 = local_68;
        if (lVar11 != 0) {
          plVar13 = (long *)(lVar11 + -0x50);
        }
        goto joined_r0x01e99abc;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar9 = iVar8;
  } while (iVar8 != 0);
LAB_01e99a98:
  plVar13 = (long *)0x0;
  puVar5 = local_68;
joined_r0x01e99abc:
  local_68 = puVar5;
  if (puVar5 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar5 + 1);
    do {
      iVar9 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 + -1 == 0) {
      puVar5[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar11 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar11;
      local_58 = *puVar5;
      FUN_02a44274(lVar11 + 0xd8,&local_58);
    }
  }
  if (plVar13 != (long *)0x0) {
    lVar11 = plVar13[0x5d];
    if ((*(long *)(lVar11 + 0xe8) != 0) &&
       (*(int *)(lVar11 + 0xf0) == *(int *)(*(long *)(lVar11 + 0xe8) + 0x2c))) {
      FUN_002669c8(lVar11 + 0xe8);
      FUN_002667b4();
    }
    lVar11 = plVar13[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*plVar13 + 0x20))(plVar13);
    }
  }
LAB_01e999a8:
  lVar11 = *(long *)(lVar12 + 8);
  piVar1 = (int *)(lVar11 + 0xc);
  do {
    iVar9 = *piVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar9 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar9 + -1 == 0) {
    *(undefined8 *)(lVar11 + 0x18) = 0;
    (**(code **)(*(long *)(lVar12 + -0x50) + 0x20))((long *)(lVar12 + -0x50));
    lVar12 = *(long *)(param_1 + 0x550);
    pbVar4 = PTR_DAT_0437ae98;
    puVar5 = (undefined8 *)PTR_DAT_0437aea0;
    goto joined_r0x01e999e4;
  }
LAB_01e998d8:
  lVar12 = *(long *)(param_1 + 0x550);
  pbVar4 = PTR_DAT_0437ae98;
  puVar5 = (undefined8 *)PTR_DAT_0437aea0;
joined_r0x01e999e4:
  PTR_DAT_0437ae98 = pbVar4;
  PTR_DAT_0437aea0 = (undefined *)puVar5;
  if ((lVar12 != 0) && (*(int *)(lVar12 + 0xc) != 0)) {
    piVar1 = (int *)(lVar12 + 0xc);
    iVar9 = *(int *)(lVar12 + 0xc);
    do {
      plVar13 = *(long **)(lVar12 + 0x10);
      if (((*pbVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(pbVar4), iVar8 != 0)) {
        uVar10 = FUN_00ab38cc();
        *puVar5 = uVar10;
        __cxa_guard_release(pbVar4);
      }
      while( true ) {
        if (plVar13 == (long *)0x0) {
          return;
        }
        if (plVar13 == puVar5) break;
        plVar13 = (long *)*plVar13;
      }
      iVar8 = *piVar1;
      if (iVar8 == iVar9) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar9 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar12 = *(long *)(lVar12 + 0x18);
          if (lVar12 == 0) {
            return;
          }
          local_68 = (undefined8 *)0x0;
          uStack_60 = 0;
          FUN_00aeb228(&local_68,lVar12 + 0x358);
          puVar5 = local_68;
          puVar7 = PTR_DAT_0437a6e0;
          puVar6 = PTR_DAT_0437a6d8;
          if (local_68 == (undefined8 *)0x0) goto LAB_01e99c50;
          if (*(int *)((long)local_68 + 0xc) == 0) goto LAB_01e99d10;
          piVar1 = (int *)((long)local_68 + 0xc);
          iVar9 = *(int *)((long)local_68 + 0xc);
          goto LAB_01e99cd4;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar9 = iVar8;
    } while (iVar8 != 0);
  }
  return;
}


