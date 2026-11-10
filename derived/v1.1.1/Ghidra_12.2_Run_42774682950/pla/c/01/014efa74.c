/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014efa74; name: thunk_FUN_014efa78
 */


void thunk_FUN_014efa78(long param_1,long param_2)

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
  long lStack_80;
  long lStack_78;
  long *plStack_70;
  long *plStack_68;
  
  puVar3 = PTR_DAT_04379cd8;
  puVar2 = PTR_DAT_04379cd0;
  pcVar8 = *(char **)(param_2 + 8);
  if (*pcVar8 == '\0') {
    plStack_68 = (long *)FUN_00938550();
    if (plStack_68 == (long *)0x0) goto LAB_014efae4;
    (**(code **)(*plStack_68 + 0x18))(plStack_68);
    if (plStack_68 != (long *)0x0) goto LAB_014efae8;
LAB_014efe0c:
    plVar7 = (long *)PTR_PTR_04379d00;
    plVar6 = plStack_68;
  }
  else {
    if (((*PTR_DAT_04379cd0 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04379cd0), iVar4 != 0)) {
      FUN_00100250(PTR_LAB_04379d08,PTR_DAT_04379cd8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379cd0);
    }
    uVar5 = *(undefined8 *)puVar3;
    *(undefined8 *)PTR_DAT_04379ce0 = uVar5;
    FUN_02a47cd8(&plStack_68,uVar5,pcVar8);
LAB_014efae4:
    if (plStack_68 == (long *)0x0) goto LAB_014efe0c;
LAB_014efae8:
    plVar7 = plStack_68 + 0xc;
    plVar6 = plStack_68;
  }
  plStack_68 = (long *)*plVar7;
  FUN_014effbc(&plStack_70,"pane_",&plStack_68);
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))(plVar6);
  }
  lVar12 = 0;
  do {
    if (plStack_70 == (long *)0x0) {
      plVar7 = (long *)PTR_PTR_04379d00;
    }
    else {
      plVar7 = plStack_70 + 0xc;
    }
    lStack_78 = *plVar7;
    pcVar8 = *(char **)((long)&DAT_043c51f0 + lVar12);
    if (*pcVar8 == '\0') {
      plVar7 = (long *)FUN_00938550();
      if (plVar7 == (long *)0x0) goto LAB_014efb74;
      (**(code **)(*plVar7 + 0x18))(plVar7);
      if (plVar7 != (long *)0x0) goto LAB_014efb78;
LAB_014efde0:
      plVar6 = (long *)PTR_PTR_04379d00;
    }
    else {
      if (((*puVar2 & 1) == 0) && (iVar4 = __cxa_guard_acquire(puVar2), iVar4 != 0)) {
        FUN_00100250(PTR_LAB_04379d08,puVar3,&PTR_LOOP_0411a000);
        __cxa_guard_release(puVar2);
      }
      uVar5 = *(undefined8 *)puVar3;
      *(undefined8 *)PTR_DAT_04379ce0 = uVar5;
      FUN_02a47cd8(&plStack_68,uVar5,pcVar8);
      plVar7 = plStack_68;
LAB_014efb74:
      if (plVar7 == (long *)0x0) goto LAB_014efde0;
LAB_014efb78:
      plVar6 = plVar7 + 0xc;
    }
    lStack_80 = *plVar6;
    FUN_00d58260(&plStack_68,&lStack_78,&lStack_80);
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x20))(plVar7);
    }
    plVar7 = plStack_68;
    if (plStack_68 == (long *)0x0) {
      lVar9 = *(long *)PTR_DAT_04379c88;
LAB_014eff64:
      lVar10 = *(long *)PTR_PTR_04379d00;
      if (plStack_68 != (long *)0x0) goto LAB_014efbc8;
LAB_014eff74:
      lVar11 = 0;
    }
    else {
      lVar9 = plStack_68[0xb];
      if (plStack_68 == (long *)0x0) goto LAB_014eff64;
      lVar10 = plStack_68[0xc];
      if (plStack_68 == (long *)0x0) goto LAB_014eff74;
LAB_014efbc8:
      lVar11 = plStack_68[0xd];
      (**(code **)(*plStack_68 + 0x18))(plStack_68);
    }
    lVar1 = param_1 + lVar12;
    plVar6 = *(long **)(lVar1 + 0x48);
    *(long *)(lVar1 + 0x30) = lVar9;
    *(long *)(lVar1 + 0x38) = lVar10;
    *(long *)(lVar1 + 0x40) = lVar11;
    *(undefined8 *)(lVar1 + 0x48) = 0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x20))();
    }
    *(long **)(lVar1 + 0x48) = plVar7;
    if (plStack_68 != (long *)0x0) {
      (**(code **)(*plStack_68 + 0x20))();
    }
    lVar12 = lVar12 + 0x20;
  } while (lVar12 != 0xc0);
  if (plStack_70 != (long *)0x0) {
    (**(code **)(*plStack_70 + 0x20))();
  }
  pcVar8 = *(char **)(param_2 + 8);
  if (*pcVar8 == '\0') {
    plVar7 = (long *)FUN_00938550();
    if (plVar7 == (long *)0x0) goto LAB_014efc6c;
    (**(code **)(*plVar7 + 0x18))(plVar7);
    if (plVar7 != (long *)0x0) goto LAB_014efc70;
LAB_014efe38:
    plStack_68 = (long *)PTR_PTR_04379d00;
  }
  else {
    if (((*puVar2 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379cd0), iVar4 != 0)) {
      FUN_00100250(PTR_LAB_04379d08,PTR_DAT_04379cd8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379cd0);
    }
    uVar5 = *(undefined8 *)puVar3;
    *(undefined8 *)PTR_DAT_04379ce0 = uVar5;
    FUN_02a47cd8(&plStack_68,uVar5,pcVar8);
    plVar7 = plStack_68;
LAB_014efc6c:
    if (plVar7 == (long *)0x0) goto LAB_014efe38;
LAB_014efc70:
    plStack_68 = plVar7 + 0xc;
  }
  plStack_68 = (long *)*plStack_68;
  FUN_014f003c(&plStack_70,"anime_",&plStack_68);
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x20))(plVar7);
  }
  pcVar8 = DAT_043c52b0;
  if (plStack_70 == (long *)0x0) {
    plVar7 = (long *)PTR_PTR_04379d00;
  }
  else {
    plVar7 = plStack_70 + 0xc;
  }
  lStack_78 = *plVar7;
  if (*DAT_043c52b0 == '\0') {
    plVar7 = (long *)FUN_00938550();
    if (plVar7 == (long *)0x0) goto LAB_014efcf0;
    (**(code **)(*plVar7 + 0x18))(plVar7);
    if (plVar7 != (long *)0x0) goto LAB_014efcf4;
LAB_014efe64:
    plVar6 = (long *)PTR_PTR_04379d00;
  }
  else {
    if (((*puVar2 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379cd0), iVar4 != 0)) {
      FUN_00100250(PTR_LAB_04379d08,PTR_DAT_04379cd8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379cd0);
    }
    uVar5 = *(undefined8 *)puVar3;
    *(undefined8 *)PTR_DAT_04379ce0 = uVar5;
    FUN_02a47cd8(&plStack_68,uVar5,pcVar8);
    plVar7 = plStack_68;
LAB_014efcf0:
    if (plVar7 == (long *)0x0) goto LAB_014efe64;
LAB_014efcf4:
    plVar6 = plVar7 + 0xc;
  }
  lStack_80 = *plVar6;
  FUN_00d58260(&plStack_68,&lStack_78,&lStack_80);
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x20))(plVar7);
  }
  plVar7 = plStack_68;
  if (plStack_68 == (long *)0x0) {
    lVar12 = *(long *)PTR_DAT_04379c88;
  }
  else {
    lVar12 = plStack_68[0xb];
    if (plStack_68 != (long *)0x0) {
      lVar9 = plStack_68[0xc];
      goto joined_r0x014efd40;
    }
  }
  lVar9 = *(long *)PTR_PTR_04379d00;
joined_r0x014efd40:
  if (plStack_68 == (long *)0x0) {
    lVar10 = 0;
  }
  else {
    lVar10 = plStack_68[0xd];
    (**(code **)(*plStack_68 + 0x18))(plStack_68);
  }
  plVar6 = *(long **)(param_1 + 0x108);
  *(long *)(param_1 + 0xf0) = lVar12;
  *(long *)(param_1 + 0xf8) = lVar9;
  *(long *)(param_1 + 0x100) = lVar10;
  *(undefined8 *)(param_1 + 0x108) = 0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))();
  }
  *(long **)(param_1 + 0x108) = plVar7;
  if (plStack_68 != (long *)0x0) {
    (**(code **)(*plStack_68 + 0x20))();
  }
  if (plStack_70 != (long *)0x0) {
    (**(code **)(*plStack_70 + 0x20))();
  }
  return;
}


