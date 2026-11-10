/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00936564; name: FUN_00936564
 */


void FUN_00936564(long param_1,long param_2)

{
  long *plVar1;
  int *piVar2;
  uint *puVar3;
  ushort uVar4;
  char cVar5;
  undefined1 auVar6 [16];
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  bool bVar10;
  int iVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  undefined8 uVar16;
  ushort *puVar17;
  ulong uVar18;
  int *piVar19;
  char *pcVar20;
  void *pvVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  undefined1 auVar28 [16];
  uint uVar29;
  long *local_88;
  long *local_80;
  ulong local_78;
  void *local_70;
  undefined8 local_68;
  
  lVar14 = *(long *)(param_1 + 0x70);
  if (lVar14 == 0) {
    return;
  }
  if (*(char *)(lVar14 + 0x1e1) == '\0') {
    return;
  }
  piVar2 = (int *)((long)*(uint **)(lVar14 + 0x250) + (ulong)**(uint **)(lVar14 + 0x250));
  if (*(ushort *)((long)piVar2 - (long)*piVar2) < 7) {
    uVar16 = 0;
  }
  else {
    uVar15 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[3];
    uVar16 = 0;
    if (uVar15 != 0) {
      uVar16 = *(undefined8 *)((long)piVar2 + uVar15);
    }
  }
  *(undefined8 *)(param_2 + 0x418) = uVar16;
  if (*(ushort *)((long)piVar2 - (long)*piVar2) < 9) {
    uVar16 = 0;
  }
  else {
    uVar15 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[4];
    uVar16 = 0;
    if (uVar15 != 0) {
      uVar16 = *(undefined8 *)((long)piVar2 + uVar15);
    }
  }
  *(undefined8 *)(param_2 + 0x420) = uVar16;
  if (*(ushort *)((long)piVar2 - (long)*piVar2) < 0x15) {
    uVar16 = 0;
  }
  else {
    uVar15 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[10];
    uVar16 = 0;
    if (uVar15 != 0) {
      uVar16 = *(undefined8 *)((long)piVar2 + uVar15);
    }
  }
  *(undefined8 *)(param_2 + 0x428) = uVar16;
  if (*(ushort *)((long)piVar2 - (long)*piVar2) < 0x13) {
    uVar16 = 0;
  }
  else {
    uVar15 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[9];
    uVar16 = 0;
    if (uVar15 != 0) {
      uVar16 = *(undefined8 *)((long)piVar2 + uVar15);
    }
  }
  *(undefined8 *)(param_2 + 0x430) = uVar16;
  if (*(ushort *)((long)piVar2 - (long)*piVar2) < 0x1b) {
    uVar23 = 0;
  }
  else {
    uVar15 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0xd];
    uVar23 = 0;
    if (uVar15 != 0) {
      uVar23 = *(undefined4 *)((long)piVar2 + uVar15);
    }
  }
  *(undefined4 *)(param_2 + 0x458) = uVar23;
  if (*(ushort *)((long)piVar2 - (long)*piVar2) < 0x1d) {
    uVar23 = 0;
  }
  else {
    uVar15 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0xe];
    uVar23 = 0;
    if (uVar15 != 0) {
      uVar23 = *(undefined4 *)((long)piVar2 + uVar15);
    }
  }
  *(undefined4 *)(param_2 + 0x45c) = uVar23;
  if (*(ushort *)((long)piVar2 - (long)*piVar2) < 0x1f) {
    uVar23 = 0;
  }
  else {
    uVar15 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0xf];
    uVar23 = 0;
    if (uVar15 != 0) {
      uVar23 = *(undefined4 *)((long)piVar2 + uVar15);
    }
  }
  *(undefined4 *)(param_2 + 0x460) = uVar23;
  if (*(ushort *)((long)piVar2 - (long)*piVar2) < 0x21) {
    uVar23 = 0;
  }
  else {
    uVar15 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x10];
    uVar23 = 0;
    if (uVar15 != 0) {
      uVar23 = *(undefined4 *)((long)piVar2 + uVar15);
    }
  }
  *(undefined4 *)(param_2 + 0x464) = uVar23;
  if (*(ushort *)((long)piVar2 - (long)*piVar2) < 0x23) {
    uVar23 = 0;
  }
  else {
    uVar15 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x11];
    uVar23 = 0;
    if (uVar15 != 0) {
      uVar23 = *(undefined4 *)((long)piVar2 + uVar15);
    }
  }
  *(undefined4 *)(param_2 + 0x468) = uVar23;
  if (*(ushort *)((long)piVar2 - (long)*piVar2) < 0x25) {
    bVar10 = false;
  }
  else {
    uVar15 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x12];
    bVar10 = false;
    if (uVar15 != 0) {
      bVar10 = *(char *)((long)piVar2 + uVar15) != '\0';
    }
  }
  *(bool *)(param_2 + 0x46c) = bVar10;
  if (*(ushort *)((long)piVar2 - (long)*piVar2) < 0x27) {
    bVar10 = false;
  }
  else {
    uVar15 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x13];
    bVar10 = false;
    if (uVar15 != 0) {
      bVar10 = *(char *)((long)piVar2 + uVar15) != '\0';
    }
  }
  *(bool *)(param_2 + 0x46d) = bVar10;
  if (*(ushort *)((long)piVar2 - (long)*piVar2) < 0x29) {
    bVar10 = false;
  }
  else {
    uVar15 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x14];
    bVar10 = false;
    if (uVar15 != 0) {
      bVar10 = *(char *)((long)piVar2 + uVar15) != '\0';
    }
  }
  *(bool *)(param_2 + 0x46e) = bVar10;
  if (*(ushort *)((long)piVar2 - (long)*piVar2) < 0x2b) {
    bVar10 = false;
  }
  else {
    uVar15 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x15];
    bVar10 = false;
    if (uVar15 != 0) {
      bVar10 = *(char *)((long)piVar2 + uVar15) != '\0';
    }
  }
  *(bool *)(param_2 + 0x46f) = bVar10;
  if (*(ushort *)((long)piVar2 - (long)*piVar2) < 0x2d) {
    bVar10 = false;
  }
  else {
    uVar15 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x16];
    bVar10 = false;
    if (uVar15 != 0) {
      bVar10 = *(char *)((long)piVar2 + uVar15) != '\0';
    }
  }
  *(bool *)(param_2 + 0x470) = bVar10;
  if (*(ushort *)((long)piVar2 - (long)*piVar2) < 0x2f) {
    bVar10 = false;
  }
  else {
    uVar15 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x17];
    bVar10 = false;
    if (uVar15 != 0) {
      bVar10 = *(char *)((long)piVar2 + uVar15) != '\0';
    }
  }
  *(bool *)(param_2 + 0x471) = bVar10;
  if (*(ushort *)((long)piVar2 - (long)*piVar2) < 0x19) {
    iVar11 = 0;
  }
  else {
    uVar15 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0xc];
    iVar11 = 0;
    if (uVar15 != 0) {
      iVar11 = *(int *)((long)piVar2 + uVar15);
    }
  }
  *(bool *)(param_2 + 0x472) = iVar11 != 0;
  puVar9 = PTR_DAT_04379ce0;
  puVar8 = PTR_DAT_04379cd8;
  puVar7 = PTR_DAT_04379cd0;
  if ((((**(char **)(param_2 + 0x440) == '\0') && (0x10 < *(ushort *)((long)piVar2 - (long)*piVar2))
       ) && (uVar15 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[8], uVar15 != 0)) &&
     (puVar3 = (uint *)((long)piVar2 + uVar15), puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3),
     puVar3 != (uint *)0x0)) {
    uVar29 = *puVar3;
    uVar15 = (ulong)uVar29;
    local_80 = (long *)0x0;
    local_78 = 0;
    local_70 = (void *)0x0;
    if (uVar29 < 0x17) {
      local_80 = (long *)(ulong)(byte)(uVar29 << 1);
      pvVar21 = (void *)((ulong)&local_80 | 1);
      if (uVar29 != 0) goto LAB_00936898;
    }
    else {
      uVar18 = uVar15 + 0x10 & 0x1fffffff0;
      pvVar21 = operator_new(uVar18);
      local_80 = (long *)(uVar18 | 1);
      local_78 = uVar15;
      local_70 = pvVar21;
LAB_00936898:
      memcpy(pvVar21,puVar3 + 1,uVar15);
    }
    *(undefined1 *)((long)pvVar21 + uVar15) = 0;
    uVar15 = (ulong)local_80 >> 1 & 0x7f;
    if (((ulong)local_80 & 1) != 0) {
      uVar15 = local_78;
    }
    if (((ulong)local_80 & 1) != 0) {
      operator_delete(local_70);
    }
    if (uVar15 != 0) {
      if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 0x11) ||
         (uVar15 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[8], uVar15 == 0)) {
        lVar14 = 0;
      }
      else {
        puVar3 = (uint *)((long)piVar2 + uVar15);
        lVar14 = (long)puVar3 + (ulong)*puVar3;
      }
      local_88 = (long *)0x0;
      if (*(char *)(lVar14 + 4) == '\0') {
        plVar12 = (long *)FUN_00938550();
        if (plVar12 != (long *)0x0) {
          (**(code **)(*plVar12 + 0x18))(plVar12);
        }
        local_88 = plVar12;
      }
      else {
        if (((*puVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_04379cd0), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_04379d08,PTR_DAT_04379cd8,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379cd0);
        }
        uVar16 = *(undefined8 *)puVar8;
        *(undefined8 *)puVar9 = uVar16;
        FUN_02a47cd8(&local_80,uVar16,(char *)(lVar14 + 4));
        plVar12 = local_88;
        local_88 = (long *)0x0;
        if (plVar12 != (long *)0x0) {
          (**(code **)(*plVar12 + 0x20))();
        }
        local_88 = local_80;
      }
      FUN_02a47560(&local_80,&local_88);
      *(long **)(param_2 + 0x438) = local_80;
      *(ulong *)(param_2 + 0x440) = local_78;
      plVar12 = *(long **)(param_2 + 0x450);
      *(undefined8 *)(param_2 + 0x450) = 0;
      *(void **)(param_2 + 0x448) = local_70;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x20))();
      }
      uVar16 = local_68;
      local_68 = 0;
      *(undefined8 *)(param_2 + 0x450) = uVar16;
      if (local_88 != (long *)0x0) {
        (**(code **)(*local_88 + 0x20))();
      }
    }
  }
  fVar25 = (float)*(undefined8 *)(param_2 + 0x318);
  fVar26 = (float)((ulong)*(undefined8 *)(param_2 + 0x318) >> 0x20);
  fVar22 = (float)*(undefined8 *)(param_2 + 0x310);
  fVar24 = (float)((ulong)*(undefined8 *)(param_2 + 0x310) >> 0x20);
  fVar22 = fVar22 * fVar22;
  fVar24 = fVar24 * fVar24;
  fVar25 = fVar25 * fVar25;
  fVar26 = fVar26 * fVar26;
  auVar28._4_4_ = fVar24;
  auVar28._0_4_ = fVar22;
  auVar28._8_4_ = fVar25;
  auVar28._12_4_ = fVar26;
  auVar6._4_4_ = fVar24;
  auVar6._0_4_ = fVar22;
  auVar6._8_4_ = fVar25;
  auVar6._12_4_ = fVar26;
  auVar28 = NEON_ext(auVar28,auVar6,8,1);
  if (SQRT(auVar28._0_4_ + fVar22 + auVar28._4_4_ + fVar24) == 0.0) {
    puVar17 = (ushort *)((long)piVar2 - (long)*piVar2);
    uVar4 = *puVar17;
    if (uVar4 < 0x17) {
      piVar19 = (int *)0x0;
    }
    else {
      piVar19 = (int *)0x0;
      if ((ulong)puVar17[0xb] != 0) {
        puVar3 = (uint *)((long)piVar2 + (ulong)puVar17[0xb]);
        piVar19 = (int *)((long)puVar3 + (ulong)*puVar3);
      }
    }
    uVar23 = 0;
    if ((4 < *(ushort *)((long)piVar19 - (long)*piVar19)) &&
       (uVar15 = (ulong)((ushort *)((long)piVar19 - (long)*piVar19))[2], uVar15 != 0)) {
      uVar23 = *(undefined4 *)((long)piVar19 + uVar15);
    }
    if (uVar4 < 0x17) {
      piVar19 = (int *)0x0;
    }
    else {
      piVar19 = (int *)0x0;
      if ((ulong)puVar17[0xb] != 0) {
        puVar3 = (uint *)((long)piVar2 + (ulong)puVar17[0xb]);
        piVar19 = (int *)((long)puVar3 + (ulong)*puVar3);
      }
    }
    uVar27 = 0;
    if ((6 < *(ushort *)((long)piVar19 - (long)*piVar19)) &&
       (uVar15 = (ulong)((ushort *)((long)piVar19 - (long)*piVar19))[3], uVar15 != 0)) {
      uVar27 = *(undefined4 *)((long)piVar19 + uVar15);
    }
    if (uVar4 < 0x17) {
      piVar19 = (int *)0x0;
    }
    else {
      piVar19 = (int *)0x0;
      if ((ulong)puVar17[0xb] != 0) {
        puVar3 = (uint *)((long)piVar2 + (ulong)puVar17[0xb]);
        piVar19 = (int *)((long)puVar3 + (ulong)*puVar3);
      }
    }
    uVar29 = 0;
    if ((8 < *(ushort *)((long)piVar19 - (long)*piVar19)) &&
       (uVar15 = (ulong)((ushort *)((long)piVar19 - (long)*piVar19))[4], uVar15 != 0)) {
      uVar29 = *(uint *)((long)piVar19 + uVar15);
    }
    *(ulong *)(param_2 + 0x318) = (ulong)uVar29;
    *(ulong *)(param_2 + 0x310) = CONCAT44(uVar27,uVar23);
    if (*(ushort *)((long)piVar2 - (long)*piVar2) < 0x17) {
      piVar19 = (int *)0x0;
    }
    else {
      uVar15 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0xb];
      piVar19 = (int *)0x0;
      if (uVar15 != 0) {
        puVar3 = (uint *)((long)piVar2 + uVar15);
        piVar19 = (int *)((long)puVar3 + (ulong)*puVar3);
      }
    }
    uVar23 = 0;
    if ((10 < *(ushort *)((long)piVar19 - (long)*piVar19)) &&
       (uVar15 = (ulong)((ushort *)((long)piVar19 - (long)*piVar19))[5], uVar15 != 0)) {
      uVar23 = *(undefined4 *)((long)piVar19 + uVar15);
    }
    *(undefined4 *)(param_2 + 800) = uVar23;
  }
  if ((((**(char **)(param_2 + 0x398) == '\0') && (0xc < *(ushort *)((long)piVar2 - (long)*piVar2)))
      && (uVar15 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[6], uVar15 != 0)) &&
     (puVar3 = (uint *)((long)piVar2 + uVar15), puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3),
     puVar3 != (uint *)0x0)) {
    uVar29 = *puVar3;
    uVar15 = (ulong)uVar29;
    local_80 = (long *)0x0;
    local_78 = 0;
    local_70 = (void *)0x0;
    if (uVar29 < 0x17) {
      local_80 = (long *)(ulong)(byte)(uVar29 << 1);
      pvVar21 = (void *)((ulong)&local_80 | 1);
      if (uVar29 != 0) goto LAB_00936b50;
    }
    else {
      uVar18 = uVar15 + 0x10 & 0x1fffffff0;
      pvVar21 = operator_new(uVar18);
      local_80 = (long *)(uVar18 | 1);
      local_78 = uVar15;
      local_70 = pvVar21;
LAB_00936b50:
      memcpy(pvVar21,puVar3 + 1,uVar15);
    }
    *(undefined1 *)((long)pvVar21 + uVar15) = 0;
    uVar15 = (ulong)local_80 >> 1 & 0x7f;
    if (((ulong)local_80 & 1) != 0) {
      uVar15 = local_78;
    }
    if (((ulong)local_80 & 1) != 0) {
      operator_delete(local_70);
    }
    if (uVar15 != 0) {
      if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 0xd) ||
         (uVar15 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[6], uVar15 == 0)) {
        lVar14 = 0;
      }
      else {
        puVar3 = (uint *)((long)piVar2 + uVar15);
        lVar14 = (long)puVar3 + (ulong)*puVar3;
      }
      local_88 = (long *)0x0;
      if (*(char *)(lVar14 + 4) == '\0') {
        plVar12 = (long *)FUN_00938550();
        if (plVar12 != (long *)0x0) {
          (**(code **)(*plVar12 + 0x18))(plVar12);
        }
        if (local_88 != (long *)0x0) {
          lVar14 = *local_88;
          local_88 = plVar12;
          (**(code **)(lVar14 + 0x20))();
          plVar12 = local_88;
        }
      }
      else {
        if (((*puVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_04379cd0), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_04379d08,PTR_DAT_04379cd8,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379cd0);
        }
        uVar16 = *(undefined8 *)puVar8;
        *(undefined8 *)puVar9 = uVar16;
        FUN_02a47cd8(&local_80,uVar16,(char *)(lVar14 + 4));
        plVar12 = local_88;
        local_88 = (long *)0x0;
        if (plVar12 != (long *)0x0) {
          (**(code **)(*plVar12 + 0x20))();
        }
        local_88 = local_80;
        plVar12 = local_88;
      }
      local_88 = plVar12;
      FUN_02a47560(&local_80,&local_88);
      *(long **)(param_2 + 0x390) = local_80;
      *(ulong *)(param_2 + 0x398) = local_78;
      plVar12 = *(long **)(param_2 + 0x3a8);
      *(undefined8 *)(param_2 + 0x3a8) = 0;
      *(void **)(param_2 + 0x3a0) = local_70;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x20))();
      }
      uVar16 = local_68;
      local_68 = 0;
      *(undefined8 *)(param_2 + 0x3a8) = uVar16;
      if (local_88 != (long *)0x0) {
        (**(code **)(*local_88 + 0x20))();
      }
    }
  }
  if ((((**(char **)(param_2 + 0x3b8) == '\0') && (0xe < *(ushort *)((long)piVar2 - (long)*piVar2)))
      && (uVar15 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[7], uVar15 != 0)) &&
     (puVar3 = (uint *)((long)piVar2 + uVar15), puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3),
     puVar3 != (uint *)0x0)) {
    uVar29 = *puVar3;
    uVar15 = (ulong)uVar29;
    local_80 = (long *)0x0;
    local_78 = 0;
    local_70 = (void *)0x0;
    if (uVar29 < 0x17) {
      local_80 = (long *)(ulong)(byte)(uVar29 << 1);
      pvVar21 = (void *)((ulong)&local_80 | 1);
      if (uVar29 != 0) goto LAB_00936cb4;
    }
    else {
      uVar18 = uVar15 + 0x10 & 0x1fffffff0;
      pvVar21 = operator_new(uVar18);
      local_80 = (long *)(uVar18 | 1);
      local_78 = uVar15;
      local_70 = pvVar21;
LAB_00936cb4:
      memcpy(pvVar21,puVar3 + 1,uVar15);
    }
    *(undefined1 *)((long)pvVar21 + uVar15) = 0;
    uVar15 = (ulong)local_80 >> 1 & 0x7f;
    if (((ulong)local_80 & 1) != 0) {
      uVar15 = local_78;
    }
    if (((ulong)local_80 & 1) != 0) {
      operator_delete(local_70);
    }
    if (uVar15 != 0) {
      if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 0xf) ||
         (uVar15 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[7], uVar15 == 0)) {
        lVar14 = 0;
      }
      else {
        puVar3 = (uint *)((long)piVar2 + uVar15);
        lVar14 = (long)puVar3 + (ulong)*puVar3;
      }
      local_88 = (long *)0x0;
      if (*(char *)(lVar14 + 4) == '\0') {
        plVar12 = (long *)FUN_00938550();
        if (plVar12 != (long *)0x0) {
          (**(code **)(*plVar12 + 0x18))(plVar12);
        }
        if (local_88 != (long *)0x0) {
          lVar14 = *local_88;
          local_88 = plVar12;
          (**(code **)(lVar14 + 0x20))();
          plVar12 = local_88;
        }
      }
      else {
        if (((*puVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_04379cd0), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_04379d08,PTR_DAT_04379cd8,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379cd0);
        }
        uVar16 = *(undefined8 *)puVar8;
        *(undefined8 *)puVar9 = uVar16;
        FUN_02a47cd8(&local_80,uVar16,(char *)(lVar14 + 4));
        plVar12 = local_88;
        local_88 = (long *)0x0;
        if (plVar12 != (long *)0x0) {
          (**(code **)(*plVar12 + 0x20))();
        }
        local_88 = local_80;
        plVar12 = local_88;
      }
      local_88 = plVar12;
      FUN_02a47560(&local_80,&local_88);
      *(long **)(param_2 + 0x3b0) = local_80;
      *(ulong *)(param_2 + 0x3b8) = local_78;
      plVar12 = *(long **)(param_2 + 0x3c8);
      *(undefined8 *)(param_2 + 0x3c8) = 0;
      *(void **)(param_2 + 0x3c0) = local_70;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x20))();
      }
      uVar16 = local_68;
      local_68 = 0;
      *(undefined8 *)(param_2 + 0x3c8) = uVar16;
      if (local_88 != (long *)0x0) {
        (**(code **)(*local_88 + 0x20))();
      }
    }
  }
  if ((((*(long *)(param_2 + 0x388) != 0) &&
       (**(char **)(*(long *)(param_2 + 0x388) + 0x60) != '\0')) ||
      (*(ushort *)((long)piVar2 - (long)*piVar2) < 0xb)) ||
     ((uVar15 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[5], uVar15 == 0 ||
      (puVar3 = (uint *)((long)piVar2 + uVar15), puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3),
      puVar3 == (uint *)0x0)))) goto LAB_00936eb4;
  uVar29 = *puVar3;
  uVar15 = (ulong)uVar29;
  local_80 = (long *)0x0;
  local_78 = 0;
  local_70 = (void *)0x0;
  if (uVar29 < 0x17) {
    local_80 = (long *)(ulong)(byte)(uVar29 << 1);
    pvVar21 = (void *)((ulong)&local_80 | 1);
    if (uVar29 != 0) goto LAB_00936e20;
  }
  else {
    uVar18 = uVar15 + 0x10 & 0x1fffffff0;
    pvVar21 = operator_new(uVar18);
    local_80 = (long *)(uVar18 | 1);
    local_78 = uVar15;
    local_70 = pvVar21;
LAB_00936e20:
    memcpy(pvVar21,puVar3 + 1,uVar15);
  }
  *(undefined1 *)((long)pvVar21 + uVar15) = 0;
  uVar15 = (ulong)local_80 >> 1 & 0x7f;
  if (((ulong)local_80 & 1) != 0) {
    uVar15 = local_78;
  }
  if (((ulong)local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if (uVar15 != 0) {
    puVar3 = (uint *)((long)piVar2 + (ulong)*(ushort *)((long)piVar2 + (10 - (long)*piVar2)));
    pcVar20 = (char *)((long)puVar3 + (ulong)*puVar3 + 4);
    if (*pcVar20 == '\0') {
      plVar12 = (long *)FUN_00938550();
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
    }
    else {
      if (((*puVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_04379cd0), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379d08,PTR_DAT_04379cd8,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379cd0);
      }
      uVar16 = *(undefined8 *)puVar8;
      *(undefined8 *)puVar9 = uVar16;
      FUN_02a47cd8(&local_80,uVar16,pcVar20);
      plVar12 = local_80;
    }
    plVar13 = *(long **)(param_2 + 0x388);
    *(undefined8 *)(param_2 + 0x388) = 0;
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 0x20))();
    }
    *(long **)(param_2 + 0x388) = plVar12;
  }
LAB_00936eb4:
  plVar12 = *(long **)(param_2 + 0x90);
  *(undefined8 *)(param_2 + 0x90) = 0;
  if (plVar12 != (long *)0x0) {
    plVar13 = plVar12 + 10;
    do {
      iVar11 = (int)*plVar13 + -1;
      cVar5 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar10) {
        *(int *)plVar13 = iVar11;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar11 == 0) {
      (**(code **)(*plVar12 + 0x10))();
    }
  }
  plVar12 = *(long **)(param_2 + 0xf0);
  *(undefined8 *)(param_2 + 0xf0) = 0;
  if (plVar12 != (long *)0x0) {
    plVar13 = plVar12 + 10;
    do {
      iVar11 = (int)*plVar13 + -1;
      cVar5 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar10) {
        *(int *)plVar13 = iVar11;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar11 == 0) {
      (**(code **)(*plVar12 + 0x10))();
    }
  }
  plVar12 = *(long **)(param_2 + 0x150);
  *(undefined8 *)(param_2 + 0x150) = 0;
  if (plVar12 != (long *)0x0) {
    plVar13 = plVar12 + 10;
    do {
      iVar11 = (int)*plVar13 + -1;
      cVar5 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar10) {
        *(int *)plVar13 = iVar11;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar11 == 0) {
      (**(code **)(*plVar12 + 0x10))();
    }
  }
  plVar12 = *(long **)(param_2 + 0x1b0);
  *(undefined8 *)(param_2 + 0x1b0) = 0;
  if (plVar12 != (long *)0x0) {
    plVar13 = plVar12 + 10;
    do {
      iVar11 = (int)*plVar13 + -1;
      cVar5 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar10) {
        *(int *)plVar13 = iVar11;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar11 == 0) {
      (**(code **)(*plVar12 + 0x10))();
    }
  }
  plVar12 = *(long **)(param_2 + 0x210);
  *(undefined8 *)(param_2 + 0x210) = 0;
  if (plVar12 != (long *)0x0) {
    plVar13 = plVar12 + 10;
    do {
      iVar11 = (int)*plVar13 + -1;
      cVar5 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar10) {
        *(int *)plVar13 = iVar11;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar11 == 0) {
      (**(code **)(*plVar12 + 0x10))();
    }
  }
  plVar12 = *(long **)(param_2 + 0x270);
  *(undefined8 *)(param_2 + 0x270) = 0;
  if (plVar12 != (long *)0x0) {
    plVar13 = plVar12 + 10;
    do {
      iVar11 = (int)*plVar13 + -1;
      cVar5 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar10) {
        *(int *)plVar13 = iVar11;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar11 == 0) {
      (**(code **)(*plVar12 + 0x10))();
    }
  }
  if ((((0x30 < *(ushort *)((long)piVar2 - (long)*piVar2)) &&
       (uVar15 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x18], uVar15 != 0)) &&
      (puVar3 = (uint *)((long)piVar2 + uVar15), piVar19 = (int *)((long)puVar3 + (ulong)*puVar3),
      piVar19 != (int *)0x0)) && (*piVar19 != 0)) {
    uVar15 = 0;
    do {
      FUN_00937504(&local_80,param_1,uVar15 & 0xffffffff);
      plVar13 = (long *)(param_2 + uVar15 * 0x60 + 0x90);
      plVar12 = (long *)*plVar13;
      *plVar13 = 0;
      if (plVar12 != (long *)0x0) {
        plVar1 = plVar12 + 10;
        do {
          iVar11 = (int)*plVar1 + -1;
          cVar5 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar10) {
            *(int *)plVar1 = iVar11;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar11 == 0) {
          (**(code **)(*plVar12 + 0x10))();
        }
      }
      *plVar13 = (long)local_80;
      if (*(ushort *)((long)piVar2 - (long)*piVar2) < 0x25) {
        bVar10 = false;
      }
      else {
        uVar18 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x12];
        bVar10 = false;
        if (uVar18 != 0) {
          bVar10 = *(char *)((long)piVar2 + uVar18) != '\0';
        }
      }
      *(bool *)(param_2 + uVar15 * 0x60 + 0xac) = bVar10;
      if (*(ushort *)((long)piVar2 - (long)*piVar2) < 0x27) {
        bVar10 = false;
      }
      else {
        uVar18 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x13];
        bVar10 = false;
        if (uVar18 != 0) {
          bVar10 = *(char *)((long)piVar2 + uVar18) != '\0';
        }
      }
      *(bool *)(param_2 + uVar15 * 0x60 + 0xad) = bVar10;
      if (*(ushort *)((long)piVar2 - (long)*piVar2) < 0x29) {
        bVar10 = false;
      }
      else {
        uVar18 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x14];
        bVar10 = false;
        if (uVar18 != 0) {
          bVar10 = *(char *)((long)piVar2 + uVar18) != '\0';
        }
      }
      *(bool *)(param_2 + uVar15 * 0x60 + 0xae) = bVar10;
      if (*(ushort *)((long)piVar2 - (long)*piVar2) < 0x2b) {
        bVar10 = false;
      }
      else {
        uVar18 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x15];
        bVar10 = false;
        if (uVar18 != 0) {
          bVar10 = *(char *)((long)piVar2 + uVar18) != '\0';
        }
      }
      *(bool *)(param_2 + uVar15 * 0x60 + 0xaf) = bVar10;
      if (*(ushort *)((long)piVar2 - (long)*piVar2) < 0x2d) {
        bVar10 = false;
      }
      else {
        uVar18 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x16];
        bVar10 = false;
        if (uVar18 != 0) {
          bVar10 = *(char *)((long)piVar2 + uVar18) != '\0';
        }
      }
      *(bool *)(param_2 + uVar15 * 0x60 + 0xb0) = bVar10;
      if (*(ushort *)((long)piVar2 - (long)*piVar2) < 0x2f) {
        bVar10 = false;
      }
      else {
        uVar18 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x17];
        bVar10 = false;
        if (uVar18 != 0) {
          bVar10 = *(char *)((long)piVar2 + uVar18) != '\0';
        }
      }
      lVar14 = uVar15 * 0x60;
      uVar15 = uVar15 + 1;
      *(bool *)(param_2 + lVar14 + 0xb1) = bVar10;
      puVar3 = (uint *)((long)piVar2 + (ulong)*(ushort *)((long)piVar2 + (0x30 - (long)*piVar2)));
    } while (uVar15 < *(uint *)((long)puVar3 + (ulong)*puVar3));
  }
  return;
}


