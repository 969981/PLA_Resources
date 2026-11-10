/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b9f7b4; name: FUN_01b9f7b4
 */


void FUN_01b9f7b4(long param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  ulong *puVar16;
  ulong uVar17;
  undefined4 *local_68;
  undefined4 *local_60;
  long local_58;
  long *plStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  int local_24;
  
  lVar11 = *(long *)(param_1 + 0x7c8);
  lVar12 = *(long *)(param_1 + 0x7c0);
  if (1 < (ulong)(lVar11 - lVar12 >> 7)) {
    plStack_50 = *(long **)(param_1 + 8);
    local_68 = (undefined4 *)0x0;
    local_60 = (undefined4 *)0x0;
    local_48 = 0x3fffffffffffffff;
    uStack_40 = 0;
    local_38 = 0;
    local_24 = 0;
    local_58 = 0;
    if (lVar11 != lVar12) {
      do {
        if (local_24 != *(int *)(param_1 + 0x7f8)) {
          FUN_01b9fb50(&local_68,&local_24);
          lVar11 = *(long *)(param_1 + 0x7c8);
          lVar12 = *(long *)(param_1 + 0x7c0);
        }
        puVar3 = PTR_DAT_04379678;
        local_24 = local_24 + 1;
      } while ((ulong)(long)local_24 < (ulong)(lVar11 - lVar12 >> 7));
      lVar11 = (long)local_60 - (long)local_68;
      if (lVar11 != 0) {
        uVar15 = lVar11 >> 2;
        bVar1 = *PTR_DAT_04379678;
        uVar7 = 0;
        plVar13 = (long *)PTR_DAT_04379680;
        plVar14 = (long *)PTR_DAT_04379688;
        while( true ) {
          if (((bVar1 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(puVar3), plVar13 = (long *)PTR_DAT_04379680,
             plVar14 = (long *)PTR_DAT_04379688, iVar5 != 0)) {
            FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
            __cxa_guard_release(puVar3);
            plVar13 = (long *)PTR_DAT_04379680;
            plVar14 = (long *)PTR_DAT_04379688;
          }
          lVar12 = *plVar13;
          *plVar14 = lVar12;
          puVar16 = *(ulong **)(lVar12 + 0xd8);
          if (lVar11 == 0) {
            uVar15 = *puVar16;
            uVar6 = puVar16[1] + uVar15;
            uVar17 = puVar16[1] ^ uVar15;
            *puVar16 = uVar17 ^ (uVar15 >> 0x28 | uVar15 << 0x18) ^ uVar17 << 0x10;
            puVar16[1] = uVar17 >> 0x1b | uVar17 << 0x25;
          }
          else if (lVar11 == 4) {
            uVar6 = 0;
          }
          else {
            lVar11 = 0x3f;
            if ((0x7fffffffffffffffU >> (LZCOUNT(uVar15) & 0x3fU) & uVar15) != 0) {
              lVar11 = 0x40;
            }
            uVar17 = lVar11 - LZCOUNT(uVar15);
            uVar6 = uVar17 >> 6;
            if ((uVar17 & 0x3f) != 0) {
              uVar6 = uVar6 + 1;
            }
            if (uVar17 < uVar6) {
              uVar17 = 0;
            }
            else {
              uVar8 = 0;
              if (uVar6 != 0) {
                uVar8 = uVar17 / uVar6;
              }
              uVar17 = 0xffffffffffffffff >> (-uVar8 & 0x3f);
            }
            uVar8 = *puVar16;
            uVar9 = puVar16[1];
            do {
              uVar10 = uVar8 ^ uVar9;
              uVar6 = uVar8 + uVar9;
              uVar9 = uVar10 >> 0x1b | uVar10 << 0x25;
              uVar6 = uVar6 & uVar17;
              uVar8 = uVar10 ^ (uVar8 >> 0x28 | uVar8 << 0x18) ^ uVar10 << 0x10;
            } while (uVar15 <= uVar6);
            *puVar16 = uVar8;
            puVar16[1] = uVar9;
          }
          uVar15 = -(uVar6 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar6 & 0xffffffff) << 2;
          uVar2 = local_68[uVar7];
          local_68[uVar7] = *(undefined4 *)((long)local_68 + uVar15);
          *(undefined4 *)((long)local_68 + uVar15) = uVar2;
          lVar11 = (long)local_60 - (long)local_68;
          uVar15 = lVar11 >> 2;
          if (uVar15 <= uVar7 + 1) break;
          bVar1 = *puVar3;
          uVar7 = uVar7 + 1;
        }
      }
    }
    plVar13 = plStack_50;
    puVar4 = local_68;
    *(undefined4 *)(param_1 + 0x7fc) = *(undefined4 *)(param_1 + 0x7f8);
    *(undefined4 *)(param_1 + 0x7f8) = *local_68;
    if (local_68 != (undefined4 *)0x0) {
      lVar11 = local_58 - (long)local_68;
      local_60 = local_68;
      uVar7 = (**(code **)(*plStack_50 + 0xc0))(plStack_50);
      if ((uVar7 & 1) != 0) {
        lVar12 = tpidr_el0;
        if (*(char *)(lVar12 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar12 + 0x38d488) = 1;
          *(undefined8 *)(lVar12 + 0x38d478) = 0;
          *(undefined8 *)(lVar12 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar12 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar12 + 0x38d480)) {
          FUN_02bcc824(plVar13,puVar4,lVar11,4);
          return;
        }
      }
      (**(code **)(*plVar13 + 0x18))(plVar13,puVar4,lVar11,4);
    }
  }
  return;
}


