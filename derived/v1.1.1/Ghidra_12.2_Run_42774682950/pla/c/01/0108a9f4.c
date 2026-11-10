/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0108a9f4; name: FUN_0108a9f4
 */


void FUN_0108a9f4(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  long local_e8;
  long local_e0;
  long local_d8;
  long *plStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long *plStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  long local_68;
  long *plStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  puVar12 = *(undefined8 **)(param_1 + 0x68);
  lVar16 = *(long *)(param_1 + 0x70) - (long)puVar12;
  uVar15 = lVar16 >> 5;
  uVar8 = uVar15 - 1;
  if (uVar15 == 0 || uVar8 == 0) {
    if (lVar16 == 0x20) {
      puVar11 = *(undefined8 **)(param_1 + 0x118);
      uVar2 = *puVar12;
      uVar4 = puVar12[1];
      uVar3 = puVar12[2];
      uVar5 = puVar12[3];
      puVar11[2] = uVar3;
      puVar11[3] = uVar5;
      *puVar11 = uVar2;
      puVar11[1] = uVar4;
      puVar12 = *(undefined8 **)(param_1 + 0xe0);
      *puVar12 = uVar2;
      puVar12[1] = uVar4;
      puVar12[2] = uVar3;
      puVar12[3] = uVar5;
      return;
    }
    return;
  }
  plStack_d0 = *(long **)(param_1 + 8);
  if (3 < uVar8) {
    uVar8 = 4;
  }
  uVar10 = uVar15 + uVar8 * 2;
  local_78 = (undefined8 *)0x0;
  local_70 = (undefined8 *)0x0;
  local_48 = 0;
  local_68 = 0;
  local_80 = 0;
  local_b8 = 0;
  local_58 = 0x7ffffffffffffff;
  uStack_50 = 0;
  local_a0 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_90 = 0x7ffffffffffffff;
  uStack_88 = 0;
  local_d8 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_c8 = 0x7ffffffffffffff;
  uStack_c0 = 0;
  plStack_98 = plStack_d0;
  plStack_60 = plStack_d0;
  if (uVar10 != 0) {
    FUN_0108bde4(&local_78,uVar10);
  }
  uVar9 = local_a8 - local_b0 >> 5;
  if (uVar10 < uVar9 || uVar10 - uVar9 == 0) {
    if (uVar10 < uVar9) {
      local_a8 = local_b0 + uVar10 * 0x20;
    }
  }
  else {
    FUN_0108bde4(&local_b0,uVar10 - uVar9);
  }
  uVar9 = local_e0 - local_e8 >> 5;
  if (uVar10 < uVar9 || uVar10 - uVar9 == 0) {
    if (uVar10 < uVar9) {
      local_e0 = local_e8 + uVar10 * 0x20;
    }
  }
  else {
    FUN_0108bde4(&local_e8,uVar10 - uVar9);
  }
  plVar14 = (long *)(param_1 + 0xe0);
  uVar10 = *(long *)(param_1 + 0xe8) - *plVar14 >> 5;
  if (uVar15 < uVar10 || uVar15 - uVar10 == 0) {
    if (uVar15 < uVar10) {
      *(ulong *)(param_1 + 0xe8) = *plVar14 + uVar15 * 0x20;
    }
  }
  else {
    FUN_0108bde4(plVar14,uVar15 - uVar10);
  }
  uVar10 = *(long *)(param_1 + 0x120) - *(long *)(param_1 + 0x118) >> 5;
  plVar1 = (long *)(param_1 + 0x118);
  if (uVar15 < uVar10 || uVar15 - uVar10 == 0) {
    if (uVar15 < uVar10) {
      *(ulong *)(param_1 + 0x120) = *(long *)(param_1 + 0x118) + uVar15 * 0x20;
    }
  }
  else {
    FUN_0108bde4(plVar1,uVar15 - uVar10);
  }
  if (uVar8 != 0) {
    lVar6 = uVar15 - uVar8;
    puVar12 = (undefined8 *)(*(long *)(param_1 + 0x68) + lVar6 * 0x20);
    uVar2 = *puVar12;
    uVar3 = puVar12[1];
    uVar4 = puVar12[3];
    local_78[2] = puVar12[2];
    local_78[3] = uVar4;
    *local_78 = uVar2;
    local_78[1] = uVar3;
    puVar11 = *(undefined8 **)(param_1 + 0x68);
    uVar2 = *puVar11;
    uVar3 = puVar11[1];
    uVar4 = puVar11[3];
    lVar7 = uVar8 + uVar15;
    puVar12 = local_78 + lVar7 * 4;
    puVar12[2] = puVar11[2];
    puVar12[3] = uVar4;
    *puVar12 = uVar2;
    puVar12[1] = uVar3;
    if (1 < uVar8) {
      lVar13 = *(long *)(param_1 + 0x68) + lVar6 * 0x20;
      uVar2 = *(undefined8 *)(lVar13 + 0x20);
      uVar3 = *(undefined8 *)(lVar13 + 0x28);
      uVar4 = *(undefined8 *)(lVar13 + 0x38);
      local_78[6] = *(undefined8 *)(lVar13 + 0x30);
      local_78[7] = uVar4;
      local_78[4] = uVar2;
      local_78[5] = uVar3;
      lVar13 = *(long *)(param_1 + 0x68);
      uVar2 = *(undefined8 *)(lVar13 + 0x20);
      uVar3 = *(undefined8 *)(lVar13 + 0x28);
      uVar4 = *(undefined8 *)(lVar13 + 0x38);
      local_78[lVar7 * 4 + 6] = *(undefined8 *)(lVar13 + 0x30);
      local_78[lVar7 * 4 + 7] = uVar4;
      local_78[lVar7 * 4 + 4] = uVar2;
      local_78[lVar7 * 4 + 5] = uVar3;
      if (2 < uVar8) {
        lVar13 = *(long *)(param_1 + 0x68) + lVar6 * 0x20;
        uVar2 = *(undefined8 *)(lVar13 + 0x40);
        uVar3 = *(undefined8 *)(lVar13 + 0x48);
        uVar4 = *(undefined8 *)(lVar13 + 0x58);
        local_78[10] = *(undefined8 *)(lVar13 + 0x50);
        local_78[0xb] = uVar4;
        local_78[8] = uVar2;
        local_78[9] = uVar3;
        lVar13 = *(long *)(param_1 + 0x68);
        uVar2 = *(undefined8 *)(lVar13 + 0x40);
        uVar3 = *(undefined8 *)(lVar13 + 0x48);
        uVar4 = *(undefined8 *)(lVar13 + 0x58);
        local_78[lVar7 * 4 + 10] = *(undefined8 *)(lVar13 + 0x50);
        local_78[lVar7 * 4 + 0xb] = uVar4;
        local_78[lVar7 * 4 + 8] = uVar2;
        local_78[lVar7 * 4 + 9] = uVar3;
        if (3 < uVar8) {
          lVar6 = *(long *)(param_1 + 0x68) + lVar6 * 0x20;
          uVar2 = *(undefined8 *)(lVar6 + 0x60);
          uVar3 = *(undefined8 *)(lVar6 + 0x68);
          uVar4 = *(undefined8 *)(lVar6 + 0x78);
          local_78[0xe] = *(undefined8 *)(lVar6 + 0x70);
          local_78[0xf] = uVar4;
          local_78[0xc] = uVar2;
          local_78[0xd] = uVar3;
          lVar6 = *(long *)(param_1 + 0x68);
          uVar2 = *(undefined8 *)(lVar6 + 0x60);
          uVar3 = *(undefined8 *)(lVar6 + 0x68);
          uVar4 = *(undefined8 *)(lVar6 + 0x78);
          local_78[lVar7 * 4 + 0xe] = *(undefined8 *)(lVar6 + 0x70);
          local_78[lVar7 * 4 + 0xf] = uVar4;
          local_78[lVar7 * 4 + 0xc] = uVar2;
          local_78[lVar7 * 4 + 0xd] = uVar3;
        }
      }
    }
  }
  if (lVar16 == 0) {
    FUN_0108b2bc(param_1,&local_78,&local_b0,&local_e8);
  }
  else {
    puVar11 = *(undefined8 **)(param_1 + 0x68);
    lVar16 = uVar8 * 0x20;
    puVar12 = local_78 + uVar8 * 4;
    uVar2 = *puVar11;
    uVar3 = puVar11[1];
    uVar4 = puVar11[3];
    puVar12[2] = puVar11[2];
    puVar12[3] = uVar4;
    *puVar12 = uVar2;
    puVar12[1] = uVar3;
    if (1 < uVar15) {
      lVar7 = *(long *)(param_1 + 0x68);
      uVar2 = *(undefined8 *)(lVar7 + 0x20);
      uVar3 = *(undefined8 *)(lVar7 + 0x28);
      uVar4 = *(undefined8 *)(lVar7 + 0x38);
      local_78[uVar8 * 4 + 6] = *(undefined8 *)(lVar7 + 0x30);
      local_78[uVar8 * 4 + 7] = uVar4;
      local_78[uVar8 * 4 + 4] = uVar2;
      local_78[uVar8 * 4 + 5] = uVar3;
      if (2 < uVar15) {
        lVar7 = *(long *)(param_1 + 0x68);
        uVar2 = *(undefined8 *)(lVar7 + 0x40);
        uVar3 = *(undefined8 *)(lVar7 + 0x48);
        uVar4 = *(undefined8 *)(lVar7 + 0x58);
        local_78[uVar8 * 4 + 10] = *(undefined8 *)(lVar7 + 0x50);
        local_78[uVar8 * 4 + 0xb] = uVar4;
        local_78[uVar8 * 4 + 8] = uVar2;
        local_78[uVar8 * 4 + 9] = uVar3;
        if (3 < uVar15) {
          lVar7 = *(long *)(param_1 + 0x68);
          uVar2 = *(undefined8 *)(lVar7 + 0x60);
          uVar3 = *(undefined8 *)(lVar7 + 0x68);
          uVar4 = *(undefined8 *)(lVar7 + 0x78);
          local_78[uVar8 * 4 + 0xe] = *(undefined8 *)(lVar7 + 0x70);
          local_78[uVar8 * 4 + 0xf] = uVar4;
          local_78[uVar8 * 4 + 0xc] = uVar2;
          local_78[uVar8 * 4 + 0xd] = uVar3;
          if (4 < uVar15) {
            lVar7 = *(long *)(param_1 + 0x68);
            uVar2 = *(undefined8 *)(lVar7 + 0x80);
            uVar3 = *(undefined8 *)(lVar7 + 0x88);
            uVar4 = *(undefined8 *)(lVar7 + 0x98);
            local_78[uVar8 * 4 + 0x12] = *(undefined8 *)(lVar7 + 0x90);
            local_78[uVar8 * 4 + 0x13] = uVar4;
            local_78[uVar8 * 4 + 0x10] = uVar2;
            local_78[uVar8 * 4 + 0x11] = uVar3;
            if (5 < uVar15) {
              lVar7 = *(long *)(param_1 + 0x68);
              uVar2 = *(undefined8 *)(lVar7 + 0xa0);
              uVar3 = *(undefined8 *)(lVar7 + 0xa8);
              uVar4 = *(undefined8 *)(lVar7 + 0xb8);
              local_78[uVar8 * 4 + 0x16] = *(undefined8 *)(lVar7 + 0xb0);
              local_78[uVar8 * 4 + 0x17] = uVar4;
              local_78[uVar8 * 4 + 0x14] = uVar2;
              local_78[uVar8 * 4 + 0x15] = uVar3;
              if (6 < uVar15) {
                uVar8 = 6;
                lVar7 = 0xc0;
                do {
                  puVar12 = (undefined8 *)(*(long *)(param_1 + 0x68) + lVar7);
                  uVar2 = *puVar12;
                  uVar3 = puVar12[1];
                  uVar4 = puVar12[3];
                  uVar8 = uVar8 + 1;
                  puVar11 = (undefined8 *)((long)local_78 + lVar7 + lVar16);
                  lVar7 = lVar7 + 0x20;
                  puVar11[2] = puVar12[2];
                  puVar11[3] = uVar4;
                  *puVar11 = uVar2;
                  puVar11[1] = uVar3;
                } while (uVar8 < uVar15);
              }
            }
          }
        }
      }
    }
    FUN_0108b2bc(param_1,&local_78,&local_b0,&local_e8);
    puVar12 = (undefined8 *)(local_b0 + lVar16);
    puVar11 = *(undefined8 **)(param_1 + 0xe0);
    uVar2 = *puVar12;
    uVar3 = puVar12[1];
    uVar4 = puVar12[3];
    puVar11[2] = puVar12[2];
    puVar11[3] = uVar4;
    *puVar11 = uVar2;
    puVar11[1] = uVar3;
    puVar12 = (undefined8 *)(local_e8 + lVar16);
    puVar11 = *(undefined8 **)(param_1 + 0x118);
    uVar2 = *puVar12;
    uVar3 = puVar12[1];
    uVar4 = puVar12[3];
    puVar11[2] = puVar12[2];
    puVar11[3] = uVar4;
    *puVar11 = uVar2;
    puVar11[1] = uVar3;
    if (1 < uVar15) {
      puVar12 = (undefined8 *)(local_b0 + lVar16 + 0x20);
      lVar7 = *plVar14;
      uVar2 = *puVar12;
      uVar3 = puVar12[1];
      uVar4 = puVar12[3];
      *(undefined8 *)(lVar7 + 0x30) = puVar12[2];
      *(undefined8 *)(lVar7 + 0x38) = uVar4;
      *(undefined8 *)(lVar7 + 0x20) = uVar2;
      *(undefined8 *)(lVar7 + 0x28) = uVar3;
      puVar12 = (undefined8 *)(local_e8 + lVar16 + 0x20);
      lVar7 = *plVar1;
      uVar2 = *puVar12;
      uVar3 = puVar12[1];
      uVar4 = puVar12[3];
      *(undefined8 *)(lVar7 + 0x30) = puVar12[2];
      *(undefined8 *)(lVar7 + 0x38) = uVar4;
      *(undefined8 *)(lVar7 + 0x20) = uVar2;
      *(undefined8 *)(lVar7 + 0x28) = uVar3;
      if (2 < uVar15) {
        puVar12 = (undefined8 *)(local_b0 + lVar16 + 0x40);
        lVar7 = *plVar14;
        uVar2 = *puVar12;
        uVar3 = puVar12[1];
        uVar4 = puVar12[3];
        *(undefined8 *)(lVar7 + 0x50) = puVar12[2];
        *(undefined8 *)(lVar7 + 0x58) = uVar4;
        *(undefined8 *)(lVar7 + 0x40) = uVar2;
        *(undefined8 *)(lVar7 + 0x48) = uVar3;
        puVar12 = (undefined8 *)(local_e8 + lVar16 + 0x40);
        lVar7 = *plVar1;
        uVar2 = *puVar12;
        uVar3 = puVar12[1];
        uVar4 = puVar12[3];
        *(undefined8 *)(lVar7 + 0x50) = puVar12[2];
        *(undefined8 *)(lVar7 + 0x58) = uVar4;
        *(undefined8 *)(lVar7 + 0x40) = uVar2;
        *(undefined8 *)(lVar7 + 0x48) = uVar3;
        if (3 < uVar15) {
          puVar12 = (undefined8 *)(local_b0 + lVar16 + 0x60);
          lVar7 = *plVar14;
          uVar2 = *puVar12;
          uVar3 = puVar12[1];
          uVar4 = puVar12[3];
          *(undefined8 *)(lVar7 + 0x70) = puVar12[2];
          *(undefined8 *)(lVar7 + 0x78) = uVar4;
          *(undefined8 *)(lVar7 + 0x60) = uVar2;
          *(undefined8 *)(lVar7 + 0x68) = uVar3;
          puVar12 = (undefined8 *)(local_e8 + lVar16 + 0x60);
          lVar7 = *plVar1;
          uVar2 = *puVar12;
          uVar3 = puVar12[1];
          uVar4 = puVar12[3];
          *(undefined8 *)(lVar7 + 0x70) = puVar12[2];
          *(undefined8 *)(lVar7 + 0x78) = uVar4;
          *(undefined8 *)(lVar7 + 0x60) = uVar2;
          *(undefined8 *)(lVar7 + 0x68) = uVar3;
          if (4 < uVar15) {
            puVar12 = (undefined8 *)(local_b0 + lVar16 + 0x80);
            lVar7 = *plVar14;
            uVar2 = *puVar12;
            uVar3 = puVar12[1];
            uVar4 = puVar12[3];
            *(undefined8 *)(lVar7 + 0x90) = puVar12[2];
            *(undefined8 *)(lVar7 + 0x98) = uVar4;
            *(undefined8 *)(lVar7 + 0x80) = uVar2;
            *(undefined8 *)(lVar7 + 0x88) = uVar3;
            puVar12 = (undefined8 *)(local_e8 + lVar16 + 0x80);
            lVar7 = *plVar1;
            uVar2 = *puVar12;
            uVar3 = puVar12[1];
            uVar4 = puVar12[3];
            *(undefined8 *)(lVar7 + 0x90) = puVar12[2];
            *(undefined8 *)(lVar7 + 0x98) = uVar4;
            *(undefined8 *)(lVar7 + 0x80) = uVar2;
            *(undefined8 *)(lVar7 + 0x88) = uVar3;
            if (5 < uVar15) {
              puVar12 = (undefined8 *)(local_b0 + lVar16 + 0xa0);
              lVar7 = *plVar14;
              uVar2 = *puVar12;
              uVar3 = puVar12[1];
              uVar4 = puVar12[3];
              *(undefined8 *)(lVar7 + 0xb0) = puVar12[2];
              *(undefined8 *)(lVar7 + 0xb8) = uVar4;
              *(undefined8 *)(lVar7 + 0xa0) = uVar2;
              *(undefined8 *)(lVar7 + 0xa8) = uVar3;
              puVar12 = (undefined8 *)(local_e8 + lVar16 + 0xa0);
              lVar7 = *plVar1;
              uVar2 = *puVar12;
              uVar3 = puVar12[1];
              uVar4 = puVar12[3];
              *(undefined8 *)(lVar7 + 0xb0) = puVar12[2];
              *(undefined8 *)(lVar7 + 0xb8) = uVar4;
              *(undefined8 *)(lVar7 + 0xa0) = uVar2;
              *(undefined8 *)(lVar7 + 0xa8) = uVar3;
              if (6 < uVar15) {
                uVar8 = 6;
                lVar7 = 0xc0;
                do {
                  puVar12 = (undefined8 *)(*plVar14 + lVar7);
                  puVar11 = (undefined8 *)(local_b0 + lVar16 + lVar7);
                  uVar8 = uVar8 + 1;
                  uVar2 = *puVar11;
                  uVar3 = puVar11[1];
                  uVar4 = puVar11[3];
                  puVar12[2] = puVar11[2];
                  puVar12[3] = uVar4;
                  *puVar12 = uVar2;
                  puVar12[1] = uVar3;
                  puVar12 = (undefined8 *)(*plVar1 + lVar7);
                  puVar11 = (undefined8 *)(local_e8 + lVar16 + lVar7);
                  lVar7 = lVar7 + 0x20;
                  uVar2 = *puVar11;
                  uVar3 = puVar11[1];
                  uVar4 = puVar11[3];
                  puVar12[2] = puVar11[2];
                  puVar12[3] = uVar4;
                  *puVar12 = uVar2;
                  puVar12[1] = uVar3;
                } while (uVar8 < uVar15);
              }
            }
          }
        }
      }
    }
  }
  plVar1 = plStack_d0;
  lVar7 = local_e8;
  lVar16 = local_b0;
  plVar14 = plStack_98;
  if (local_e8 != 0) {
    local_e0 = local_e8;
    lVar16 = local_d8 - local_e8;
    uVar8 = (**(code **)(*plStack_d0 + 0xc0))(plStack_d0);
    if ((uVar8 & 1) != 0) {
      lVar6 = tpidr_el0;
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar1,lVar7,lVar16,8);
        lVar16 = local_b0;
        plVar14 = plStack_98;
        goto joined_r0x0108af64;
      }
    }
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar7,lVar16,8);
    lVar16 = local_b0;
    plVar14 = plStack_98;
  }
joined_r0x0108af64:
  local_b0 = lVar16;
  plStack_98 = plVar14;
  puVar12 = local_78;
  plVar1 = plStack_60;
  if (lVar16 != 0) {
    lVar7 = local_a0 - lVar16;
    local_a8 = lVar16;
    uVar8 = (**(code **)(*plVar14 + 0xc0))(plVar14);
    if ((uVar8 & 1) != 0) {
      lVar6 = tpidr_el0;
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar14,lVar16,lVar7,8);
        puVar12 = local_78;
        plVar1 = plStack_60;
        goto joined_r0x0108b124;
      }
    }
    (**(code **)(*plVar14 + 0x18))(plVar14,lVar16,lVar7,8);
    puVar12 = local_78;
    plVar1 = plStack_60;
  }
joined_r0x0108b124:
  if (puVar12 != (undefined8 *)0x0) {
    lVar16 = local_68 - (long)puVar12;
    local_78 = puVar12;
    local_70 = puVar12;
    plStack_60 = plVar1;
    uVar8 = (**(code **)(*plVar1 + 0xc0))(plVar1);
    if ((uVar8 & 1) != 0) {
      lVar7 = tpidr_el0;
      if (*(char *)(lVar7 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar7 + 0x38d488) = 1;
        *(undefined8 *)(lVar7 + 0x38d478) = 0;
        *(undefined8 *)(lVar7 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar7 + 0x38d480)) {
        FUN_02bcc824(plVar1,puVar12,lVar16,8);
        return;
      }
    }
    (**(code **)(*plVar1 + 0x18))(plVar1,puVar12,lVar16,8);
  }
  return;
}


