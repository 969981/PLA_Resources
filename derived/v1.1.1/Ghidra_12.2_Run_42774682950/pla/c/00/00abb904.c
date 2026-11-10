/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00abb904; name: FUN_00abb904
 */


void FUN_00abb904(long param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  uint uVar18;
  undefined8 local_f0;
  char *pcStack_e8;
  undefined8 local_e0;
  long *local_d8;
  long *local_d0;
  char *pcStack_c8;
  undefined8 local_c0;
  long *local_b8;
  undefined8 local_b0;
  char *pcStack_a8;
  undefined8 local_a0;
  long *local_98;
  undefined1 *local_90;
  char *pcStack_88;
  undefined8 local_80;
  long *local_78;
  undefined1 *local_70;
  ulong local_68;
  undefined8 uStack_60;
  long *local_58;
  
  local_70 = &DAT_f4b17a579f18960;
  local_68 = 0x82a2b175229d6a5b;
  uStack_60 = 0;
  FUN_00db84c4(&local_70);
  puVar8 = PTR_DAT_04379660;
  local_80 = 0xb;
  local_78 = (long *)0x0;
  local_90 = &DAT_8013c350d279d9f9;
  pcStack_88 = "battle_view";
  local_b0 = 0xc81e30c3c6a4db7e;
  pcStack_a8 = "Trainer_IdleAnimationMaxWaitFrames";
  local_a0 = 0x22;
  local_98 = (long *)0x0;
  if (((*PTR_DAT_04379660 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_04379660), iVar11 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  puVar10 = PTR_DAT_04379670;
  puVar9 = PTR_DAT_04379668;
  uVar13 = *(undefined8 *)PTR_DAT_04379668;
  *(undefined8 *)PTR_DAT_04379670 = uVar13;
  FUN_00d7d9e4(&local_d0,uVar13,&local_90);
  if (local_d0 == (long *)0x0) {
    iVar11 = 0;
  }
  else {
    iVar11 = FUN_00d78f50(local_d0,&local_b0);
    if (local_d0 != (long *)0x0) {
      plVar1 = local_d0 + 10;
      do {
        iVar12 = (int)*plVar1 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = iVar12;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar12 == 0) {
        (**(code **)(*local_d0 + 0x10))();
      }
    }
  }
  local_c0 = 0xb;
  local_b8 = (long *)0x0;
  local_f0 = 0xafbc70c4167c2cc;
  pcStack_e8 = "Trainer_IdleAnimationMinWaitFrames";
  local_d0 = (long *)&DAT_8013c350d279d9f9;
  pcStack_c8 = "battle_view";
  local_e0 = 0x22;
  local_d8 = (long *)0x0;
  if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_04379660), iVar12 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  uVar13 = *(undefined8 *)puVar9;
  *(undefined8 *)puVar10 = uVar13;
  FUN_00d7d9e4(&local_58,uVar13,&local_d0);
  if (local_58 == (long *)0x0) {
    iVar12 = 0;
  }
  else {
    iVar12 = FUN_00d78f50(local_58,&local_f0);
    if (local_58 != (long *)0x0) {
      plVar1 = local_58 + 10;
      do {
        iVar6 = (int)*plVar1 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = iVar6;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*local_58 + 0x10))();
      }
    }
  }
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x20))();
  }
  if (local_b8 != (long *)0x0) {
    (**(code **)(*local_b8 + 0x20))();
  }
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  uVar5 = iVar11 - iVar12;
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if ((int)uVar5 < 1) {
    uVar18 = 0;
  }
  else {
    lVar16 = LZCOUNT(uVar5 + 1);
    lVar2 = 0x1f;
    if ((0x7fffffffU >> (ulong)((uint)lVar16 & 0x1f) & uVar5 + 1) != 0) {
      lVar2 = 0x20;
    }
    uVar15 = lVar2 - lVar16;
    uVar17 = uVar15 >> 6;
    if ((uVar15 & 0x3f) != 0) {
      uVar17 = uVar17 + 1;
    }
    if (uVar15 < uVar17) {
      uVar14 = 0;
    }
    else {
      uVar7 = 0;
      if (uVar17 != 0) {
        uVar7 = uVar15 / uVar17;
      }
      uVar14 = (uint)(0xffffffffffffffff >> (-uVar7 & 0x3f));
    }
    do {
      uVar17 = (ulong)local_70 ^ local_68;
      iVar11 = (int)local_68;
      local_68 = uVar17 >> 0x1b | uVar17 << 0x25;
      uVar18 = (int)local_70 + iVar11 & uVar14;
      local_70 = (undefined1 *)
                 (uVar17 ^ ((ulong)local_70 >> 0x28 | (long)local_70 << 0x18) ^ uVar17 << 0x10);
    } while (uVar5 < uVar18);
  }
  local_80 = 0xb;
  local_78 = (long *)0x0;
  local_b0 = 0xb434c0ab1f33d6d2;
  pcStack_a8 = "IdleAnimationMinWaitFrames";
  local_90 = &DAT_8013c350d279d9f9;
  pcStack_88 = "battle_view";
  local_a0 = 0x1a;
  local_98 = (long *)0x0;
  if (((*puVar8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_04379660), iVar11 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  uVar13 = *(undefined8 *)puVar9;
  *(undefined8 *)puVar10 = uVar13;
  FUN_00d7d9e4(&local_d0,uVar13,&local_90);
  if (local_d0 == (long *)0x0) {
    iVar11 = 0;
  }
  else {
    iVar11 = FUN_00d78f50(local_d0,&local_b0);
    if (local_d0 != (long *)0x0) {
      plVar1 = local_d0 + 10;
      do {
        iVar12 = (int)*plVar1 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = iVar12;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar12 == 0) {
        (**(code **)(*local_d0 + 0x10))();
      }
    }
  }
  *(uint *)(param_1 + 0x238) = iVar11 + uVar18;
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  return;
}


