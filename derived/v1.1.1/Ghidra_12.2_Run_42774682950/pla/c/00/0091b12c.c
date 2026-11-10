/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0091b12c; name: FUN_0091b12c
 */


void FUN_0091b12c(undefined8 param_1,long *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long local_208;
  undefined4 local_200;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined8 local_1a8 [3];
  undefined4 local_190 [2];
  undefined8 local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined4 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined4 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined4 local_130;
  int local_128;
  undefined1 local_124;
  undefined4 local_120;
  undefined8 local_118;
  undefined5 uStack_110;
  undefined3 local_10b;
  undefined5 uStack_108;
  undefined3 uStack_103;
  undefined4 local_100;
  undefined8 local_f8;
  undefined5 uStack_f0;
  undefined3 local_eb;
  undefined5 uStack_e8;
  undefined3 uStack_e3;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined5 uStack_d0;
  undefined3 local_cb;
  undefined8 uStack_c8;
  undefined4 local_c0 [2];
  undefined8 local_b8;
  undefined5 uStack_b0;
  undefined3 local_ab;
  undefined5 uStack_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined5 uStack_90;
  undefined3 local_8b;
  undefined5 uStack_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined5 uStack_70;
  undefined3 local_6b;
  undefined5 uStack_68;
  undefined4 local_60;
  undefined1 local_58;
  
  local_1e8 = *param_3;
  local_1e0 = param_3[1];
  local_1d8 = param_3[2];
  local_1d0 = *(undefined4 *)(param_3 + 3);
  local_1c8 = param_3[4];
  local_1c0 = param_3[5];
  local_1b8 = param_3[6];
  local_1b0 = *(undefined4 *)(param_3 + 7);
  local_190[0] = *(undefined4 *)(param_3 + 0xb);
  local_1a8[0] = param_3[8];
  local_1a8[1] = param_3[9];
  local_1a8[2] = param_3[10];
  local_170 = *(undefined4 *)(param_3 + 0xf);
  local_180 = param_3[0xd];
  uStack_178 = param_3[0xe];
  local_188 = param_3[0xc];
  local_150 = *(undefined4 *)(param_3 + 0x13);
  local_160 = param_3[0x11];
  uStack_158 = param_3[0x12];
  local_168 = param_3[0x10];
  local_130 = *(undefined4 *)(param_3 + 0x17);
  local_148 = param_3[0x14];
  local_140 = param_3[0x15];
  uStack_138 = param_3[0x16];
  local_128 = *(int *)(param_3 + 0x18);
  local_124 = *(undefined1 *)((long)param_3 + 0xc4);
  local_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_10b = 0;
  uStack_108 = 0;
  local_e0 = 0;
  local_a0 = 0;
  local_c0[0] = 0;
  local_60 = 0;
  local_80 = 0;
  local_120 = *(undefined4 *)(param_3 + 0x19);
  local_f8 = 0;
  uStack_f0 = 0;
  local_eb = 0;
  uStack_e8 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_cb = 0;
  uStack_c8._0_5_ = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_ab = 0;
  uStack_a8 = 0;
  uStack_88 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_8b = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_6b = 0;
  uStack_68 = 0;
  local_58 = *(undefined1 *)((long)param_3 + 0xc4);
  if (0 < local_128) {
    local_118 = local_1e8;
    uStack_110 = (undefined5)local_1e0;
    local_10b = (undefined3)((ulong)local_1e0 >> 0x28);
    uStack_108 = (undefined5)local_1d8;
    uStack_103 = (undefined3)((ulong)local_1d8 >> 0x28);
    local_100 = local_1d0;
    if (local_128 != 1) {
      local_f8 = local_1c8;
      uStack_f0 = (undefined5)local_1c0;
      local_eb = (undefined3)((ulong)local_1c0 >> 0x28);
      uStack_e8 = (undefined5)local_1b8;
      uStack_e3 = (undefined3)((ulong)local_1b8 >> 0x28);
      local_e0 = local_1b0;
      if (local_128 != 2) {
        lVar2 = (long)local_128 + -2;
        puVar4 = local_1a8;
        puVar3 = &local_d8;
        do {
          *(undefined4 *)(puVar3 + 3) = *(undefined4 *)(puVar4 + 3);
          uVar5 = puVar4[2];
          uVar1 = *puVar4;
          lVar2 = lVar2 + -1;
          puVar3[1] = puVar4[1];
          puVar3[2] = uVar5;
          puVar4 = puVar4 + 4;
          *puVar3 = uVar1;
          puVar3 = puVar3 + 4;
        } while (lVar2 != 0);
      }
    }
  }
  uVar1 = FUN_0091b868(&local_208,&local_118);
  if (local_208 != 0) {
    *param_2 = local_208;
    local_124 = *(undefined1 *)(*(long *)(local_208 + 0x70) + 0x7d);
    local_120 = local_200;
    FUN_0091adf0(uVar1,&local_1e8);
    local_100 = 0;
    local_118 = 0;
    uStack_110 = 0;
    local_10b = 0;
    uStack_108 = 0;
    local_e0 = 0;
    local_a0 = 0;
    local_c0[0] = 0;
    local_60 = 0;
    local_80 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_eb = 0;
    uStack_e8 = 0;
    uStack_c8._0_5_ = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_cb = 0;
    uStack_a8 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_ab = 0;
    uStack_88 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_8b = 0;
    uStack_68 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_6b = 0;
    local_58 = local_124;
    if (0 < local_128) {
      local_118 = local_1e8;
      uStack_110 = (undefined5)local_1e0;
      local_10b = (undefined3)((ulong)local_1e0 >> 0x28);
      uStack_108 = (undefined5)local_1d8;
      uStack_103 = (undefined3)((ulong)local_1d8 >> 0x28);
      local_100 = local_1d0;
      if (local_128 != 1) {
        local_f8 = local_1c8;
        uStack_f0 = (undefined5)local_1c0;
        local_eb = (undefined3)((ulong)local_1c0 >> 0x28);
        uStack_e8 = (undefined5)local_1b8;
        uStack_e3 = (undefined3)((ulong)local_1b8 >> 0x28);
        local_e0 = local_1b0;
        if (local_128 != 2) {
          lVar2 = (long)local_128 + -2;
          puVar4 = local_1a8;
          puVar3 = &local_d8;
          do {
            *(undefined4 *)(puVar3 + 3) = *(undefined4 *)(puVar4 + 3);
            uVar5 = puVar4[2];
            uVar1 = *puVar4;
            lVar2 = lVar2 + -1;
            puVar3[1] = puVar4[1];
            puVar3[2] = uVar5;
            puVar4 = puVar4 + 4;
            *puVar3 = uVar1;
            puVar3 = puVar3 + 4;
          } while (lVar2 != 0);
        }
      }
    }
    uVar1 = FUN_0091b868(&local_208,&local_118);
    if (local_208 != 0) {
      param_2[1] = local_208;
      local_124 = *(undefined1 *)(*(long *)(local_208 + 0x70) + 0x7d);
      local_120 = local_200;
      FUN_0091adf0(uVar1,&local_1e8);
      local_100 = 0;
      local_118 = 0;
      uStack_110 = 0;
      local_10b = 0;
      uStack_108 = 0;
      local_e0 = 0;
      local_a0 = 0;
      local_c0[0] = 0;
      local_60 = 0;
      local_80 = 0;
      local_f8 = 0;
      uStack_f0 = 0;
      local_eb = 0;
      uStack_e8 = 0;
      uStack_c8._0_5_ = 0;
      local_d8 = 0;
      uStack_d0 = 0;
      local_cb = 0;
      uStack_a8 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_ab = 0;
      uStack_88 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_8b = 0;
      uStack_68 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_6b = 0;
      local_58 = local_124;
      if (0 < local_128) {
        local_118 = local_1e8;
        uStack_110 = (undefined5)local_1e0;
        local_10b = (undefined3)((ulong)local_1e0 >> 0x28);
        uStack_108 = (undefined5)local_1d8;
        uStack_103 = (undefined3)((ulong)local_1d8 >> 0x28);
        local_100 = local_1d0;
        if (local_128 != 1) {
          local_f8 = local_1c8;
          uStack_f0 = (undefined5)local_1c0;
          local_eb = (undefined3)((ulong)local_1c0 >> 0x28);
          uStack_e8 = (undefined5)local_1b8;
          uStack_e3 = (undefined3)((ulong)local_1b8 >> 0x28);
          local_e0 = local_1b0;
          if (local_128 != 2) {
            lVar2 = (long)local_128 + -2;
            puVar4 = local_1a8;
            puVar3 = &local_d8;
            do {
              *(undefined4 *)(puVar3 + 3) = *(undefined4 *)(puVar4 + 3);
              uVar5 = puVar4[2];
              uVar1 = *puVar4;
              lVar2 = lVar2 + -1;
              puVar3[1] = puVar4[1];
              puVar3[2] = uVar5;
              puVar4 = puVar4 + 4;
              *puVar3 = uVar1;
              puVar3 = puVar3 + 4;
            } while (lVar2 != 0);
          }
        }
      }
      uVar1 = FUN_0091b868(&local_208,&local_118);
      if (local_208 != 0) {
        param_2[2] = local_208;
        local_124 = *(undefined1 *)(*(long *)(local_208 + 0x70) + 0x7d);
        local_120 = local_200;
        FUN_0091adf0(uVar1,&local_1e8);
        local_100 = 0;
        local_118 = 0;
        uStack_110 = 0;
        local_10b = 0;
        uStack_108 = 0;
        local_e0 = 0;
        local_a0 = 0;
        local_c0[0] = 0;
        local_60 = 0;
        local_80 = 0;
        local_f8 = 0;
        uStack_f0 = 0;
        local_eb = 0;
        uStack_e8 = 0;
        uStack_c8._0_5_ = 0;
        local_d8 = 0;
        uStack_d0 = 0;
        local_cb = 0;
        uStack_a8 = 0;
        local_b8 = 0;
        uStack_b0 = 0;
        local_ab = 0;
        uStack_88 = 0;
        local_98 = 0;
        uStack_90 = 0;
        local_8b = 0;
        uStack_68 = 0;
        local_78 = 0;
        uStack_70 = 0;
        local_6b = 0;
        local_58 = local_124;
        if (0 < local_128) {
          local_118 = local_1e8;
          uStack_110 = (undefined5)local_1e0;
          local_10b = (undefined3)((ulong)local_1e0 >> 0x28);
          uStack_108 = (undefined5)local_1d8;
          uStack_103 = (undefined3)((ulong)local_1d8 >> 0x28);
          local_100 = local_1d0;
          if (local_128 != 1) {
            local_f8 = local_1c8;
            uStack_f0 = (undefined5)local_1c0;
            local_eb = (undefined3)((ulong)local_1c0 >> 0x28);
            uStack_e8 = (undefined5)local_1b8;
            uStack_e3 = (undefined3)((ulong)local_1b8 >> 0x28);
            local_e0 = local_1b0;
            if (local_128 != 2) {
              lVar2 = (long)local_128 + -2;
              puVar4 = local_1a8;
              puVar3 = &local_d8;
              do {
                *(undefined4 *)(puVar3 + 3) = *(undefined4 *)(puVar4 + 3);
                uVar5 = puVar4[2];
                uVar1 = *puVar4;
                lVar2 = lVar2 + -1;
                puVar3[1] = puVar4[1];
                puVar3[2] = uVar5;
                puVar4 = puVar4 + 4;
                *puVar3 = uVar1;
                puVar3 = puVar3 + 4;
              } while (lVar2 != 0);
            }
          }
        }
        uVar1 = FUN_0091b868(&local_208,&local_118);
        if (local_208 != 0) {
          param_2[3] = local_208;
          local_124 = *(undefined1 *)(*(long *)(local_208 + 0x70) + 0x7d);
          local_120 = local_200;
          FUN_0091adf0(uVar1,&local_1e8);
          local_100 = 0;
          local_118 = 0;
          uStack_110 = 0;
          local_10b = 0;
          uStack_108 = 0;
          local_e0 = 0;
          local_a0 = 0;
          local_c0[0] = 0;
          local_60 = 0;
          local_80 = 0;
          local_f8 = 0;
          uStack_f0 = 0;
          local_eb = 0;
          uStack_e8 = 0;
          uStack_c8._0_5_ = 0;
          local_d8 = 0;
          uStack_d0 = 0;
          local_cb = 0;
          uStack_a8 = 0;
          local_b8 = 0;
          uStack_b0 = 0;
          local_ab = 0;
          uStack_88 = 0;
          local_98 = 0;
          uStack_90 = 0;
          local_8b = 0;
          uStack_68 = 0;
          local_78 = 0;
          uStack_70 = 0;
          local_6b = 0;
          local_58 = local_124;
          if (0 < local_128) {
            local_118 = local_1e8;
            uStack_110 = (undefined5)local_1e0;
            local_10b = (undefined3)((ulong)local_1e0 >> 0x28);
            uStack_108 = (undefined5)local_1d8;
            uStack_103 = (undefined3)((ulong)local_1d8 >> 0x28);
            local_100 = local_1d0;
            if (local_128 != 1) {
              local_f8 = local_1c8;
              uStack_f0 = (undefined5)local_1c0;
              local_eb = (undefined3)((ulong)local_1c0 >> 0x28);
              uStack_e8 = (undefined5)local_1b8;
              uStack_e3 = (undefined3)((ulong)local_1b8 >> 0x28);
              local_e0 = local_1b0;
              if (local_128 != 2) {
                lVar2 = (long)local_128 + -2;
                puVar4 = local_1a8;
                puVar3 = &local_d8;
                do {
                  *(undefined4 *)(puVar3 + 3) = *(undefined4 *)(puVar4 + 3);
                  uVar5 = puVar4[2];
                  uVar1 = *puVar4;
                  lVar2 = lVar2 + -1;
                  puVar3[1] = puVar4[1];
                  puVar3[2] = uVar5;
                  puVar4 = puVar4 + 4;
                  *puVar3 = uVar1;
                  puVar3 = puVar3 + 4;
                } while (lVar2 != 0);
              }
            }
          }
          uVar1 = FUN_0091b868(&local_208,&local_118);
          if (local_208 != 0) {
            param_2[4] = local_208;
            local_124 = *(undefined1 *)(*(long *)(local_208 + 0x70) + 0x7d);
            local_120 = local_200;
            FUN_0091adf0(uVar1,&local_1e8);
            local_100 = 0;
            local_118 = 0;
            uStack_110 = 0;
            local_10b = 0;
            uStack_108 = 0;
            local_e0 = 0;
            local_a0 = 0;
            local_c0[0] = 0;
            local_60 = 0;
            local_80 = 0;
            local_f8 = 0;
            uStack_f0 = 0;
            local_eb = 0;
            uStack_e8 = 0;
            uStack_c8._0_5_ = 0;
            local_d8 = 0;
            uStack_d0 = 0;
            local_cb = 0;
            uStack_a8 = 0;
            local_b8 = 0;
            uStack_b0 = 0;
            local_ab = 0;
            uStack_88 = 0;
            local_98 = 0;
            uStack_90 = 0;
            local_8b = 0;
            uStack_68 = 0;
            local_78 = 0;
            uStack_70 = 0;
            local_6b = 0;
            local_58 = local_124;
            if (0 < local_128) {
              local_118 = local_1e8;
              uStack_110 = (undefined5)local_1e0;
              local_10b = (undefined3)((ulong)local_1e0 >> 0x28);
              uStack_108 = (undefined5)local_1d8;
              uStack_103 = (undefined3)((ulong)local_1d8 >> 0x28);
              local_100 = local_1d0;
              if (local_128 != 1) {
                local_f8 = local_1c8;
                uStack_f0 = (undefined5)local_1c0;
                local_eb = (undefined3)((ulong)local_1c0 >> 0x28);
                uStack_e8 = (undefined5)local_1b8;
                uStack_e3 = (undefined3)((ulong)local_1b8 >> 0x28);
                local_e0 = local_1b0;
                if (local_128 != 2) {
                  lVar2 = (long)local_128 + -2;
                  puVar4 = local_1a8;
                  puVar3 = &local_d8;
                  do {
                    *(undefined4 *)(puVar3 + 3) = *(undefined4 *)(puVar4 + 3);
                    uVar5 = puVar4[2];
                    uVar1 = *puVar4;
                    lVar2 = lVar2 + -1;
                    puVar3[1] = puVar4[1];
                    puVar3[2] = uVar5;
                    puVar4 = puVar4 + 4;
                    *puVar3 = uVar1;
                    puVar3 = puVar3 + 4;
                  } while (lVar2 != 0);
                }
              }
            }
            uVar1 = FUN_0091b868(&local_208,&local_118);
            if (local_208 != 0) {
              param_2[5] = local_208;
              local_124 = *(undefined1 *)(*(long *)(local_208 + 0x70) + 0x7d);
              local_120 = local_200;
              FUN_0091adf0(uVar1,&local_1e8);
            }
          }
        }
      }
    }
  }
  return;
}


