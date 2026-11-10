/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d53960; name: FUN_00d53960
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00d53960(long param_1,uint param_2,int param_3,uint param_4)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  char *pcVar16;
  char *pcVar17;
  long *local_e8;
  long lStack_e0;
  long local_d8;
  long *local_d0;
  char local_c8 [96];
  long *local_68;
  
  if (((DAT_043abea8 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043abea8), iVar7 != 0)) {
    DAT_043abe48 = 0xe4d07a996e5ef5e8;
    DAT_043abe50 = &DAT_0395ca85;
    DAT_043abe58 = 4;
    DAT_043abe60 = 0;
    DAT_043abe68 = 0x68d97d277752b795;
    DAT_043abe70 = &DAT_038f902a;
    DAT_043abe78 = 3;
    DAT_043abe80 = 0;
    DAT_043abe88 = 0x94883a2c5d26f0c;
    DAT_043abe90 = "catch";
    DAT_043abe98 = 5;
    DAT_043abea0 = 0;
    FUN_00100250(&LAB_00d49040,0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043abea8);
  }
  if (((DAT_043abef0 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043abef0), iVar7 != 0)) {
    DAT_043abeb0 = 0x253ba2fcef3b4b2;
    DAT_043abeb8 = "color_normal";
    DAT_043abec0 = 0xc;
    DAT_043abec8 = 0;
    DAT_043abed0 = 0xc0e5c268e3b984ba;
    DAT_043abed8 = &DAT_038fd08a;
    DAT_043abee0 = 4;
    DAT_043abee8 = 0;
    FUN_00100250(0xd490a0,0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043abef0);
  }
  if (2 < param_2) {
    return;
  }
  if (1 < param_4) {
    return;
  }
  if (param_2 != 2) {
    lVar8 = FUN_00d2ee28(param_1 + 0x180,&DAT_043ab7d8 + (long)(int)param_2 * 0x28);
    lVar15 = **(long **)(lVar8 + 0x838);
    lVar8 = (*(long **)(lVar8 + 0x838))[1];
    if ((lVar15 != lVar8) &&
       (*(char *)(lVar15 + 0x20) != '\0' || *(int *)(lVar15 + 0x24) != param_3)) {
      lVar5 = lVar15 + 0x30;
      do {
        lVar14 = lVar5;
        lVar15 = lVar8;
        if (lVar8 == lVar14) break;
        lVar5 = lVar14 + 0x30;
      } while ((*(char *)(lVar14 + 0x20) != '\0') ||
              (lVar15 = lVar14, *(int *)(lVar14 + 0x24) != param_3));
    }
    param_3 = -1;
    if ((lVar15 != 0) && (param_3 = -1, lVar8 != lVar15)) {
      param_3 = *(int *)(lVar15 + 0x28);
    }
  }
  puVar4 = PTR_DAT_04379ce0;
  puVar3 = PTR_DAT_04379cd8;
  puVar2 = PTR_DAT_04379cd0;
  pcVar16 = (&DAT_043abe50)[(long)(int)param_2 * 4];
  cVar1 = *pcVar16;
  lVar15 = 0;
  do {
    if (cVar1 == '\0') {
      plVar12 = (long *)FUN_00938550();
      if (plVar12 == (long *)0x0) goto LAB_00d53ac4;
      (**(code **)(*plVar12 + 0x18))(plVar12);
      if (plVar12 != (long *)0x0) goto LAB_00d53ac8;
LAB_00d53da0:
      plVar11 = (long *)PTR_PTR_04379d00;
    }
    else {
      if (((*puVar2 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar2), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379d08,puVar3,&PTR_LOOP_0411a000);
        __cxa_guard_release(puVar2);
      }
      uVar9 = *(undefined8 *)puVar3;
      *(undefined8 *)puVar4 = uVar9;
      FUN_02a47cd8(&local_e8,uVar9,pcVar16);
      plVar12 = local_e8;
LAB_00d53ac4:
      if (plVar12 == (long *)0x0) goto LAB_00d53da0;
LAB_00d53ac8:
      plVar11 = plVar12 + 0xc;
    }
    pcVar16 = (char *)*plVar11;
    pcVar17 = *(char **)((long)&DAT_043abeb8 + lVar15);
    if (*pcVar17 == '\0') {
      plVar11 = (long *)FUN_00938550();
      if (plVar11 == (long *)0x0) goto LAB_00d53b00;
      (**(code **)(*plVar11 + 0x18))(plVar11);
      if (plVar11 != (long *)0x0) goto LAB_00d53b04;
LAB_00d53dcc:
      plVar13 = (long *)PTR_PTR_04379d00;
    }
    else {
      if (((*puVar2 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar2), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379d08,puVar3,&PTR_LOOP_0411a000);
        __cxa_guard_release(puVar2);
      }
      uVar9 = *(undefined8 *)puVar3;
      *(undefined8 *)puVar4 = uVar9;
      FUN_02a47cd8(&local_e8,uVar9,pcVar17);
      plVar11 = local_e8;
LAB_00d53b00:
      if (plVar11 == (long *)0x0) goto LAB_00d53dcc;
LAB_00d53b04:
      plVar13 = plVar11 + 0xc;
    }
    uVar6 = snprintf(local_c8,0x60,"anime_L_inventory_parts_00_L_btn_%s_%02d_%s",pcVar16,param_3,
                     (char *)*plVar13);
    uVar10 = (ulong)uVar6;
    if (plVar11 != (long *)0x0) {
      uVar10 = (**(code **)(*plVar11 + 0x20))(plVar11);
    }
    if (plVar12 != (long *)0x0) {
      uVar10 = (**(code **)(*plVar12 + 0x20))(plVar12);
    }
    if (local_c8[0] == '\0') {
      plVar12 = (long *)FUN_00938550(uVar10);
      if (plVar12 == (long *)0x0) goto LAB_00d53b78;
      (**(code **)(*plVar12 + 0x18))(plVar12);
      if (plVar12 != (long *)0x0) goto LAB_00d53b7c;
LAB_00d53e7c:
      local_e8 = *(long **)PTR_DAT_04379c88;
      if (plVar12 != (long *)0x0) goto LAB_00d53b88;
LAB_00d53e8c:
      lStack_e0 = *(long *)PTR_PTR_04379d00;
      if (plVar12 != (long *)0x0) goto LAB_00d53b94;
LAB_00d53e9c:
      local_d8 = 0;
      local_d0 = (long *)0x0;
    }
    else {
      if (((*puVar2 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar2), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379d08,puVar3,&PTR_LOOP_0411a000);
        __cxa_guard_release(puVar2);
      }
      uVar9 = *(undefined8 *)puVar3;
      *(undefined8 *)puVar4 = uVar9;
      FUN_02a47cd8(&local_68,uVar9,local_c8);
      plVar12 = local_68;
LAB_00d53b78:
      if (plVar12 == (long *)0x0) goto LAB_00d53e7c;
LAB_00d53b7c:
      local_e8 = (long *)plVar12[0xb];
      if (plVar12 == (long *)0x0) goto LAB_00d53e8c;
LAB_00d53b88:
      lStack_e0 = plVar12[0xc];
      if (plVar12 == (long *)0x0) goto LAB_00d53e9c;
LAB_00d53b94:
      local_d8 = plVar12[0xd];
      local_d0 = (long *)0x0;
      (**(code **)(*plVar12 + 0x18))(plVar12);
      local_d0 = plVar12;
    }
    plVar11 = local_d0;
    if (*(long *)(param_1 + 0x2c8) != 0) {
      FUN_0283b430(*(long *)(param_1 + 0x2c8),&local_e8);
    }
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x20))(plVar11);
    }
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
    pcVar16 = (&DAT_043abe50)[(long)(int)param_2 * 4];
    lVar15 = lVar15 + 0x20;
    cVar1 = *pcVar16;
    if (lVar15 == 0x40) {
      if (cVar1 == '\0') {
        plVar12 = (long *)FUN_00938550();
        if (plVar12 != (long *)0x0) {
          (**(code **)(*plVar12 + 0x18))(plVar12);
        }
      }
      else {
        if (((*puVar2 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379cd0), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_04379d08,PTR_DAT_04379cd8,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379cd0);
        }
        uVar9 = *(undefined8 *)puVar3;
        *(undefined8 *)puVar4 = uVar9;
        FUN_02a47cd8(&local_e8,uVar9,pcVar16);
        plVar12 = local_e8;
      }
      if (plVar12 == (long *)0x0) {
        plVar11 = (long *)PTR_PTR_04379d00;
      }
      else {
        plVar11 = (long *)((long)plVar12 + 0x60);
      }
      pcVar16 = (char *)*plVar11;
      pcVar17 = (&DAT_043abeb8)[(long)(int)param_4 * 4];
      if (*pcVar17 == '\0') {
        plVar11 = (long *)FUN_00938550();
        if (plVar11 != (long *)0x0) {
          (**(code **)(*plVar11 + 0x18))(plVar11);
        }
      }
      else {
        if (((*puVar2 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379cd0), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_04379d08,PTR_DAT_04379cd8,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379cd0);
        }
        uVar9 = *(undefined8 *)puVar3;
        *(undefined8 *)puVar4 = uVar9;
        FUN_02a47cd8(&local_e8,uVar9,pcVar17);
        plVar11 = local_e8;
      }
      if (plVar11 == (long *)0x0) {
        plVar13 = (long *)PTR_PTR_04379d00;
      }
      else {
        plVar13 = (long *)((long)plVar11 + 0x60);
      }
      uVar6 = snprintf(local_c8,0x60,"anime_L_inventory_parts_00_L_btn_%s_%02d_%s",pcVar16,param_3,
                       (char *)*plVar13);
      uVar10 = (ulong)uVar6;
      if (plVar11 != (long *)0x0) {
        uVar10 = (**(code **)(*plVar11 + 0x20))(plVar11);
      }
      if (plVar12 != (long *)0x0) {
        uVar10 = (**(code **)(*plVar12 + 0x20))(plVar12);
      }
      if (local_c8[0] == '\0') {
        plVar12 = (long *)FUN_00938550(uVar10);
        if (plVar12 != (long *)0x0) {
          (**(code **)(*plVar12 + 0x18))(plVar12);
        }
      }
      else {
        if (((*puVar2 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379cd0), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_04379d08,PTR_DAT_04379cd8,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379cd0);
        }
        uVar9 = *(undefined8 *)puVar3;
        *(undefined8 *)puVar4 = uVar9;
        FUN_02a47cd8(&local_e8,uVar9,local_c8);
        plVar12 = local_e8;
      }
      if (plVar12 == (long *)0x0) {
        local_e8 = *(long **)PTR_DAT_04379c88;
        lStack_e0 = *(long *)PTR_PTR_04379d00;
        local_d8 = 0;
      }
      else {
        local_e8 = *(long **)((long)plVar12 + 0x58);
        lStack_e0 = *(long *)((long)plVar12 + 0x60);
        local_d8 = *(long *)((long)plVar12 + 0x68);
      }
      local_d0 = (long *)0x0;
      if (plVar12 == (long *)0x0) {
        plVar11 = (long *)0x0;
      }
      else {
        (**(code **)(*plVar12 + 0x18))(plVar12);
        plVar11 = plVar12;
      }
      local_d0 = plVar11;
      if (*(long *)(param_1 + 0x2c8) != 0) {
        FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&local_e8);
      }
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x20))(plVar11);
      }
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x20))(plVar12);
      }
      return;
    }
  } while( true );
}


