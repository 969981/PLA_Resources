/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b9fba4; name: FUN_01b9fba4
 */


undefined8 FUN_01b9fba4(long param_1,int param_2)

{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  long lVar5;
  ulong *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  long local_78;
  long local_70;
  long local_68;
  long *plStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  int local_34;
  
  lVar5 = *(long *)(param_1 + 0x7c8);
  lVar7 = *(long *)(param_1 + 0x7c0);
  if ((ulong)(lVar5 - lVar7 >> 7) < 2) {
    return 0;
  }
  plStack_60 = *(long **)(param_1 + 8);
  local_48 = 0;
  local_78 = 0;
  local_70 = 0;
  local_34 = 0;
  local_68 = 0;
  local_58 = 0x3fffffffffffffff;
  uStack_50 = 0;
  if (lVar5 != lVar7) {
    uVar8 = 0;
    do {
      if (*(int *)(lVar7 + uVar8 * 0x80 + 0x70) == param_2) {
        FUN_01b9fb50(&local_78,&local_34);
        lVar5 = *(long *)(param_1 + 0x7c8);
        lVar7 = *(long *)(param_1 + 0x7c0);
      }
      local_34 = local_34 + 1;
      uVar8 = (ulong)local_34;
    } while (uVar8 < (ulong)(lVar5 - lVar7 >> 7));
    lVar5 = local_70 - local_78;
    if (lVar5 != 0) {
      if (((*PTR_DAT_04379678 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04379678), iVar4 != 0)) {
        FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379678);
      }
      lVar7 = *(long *)PTR_DAT_04379680;
      *(long *)PTR_DAT_04379688 = lVar7;
      if (lVar5 == 4) {
        lVar5 = 0;
      }
      else {
        uVar8 = lVar5 >> 2;
        lVar5 = 0x3f;
        if ((0x7fffffffffffffffU >> (LZCOUNT(uVar8) & 0x3fU) & uVar8) != 0) {
          lVar5 = 0x40;
        }
        puVar6 = *(ulong **)(lVar7 + 0xd8);
        uVar9 = lVar5 - LZCOUNT(uVar8);
        uVar10 = uVar9 >> 6;
        if ((uVar9 & 0x3f) != 0) {
          uVar10 = uVar10 + 1;
        }
        if (uVar9 < uVar10) {
          uVar10 = 0;
        }
        else {
          uVar11 = 0;
          if (uVar10 != 0) {
            uVar11 = uVar9 / uVar10;
          }
          uVar10 = 0xffffffffffffffff >> (-uVar11 & 0x3f);
        }
        uVar9 = *puVar6;
        uVar11 = puVar6[1];
        do {
          uVar13 = uVar9 ^ uVar11;
          uVar12 = uVar9 + uVar11;
          uVar11 = uVar13 >> 0x1b | uVar13 << 0x25;
          uVar12 = uVar12 & uVar10;
          uVar9 = uVar13 ^ (uVar9 >> 0x28 | uVar9 << 0x18) ^ uVar13 << 0x10;
        } while (uVar8 <= uVar12);
        lVar5 = (long)(int)uVar12;
        *puVar6 = uVar9;
        puVar6[1] = uVar11;
      }
      *(undefined4 *)(param_1 + 0x7fc) = *(undefined4 *)(param_1 + 0x7f8);
      *(undefined4 *)(param_1 + 0x7f8) = *(undefined4 *)(local_78 + lVar5 * 4);
      uVar14 = 1;
      lVar5 = local_78;
      plVar3 = plStack_60;
      goto joined_r0x01b9fdf0;
    }
  }
  lVar5 = local_78;
  plVar3 = plStack_60;
  if (param_2 == 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x7f8);
    *(undefined4 *)(param_1 + 0x7f8) = 0;
    *(undefined4 *)(param_1 + 0x7fc) = uVar1;
    uVar14 = 1;
  }
  else {
    uVar14 = 0;
  }
joined_r0x01b9fdf0:
  if (lVar5 != 0) {
    lVar7 = local_68 - lVar5;
    local_78 = lVar5;
    local_70 = lVar5;
    plStack_60 = plVar3;
    uVar8 = (**(code **)(*plVar3 + 0xc0))(plVar3);
    if ((uVar8 & 1) != 0) {
      lVar2 = tpidr_el0;
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar2 + 0x38d480)) {
        FUN_02bcc824(plVar3,lVar5,lVar7,4);
        return uVar14;
      }
    }
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar5,lVar7,4);
  }
  return uVar14;
}


