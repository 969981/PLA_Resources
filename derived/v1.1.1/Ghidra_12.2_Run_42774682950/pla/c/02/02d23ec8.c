/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02d23ec8; name: FUN_02d23ec8
 */


void FUN_02d23ec8(long param_1,undefined8 *param_2)

{
  ulong *puVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  ulong *puVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  int iVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  size_t __n;
  long *plVar17;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined4 local_258 [2];
  undefined8 local_250;
  undefined8 local_248;
  char *pcStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  long local_220 [2];
  uint local_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 local_200;
  undefined4 uStack_1fc;
  long *local_1f8;
  ulong local_e0 [4];
  undefined2 local_c0;
  undefined2 local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 *local_a8;
  char *pcStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88 [2];
  undefined8 local_78 [3];
  
  local_248 = 0xe185f6f6b840a887;
  pcStack_240 = "InitializeLdn";
  local_238 = 0xd;
  uStack_230 = 0;
  local_258[0] = 2;
  local_250 = 0x8000;
  FUN_02d2576c(&local_228,&local_248,local_258);
  local_210 = 0;
  uStack_20c = 0;
  uStack_208 = 0;
  uStack_204 = 0;
  FUN_008802f0(&local_210,*(long *)(param_1 + 0x70) + 0x58);
  local_268 = 0;
  uStack_260 = 0;
  FUN_02cd5d0c(&local_268,&local_210);
  puVar5 = (ulong *)CONCAT44(uStack_20c,local_210);
  if (puVar5 != (ulong *)0x0) {
    puVar1 = puVar5 + 1;
    do {
      iVar12 = (int)*puVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *(int *)puVar1 = iVar12;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar12 == 0) {
      puVar5[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar15 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar15;
      local_e0[0] = *puVar5;
      FUN_02a44274(lVar15 + 0xd8,local_e0);
    }
  }
  local_210 = 0x6b611a6e;
  uStack_20c = 0x5f3a9f8;
  uStack_208 = 0x38cea8c;
  uStack_204 = 0;
  local_200 = 0xe;
  uStack_1fc = 0;
  local_1f8 = (long *)0x0;
  local_e0[0] = CONCAT44(local_e0[0]._4_4_,1);
  local_e0[1] = 0x2000;
  local_a8 = (undefined8 *)0x0;
  pcStack_a0 = (char *)0x0;
  FUN_02cd6d54(&local_a8,&local_268);
  FUN_02d6e8c0(local_220,local_228,&local_210,local_e0,&local_a8,param_1 + 0x218);
  puVar11 = local_a8;
  if (local_a8 != (undefined8 *)0x0) {
    piVar2 = (int *)(local_a8 + 1);
    do {
      iVar12 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar12 + -1 == 0) {
      local_a8[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar15 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar15;
      local_88[0] = *puVar11;
      FUN_02a44274(lVar15 + 0xd8,local_88);
    }
  }
  if (local_1f8 != (long *)0x0) {
    (**(code **)(*local_1f8 + 0x20))();
  }
  local_210 = 0;
  uStack_20c = 0;
  uStack_208 = 0;
  uStack_204 = 0;
  FUN_008802f0(&local_210,*(long *)(param_1 + 0x70) + 0x58);
  local_278 = 0;
  uStack_270 = 0;
  FUN_02cd5d0c(&local_278,&local_210);
  puVar5 = (ulong *)CONCAT44(uStack_20c,local_210);
  if (puVar5 != (ulong *)0x0) {
    puVar1 = puVar5 + 1;
    do {
      iVar12 = (int)*puVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *(int *)puVar1 = iVar12;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar12 == 0) {
      puVar5[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar15 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar15;
      local_e0[0] = *puVar5;
      FUN_02a44274(lVar15 + 0xd8,local_e0);
    }
  }
  local_210 = (uint)*param_2;
  uStack_20c = (undefined4)((ulong)*param_2 >> 0x20);
  uStack_208 = (undefined4)param_2[1];
  uStack_204 = (undefined4)((ulong)param_2[1] >> 0x20);
  local_200 = (undefined4)param_2[2];
  uStack_1fc = (undefined4)((ulong)param_2[2] >> 0x20);
  local_1f8 = (long *)0x0;
  FUN_02da2ca0(local_e0,&local_210);
  if (local_1f8 != (long *)0x0) {
    (**(code **)(*local_1f8 + 0x20))();
  }
  puVar9 = PTR_DAT_04379528;
  puVar8 = PTR_DAT_04379520;
  if ((char)local_e0[0] != '\0') {
    plVar17 = *(long **)(param_1 + 8);
    plVar13 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0x218,8);
    if (plVar13 != (long *)0x0) {
      if (((*puVar8 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_04379520), puVar10 = PTR_DAT_04379528, iVar12 != 0))
      {
        FUN_008a62a4(PTR_DAT_04379528);
        FUN_00100250(PTR_LAB_04379530,puVar10,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379520);
      }
      lVar15 = nn::os::GetTlsValue(*(undefined4 *)puVar9);
      if (0xf < *(ulong *)(lVar15 + 0x80)) goto LAB_02d25768;
      *(long **)(lVar15 + *(ulong *)(lVar15 + 0x80) * 8) = plVar17;
      *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + 1;
      *plVar13 = (long)&PTR_LAB_04298ab0;
      plVar13[1] = 0;
      FUN_008093a4(plVar13 + 2);
      plVar13[1] = (long)(plVar13 + 2);
      *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + -1;
    }
    plVar13[9] = *(long *)(param_1 + 0x9f8);
    (**(code **)(*plVar13 + 0x18))(plVar13,local_c0);
    lVar15 = DAT_03a85331;
    plVar13[0xc] = DAT_03a85329;
    plVar13[0xd] = lVar15;
    lVar15 = DAT_03a85321;
    plVar13[10] = DAT_03a85319;
    plVar13[0xb] = lVar15;
    uVar7 = s_ZlLy8MYL_03a85351._0_8_;
    plVar13[0x10] = DAT_03a85349;
    plVar13[0x11] = uVar7;
    lVar15 = DAT_03a85341;
    plVar13[0xe] = DAT_03a85339;
    plVar13[0xf] = lVar15;
    *(undefined1 *)(plVar13 + 0x12) = 0x40;
    local_210 = 0;
    local_a8 = (undefined8 *)((ulong)local_a8 & 0xffffffff00000000);
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)&local_210 | 4),(Result *)&local_a8);
    FUN_007ee578(&local_a8,&local_210);
    (**(code **)(*plVar13 + 0x10))(&local_210,plVar13,local_bc);
    uVar6 = local_210 >> 8;
    local_210 = local_210 & 0xffffff00;
    if (*(char *)(param_2 + 3) != '\0') {
      uStack_1fc = *(undefined4 *)((long)param_2 + 0x2c);
      uStack_20c = (undefined4)*(undefined8 *)((long)param_2 + 0x1c);
      uStack_208 = (undefined4)((ulong)*(undefined8 *)((long)param_2 + 0x1c) >> 0x20);
      uStack_204 = (undefined4)*(undefined8 *)((long)param_2 + 0x24);
      local_200 = (undefined4)((ulong)*(undefined8 *)((long)param_2 + 0x24) >> 0x20);
      local_210 = CONCAT31((int3)uVar6,1);
      (**(code **)(*plVar13 + 0x80))(&local_a8,plVar13,(ulong)&local_210 | 4);
      if ((char)local_210 != '\0') {
        local_210 = local_210 & 0xffffff00;
      }
    }
    if (((*PTR_DAT_04388528 & 1) == 0) &&
       (iVar12 = __cxa_guard_acquire(PTR_DAT_04388528), iVar12 != 0)) {
      FUN_00100250(FUN_02d98f20,PTR_DAT_04388530,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04388528);
    }
    lVar15 = *(long *)PTR_DAT_04388530;
    *(long *)PTR_DAT_04388538 = lVar15;
    if ((lVar15 != 0) && (*(int *)(lVar15 + 0xb8) - 2U < 4)) {
      if ((*(char *)(lVar15 + 0xbc) != '\0') &&
         ((*(uint *)(lVar15 + 0xc0) < 2 && (*(long **)(lVar15 + 0xa8) != (long *)0x0)))) {
        (**(code **)(**(long **)(lVar15 + 0xa8) + 0x40))();
      }
      lVar16 = *(long *)(lVar15 + 0x1f8);
      if ((lVar16 != 0) && (*(char *)(lVar15 + 0x1f0) != '\0')) {
        if ((*(char *)(lVar15 + 0xbc) == '\0') || (1 < *(uint *)(lVar15 + 0xc0))) {
LAB_02d243b8:
          memset((void *)(lVar16 + 0x100),0,0x118);
        }
        else {
          uVar14 = FUN_02d9d74c(lVar15 + 200);
          lVar16 = *(long *)(lVar15 + 0x1f8);
          if ((uVar14 & 1) == 0) goto LAB_02d243b8;
          *(undefined8 *)(lVar16 + 0x210) = 0x110;
          memcpy((void *)(lVar16 + 0x100),(void *)(lVar15 + 0xd0),0x110);
        }
        *(undefined1 *)(lVar15 + 0x1f0) = 0;
      }
    }
    memset(&local_210,0,0x124);
    uVar6 = local_98._4_4_;
    local_98 = (ulong)local_98._4_4_ << 0x20;
    local_a8 = (undefined8 *)0x0;
    pcStack_a0 = (char *)0x0;
    if (*(char *)(param_2 + 3) != '\0') {
      local_a8 = *(undefined8 **)((long)param_2 + 0x1c);
      pcStack_a0 = *(char **)((long)param_2 + 0x24);
      local_98 = CONCAT44(uVar6,*(undefined4 *)((long)param_2 + 0x2c));
    }
    local_210 = (uint)local_a8;
    uStack_20c = (undefined4)((ulong)local_a8 >> 0x20);
    uStack_208 = SUB84(pcStack_a0,0);
    uStack_204 = (undefined4)((ulong)pcStack_a0 >> 0x20);
    local_200 = (undefined4)local_98;
    __n = *(size_t *)(param_1 + 0x210);
    if (__n != 0) {
      memcpy(&uStack_1fc,(void *)(param_1 + 0x100),__n);
    }
    (**(code **)(*plVar13 + 0x28))(local_88,plVar13,&local_210,(int)__n + 0x14);
    if ((char)local_e0[0] != '\0') {
      local_e0[0] = local_e0[0] & 0xffffffffffffff00;
    }
  }
  local_a8 = (undefined8 *)0xf6b73a7830ce53af;
  pcStack_a0 = "CreateSession";
  local_98 = 0xd;
  uStack_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  FUN_02cd6d54(&local_b8,&local_278);
  FUN_013b1c3c(&local_210,local_220[0]);
  if (CONCAT44(uStack_20c,local_210) == 0) {
    local_78[0] = 0;
  }
  else {
    FUN_013b20c8(local_78);
    puVar5 = (ulong *)CONCAT44(uStack_20c,local_210);
    if (puVar5 != (ulong *)0x0) {
      puVar1 = puVar5 + 1;
      do {
        iVar12 = (int)*puVar1 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *(int *)puVar1 = iVar12;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar12 == 0) {
        puVar5[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar15 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar15;
        local_e0[0] = *puVar5;
        FUN_02a44274(lVar15 + 0xd8,local_e0);
      }
    }
  }
  plVar13 = *(long **)(local_220[0] + 8);
  if (((*puVar8 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_04379520), puVar8 = PTR_DAT_04379528, iVar12 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar15 = nn::os::GetTlsValue(*(undefined4 *)puVar9);
  if (*(ulong *)(lVar15 + 0x80) < 0x10) {
    *(long **)(lVar15 + *(ulong *)(lVar15 + 0x80) * 8) = plVar13;
    *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + 1;
    lVar15 = (**(code **)(*plVar13 + 0x10))(plVar13,0xb0,8);
    if (lVar15 == 0) {
      (**(code **)(*plVar13 + 0xb8))(plVar13);
    }
    local_210 = 0;
    uStack_20c = 0;
    uStack_208 = 0;
    uStack_204 = 0;
    FUN_02cd6d54(&local_210,&local_b8);
                    /* WARNING: Subroutine does not return */
    FUN_008a93d8(lVar15);
  }
LAB_02d25768:
                    /* WARNING: Subroutine does not return */
  abort();
}


