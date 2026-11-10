/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014f248c; name: FUN_014f248c
 */


void FUN_014f248c(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  char *pcVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long local_80;
  long local_78;
  long *local_70;
  long *local_68;
  
  puVar3 = PTR_DAT_04379cd8;
  puVar2 = PTR_DAT_04379cd0;
  pcVar8 = *(char **)(param_2 + 8);
  if (*pcVar8 == '\0') {
    plVar7 = (long *)FUN_00938550();
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
  }
  else {
    if (((*PTR_DAT_04379cd0 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04379cd0), iVar4 != 0)) {
      FUN_00100250(PTR_LAB_04379d08,PTR_DAT_04379cd8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379cd0);
    }
    uVar5 = *(undefined8 *)puVar3;
    *(undefined8 *)PTR_DAT_04379ce0 = uVar5;
    FUN_02a47cd8(&local_68,uVar5,pcVar8);
    plVar7 = local_68;
  }
  if (plVar7 == (long *)0x0) {
    local_68 = (long *)PTR_PTR_04379d00;
  }
  else {
    local_68 = plVar7 + 0xc;
  }
  local_68 = (long *)*local_68;
  FUN_014effbc(&local_70,"pane_",&local_68);
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x20))(plVar7);
  }
  lVar12 = 0;
  if (local_70 != (long *)0x0) goto LAB_014f25c4;
LAB_014f29a0:
  plVar7 = (long *)PTR_PTR_04379d00;
  do {
    local_78 = *plVar7;
    pcVar8 = *(char **)((long)&DAT_043c52d0 + lVar12);
    if (*pcVar8 == '\0') {
      plVar7 = (long *)FUN_00938550();
      if (plVar7 == (long *)0x0) goto LAB_014f2608;
      (**(code **)(*plVar7 + 0x18))(plVar7);
      if (plVar7 == (long *)0x0) goto LAB_014f286c;
LAB_014f260c:
      plVar6 = plVar7 + 0xc;
    }
    else {
      if (((*puVar2 & 1) == 0) && (iVar4 = __cxa_guard_acquire(puVar2), iVar4 != 0)) {
        FUN_00100250(PTR_LAB_04379d08,puVar3,&PTR_LOOP_0411a000);
        __cxa_guard_release(puVar2);
      }
      uVar5 = *(undefined8 *)puVar3;
      *(undefined8 *)PTR_DAT_04379ce0 = uVar5;
      FUN_02a47cd8(&local_68,uVar5,pcVar8);
      plVar7 = local_68;
LAB_014f2608:
      if (plVar7 != (long *)0x0) goto LAB_014f260c;
LAB_014f286c:
      plVar6 = (long *)PTR_PTR_04379d00;
    }
    local_80 = *plVar6;
    FUN_00d58260(&local_68,&local_78,&local_80);
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x20))(plVar7);
    }
    plVar7 = local_68;
    if (local_68 == (long *)0x0) {
      lVar9 = *(long *)PTR_DAT_04379c88;
LAB_014f2988:
      lVar10 = *(long *)PTR_PTR_04379d00;
      if (local_68 != (long *)0x0) goto LAB_014f265c;
LAB_014f2998:
      lVar11 = 0;
    }
    else {
      lVar9 = local_68[0xb];
      if (local_68 == (long *)0x0) goto LAB_014f2988;
      lVar10 = local_68[0xc];
      if (local_68 == (long *)0x0) goto LAB_014f2998;
LAB_014f265c:
      lVar11 = local_68[0xd];
      (**(code **)(*local_68 + 0x18))(local_68);
    }
    lVar1 = param_1 + lVar12;
    plVar6 = *(long **)(lVar1 + 0x80);
    *(long *)(lVar1 + 0x68) = lVar9;
    *(long *)(lVar1 + 0x70) = lVar10;
    *(long *)(lVar1 + 0x78) = lVar11;
    *(undefined8 *)(lVar1 + 0x80) = 0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x20))();
    }
    *(long **)(lVar1 + 0x80) = plVar7;
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x20))();
    }
    lVar12 = lVar12 + 0x20;
    if (lVar12 == 0x100) {
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
      pcVar8 = *(char **)(param_2 + 8);
      if (*pcVar8 == '\0') {
        plVar7 = (long *)FUN_00938550();
        if (plVar7 == (long *)0x0) goto LAB_014f26f8;
        (**(code **)(*plVar7 + 0x18))(plVar7);
        if (plVar7 == (long *)0x0) goto LAB_014f2898;
LAB_014f26fc:
        local_68 = plVar7 + 0xc;
      }
      else {
        if (((*puVar2 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379cd0), iVar4 != 0)) {
          FUN_00100250(PTR_LAB_04379d08,PTR_DAT_04379cd8,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379cd0);
        }
        uVar5 = *(undefined8 *)puVar3;
        *(undefined8 *)PTR_DAT_04379ce0 = uVar5;
        FUN_02a47cd8(&local_68,uVar5,pcVar8);
        plVar7 = local_68;
LAB_014f26f8:
        if (plVar7 != (long *)0x0) goto LAB_014f26fc;
LAB_014f2898:
        local_68 = (long *)PTR_PTR_04379d00;
      }
      local_68 = (long *)*local_68;
      FUN_014f003c(&local_70,"anime_",&local_68);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x20))(plVar7);
      }
      pcVar8 = DAT_043c53d0;
      if (local_70 == (long *)0x0) {
        plVar7 = (long *)PTR_PTR_04379d00;
      }
      else {
        plVar7 = local_70 + 0xc;
      }
      local_78 = *plVar7;
      if (*DAT_043c53d0 == '\0') {
        plVar7 = (long *)FUN_00938550();
        if (plVar7 == (long *)0x0) goto LAB_014f277c;
        (**(code **)(*plVar7 + 0x18))(plVar7);
        if (plVar7 == (long *)0x0) goto LAB_014f28c4;
LAB_014f2780:
        plVar6 = plVar7 + 0xc;
      }
      else {
        if (((*puVar2 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379cd0), iVar4 != 0)) {
          FUN_00100250(PTR_LAB_04379d08,PTR_DAT_04379cd8,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379cd0);
        }
        uVar5 = *(undefined8 *)puVar3;
        *(undefined8 *)PTR_DAT_04379ce0 = uVar5;
        FUN_02a47cd8(&local_68,uVar5,pcVar8);
        plVar7 = local_68;
LAB_014f277c:
        if (plVar7 != (long *)0x0) goto LAB_014f2780;
LAB_014f28c4:
        plVar6 = (long *)PTR_PTR_04379d00;
      }
      local_80 = *plVar6;
      FUN_00d58260(&local_68,&local_78,&local_80);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x20))(plVar7);
      }
      plVar7 = local_68;
      if (local_68 == (long *)0x0) {
        lVar12 = *(long *)PTR_DAT_04379c88;
      }
      else {
        lVar12 = local_68[0xb];
        if (local_68 != (long *)0x0) {
          lVar9 = local_68[0xc];
          goto joined_r0x014f27cc;
        }
      }
      lVar9 = *(long *)PTR_PTR_04379d00;
joined_r0x014f27cc:
      if (local_68 == (long *)0x0) {
        lVar10 = 0;
      }
      else {
        lVar10 = local_68[0xd];
        (**(code **)(*local_68 + 0x18))(local_68);
      }
      plVar6 = *(long **)(param_1 + 0x180);
      *(long *)(param_1 + 0x168) = lVar12;
      *(long *)(param_1 + 0x170) = lVar9;
      *(long *)(param_1 + 0x178) = lVar10;
      *(undefined8 *)(param_1 + 0x180) = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x20))();
      }
      *(long **)(param_1 + 0x180) = plVar7;
      if (local_68 != (long *)0x0) {
        (**(code **)(*local_68 + 0x20))();
      }
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
      return;
    }
    if (local_70 == (long *)0x0) goto LAB_014f29a0;
LAB_014f25c4:
    plVar7 = local_70 + 0xc;
  } while( true );
}


