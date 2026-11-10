/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ba107c; name: FUN_01ba107c
 */


void FUN_01ba107c(long param_1,int param_2)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long local_68;
  long local_60;
  long local_58;
  long *plStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  plStack_50 = *(long **)(param_1 + 8);
  local_58 = 0;
  local_68 = 0;
  local_60 = 0;
  local_48 = 0xfffffffffffffff;
  uStack_40 = 0;
  local_38 = 0;
  lVar11 = *(long *)(param_1 + 0x918);
  lVar12 = *(long *)(param_1 + 0x920);
  if (lVar11 != lVar12) {
    if (*(int *)(lVar11 + 4) == param_2) {
      FUN_01ba1368(&local_68,lVar11);
    }
    if (lVar11 + 0x10 != lVar12) {
      if (*(int *)(lVar11 + 0x14) == param_2) {
        FUN_01ba1368(&local_68);
      }
      for (lVar11 = lVar11 + 0x20; lVar11 != lVar12; lVar11 = lVar11 + 0x10) {
        if (*(int *)(lVar11 + 4) == param_2) {
          FUN_01ba1368(&local_68,lVar11);
        }
      }
    }
    lVar11 = local_60 - local_68;
    if (lVar11 != 0) {
      if (((*PTR_DAT_04379678 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_04379678), iVar3 != 0)) {
        FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379678);
      }
      lVar12 = *(long *)PTR_DAT_04379680;
      *(long *)PTR_DAT_04379688 = lVar12;
      if (lVar11 == 0x10) {
        uVar7 = 0;
      }
      else {
        uVar5 = lVar11 >> 4;
        lVar11 = 0x3f;
        if ((0x7fffffffffffffffU >> (LZCOUNT(uVar5) & 0x3fU) & uVar5) != 0) {
          lVar11 = 0x40;
        }
        puVar4 = *(ulong **)(lVar12 + 0xd8);
        uVar6 = lVar11 - LZCOUNT(uVar5);
        uVar7 = uVar6 >> 6;
        if ((uVar6 & 0x3f) != 0) {
          uVar7 = uVar7 + 1;
        }
        if (uVar6 < uVar7) {
          uVar6 = 0;
        }
        else {
          uVar8 = 0;
          if (uVar7 != 0) {
            uVar8 = uVar6 / uVar7;
          }
          uVar6 = 0xffffffffffffffff >> (-uVar8 & 0x3f);
        }
        uVar8 = *puVar4;
        uVar9 = puVar4[1];
        do {
          uVar10 = uVar8 ^ uVar9;
          uVar7 = uVar8 + uVar9;
          uVar9 = uVar10 >> 0x1b | uVar10 << 0x25;
          uVar7 = uVar7 & uVar6;
          uVar8 = uVar10 ^ (uVar8 >> 0x28 | uVar8 << 0x18) ^ uVar10 << 0x10;
        } while (uVar5 <= uVar7);
        *puVar4 = uVar8;
        puVar4[1] = uVar9;
      }
      FUN_01ba0df4(param_1 + 0x8e0,local_68 + uVar7 * 0x10);
      if (param_2 - 1U < 3) {
        *(int *)(param_1 + 0x950) = *(int *)(param_1 + 0x950) + 1;
      }
    }
  }
  plVar2 = plStack_50;
  lVar11 = local_68;
  if (local_68 != 0) {
    local_60 = local_68;
    lVar12 = local_58 - local_68;
    uVar7 = (**(code **)(*plStack_50 + 0xc0))(plStack_50);
    if ((uVar7 & 1) != 0) {
      lVar1 = tpidr_el0;
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar2,lVar11,lVar12,4);
        return;
      }
    }
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar11,lVar12,4);
  }
  return;
}


