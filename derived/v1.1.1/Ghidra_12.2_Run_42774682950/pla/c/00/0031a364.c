/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0031a364; name: FUN_0031a364
 */


/* WARNING: Type propagation algorithm not settling */

ushort * FUN_0031a364(undefined8 *param_1,ushort *param_2,long param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  ulong *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined8 *puVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  ushort *puVar17;
  undefined1 auVar18 [12];
  undefined1 auVar19 [16];
  long local_f0;
  long local_e8;
  undefined8 *puStack_e0;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long local_a8;
  int local_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 uStack_88;
  ulong local_80;
  ulong local_78;
  undefined8 *local_70;
  ushort *local_68;
  
  local_68 = param_2;
  puVar6 = (ulong *)FUN_00380d8c(param_1[2],*param_1);
  local_80 = 0;
  uVar16 = 0;
  local_78 = 0;
  local_70 = (undefined8 *)0x0;
LAB_0031a3f8:
  do {
                    /* try { // try from 0031a3fc to 0031a407 has its CatchHandler @ 0031a910 */
    uVar7 = FUN_0030c7bc(param_3,&local_68,*(undefined4 *)(param_3 + 0x5c));
    puVar17 = local_68;
    if ((uVar7 & 1) != 0) {
joined_r0x0031a8a8:
      if ((local_80 & 1) == 0) {
        return puVar17;
      }
LAB_0031a844:
      FUN_002e2ea0(PTR_LAB_04373088,local_70);
      return puVar17;
    }
    puVar17 = (ushort *)((long)local_68 + 1);
    bVar3 = (byte)*local_68;
    auVar19[8] = bVar3;
    auVar19._0_8_ = puVar17;
    auVar19._9_7_ = 0;
    uVar12 = (uint)bVar3;
    if (bVar3 == 0x1a) {
      if (uVar16 == 0) {
        if (-1 < (char)*(byte *)puVar17) {
          auVar18[8] = *(byte *)puVar17;
          auVar18._0_8_ = local_68 + 1;
          auVar18._9_3_ = 0;
LAB_0031a604:
          local_68 = auVar18._0_8_;
          puVar17 = local_68;
          lVar8 = (long)auVar18._8_4_;
          if ((*(long *)(param_3 + 8) - (long)local_68) + 0x10 < lVar8) {
            local_68 = (ushort *)FUN_00322ab0(param_3,local_68,auVar18._8_4_,&local_80);
            uVar16 = 0;
          }
          else {
            FUN_00291910(&local_80,local_68,lVar8);
            local_68 = (ushort *)((long)puVar17 + lVar8);
            uVar16 = 0;
          }
          goto joined_r0x0031a65c;
        }
        local_68 = puVar17;
                    /* try { // try from 0031a5f0 to 0031a64f has its CatchHandler @ 0031a8d0 */
        auVar18 = FUN_003232c0(puVar17);
        local_68 = auVar18._0_8_;
        if (local_68 != (ushort *)0x0) goto LAB_0031a604;
      }
      else {
        local_68 = puVar17;
                    /* try { // try from 0031a4d0 to 0031a4ef has its CatchHandler @ 0031a900 */
        lVar8 = FUN_00343aac(param_1[1],uVar16);
        if (lVar8 == 0) {
          uVar11 = 0;
        }
        else if (*(long *)(param_3 + 0x60) == 0) {
                    /* try { // try from 0031a5e0 to 0031a5e7 has its CatchHandler @ 0031a900 */
          uVar11 = FUN_0038e3e8(param_1[2],uVar16);
        }
        else {
          uVar11 = FUN_003425d4(*(long *)(param_3 + 0x60),param_1[1],uVar16);
        }
                    /* try { // try from 0031a3e4 to 0031a3eb has its CatchHandler @ 0031a900 */
        local_68 = (ushort *)
                   FUN_003126b4(*param_1,local_68,param_3,(ulong)uVar16 << 3 | 2,param_1[2],uVar11);
        uVar16 = 0;
joined_r0x0031a65c:
        if (local_68 != (ushort *)0x0) goto LAB_0031a3f8;
      }
      puVar17 = (ushort *)0x0;
      if ((local_80 & 1) == 0) {
        return (ushort *)0x0;
      }
      goto LAB_0031a844;
    }
    if (bVar3 != 0x10) {
      if ((char)bVar3 < '\0') {
        iVar5 = (uint)bVar3 + (uint)*(byte *)puVar17 * 0x80 + -0x80;
        if ((char)*(byte *)puVar17 < '\0') {
          local_68 = puVar17;
                    /* try { // try from 0031a664 to 0031a667 has its CatchHandler @ 0031a8e0 */
          auVar19 = FUN_00323230();
          local_68 = auVar19._0_8_;
          if (auVar19._8_4_ != 0) goto LAB_0031a504;
          uVar12 = 0;
        }
        else {
          local_68 = local_68 + 1;
          auVar19._8_4_ = iVar5;
          auVar19._0_8_ = local_68;
          auVar19._12_4_ = 0;
          if (iVar5 == 0) {
            uVar12 = 0;
          }
          else {
LAB_0031a504:
            local_68 = auVar19._0_8_;
            uVar12 = auVar19._8_4_;
            if ((uVar12 & 7) != 4) {
                    /* try { // try from 0031a510 to 0031a523 has its CatchHandler @ 0031a8e0 */
              local_68 = (ushort *)FUN_00323c60(auVar19._8_8_ & 0xffffffff,0,local_68,param_3);
              goto joined_r0x0031a65c;
            }
          }
        }
      }
      else {
        local_68 = puVar17;
        if (bVar3 != 0) goto LAB_0031a504;
      }
      *(uint *)(param_3 + 0x50) = uVar12 - 1;
      puVar17 = local_68;
      goto joined_r0x0031a8a8;
    }
    uVar4 = *puVar17;
    uVar14 = (uint)(char)uVar4;
    uVar12 = uVar14 + uVar4;
    uVar1 = uVar12 & (int)((uint)uVar4 << 0x18) >> 0x17;
    uVar16 = uVar1 >> 1;
    if ((uVar1 >> 0xf & 1) != 0) {
      puVar17 = (ushort *)((long)local_68 + 3);
      uVar4 = *puVar17;
      uVar14 = (uint)(char)uVar4;
      uVar12 = uVar14 + uVar4;
      uVar1 = uVar12 & (int)((uint)uVar4 << 0x18) >> 0x17;
      uVar16 = (uVar16 + uVar1 * 0x2000) - 0x4000;
      if ((uVar1 >> 0xf & 1) != 0) {
        puVar17 = (ushort *)((long)local_68 + 5);
        uVar4 = *puVar17;
        uVar14 = (uint)(char)uVar4;
        uVar12 = uVar14 + uVar4;
        uVar1 = uVar12 & (int)((uint)uVar4 << 0x18) >> 0x17;
        iVar5 = uVar16 + uVar1 * 0x8000000;
        uVar16 = iVar5 + 0xf0000000;
        if ((uVar1 >> 0xf & 1) != 0) {
          puVar17 = (ushort *)((long)local_68 + 7);
          uVar4 = *puVar17;
          uVar14 = (uint)(char)uVar4;
          uVar12 = uVar14 + uVar4;
          if (((uVar12 & (uint)uVar4 << 8) >> 0xf & 1) == 0) {
            uVar16 = iVar5 + 0xf0000000;
          }
          else {
            puVar17 = (ushort *)((long)local_68 + 9);
            uVar4 = *puVar17;
            uVar14 = (uint)(char)uVar4;
            uVar12 = uVar14 + uVar4;
            if (((uVar12 & (uint)uVar4 << 8) >> 0xf & 1) != 0) {
              local_68 = (ushort *)0x0;
              puVar17 = (ushort *)0x0;
              goto joined_r0x0031a8a8;
            }
            uVar16 = iVar5 + 0xf0000000;
          }
        }
      }
    }
    lVar8 = 1;
    if (uVar12 < uVar14) {
      lVar8 = 2;
    }
    local_68 = (ushort *)((long)puVar17 + lVar8);
    uVar7 = local_80 >> 1 & 0x7f;
    if ((local_80 & 1) != 0) {
      uVar7 = local_78;
    }
    if (uVar7 != 0) {
      if (*(long *)(param_3 + 0x60) == 0) {
                    /* try { // try from 0031a58c to 0031a5d3 has its CatchHandler @ 0031a8f0 */
        lVar8 = FUN_0038e3e8(param_1[2],uVar16);
      }
      else {
                    /* try { // try from 0031a488 to 0031a49f has its CatchHandler @ 0031a8f0 */
        lVar8 = FUN_003425d4(*(long *)(param_3 + 0x60),param_1[1],uVar16);
      }
      if ((lVar8 == 0) || (lVar9 = FUN_00342dac(lVar8), lVar9 == 0)) {
        uVar7 = local_78;
        puVar2 = (undefined8 *)((ulong)&local_80 | 1);
        if ((local_80 & 1) != 0) {
          puVar2 = local_70;
        }
        if ((local_80 & 1) == 0) {
          uVar7 = local_80 >> 1 & 0x7f;
          uVar15 = *puVar6;
          if ((uVar15 & 1) == 0) goto LAB_0031a804;
LAB_0031a5b8:
          lVar8 = (uVar15 & 0xfffffffffffffffe) + 8;
        }
        else {
          if ((long)local_78 < 0) {
            FUN_0031f284(local_78,"size_t to int conversion");
          }
          uVar15 = *puVar6;
          if ((uVar15 & 1) != 0) goto LAB_0031a5b8;
LAB_0031a804:
                    /* try { // try from 0031a804 to 0031a80b has its CatchHandler @ 0031a8f0 */
          lVar8 = FUN_0030c8c0(puVar6);
        }
        uVar11 = FUN_0030d8b4(lVar8,uVar16);
        FUN_00291910(uVar11,puVar2,uVar7);
        uVar16 = 0;
      }
      else {
        if (*(int *)(lVar8 + 0x3c) == 3) {
                    /* try { // try from 0031a4bc to 0031a4c3 has its CatchHandler @ 0031a8b0 */
          plVar10 = (long *)FUN_0038d598(param_1[2],*param_1,lVar8);
        }
        else {
                    /* try { // try from 0031a678 to 0031a67f has its CatchHandler @ 0031a8b0 */
          plVar10 = (long *)FUN_0038c3b8(param_1[2],*param_1,lVar8,*(undefined8 *)(param_3 + 0x68));
        }
        uVar7 = local_78;
        uStack_98 = *(undefined4 *)(param_3 + 0x58);
        local_a0 = 0;
        uStack_b8 = 0;
        local_c0 = 0;
        local_a8 = 0;
        uStack_b0 = 0;
        uStack_c8 = 0;
        local_d0 = 0;
        local_9c = 0x7fffffff;
        local_94 = 0x80000000;
        puVar2 = (undefined8 *)((ulong)&local_80 | 1);
        if ((local_80 & 1) != 0) {
          puVar2 = local_70;
        }
        local_90 = 0;
        uStack_88 = 0;
        if ((local_80 & 1) == 0) {
          uVar7 = local_80 >> 1 & 0x7f;
          if (uVar7 < 0x11) goto LAB_0031a71c;
LAB_0031a6e8:
          local_9c = 0;
          local_d4 = 0x10;
          local_e8 = (long)puVar2 + (uVar7 - 0x10);
          puVar13 = puVar2;
          puStack_e0 = &uStack_c8;
        }
        else {
          if ((long)local_78 < 0) {
                    /* try { // try from 0031a708 to 0031a717 has its CatchHandler @ 0031a8c0 */
            FUN_0031f284(local_78,"size_t to int conversion");
          }
          else if (0x10 < (long)local_78) goto LAB_0031a6e8;
LAB_0031a71c:
          local_9c = 0;
          memcpy(&uStack_c8,puVar2,uVar7);
          local_e8 = (long)&uStack_c8 + uVar7;
          puStack_e0 = (undefined8 *)0x0;
          local_d4 = 0;
          puVar13 = &uStack_c8;
          if (local_a8 == 1) {
            local_a8 = (long)puVar2 - (long)&uStack_c8;
          }
        }
        uStack_88 = *(undefined8 *)(param_3 + 0x68);
        local_90 = *(undefined8 *)(param_3 + 0x60);
        local_f0 = local_e8;
                    /* try { // try from 0031a770 to 0031a77b has its CatchHandler @ 0031a8c0 */
        lVar8 = (**(code **)(*plVar10 + 0x58))(plVar10,puVar13,&local_f0);
        puVar17 = (ushort *)0x0;
        if ((lVar8 == 0) || (uVar16 = 0, local_a0 != 0)) goto joined_r0x0031a8a8;
      }
    }
  } while( true );
}


