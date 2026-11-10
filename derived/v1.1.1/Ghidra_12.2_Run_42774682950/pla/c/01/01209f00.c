/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01209f00; name: FUN_01209f00
 */


void FUN_01209f00(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  long *local_f0;
  code *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  long alStack_d0 [13];
  undefined8 local_68;
  
  uVar9 = FUN_00d5294c(*(undefined8 *)(param_1 + 0x90));
  uVar10 = FUN_00d4bf2c(*(undefined8 *)(param_1 + 0x90),uVar9);
  puVar5 = PTR_DAT_04379558;
  if (((*PTR_DAT_04379558 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_04379558), iVar12 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  puVar7 = PTR_DAT_04379568;
  puVar6 = PTR_DAT_04379560;
  *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
  FUN_01148bf4(&local_f0);
  uVar11 = FUN_010e67cc(local_f0);
  if (local_f0 != (long *)0x0) {
    lVar18 = local_f0[0xb];
    piVar1 = (int *)(lVar18 + 0xc);
    do {
      iVar12 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar12 + -1 == 0) {
      *(undefined8 *)(lVar18 + 0x18) = 0;
      (**(code **)(*local_f0 + 0x20))();
    }
  }
  uVar14 = FUN_012207f8(*(undefined8 *)(param_1 + 0x90),uVar9,uVar10);
  puVar8 = PTR_DAT_0437e7c0;
  puVar19 = (undefined8 *)0x0;
  if (*(long *)(param_1 + 0x78) != 0) {
    puVar20 = *(undefined8 **)(*(long *)(param_1 + 0x78) + 0x18);
    if (puVar20 != (undefined8 *)0x0) {
      puVar15 = (undefined8 *)(**(code **)*puVar20)(puVar20);
      if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_0437e7c0), iVar12 != 0)) {
        if (((*PTR_DAT_0437b2f8 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_0437b2f8), iVar12 != 0)) {
          if (((*PTR_DAT_043794d0 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar12 != 0)) {
            uVar17 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar17;
            __cxa_guard_release(PTR_DAT_043794d0);
          }
          *(undefined **)PTR_DAT_0437b300 = PTR_DAT_043794d8;
          __cxa_guard_release(PTR_DAT_0437b2f8);
        }
        *(undefined **)PTR_DAT_0437e7c8 = PTR_DAT_0437b300;
        __cxa_guard_release(PTR_DAT_0437e7c0);
      }
      if (puVar15 != (undefined8 *)0x0) {
        do {
          if (puVar15 == (undefined8 *)PTR_DAT_0437e7c8) {
            puVar19 = puVar20 + -10;
            break;
          }
          puVar15 = (undefined8 *)*puVar15;
          puVar19 = (undefined8 *)0x0;
        } while (puVar15 != (undefined8 *)0x0);
        goto LAB_01209ffc;
      }
    }
    puVar19 = (undefined8 *)0x0;
  }
LAB_01209ffc:
  FUN_011fb198(puVar19,uVar14,uVar9,uVar11,uVar10);
  iVar12 = FUN_00d4cc68(*(undefined8 *)(param_1 + 0x90));
  alStack_d0[0] = param_1;
  if (iVar12 != 1) {
    if (iVar12 == 2) {
      local_f0 = (long *)&LAB_0120c38c;
      local_e8 = FUN_0120c398;
      local_e0 = &LAB_0120c39c;
      local_d8 = &LAB_0120c3a8;
      FUN_0120b970(param_1,&local_f0);
      pcVar4 = local_e8;
joined_r0x0120a06c:
      if (pcVar4 == (code *)0x0) {
        return;
      }
      local_e0 = (undefined1 *)0x0;
      local_d8 = (undefined1 *)0x0;
      local_f0 = (long *)0x0;
      local_e8 = (code *)0x0;
      (*pcVar4)(alStack_d0);
      return;
    }
    iVar12 = FUN_01223180(*(undefined8 *)(param_1 + 0x90));
    if (iVar12 == 3) {
      uVar14 = 4;
    }
    else {
      if (iVar12 != 1) {
        return;
      }
      uVar14 = 3;
    }
    goto LAB_0120a148;
  }
  iVar12 = FUN_00d58e54(*(undefined8 *)(param_1 + 0x90));
  if (iVar12 == 2) {
    uVar14 = *(undefined8 *)(param_1 + 0x90);
    goto LAB_0120a26c;
  }
  if (iVar12 != 0x19) {
    if (iVar12 != 6) {
      iVar12 = FUN_01220ce0(*(undefined8 *)(param_1 + 0x90));
      if (iVar12 != 1) {
        return;
      }
      FUN_01216d90(*(undefined8 *)(param_1 + 0x90),0);
      uVar14 = 3;
      goto LAB_0120a148;
    }
    iVar12 = FUN_00d5294c(*(undefined8 *)(param_1 + 0x90));
    if ((*(long *)(param_1 + 0x78) != 0) &&
       (puVar19 = *(undefined8 **)(*(long *)(param_1 + 0x78) + 0x18), puVar19 != (undefined8 *)0x0))
    {
      puVar20 = (undefined8 *)(**(code **)*puVar19)(puVar19);
      if (((*puVar8 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_0437e7c0), iVar13 != 0)) {
        if (((*PTR_DAT_0437b2f8 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_0437b2f8), iVar13 != 0)) {
          if (((*PTR_DAT_043794d0 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar13 != 0)) {
            uVar14 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar14;
            __cxa_guard_release(PTR_DAT_043794d0);
          }
          *(undefined **)PTR_DAT_0437b300 = PTR_DAT_043794d8;
          __cxa_guard_release(PTR_DAT_0437b2f8);
        }
        *(undefined **)PTR_DAT_0437e7c8 = PTR_DAT_0437b300;
        __cxa_guard_release(PTR_DAT_0437e7c0);
      }
      if (puVar20 != (undefined8 *)0x0) {
        do {
          if (puVar20 == (undefined8 *)PTR_DAT_0437e7c8) {
            puVar15 = puVar19 + -10;
            break;
          }
          puVar20 = (undefined8 *)*puVar20;
          puVar15 = (undefined8 *)0x0;
        } while (puVar20 != (undefined8 *)0x0);
        goto LAB_0120a0f4;
      }
    }
    puVar15 = (undefined8 *)0x0;
LAB_0120a0f4:
    uVar9 = FUN_00d4bf2c(*(undefined8 *)(param_1 + 0x90),iVar12);
    FUN_011fa8a0(puVar15,iVar12 != 0,uVar9);
    FUN_00d4cc70(*(undefined8 *)(param_1 + 0x90));
    return;
  }
  iVar12 = FUN_00d5294c(*(undefined8 *)(param_1 + 0x90));
  uVar9 = FUN_00d4bf2c(*(undefined8 *)(param_1 + 0x90),iVar12);
  if (((*puVar5 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_04379558), iVar13 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  *(undefined8 *)puVar7 = *(undefined8 *)puVar6;
  FUN_01148bf4(&local_f0);
  uVar10 = FUN_010e67cc(local_f0);
  if (local_f0 != (long *)0x0) {
    lVar18 = local_f0[0xb];
    piVar1 = (int *)(lVar18 + 0xc);
    do {
      iVar13 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar13 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar13 + -1 == 0) {
      *(undefined8 *)(lVar18 + 0x18) = 0;
      (**(code **)(*local_f0 + 0x20))();
    }
  }
  uVar14 = FUN_012207f8(*(undefined8 *)(param_1 + 0x90),iVar12,uVar9);
  uVar16 = FUN_0122699c(*(undefined8 *)(param_1 + 0x90),uVar14);
  if ((uVar16 & 1) == 0) {
    local_f0 = (long *)&LAB_0120c3b4;
    local_e8 = FUN_0120c3bc;
    local_e0 = &LAB_0120c3c0;
    local_d8 = &LAB_0120c3cc;
    local_68 = 0x6643e969673ae06c;
    FUN_027bc964(param_1 + 0xc0,&local_68,&local_f0);
    *(undefined8 *)(param_1 + 0xb0) = 1;
    pcVar4 = local_e8;
    goto joined_r0x0120a06c;
  }
  puVar19 = (undefined8 *)0x0;
  if (*(long *)(param_1 + 0x78) != 0) {
    puVar20 = *(undefined8 **)(*(long *)(param_1 + 0x78) + 0x18);
    if (puVar20 != (undefined8 *)0x0) {
      puVar15 = (undefined8 *)(**(code **)*puVar20)(puVar20);
      if (((*puVar8 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_0437e7c0), iVar13 != 0)) {
        if (((*PTR_DAT_0437b2f8 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_0437b2f8), iVar13 != 0)) {
          if (((*PTR_DAT_043794d0 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar13 != 0)) {
            uVar17 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar17;
            __cxa_guard_release(PTR_DAT_043794d0);
          }
          *(undefined **)PTR_DAT_0437b300 = PTR_DAT_043794d8;
          __cxa_guard_release(PTR_DAT_0437b2f8);
        }
        *(undefined **)PTR_DAT_0437e7c8 = PTR_DAT_0437b300;
        __cxa_guard_release(PTR_DAT_0437e7c0);
      }
      if (puVar15 != (undefined8 *)0x0) {
        do {
          if (puVar15 == (undefined8 *)PTR_DAT_0437e7c8) {
            puVar19 = puVar20 + -10;
            break;
          }
          puVar15 = (undefined8 *)*puVar15;
          puVar19 = (undefined8 *)0x0;
        } while (puVar15 != (undefined8 *)0x0);
        goto LAB_0120a234;
      }
    }
    puVar19 = (undefined8 *)0x0;
  }
LAB_0120a234:
  uVar16 = FUN_011fb25c(puVar19,uVar14,iVar12 == 0,uVar10,uVar9);
  uVar14 = *(undefined8 *)(param_1 + 0x90);
  if ((uVar16 & 1) == 0) {
LAB_0120a26c:
    FUN_00d42438(uVar14,1,1);
    FUN_00d4ba88(*(undefined8 *)(param_1 + 0x90),2,1);
    FUN_00d428b0(*(undefined8 *)(param_1 + 0x90),0);
    return;
  }
  FUN_0121e33c();
  uVar14 = 5;
LAB_0120a148:
  *(undefined8 *)(param_1 + 0xb0) = uVar14;
  return;
}


