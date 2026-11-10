/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0285180c; name: FUN_0285180c
 */


void FUN_0285180c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  char *pcVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long local_80;
  long local_78;
  long *local_70;
  long *local_68;
  
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_1 + 0x28);
  plVar8 = *(long **)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_1 + 0x30);
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x18))(plVar8);
  }
  plVar5 = *(long **)(param_1 + 0xa0);
  *(long **)(param_1 + 0xa0) = plVar8;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))();
  }
  puVar3 = PTR_DAT_04379cd8;
  puVar2 = PTR_DAT_04379cd0;
  pcVar9 = *(char **)(param_1 + 0x48);
  if (*pcVar9 == '\0') {
    plVar8 = (long *)FUN_00938550();
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x18))(plVar8);
    }
  }
  else {
    if (((*PTR_DAT_04379cd0 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04379cd0), iVar4 != 0)) {
      FUN_00100250(PTR_LAB_04379d08,PTR_DAT_04379cd8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379cd0);
    }
    uVar6 = *(undefined8 *)puVar3;
    *(undefined8 *)PTR_DAT_04379ce0 = uVar6;
    FUN_02a47cd8(&local_68,uVar6,pcVar9);
    plVar8 = local_68;
  }
  if (plVar8 == (long *)0x0) {
    local_68 = (long *)PTR_PTR_04379d00;
  }
  else {
    local_68 = plVar8 + 0xc;
  }
  local_68 = (long *)*local_68;
  FUN_014effbc(&local_70,"pane_",&local_68);
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x20))(plVar8);
  }
  lVar12 = 0;
  if (local_70 != (long *)0x0) goto LAB_02851980;
LAB_02851be8:
  plVar8 = (long *)PTR_PTR_04379d00;
  do {
    local_78 = *plVar8;
    pcVar9 = *(char **)((long)&DAT_043eb600 + lVar12);
    if (*pcVar9 == '\0') {
      plVar8 = (long *)FUN_00938550();
      if (plVar8 == (long *)0x0) goto LAB_028519c4;
      (**(code **)(*plVar8 + 0x18))(plVar8);
      if (plVar8 == (long *)0x0) goto LAB_02851b1c;
LAB_028519c8:
      plVar5 = plVar8 + 0xc;
    }
    else {
      if (((*puVar2 & 1) == 0) && (iVar4 = __cxa_guard_acquire(puVar2), iVar4 != 0)) {
        FUN_00100250(PTR_LAB_04379d08,puVar3,&PTR_LOOP_0411a000);
        __cxa_guard_release(puVar2);
      }
      uVar6 = *(undefined8 *)puVar3;
      *(undefined8 *)PTR_DAT_04379ce0 = uVar6;
      FUN_02a47cd8(&local_68,uVar6,pcVar9);
      plVar8 = local_68;
LAB_028519c4:
      if (plVar8 != (long *)0x0) goto LAB_028519c8;
LAB_02851b1c:
      plVar5 = (long *)PTR_PTR_04379d00;
    }
    local_80 = *plVar5;
    FUN_00d58260(&local_68,&local_78,&local_80);
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x20))(plVar8);
    }
    plVar8 = local_68;
    if (local_68 == (long *)0x0) {
      lVar13 = *(long *)PTR_DAT_04379c88;
LAB_02851bd0:
      lVar10 = *(long *)PTR_PTR_04379d00;
      if (local_68 != (long *)0x0) goto LAB_02851a18;
LAB_02851be0:
      lVar11 = 0;
    }
    else {
      lVar13 = local_68[0xb];
      if (local_68 == (long *)0x0) goto LAB_02851bd0;
      lVar10 = local_68[0xc];
      if (local_68 == (long *)0x0) goto LAB_02851be0;
LAB_02851a18:
      lVar11 = local_68[0xd];
      (**(code **)(*local_68 + 0x18))(local_68);
    }
    lVar1 = param_1 + lVar12;
    plVar5 = *(long **)(lVar1 + 0xc0);
    *(long *)(lVar1 + 0xa8) = lVar13;
    *(long *)(lVar1 + 0xb0) = lVar10;
    *(long *)(lVar1 + 0xb8) = lVar11;
    *(undefined8 *)(lVar1 + 0xc0) = 0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x20))();
    }
    *(long **)(lVar1 + 0xc0) = plVar8;
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x20))();
    }
    lVar12 = lVar12 + 0x20;
    if (lVar12 == 0x2a0) {
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
      pcVar9 = *(char **)(param_1 + 0x48);
      if (*pcVar9 == '\0') {
        plVar8 = (long *)FUN_00938550();
        if (plVar8 == (long *)0x0) goto LAB_02851ab0;
        (**(code **)(*plVar8 + 0x18))(plVar8);
        if (plVar8 == (long *)0x0) goto LAB_02851b48;
LAB_02851ab4:
        local_68 = plVar8 + 0xc;
      }
      else {
        if (((*puVar2 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379cd0), iVar4 != 0)) {
          FUN_00100250(PTR_LAB_04379d08,PTR_DAT_04379cd8,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379cd0);
        }
        uVar6 = *(undefined8 *)puVar3;
        *(undefined8 *)PTR_DAT_04379ce0 = uVar6;
        FUN_02a47cd8(&local_68,uVar6,pcVar9);
        plVar8 = local_68;
LAB_02851ab0:
        if (plVar8 != (long *)0x0) goto LAB_02851ab4;
LAB_02851b48:
        local_68 = (long *)PTR_PTR_04379d00;
      }
      local_68 = (long *)*local_68;
      FUN_014f003c(&local_70,"anime_",&local_68);
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x20))(plVar8);
      }
      lVar12 = 0;
      if (local_70 != (long *)0x0) goto LAB_02851c08;
      break;
    }
    if (local_70 == (long *)0x0) goto LAB_02851be8;
LAB_02851980:
    plVar8 = local_70 + 0xc;
  } while( true );
LAB_02851da8:
  plVar8 = (long *)PTR_PTR_04379d00;
  do {
    local_78 = *plVar8;
    pcVar9 = *(char **)((long)&DAT_043eb8a0 + lVar12);
    if (*pcVar9 == '\0') {
      plVar8 = (long *)FUN_00938550();
      if (plVar8 == (long *)0x0) goto LAB_02851c4c;
      (**(code **)(*plVar8 + 0x18))(plVar8);
      if (plVar8 == (long *)0x0) goto LAB_02851d44;
LAB_02851c50:
      plVar5 = plVar8 + 0xc;
    }
    else {
      if (((*puVar2 & 1) == 0) && (iVar4 = __cxa_guard_acquire(puVar2), iVar4 != 0)) {
        FUN_00100250(PTR_LAB_04379d08,puVar3,&PTR_LOOP_0411a000);
        __cxa_guard_release(puVar2);
      }
      uVar6 = *(undefined8 *)puVar3;
      *(undefined8 *)PTR_DAT_04379ce0 = uVar6;
      FUN_02a47cd8(&local_68,uVar6,pcVar9);
      plVar8 = local_68;
LAB_02851c4c:
      if (plVar8 != (long *)0x0) goto LAB_02851c50;
LAB_02851d44:
      plVar5 = (long *)PTR_PTR_04379d00;
    }
    local_80 = *plVar5;
    FUN_00d58260(&local_68,&local_78,&local_80);
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x20))(plVar8);
    }
    plVar8 = local_68;
    if (local_68 == (long *)0x0) {
      lVar13 = *(long *)PTR_DAT_04379c88;
LAB_02851d90:
      lVar10 = *(long *)PTR_PTR_04379d00;
      if (local_68 != (long *)0x0) goto LAB_02851ca0;
LAB_02851da0:
      lVar11 = 0;
    }
    else {
      lVar13 = local_68[0xb];
      if (local_68 == (long *)0x0) goto LAB_02851d90;
      lVar10 = local_68[0xc];
      if (local_68 == (long *)0x0) goto LAB_02851da0;
LAB_02851ca0:
      lVar11 = local_68[0xd];
      (**(code **)(*local_68 + 0x18))(local_68);
    }
    plVar5 = (long *)(param_1 + 0x348 + lVar12);
    plVar7 = (long *)plVar5[3];
    *plVar5 = lVar13;
    plVar5[1] = lVar10;
    plVar5[2] = lVar11;
    plVar5[3] = 0;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x20))();
    }
    plVar5[3] = (long)plVar8;
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x20))();
    }
    lVar12 = lVar12 + 0x20;
    if (lVar12 == 0x140) {
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
      return;
    }
    if (local_70 == (long *)0x0) goto LAB_02851da8;
LAB_02851c08:
    plVar8 = local_70 + 0xc;
  } while( true );
}


