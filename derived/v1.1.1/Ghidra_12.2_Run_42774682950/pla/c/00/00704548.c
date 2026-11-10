/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00704548; name: FUN_00704548
 */


void FUN_00704548(undefined8 param_1,undefined8 param_2,long *param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  byte *pbVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong *puVar8;
  long lVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong local_118;
  ulong uStack_110;
  ulong local_108;
  long *plStack_100;
  undefined1 auStack_f8 [8];
  ulong local_f0;
  ulong uStack_e8;
  ulong local_e0;
  long *plStack_d8;
  ulong *local_d0;
  ulong local_c8;
  ulong uStack_c0;
  ulong local_b8;
  ulong *local_b0;
  ulong *puStack_a8;
  ulong *local_a0;
  long *local_98 [2];
  ulong *local_88;
  ulong *local_80;
  ulong *puStack_78;
  ulong *local_70;
  long **pplStack_68;
  
  local_b0 = (ulong *)0x0;
  puStack_a8 = (ulong *)0x0;
  local_a0 = (ulong *)0x0;
  local_98[0] = (long *)FUN_00612290();
  puVar11 = (ulong *)*param_3;
  puVar3 = (ulong *)param_3[1];
  if (puVar11 != puVar3) {
    do {
                    /* try { // try from 007045e8 to 007045ef has its CatchHandler @ 007049fc */
      FUN_02cd57dc(&local_118,puVar11 + 4);
      if (&local_118 != puVar11) {
        uVar10 = puVar11[1];
        pbVar4 = (byte *)puVar11[2];
        if (((byte)*puVar11 & 1) == 0) {
          pbVar4 = (byte *)((long)puVar11 + 1);
          uVar10 = (ulong)(byte)((byte)*puVar11 >> 1);
        }
                    /* try { // try from 00704610 to 00704617 has its CatchHandler @ 0070496c */
        FUN_02762710(&local_118,pbVar4,uVar10);
      }
      puVar2 = puStack_a8;
      if (puStack_a8 < local_a0) {
        puStack_a8[1] = uStack_110;
        *puStack_a8 = local_118;
        puStack_a8[3] = (ulong)plStack_100;
        puStack_a8[2] = local_108;
        local_118 = 0;
        uStack_110 = 0;
        local_108 = 0;
        FUN_006d9e70(puStack_a8 + 4,auStack_f8);
        puVar2[8] = (ulong)plStack_d8;
        puVar2[7] = local_e0;
        puVar2[6] = uStack_e8;
        puVar2[5] = local_f0;
        local_e0 = 0;
        local_f0 = 0;
        uStack_e8 = 0;
        puVar2[9] = (ulong)local_d0;
        puVar1 = puVar2 + 10;
        puVar2[0xb] = uStack_c0;
        puVar2[10] = local_c8;
        puVar2[0xc] = local_b8;
        if (local_b8 == 0) {
          puVar2[9] = (ulong)puVar1;
        }
        else {
          *(ulong **)(*puVar1 + 0x10) = puVar1;
          local_b8 = 0;
          local_c8 = 0;
          local_d0 = &local_c8;
        }
        puStack_a8 = puStack_a8 + 0xd;
      }
      else {
        lVar9 = (long)puStack_a8 - (long)local_b0 >> 3;
        uVar10 = lVar9 * 0x4ec4ec4ec4ec4ec5 + 1;
        if (0x276276276276276 < uVar10) {
                    /* try { // try from 00704960 to 00704967 has its CatchHandler @ 00704968 */
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar5 = (long)local_a0 - (long)local_b0 >> 3;
        pplStack_68 = local_98;
        if ((ulong)(lVar5 * 0x4ec4ec4ec4ec4ec5) < 0x13b13b13b13b13b) {
          uVar6 = lVar5 * -0x6276276276276276;
          if (uVar10 <= uVar6) {
            uVar10 = uVar6;
          }
          if (uVar10 != 0) goto LAB_007046f8;
          local_88 = (ulong *)0x0;
        }
        else {
          uVar10 = 0x276276276276276;
LAB_007046f8:
          local_70 = (ulong *)0x0;
          local_88 = (ulong *)(**(code **)(*local_98[0] + 0x10))(local_98[0],uVar10 * 0x68,8);
        }
        puVar8 = local_88 + lVar9;
        local_70 = local_88 + uVar10 * 0xd;
        puVar8[1] = uStack_110;
        *puVar8 = local_118;
        puVar8[3] = (ulong)plStack_100;
        puVar8[2] = local_108;
        local_118 = 0;
        uStack_110 = 0;
        local_108 = 0;
        local_80 = puVar8;
        puStack_78 = puVar8;
        FUN_006d9e70(puVar8 + 4,auStack_f8);
        puVar1 = puStack_a8;
        puVar8[8] = (ulong)plStack_d8;
        puVar8[7] = local_e0;
        puVar8[6] = uStack_e8;
        puVar8[5] = local_f0;
        local_e0 = 0;
        local_f0 = 0;
        uStack_e8 = 0;
        puVar8[9] = (ulong)local_d0;
        puVar8[0xb] = uStack_c0;
        puVar8[10] = local_c8;
        puVar2 = puVar8 + 10;
        puVar8[0xc] = local_b8;
        if (local_b8 == 0) {
          puVar8[9] = (ulong)puVar2;
        }
        else {
          *(ulong **)(*puVar2 + 0x10) = puVar2;
          local_b8 = 0;
          local_c8 = 0;
          local_d0 = &local_c8;
        }
        puStack_78 = puStack_78 + 0xd;
        if (puStack_a8 == local_b0) {
          puStack_a8 = local_b0;
        }
        else {
          lVar5 = 0;
          lVar9 = (long)local_b0 - (long)puStack_a8;
          do {
            puVar2 = local_80;
            uVar6 = *(ulong *)((long)puVar1 + lVar5 + -0x60);
            uVar10 = *(ulong *)((long)puVar1 + lVar5 + -0x68);
            uVar12 = *(ulong *)((long)puVar1 + lVar5 + -0x58);
            local_80[-10] = *(ulong *)((long)puVar1 + lVar5 + -0x50);
            local_80[-0xb] = uVar12;
            local_80[-0xc] = uVar6;
            local_80[-0xd] = uVar10;
            *(undefined8 *)((long)puVar1 + lVar5 + -0x68) = 0;
            *(undefined8 *)((long)puVar1 + lVar5 + -0x60) = 0;
            *(undefined8 *)((long)puVar1 + lVar5 + -0x58) = 0;
            FUN_006d9e70(local_80 + -9,(long)puVar1 + lVar5 + -0x48);
            uVar10 = *(ulong *)((long)puVar1 + lVar5 + -0x40);
            uVar12 = *(ulong *)((long)puVar1 + lVar5 + -0x28);
            uVar6 = *(ulong *)((long)puVar1 + lVar5 + -0x30);
            puVar2[-7] = *(ulong *)((long)puVar1 + lVar5 + -0x38);
            puVar2[-8] = uVar10;
            puVar2[-5] = uVar12;
            puVar2[-6] = uVar6;
            *(undefined8 *)((long)puVar1 + lVar5 + -0x40) = 0;
            *(undefined8 *)((long)puVar1 + lVar5 + -0x38) = 0;
            *(undefined8 *)((long)puVar1 + lVar5 + -0x30) = 0;
            puVar2[-4] = *(ulong *)((long)puVar1 + lVar5 + -0x20);
            uVar10 = *(ulong *)((long)puVar1 + lVar5 + -0x18);
            puVar8 = puVar2 + -3;
            puVar2[-2] = *(ulong *)((long)puVar1 + lVar5 + -0x10);
            puVar2[-3] = uVar10;
            uVar10 = *(ulong *)((long)puVar1 + lVar5 + -8);
            puVar2[-1] = uVar10;
            if (uVar10 == 0) {
              puVar2[-4] = (ulong)puVar8;
            }
            else {
              *(ulong **)(*puVar8 + 0x10) = puVar8;
              puVar7 = (undefined8 *)((long)puVar1 + lVar5 + -0x18);
              *puVar7 = 0;
              *(undefined8 **)((long)puVar1 + lVar5 + -0x20) = puVar7;
              *(undefined8 *)((long)puVar1 + lVar5 + -8) = 0;
            }
            lVar5 = lVar5 + -0x68;
            local_80 = local_80 + -0xd;
          } while (lVar9 != lVar5);
        }
        puVar2 = local_a0;
        local_a0 = local_70;
        local_70 = puVar2;
        local_88 = local_b0;
        local_b0 = local_80;
        puVar2 = puStack_a8;
        puStack_a8 = puStack_78;
        local_80 = local_88;
        puStack_78 = puVar2;
        FUN_006f5904(&local_88);
      }
      FUN_02cd5c94(&local_d0,local_c8);
      if ((local_f0 & 1) == 0) {
        FUN_006d9cd8(auStack_f8);
      }
      else {
        (**(code **)(*plStack_d8 + 0x18))(plStack_d8,local_e0,local_f0 & 0xfffffffffffffffe,1);
        FUN_006d9cd8(auStack_f8);
      }
      if ((local_118 & 1) != 0) {
        (**(code **)(*plStack_100 + 0x18))(plStack_100,local_108,local_118 & 0xfffffffffffffffe,1);
      }
      puVar11 = puVar11 + 0x11;
    } while (puVar11 != puVar3);
  }
  FUN_00703e6c(param_1,param_2,&local_b0,param_3 + 4);
  FUN_006f5b4c(&local_b0);
  return;
}


