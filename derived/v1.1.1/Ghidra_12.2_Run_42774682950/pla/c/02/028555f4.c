/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028555f4; name: FUN_028555f4
 */


void FUN_028555f4(long param_1)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  char *pcVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long local_88;
  long local_80;
  long *local_78;
  long *local_70;
  long *local_68;
  
  *(undefined8 *)(param_1 + 0x158) = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x160) = *(undefined8 *)(param_1 + 0x70);
  plVar6 = *(long **)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x168) = *(undefined8 *)(param_1 + 0x78);
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  plVar3 = *(long **)(param_1 + 0x170);
  *(long **)(param_1 + 0x170) = plVar6;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))();
  }
  puVar1 = PTR_DAT_04379cd0;
  pcVar8 = *(char **)(param_1 + 0x90);
  if (*pcVar8 == '\0') {
    plVar6 = (long *)FUN_00938550();
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
  }
  else {
    if (((*PTR_DAT_04379cd0 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379cd0), iVar2 != 0)) {
      FUN_00100250(PTR_LAB_04379d08,PTR_DAT_04379cd8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379cd0);
    }
    uVar4 = *(undefined8 *)PTR_DAT_04379cd8;
    *(undefined8 *)PTR_DAT_04379ce0 = uVar4;
    FUN_02a47cd8(&local_68,uVar4,pcVar8);
    plVar6 = local_68;
  }
  if (plVar6 == (long *)0x0) {
    local_68 = (long *)PTR_PTR_04379d00;
  }
  else {
    local_68 = plVar6 + 0xc;
  }
  local_68 = (long *)*local_68;
  FUN_014effbc(&local_70,"pane_",&local_68);
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))(plVar6);
  }
  lVar11 = 0;
  if (local_70 != (long *)0x0) goto LAB_0285576c;
LAB_028559e8:
  local_78 = (long *)PTR_PTR_04379d00;
  do {
    local_78 = (long *)*local_78;
    pcVar8 = *(char **)((long)&DAT_043eb9e0 + lVar11);
    if (*pcVar8 == '\0') {
      plVar6 = (long *)FUN_00938550();
      if (plVar6 == (long *)0x0) goto LAB_028557b8;
      (**(code **)(*plVar6 + 0x18))(plVar6);
      if (plVar6 == (long *)0x0) goto LAB_02855918;
LAB_028557bc:
      plVar3 = plVar6 + 0xc;
    }
    else {
      if (((*puVar1 & 1) == 0) && (iVar2 = __cxa_guard_acquire(puVar1), iVar2 != 0)) {
        FUN_00100250(PTR_LAB_04379d08,PTR_DAT_04379cd8,&PTR_LOOP_0411a000);
        __cxa_guard_release(puVar1);
      }
      uVar4 = *(undefined8 *)PTR_DAT_04379cd8;
      *(undefined8 *)PTR_DAT_04379ce0 = uVar4;
      FUN_02a47cd8(&local_68,uVar4,pcVar8);
      plVar6 = local_68;
LAB_028557b8:
      if (plVar6 != (long *)0x0) goto LAB_028557bc;
LAB_02855918:
      plVar3 = (long *)PTR_PTR_04379d00;
    }
    local_80 = *plVar3;
    FUN_00d58260(&local_68,&local_78,&local_80);
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x20))(plVar6);
    }
    plVar6 = local_68;
    if (local_68 == (long *)0x0) {
      lVar9 = *(long *)PTR_DAT_04379c88;
LAB_028559d0:
      lVar10 = *(long *)PTR_PTR_04379d00;
      if (local_68 != (long *)0x0) goto LAB_0285580c;
LAB_028559e0:
      lVar7 = 0;
    }
    else {
      lVar9 = local_68[0xb];
      if (local_68 == (long *)0x0) goto LAB_028559d0;
      lVar10 = local_68[0xc];
      if (local_68 == (long *)0x0) goto LAB_028559e0;
LAB_0285580c:
      lVar7 = local_68[0xd];
      (**(code **)(*local_68 + 0x18))(local_68);
    }
    plVar3 = (long *)(param_1 + 0x178 + lVar11);
    plVar5 = (long *)plVar3[3];
    *plVar3 = lVar9;
    plVar3[1] = lVar10;
    plVar3[2] = lVar7;
    plVar3[3] = 0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x20))();
    }
    plVar3[3] = (long)plVar6;
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x20))();
    }
    lVar11 = lVar11 + 0x20;
    if (lVar11 == 0x180) {
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
      pcVar8 = *(char **)(param_1 + 0x90);
      if (*pcVar8 == '\0') {
        plVar6 = (long *)FUN_00938550();
        if (plVar6 == (long *)0x0) goto LAB_028558ac;
        (**(code **)(*plVar6 + 0x18))(plVar6);
        if (plVar6 == (long *)0x0) goto LAB_02855944;
LAB_028558b0:
        local_68 = plVar6 + 0xc;
      }
      else {
        if (((*puVar1 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04379cd0), iVar2 != 0)) {
          FUN_00100250(PTR_LAB_04379d08,PTR_DAT_04379cd8,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379cd0);
        }
        uVar4 = *(undefined8 *)PTR_DAT_04379cd8;
        *(undefined8 *)PTR_DAT_04379ce0 = uVar4;
        FUN_02a47cd8(&local_68,uVar4,pcVar8);
        plVar6 = local_68;
LAB_028558ac:
        if (plVar6 != (long *)0x0) goto LAB_028558b0;
LAB_02855944:
        local_68 = (long *)PTR_PTR_04379d00;
      }
      local_68 = (long *)*local_68;
      FUN_014f003c(&local_70,"anime_",&local_68);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x20))(plVar6);
      }
      lVar11 = 0;
      if (local_70 != (long *)0x0) goto LAB_02855a08;
      break;
    }
    if (local_70 == (long *)0x0) goto LAB_028559e8;
LAB_0285576c:
    local_78 = local_70 + 0xc;
  } while( true );
LAB_02856380:
  local_78 = (long *)PTR_PTR_04379d00;
  do {
    local_78 = (long *)*local_78;
    pcVar8 = *(char **)((long)&DAT_043ebb60 + lVar11);
    if (*pcVar8 == '\0') {
      plVar6 = (long *)FUN_00938550();
      if (plVar6 == (long *)0x0) goto LAB_02855a54;
      (**(code **)(*plVar6 + 0x18))(plVar6);
      if (plVar6 == (long *)0x0) goto LAB_0285606c;
LAB_02855a58:
      plVar3 = plVar6 + 0xc;
    }
    else {
      if (((*puVar1 & 1) == 0) && (iVar2 = __cxa_guard_acquire(puVar1), iVar2 != 0)) {
        FUN_00100250(PTR_LAB_04379d08,PTR_DAT_04379cd8,&PTR_LOOP_0411a000);
        __cxa_guard_release(puVar1);
      }
      uVar4 = *(undefined8 *)PTR_DAT_04379cd8;
      *(undefined8 *)PTR_DAT_04379ce0 = uVar4;
      FUN_02a47cd8(&local_68,uVar4,pcVar8);
      plVar6 = local_68;
LAB_02855a54:
      if (plVar6 != (long *)0x0) goto LAB_02855a58;
LAB_0285606c:
      plVar3 = (long *)PTR_PTR_04379d00;
    }
    local_80 = *plVar3;
    FUN_00d58260(&local_68,&local_78,&local_80);
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x20))(plVar6);
    }
    plVar6 = local_68;
    if (local_68 == (long *)0x0) {
      lVar9 = *(long *)PTR_DAT_04379c88;
LAB_02856368:
      lVar10 = *(long *)PTR_PTR_04379d00;
      if (local_68 != (long *)0x0) goto LAB_02855aa8;
LAB_02856378:
      lVar7 = 0;
    }
    else {
      lVar9 = local_68[0xb];
      if (local_68 == (long *)0x0) goto LAB_02856368;
      lVar10 = local_68[0xc];
      if (local_68 == (long *)0x0) goto LAB_02856378;
LAB_02855aa8:
      lVar7 = local_68[0xd];
      (**(code **)(*local_68 + 0x18))(local_68);
    }
    plVar3 = (long *)(param_1 + 0x2f8 + lVar11);
    plVar5 = (long *)plVar3[3];
    *plVar3 = lVar9;
    plVar3[1] = lVar10;
    plVar3[2] = lVar7;
    plVar3[3] = 0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x20))();
    }
    plVar3[3] = (long)plVar6;
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x20))();
    }
    lVar11 = lVar11 + 0x20;
    if (lVar11 == 0x180) {
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
      if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar2 != 0)) {
        FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437a0d0);
      }
      if (*(long *)(param_1 + 0xa8) == *(long *)PTR_DAT_0437a0d8) {
        return;
      }
      pcVar8 = *(char **)(param_1 + 0xb0);
      *(undefined1 *)(param_1 + 0x4f8) = 1;
      if (*pcVar8 == '\0') {
        plVar6 = (long *)FUN_00938550();
        if (plVar6 == (long *)0x0) goto LAB_02855b78;
        (**(code **)(*plVar6 + 0x18))(plVar6);
        if (plVar6 == (long *)0x0) goto LAB_02856098;
LAB_02855b7c:
        local_68 = plVar6 + 0xc;
      }
      else {
        if (((*puVar1 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04379cd0), iVar2 != 0)) {
          FUN_00100250(PTR_LAB_04379d08,PTR_DAT_04379cd8,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379cd0);
        }
        uVar4 = *(undefined8 *)PTR_DAT_04379cd8;
        *(undefined8 *)PTR_DAT_04379ce0 = uVar4;
        FUN_02a47cd8(&local_68,uVar4,pcVar8);
        plVar6 = local_68;
LAB_02855b78:
        if (plVar6 != (long *)0x0) goto LAB_02855b7c;
LAB_02856098:
        local_68 = (long *)PTR_PTR_04379d00;
      }
      local_68 = (long *)*local_68;
      FUN_014effbc(&local_70,"pane_",&local_68);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x20))(plVar6);
      }
      pcVar8 = DAT_043ebce0;
      if (local_70 == (long *)0x0) {
        plVar6 = (long *)PTR_PTR_04379d00;
      }
      else {
        plVar6 = local_70 + 0xc;
      }
      local_80 = *plVar6;
      if (*DAT_043ebce0 == '\0') {
        plVar6 = (long *)FUN_00938550();
        if (plVar6 == (long *)0x0) goto LAB_02855c04;
        (**(code **)(*plVar6 + 0x18))(plVar6);
        if (plVar6 == (long *)0x0) goto LAB_028560c4;
LAB_02855c08:
        plVar3 = plVar6 + 0xc;
      }
      else {
        if (((*puVar1 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04379cd0), iVar2 != 0)) {
          FUN_00100250(PTR_LAB_04379d08,PTR_DAT_04379cd8,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379cd0);
        }
        uVar4 = *(undefined8 *)PTR_DAT_04379cd8;
        *(undefined8 *)PTR_DAT_04379ce0 = uVar4;
        FUN_02a47cd8(&local_68,uVar4,pcVar8);
        plVar6 = local_68;
LAB_02855c04:
        if (plVar6 != (long *)0x0) goto LAB_02855c08;
LAB_028560c4:
        plVar3 = (long *)PTR_PTR_04379d00;
      }
      local_88 = *plVar3;
      FUN_00d58260(&local_78,&local_80,&local_88);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x20))(plVar6);
      }
      plVar6 = local_78;
      if (local_78 == (long *)0x0) {
        lVar11 = *(long *)PTR_DAT_04379c88;
LAB_0285639c:
        lVar9 = *(long *)PTR_PTR_04379d00;
        if (local_78 != (long *)0x0) goto LAB_02855c58;
LAB_028563ac:
        lVar10 = 0;
      }
      else {
        lVar11 = local_78[0xb];
        if (local_78 == (long *)0x0) goto LAB_0285639c;
        lVar9 = local_78[0xc];
        if (local_78 == (long *)0x0) goto LAB_028563ac;
LAB_02855c58:
        lVar10 = local_78[0xd];
        (**(code **)(*local_78 + 0x18))(local_78);
      }
      plVar3 = *(long **)(param_1 + 0x490);
      *(long *)(param_1 + 0x478) = lVar11;
      *(long *)(param_1 + 0x480) = lVar9;
      *(long *)(param_1 + 0x488) = lVar10;
      *(undefined8 *)(param_1 + 0x490) = 0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x20))();
      }
      *(long **)(param_1 + 0x490) = plVar6;
      if (local_78 != (long *)0x0) {
        (**(code **)(*local_78 + 0x20))();
      }
      pcVar8 = DAT_043ebd00;
      if (local_70 == (long *)0x0) {
        plVar6 = (long *)PTR_PTR_04379d00;
      }
      else {
        plVar6 = local_70 + 0xc;
      }
      local_80 = *plVar6;
      if (*DAT_043ebd00 == '\0') {
        plVar6 = (long *)FUN_00938550();
        if (plVar6 == (long *)0x0) goto LAB_02855cfc;
        (**(code **)(*plVar6 + 0x18))(plVar6);
        if (plVar6 == (long *)0x0) goto LAB_028560f0;
LAB_02855d00:
        plVar3 = plVar6 + 0xc;
      }
      else {
        if (((*puVar1 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04379cd0), iVar2 != 0)) {
          FUN_00100250(PTR_LAB_04379d08,PTR_DAT_04379cd8,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379cd0);
        }
        uVar4 = *(undefined8 *)PTR_DAT_04379cd8;
        *(undefined8 *)PTR_DAT_04379ce0 = uVar4;
        FUN_02a47cd8(&local_68,uVar4,pcVar8);
        plVar6 = local_68;
LAB_02855cfc:
        if (plVar6 != (long *)0x0) goto LAB_02855d00;
LAB_028560f0:
        plVar3 = (long *)PTR_PTR_04379d00;
      }
      local_88 = *plVar3;
      FUN_00d58260(&local_78,&local_80,&local_88);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x20))(plVar6);
      }
      plVar6 = local_78;
      if (local_78 == (long *)0x0) {
        lVar11 = *(long *)PTR_DAT_04379c88;
LAB_028563c4:
        lVar9 = *(long *)PTR_PTR_04379d00;
        if (local_78 != (long *)0x0) goto LAB_02855d50;
LAB_028563d4:
        lVar10 = 0;
      }
      else {
        lVar11 = local_78[0xb];
        if (local_78 == (long *)0x0) goto LAB_028563c4;
        lVar9 = local_78[0xc];
        if (local_78 == (long *)0x0) goto LAB_028563d4;
LAB_02855d50:
        lVar10 = local_78[0xd];
        (**(code **)(*local_78 + 0x18))(local_78);
      }
      plVar3 = *(long **)(param_1 + 0x4b0);
      *(long *)(param_1 + 0x498) = lVar11;
      *(long *)(param_1 + 0x4a0) = lVar9;
      *(long *)(param_1 + 0x4a8) = lVar10;
      *(undefined8 *)(param_1 + 0x4b0) = 0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x20))();
      }
      *(long **)(param_1 + 0x4b0) = plVar6;
      if (local_78 != (long *)0x0) {
        (**(code **)(*local_78 + 0x20))();
      }
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
      pcVar8 = *(char **)(param_1 + 0xb0);
      if (*pcVar8 == '\0') {
        plVar6 = (long *)FUN_00938550();
        if (plVar6 == (long *)0x0) goto LAB_02855df0;
        (**(code **)(*plVar6 + 0x18))(plVar6);
        if (plVar6 == (long *)0x0) goto LAB_0285611c;
LAB_02855df4:
        local_68 = plVar6 + 0xc;
      }
      else {
        if (((*puVar1 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04379cd0), iVar2 != 0)) {
          FUN_00100250(PTR_LAB_04379d08,PTR_DAT_04379cd8,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379cd0);
        }
        uVar4 = *(undefined8 *)PTR_DAT_04379cd8;
        *(undefined8 *)PTR_DAT_04379ce0 = uVar4;
        FUN_02a47cd8(&local_68,uVar4,pcVar8);
        plVar6 = local_68;
LAB_02855df0:
        if (plVar6 != (long *)0x0) goto LAB_02855df4;
LAB_0285611c:
        local_68 = (long *)PTR_PTR_04379d00;
      }
      local_68 = (long *)*local_68;
      FUN_014f003c(&local_70,"anime_",&local_68);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x20))(plVar6);
      }
      pcVar8 = DAT_043ebd20;
      if (local_70 == (long *)0x0) {
        plVar6 = (long *)PTR_PTR_04379d00;
      }
      else {
        plVar6 = local_70 + 0xc;
      }
      local_80 = *plVar6;
      if (*DAT_043ebd20 == '\0') {
        plVar6 = (long *)FUN_00938550();
        if (plVar6 == (long *)0x0) goto LAB_02855e7c;
        (**(code **)(*plVar6 + 0x18))(plVar6);
        if (plVar6 == (long *)0x0) goto LAB_02856148;
LAB_02855e80:
        plVar3 = plVar6 + 0xc;
      }
      else {
        if (((*puVar1 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04379cd0), iVar2 != 0)) {
          FUN_00100250(PTR_LAB_04379d08,PTR_DAT_04379cd8,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379cd0);
        }
        uVar4 = *(undefined8 *)PTR_DAT_04379cd8;
        *(undefined8 *)PTR_DAT_04379ce0 = uVar4;
        FUN_02a47cd8(&local_68,uVar4,pcVar8);
        plVar6 = local_68;
LAB_02855e7c:
        if (plVar6 != (long *)0x0) goto LAB_02855e80;
LAB_02856148:
        plVar3 = (long *)PTR_PTR_04379d00;
      }
      local_88 = *plVar3;
      FUN_00d58260(&local_78,&local_80,&local_88);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x20))(plVar6);
      }
      plVar6 = local_78;
      if (local_78 == (long *)0x0) {
        lVar11 = *(long *)PTR_DAT_04379c88;
LAB_028563ec:
        lVar9 = *(long *)PTR_PTR_04379d00;
        if (local_78 != (long *)0x0) goto LAB_02855ed0;
LAB_028563fc:
        lVar10 = 0;
      }
      else {
        lVar11 = local_78[0xb];
        if (local_78 == (long *)0x0) goto LAB_028563ec;
        lVar9 = local_78[0xc];
        if (local_78 == (long *)0x0) goto LAB_028563fc;
LAB_02855ed0:
        lVar10 = local_78[0xd];
        (**(code **)(*local_78 + 0x18))(local_78);
      }
      plVar3 = *(long **)(param_1 + 0x4d0);
      *(long *)(param_1 + 0x4b8) = lVar11;
      *(long *)(param_1 + 0x4c0) = lVar9;
      *(long *)(param_1 + 0x4c8) = lVar10;
      *(undefined8 *)(param_1 + 0x4d0) = 0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x20))();
      }
      *(long **)(param_1 + 0x4d0) = plVar6;
      if (local_78 != (long *)0x0) {
        (**(code **)(*local_78 + 0x20))();
      }
      pcVar8 = DAT_043ebd40;
      if (local_70 == (long *)0x0) {
        plVar6 = (long *)PTR_PTR_04379d00;
      }
      else {
        plVar6 = local_70 + 0xc;
      }
      local_80 = *plVar6;
      if (*DAT_043ebd40 == '\0') {
        plVar6 = (long *)FUN_00938550();
        if (plVar6 == (long *)0x0) goto LAB_02855f74;
        (**(code **)(*plVar6 + 0x18))(plVar6);
        if (plVar6 == (long *)0x0) goto LAB_02856174;
LAB_02855f78:
        plVar3 = plVar6 + 0xc;
      }
      else {
        if (((*puVar1 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04379cd0), iVar2 != 0)) {
          FUN_00100250(PTR_LAB_04379d08,PTR_DAT_04379cd8,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379cd0);
        }
        uVar4 = *(undefined8 *)PTR_DAT_04379cd8;
        *(undefined8 *)PTR_DAT_04379ce0 = uVar4;
        FUN_02a47cd8(&local_68,uVar4,pcVar8);
        plVar6 = local_68;
LAB_02855f74:
        if (plVar6 != (long *)0x0) goto LAB_02855f78;
LAB_02856174:
        plVar3 = (long *)PTR_PTR_04379d00;
      }
      local_88 = *plVar3;
      FUN_00d58260(&local_78,&local_80,&local_88);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x20))(plVar6);
      }
      plVar6 = local_78;
      if (local_78 == (long *)0x0) {
        lVar11 = *(long *)PTR_DAT_04379c88;
      }
      else {
        lVar11 = local_78[0xb];
        if (local_78 != (long *)0x0) {
          lVar9 = local_78[0xc];
          goto joined_r0x02856420;
        }
      }
      lVar9 = *(long *)PTR_PTR_04379d00;
joined_r0x02856420:
      if (local_78 == (long *)0x0) {
        lVar10 = 0;
      }
      else {
        lVar10 = local_78[0xd];
        (**(code **)(*local_78 + 0x18))(local_78);
      }
      plVar3 = *(long **)(param_1 + 0x4f0);
      *(long *)(param_1 + 0x4d8) = lVar11;
      *(long *)(param_1 + 0x4e0) = lVar9;
      *(long *)(param_1 + 0x4e8) = lVar10;
      *(undefined8 *)(param_1 + 0x4f0) = 0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x20))();
      }
      *(long **)(param_1 + 0x4f0) = plVar6;
      if (local_78 != (long *)0x0) {
        (**(code **)(*local_78 + 0x20))();
      }
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
      return;
    }
    if (local_70 == (long *)0x0) goto LAB_02856380;
LAB_02855a08:
    local_78 = local_70 + 0xc;
  } while( true );
}


