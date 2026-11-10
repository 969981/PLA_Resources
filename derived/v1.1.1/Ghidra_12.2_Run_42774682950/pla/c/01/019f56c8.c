/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 019f56c8; name: FUN_019f56c8
 */


void FUN_019f56c8(undefined8 *param_1,long param_2,int *param_3,long *param_4,undefined8 *param_5,
                 undefined8 *param_6)

{
  int *piVar1;
  char *__s;
  uint *puVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  undefined1 *puVar13;
  long lVar14;
  byte *pbVar15;
  undefined1 *puVar16;
  long *plVar17;
  undefined8 *local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined1 *local_140;
  char *pcStack_138;
  size_t local_130;
  long *local_128;
  undefined8 *local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined1 local_d0;
  int local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80 [4];
  
  if (*(ushort *)((long)param_3 - (long)*param_3) < 0x11) {
    lVar14 = 0;
  }
  else {
    uVar12 = (ulong)((ushort *)((long)param_3 - (long)*param_3))[8];
    lVar14 = 0;
    if (uVar12 != 0) {
      puVar2 = (uint *)((long)param_3 + uVar12);
      lVar14 = (long)puVar2 + (ulong)*puVar2;
    }
  }
  bVar3 = *(byte *)(lVar14 + 4);
  puVar16 = &DAT_cbf29ce484222645;
  if (bVar3 != 0) {
    puVar13 = &DAT_cbf29ce484222645;
    pbVar15 = (byte *)(lVar14 + 5);
    do {
      puVar13 = (undefined1 *)(((ulong)puVar13 ^ (ulong)bVar3) * 0x100000001b3);
      bVar3 = *pbVar15;
      pbVar15 = pbVar15 + 1;
    } while (bVar3 != 0);
    if ((long)puVar13 < 0x94ed70272cac328) {
      if (puVar13 == (undefined1 *)0x556483e7a1ceb2) {
        iVar10 = 0;
        goto LAB_019f5794;
      }
      if (puVar13 == (undefined1 *)0xf89b746ec44e683e) {
        iVar10 = 3;
        goto LAB_019f5794;
      }
    }
    else {
      if (puVar13 == (undefined1 *)0x4c64c492c7569fc0) {
        iVar10 = 5;
        goto LAB_019f5794;
      }
      if (puVar13 == (undefined1 *)0x78f3618104baba20) {
        iVar10 = 4;
        goto LAB_019f5794;
      }
      if (puVar13 == (undefined1 *)0x94ed70272cac328) {
        iVar10 = 1;
        goto LAB_019f5794;
      }
    }
  }
  iVar10 = -1;
LAB_019f5794:
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_c8 = iVar10;
  FUN_00b63bec(&local_c0,param_2 + 0x208);
  (**(code **)(*(long *)*param_6 + 0x18))(&local_188);
  local_120 = (undefined8 *)0x0;
  local_118 = 0;
  FUN_00bd84b0(&local_120,&local_188);
  puVar9 = local_188;
  puVar8 = PTR_DAT_043794a8;
  puVar7 = PTR_DAT_043794a0;
  puVar6 = PTR_DAT_04379498;
  if (local_188 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_188 + 1);
    do {
      iVar11 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar11 + -1 == 0) {
      local_188[2] = 0;
      if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar14 = *(long *)puVar7;
      *(long *)puVar8 = lVar14;
      local_80[0] = *puVar9;
      FUN_02a44274(lVar14 + 0xd8,local_80);
    }
  }
  FUN_00bd8d00(&local_90,&local_120);
  puVar9 = local_120;
  if (local_120 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_120 + 1);
    do {
      iVar11 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar11 + -1 == 0) {
      local_120[2] = 0;
      if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar14 = *(long *)puVar7;
      *(long *)puVar8 = lVar14;
      local_188 = (undefined8 *)*puVar9;
      FUN_02a44274(lVar14 + 0xd8,&local_188);
    }
  }
  (**(code **)(*(long *)*param_5 + 0x10))(&local_188);
  local_120 = (undefined8 *)0x0;
  local_118 = 0;
  FUN_018fed88(&local_120,&local_188);
  puVar9 = local_188;
  if (local_188 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_188 + 1);
    do {
      iVar11 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar11 + -1 == 0) {
      local_188[2] = 0;
      if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar14 = *(long *)puVar7;
      *(long *)puVar8 = lVar14;
      local_80[0] = *puVar9;
      FUN_02a44274(lVar14 + 0xd8,local_80);
    }
  }
  FUN_019fa21c(&local_b0,&local_120);
  puVar9 = local_120;
  if (local_120 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_120 + 1);
    do {
      iVar11 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar11 + -1 == 0) {
      local_120[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar14 = *(long *)puVar7;
      *(long *)puVar8 = lVar14;
      local_188 = (undefined8 *)*puVar9;
      FUN_02a44274(lVar14 + 0xd8,&local_188);
    }
  }
  FUN_02be88ac(&local_188,*param_5,0);
  FUN_01900a28(&local_a0,&local_188);
  puVar9 = local_188;
  if (local_188 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_188 + 1);
    do {
      iVar11 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar11 + -1 == 0) {
      local_188[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar14 = *(long *)puVar7;
      *(long *)puVar8 = lVar14;
      local_120 = (undefined8 *)*puVar9;
      FUN_02a44274(lVar14 + 0xd8,&local_120);
    }
  }
  *param_1 = 0;
  puVar7 = PTR_DAT_04379528;
  puVar6 = PTR_DAT_04379520;
  local_120 = (undefined8 *)((ulong)local_120 & 0xffffffff00000000);
  local_118 = 0;
  uStack_110 = 0;
  local_d8 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d0 = 0;
  if (iVar10 == 5) {
    local_150 = 0;
    uStack_148 = 0;
    local_160 = 0;
    uStack_158 = 0;
    local_170 = 0;
    uStack_168 = 0;
    local_180 = 0;
    uStack_178 = 0;
    if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar10 != 0)) {
      FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a0d0);
    }
    local_140 = *(undefined1 **)PTR_DAT_0437a0d8;
    pcStack_138 = *(char **)(PTR_DAT_0437a0d8 + 8);
    local_130 = *(size_t *)(PTR_DAT_0437a0d8 + 0x10);
    local_128 = *(long **)(PTR_DAT_0437a0d8 + 0x18);
    if (local_128 != (long *)0x0) {
      (**(code **)(*local_128 + 0x18))();
    }
    local_188 = (undefined8 *)CONCAT44(local_188._4_4_,local_c8);
    FUN_00b63bec(&local_180,&local_c0);
    FUN_00bd10a0(&local_170,&local_b0);
    FUN_019ec938(&local_160,&local_a0);
    FUN_00d828bc(&local_150,&local_90);
    puVar6 = PTR_DAT_04379520;
    if (*(ushort *)((long)param_3 - (long)*param_3) < 0x13) {
      lVar14 = 0;
    }
    else {
      uVar12 = (ulong)((ushort *)((long)param_3 - (long)*param_3))[9];
      if (uVar12 == 0) {
        lVar14 = 0;
      }
      else {
        puVar2 = (uint *)((long)param_3 + uVar12);
        lVar14 = (long)puVar2 + (ulong)*puVar2;
      }
    }
    __s = (char *)(lVar14 + 4);
    local_130 = strlen(__s);
    plVar17 = local_128;
    bVar3 = *(byte *)(lVar14 + 4);
    if (bVar3 != 0) {
      pbVar15 = (byte *)(lVar14 + 5);
      do {
        puVar16 = (undefined1 *)(((ulong)puVar16 ^ (ulong)bVar3) * 0x100000001b3);
        bVar3 = *pbVar15;
        pbVar15 = pbVar15 + 1;
      } while (bVar3 != 0);
    }
    local_128 = (long *)0x0;
    local_140 = puVar16;
    pcStack_138 = __s;
    if (plVar17 != (long *)0x0) {
      (**(code **)(*plVar17 + 0x20))();
    }
    local_128 = (long *)0x0;
    plVar17 = *(long **)(*param_4 + 8);
    if (((*puVar6 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar10 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar14 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (*(ulong *)(lVar14 + 0x80) < 0x10) {
      *(long **)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = plVar17;
      *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
      lVar14 = (**(code **)(*plVar17 + 0x10))(plVar17,0x2f0,0x10);
      if (lVar14 == 0) {
        (**(code **)(*plVar17 + 0xb8))(plVar17);
      }
                    /* WARNING: Subroutine does not return */
      FUN_02a4c0f4(lVar14,0);
    }
  }
  else {
    local_188 = (undefined8 *)CONCAT44(local_188._4_4_,local_c8);
    local_150 = 0;
    uStack_148 = 0;
    local_160 = 0;
    uStack_158 = 0;
    local_170 = 0;
    uStack_168 = 0;
    local_180 = 0;
    uStack_178 = 0;
    FUN_00b63bec(&local_180,&local_c0);
    FUN_00bd10a0(&local_170,&local_b0);
    FUN_019ec938(&local_160,&local_a0);
    FUN_00d828bc(&local_150,&local_90);
    plVar17 = *(long **)(*param_4 + 8);
    if (((*puVar6 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar10 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar14 = nn::os::GetTlsValue(*(undefined4 *)puVar7);
    if (*(ulong *)(lVar14 + 0x80) < 0x10) {
      *(long **)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = plVar17;
      *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
      lVar14 = (**(code **)(*plVar17 + 0x10))(plVar17,0x2f0,0x10);
      if (lVar14 == 0) {
        (**(code **)(*plVar17 + 0xb8))(plVar17);
      }
                    /* WARNING: Subroutine does not return */
      FUN_02a4c0f4(lVar14,0);
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


