/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a8b408; name: FUN_01a8b408
 */


void FUN_01a8b408(long param_1,byte param_2)

{
  code *pcVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  code *pcVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long *plVar14;
  code *local_d0;
  code *local_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  byte local_b0 [96];
  long *local_50;
  undefined8 local_48;
  
  local_d0 = (code *)0x0;
  local_c8 = (code *)0x0;
  FUN_00af7e30(&local_d0,param_1 + 0x230);
  pcVar11 = local_d0;
  puVar6 = PTR_DAT_0437a558;
  puVar5 = PTR_DAT_0437a550;
  if (local_d0 == (code *)0x0) {
    return;
  }
  if (*(int *)(local_d0 + 0xc) != 0) {
    pcVar1 = local_d0 + 0xc;
    iVar8 = *(int *)(local_d0 + 0xc);
    do {
      plVar14 = *(long **)(pcVar11 + 0x10);
      if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
        uVar9 = FUN_00aa0310();
        *(undefined8 *)puVar6 = uVar9;
        __cxa_guard_release(puVar5);
      }
      while( true ) {
        if (plVar14 == (long *)0x0) goto LAB_01a8b730;
        if (plVar14 == (long *)puVar6) break;
        plVar14 = (long *)*plVar14;
      }
      iVar7 = *(int *)pcVar1;
      if (iVar7 == iVar8) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
        if (bVar4) {
          *(int *)pcVar1 = iVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar10 = *(long *)(pcVar11 + 0x18);
          plVar14 = (long *)0x0;
          pcVar11 = local_d0;
          if (lVar10 != 0) {
            plVar14 = (long *)(lVar10 + -0x50);
          }
          goto joined_r0x01a8b4cc;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar8 = iVar7;
    } while (iVar7 != 0);
  }
LAB_01a8b730:
  plVar14 = (long *)0x0;
  pcVar11 = local_d0;
joined_r0x01a8b4cc:
  local_d0 = pcVar11;
  if (pcVar11 != (code *)0x0) {
    pcVar1 = pcVar11 + 8;
    do {
      iVar8 = *(int *)pcVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
      if (bVar4) {
        *(int *)pcVar1 = iVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(pcVar11 + 0x10) = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_48 = *(undefined8 *)pcVar11;
      FUN_02a44274(lVar10 + 0xd8,&local_48);
    }
  }
  if (plVar14 == (long *)0x0) {
    return;
  }
  FUN_00a9ecd4(&local_d0,plVar14);
  FUN_009983e4(&local_50,&local_d0);
  pcVar11 = local_d0;
  if (local_d0 != (code *)0x0) {
    pcVar1 = local_d0 + 8;
    do {
      iVar8 = *(int *)pcVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
      if (bVar4) {
        *(int *)pcVar1 = iVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(local_d0 + 0x10) = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_48 = *(undefined8 *)pcVar11;
      FUN_02a44274(lVar10 + 0xd8,&local_48);
    }
  }
  if (local_50 == (long *)0x0) goto LAB_01a8b6bc;
  local_b0[0] = param_2 & 1;
  local_d0 = FUN_01aa5444;
  local_c8 = FUN_01aa54b8;
  local_c0 = &LAB_01aa54bc;
  puStack_b8 = &LAB_01aa54c8;
  puVar13 = (undefined8 *)local_50[0x4a];
  puVar12 = (undefined8 *)local_50[0x4b];
  pcVar11 = FUN_01aa54b8;
  if (puVar13 == puVar12) {
LAB_01a8b688:
    local_c0 = (undefined1 *)0x0;
    puStack_b8 = (undefined1 *)0x0;
    local_d0 = (code *)0x0;
    local_c8 = (code *)0x0;
    (*pcVar11)(local_b0);
  }
  else {
    local_48 = *puVar13;
    FUN_01aa5444(local_b0,&local_48);
    if (puVar13 + 1 != puVar12) {
      local_48 = puVar13[1];
      (*local_d0)(local_b0,&local_48);
      if (puVar13 + 2 != puVar12) {
        local_48 = puVar13[2];
        (*local_d0)(local_b0,&local_48);
        for (puVar13 = puVar13 + 3; puVar13 != puVar12; puVar13 = puVar13 + 1) {
          local_48 = *puVar13;
          (*local_d0)(local_b0,&local_48);
        }
      }
    }
    pcVar11 = local_c8;
    if (local_c8 != (code *)0x0) goto LAB_01a8b688;
  }
  if (local_50 != (long *)0x0) {
    lVar10 = local_50[0xb];
    piVar2 = (int *)(lVar10 + 0xc);
    do {
      iVar8 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*local_50 + 0x20))();
    }
  }
LAB_01a8b6bc:
  lVar10 = plVar14[0xb];
  piVar2 = (int *)(lVar10 + 0xc);
  do {
    iVar8 = *piVar2;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar4) {
      *piVar2 = iVar8 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar8 + -1 == 0) {
    *(undefined8 *)(lVar10 + 0x18) = 0;
    (**(code **)(*plVar14 + 0x20))(plVar14);
  }
  return;
}


