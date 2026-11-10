/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027dba38; name: FUN_027dba38
 */


void FUN_027dba38(long *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined4 uVar10;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  
  puVar2 = PTR_DAT_04379558;
  if (*(int *)((long)param_1 + 0x6c) == 0) {
    iVar5 = (int)param_1[0xd];
    if (iVar5 == 4) {
      if (((*PTR_DAT_04379558 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379558), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379558);
      }
      puVar4 = PTR_DAT_04379568;
      puVar3 = PTR_DAT_04379560;
      uVar6 = *(undefined8 *)PTR_DAT_04379560;
      *(undefined8 *)PTR_DAT_04379568 = uVar6;
      uVar7 = FUN_01148690(uVar6,(int)param_1[0xe]);
      if ((uVar7 & 1) == 0) {
        return;
      }
      if (((*puVar2 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379558), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379558);
      }
      uVar6 = *(undefined8 *)puVar3;
      *(undefined8 *)puVar4 = uVar6;
      FUN_011486f8(uVar6,(int)param_1[0xe]);
      uVar10 = 5;
    }
    else if (iVar5 == 2) {
      if (((*PTR_DAT_04379558 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379558), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379558);
      }
      uVar6 = *(undefined8 *)PTR_DAT_04379560;
      *(undefined8 *)PTR_DAT_04379568 = uVar6;
      uVar7 = FUN_011485c0(uVar6,(int)param_1[0xe]);
      if ((uVar7 & 1) == 0) {
        return;
      }
      uVar10 = 3;
    }
    else {
      if (iVar5 != 1) {
        return;
      }
      if (((*PTR_DAT_04379558 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379558), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379558);
      }
      puVar4 = PTR_DAT_04379568;
      puVar3 = PTR_DAT_04379560;
      uVar6 = *(undefined8 *)PTR_DAT_04379560;
      *(undefined8 *)PTR_DAT_04379568 = uVar6;
      uVar7 = FUN_01148354(uVar6,(int)param_1[0xe]);
      if ((uVar7 & 1) == 0) {
        return;
      }
      if (((*puVar2 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379558), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379558);
      }
      uVar6 = *(undefined8 *)puVar3;
      *(undefined8 *)puVar4 = uVar6;
      FUN_01148558(uVar6,(int)param_1[0xe]);
      uVar10 = 2;
    }
    *(undefined4 *)(param_1 + 0xd) = uVar10;
    return;
  }
  if (*(int *)((long)param_1 + 0x6c) == 2) {
    if (param_1[0xf] != 0) {
      FUN_011457e4();
      uVar7 = FUN_011458d8(param_1[0xf]);
      if ((uVar7 & 1) == 0) {
        return;
      }
      lVar8 = param_1[0xf];
      param_1[0xf] = 0;
      if (lVar8 != 0) {
        FUN_0275e578(param_1 + 0x10);
      }
    }
  }
  else {
    if (*(int *)((long)param_1 + 0x6c) != 1) {
      return;
    }
    uVar1 = *(uint *)(param_1 + 0xd);
    if (uVar1 - 2 < 3) {
      if (((*PTR_DAT_04379558 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379558), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379558);
      }
      puVar4 = PTR_DAT_04379568;
      puVar3 = PTR_DAT_04379560;
      uVar6 = *(undefined8 *)PTR_DAT_04379560;
      *(undefined8 *)PTR_DAT_04379568 = uVar6;
      uVar7 = FUN_011485c0(uVar6,(int)param_1[0xe]);
      if ((uVar7 & 1) == 0) {
        return;
      }
      if (((*puVar2 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379558), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379558);
      }
      uVar6 = *(undefined8 *)puVar3;
      *(undefined8 *)puVar4 = uVar6;
      FUN_011486f8(uVar6,(int)param_1[0xe]);
    }
    else if (1 < uVar1) {
      if (uVar1 != 5) {
        return;
      }
      (**(code **)(*param_1 + 0x48))(param_1);
      FUN_0275dfa0(&local_50,param_1[1],param_1 + 0xe);
      lVar8 = local_50;
      local_50 = 0;
      lVar9 = param_1[0xf];
      param_1[0xf] = lVar8;
      if (lVar9 == 0) {
        param_1[0x11] = local_40;
        param_1[0x12] = local_38;
        param_1[0x10] = local_48;
        uVar10 = 2;
      }
      else {
        FUN_0275e578(param_1 + 0x10);
        lVar8 = local_50;
        param_1[0x10] = local_48;
        param_1[0x11] = local_40;
        param_1[0x12] = local_38;
        local_50 = 0;
        if (lVar8 != 0) {
          FUN_0275e578(&local_48);
        }
        uVar10 = 2;
      }
      goto LAB_027dbcfc;
    }
    (**(code **)(*param_1 + 0x48))(param_1);
  }
  uVar10 = 3;
LAB_027dbcfc:
  *(undefined4 *)((long)param_1 + 0x6c) = uVar10;
  return;
}


