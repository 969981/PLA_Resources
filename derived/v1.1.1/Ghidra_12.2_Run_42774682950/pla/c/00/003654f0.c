/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003654f0; name: FUN_003654f0
 */


/* WARNING: Type propagation algorithm not settling */

bool FUN_003654f0(int param_1,long *param_2,long *param_3)

{
  long *plVar1;
  int iVar2;
  undefined7 *puVar3;
  undefined1 *puVar4;
  byte bVar5;
  undefined1 uVar6;
  bool bVar7;
  byte *pbVar8;
  undefined *puVar9;
  bool bVar10;
  int iVar11;
  ulong *puVar12;
  undefined8 *puVar13;
  void *pvVar14;
  undefined8 extraout_x1;
  void *pvVar15;
  undefined8 *puVar16;
  undefined7 **ppuVar17;
  undefined8 uVar18;
  long lVar19;
  ulong uVar20;
  undefined1 *puVar21;
  byte *pbVar22;
  int iVar23;
  long lVar24;
  byte *pbVar25;
  ulong uVar26;
  ulong uVar27;
  undefined8 *puVar28;
  ulong uVar29;
  undefined8 uVar30;
  undefined7 local_118;
  undefined1 uStack_111;
  undefined7 uStack_110;
  undefined7 *local_108;
  long *local_100;
  undefined8 *local_f8;
  undefined8 *local_f0;
  undefined1 auStack_e8 [8];
  undefined8 local_e0;
  undefined1 auStack_d0 [8];
  undefined8 local_c8;
  undefined7 **local_b0;
  long *local_a8;
  void *local_a0;
  ulong local_98;
  ulong local_90;
  ulong local_88;
  long *local_80;
  long *local_78;
  undefined8 uStack_70;
  long local_68;
  
  puVar9 = PTR_LAB_04373088;
  pbVar25 = (byte *)*param_3;
  pbVar22 = (byte *)param_3[1];
  if (pbVar22 != pbVar25) {
    bVar5 = pbVar22[-0x18];
    pbVar8 = pbVar22 + -0x18;
    while( true ) {
      if ((bVar5 & 1) != 0) {
        FUN_002e2ea0(puVar9,*(undefined8 *)(pbVar22 + -8));
      }
      if (pbVar25 == pbVar8) break;
      bVar5 = pbVar8[-0x18];
      pbVar22 = pbVar8;
      pbVar8 = pbVar8 + -0x18;
    }
  }
  param_3[1] = (long)pbVar25;
  (**(code **)(*param_2 + 0x98))(param_2);
  local_78 = (long *)0x0;
  uStack_70 = 0;
  local_80 = (long *)0x0;
                    /* try { // try from 00365588 to 00365597 has its CatchHandler @ 00365c24 */
  FUN_00387324(extraout_x1,param_2,&local_80);
  puVar9 = PTR_LAB_04373088;
  if (local_78 == local_80) {
LAB_00365b8c:
    lVar24 = *param_3;
    lVar19 = param_3[1];
    if (local_80 != (long *)0x0) {
      local_78 = local_80;
      FUN_002e2ea0(PTR_LAB_04373088);
    }
    return lVar24 != lVar19;
  }
  pvVar15 = (void *)((ulong)&local_b0 | 1);
  puVar28 = (undefined8 *)((ulong)&local_108 | 1);
  uVar27 = 0;
  if (*(int *)(*local_80 + 0x3c) == 3) goto LAB_0036562c;
LAB_0036564c:
  bVar7 = false;
  iVar11 = 1;
  do {
    iVar23 = 0;
    do {
      local_90 = 0;
      local_88 = 0;
      local_98 = 0;
      lVar24 = local_80[uVar27];
      puVar12 = *(ulong **)(lVar24 + 0x30);
      if (puVar12 != (ulong *)0x0) {
        local_118 = SUB87(PTR_LAB_04373a98,0);
        uStack_111 = (undefined1)((ulong)PTR_LAB_04373a98 >> 0x38);
        local_68 = lVar24;
        if (*puVar12 != 0xffffffffffffffff) {
          local_100 = &local_68;
          local_108 = &local_118;
          local_b0 = &local_108;
                    /* try { // try from 003656b4 to 003656c3 has its CatchHandler @ 00365c84 */
          std::__call_once(puVar12,&local_b0,(_func_void_void_ptr *)PTR_LAB_04373aa0);
        }
      }
      if ((*(uint *)(lVar24 + 0x38) | 1) == 0xb) {
        local_a8 = (long *)0x0;
        local_a0 = (void *)0x0;
        local_b0 = (undefined7 **)0x0;
                    /* try { // try from 003656dc to 003656e3 has its CatchHandler @ 00365c54 */
        FUN_003723f0(&local_108);
        local_108 = (undefined7 *)CONCAT44(local_108._4_4_,param_1 + 1);
        iVar2 = iVar23;
        if (!bVar7) {
          iVar2 = -1;
        }
                    /* try { // try from 003656fc to 00365767 has its CatchHandler @ 00365cd0 */
        FUN_0037401c(&local_108,param_2,local_80[uVar27],iVar2,&local_b0);
        FUN_002e4094(&local_98,&DAT_03979c62,2);
        plVar1 = (long *)((ulong)local_b0 >> 1 & 0x7f);
        pvVar14 = pvVar15;
        if (((ulong)local_b0 & 1) != 0) {
          plVar1 = local_a8;
          pvVar14 = local_a0;
        }
        FUN_002e4094(&local_98,pvVar14,plVar1);
        FUN_002e6bd4(&local_98,(long)(param_1 << 1),0x20);
        FUN_002e4094(&local_98,&DAT_0391817e,1);
        FUN_00365d78(auStack_d0,local_c8);
        FUN_00365de8(auStack_e8,local_e0);
        puVar16 = local_f0;
        local_f0 = (undefined8 *)0x0;
        if (puVar16 != (undefined8 *)0x0) {
          (**(code **)*puVar16)(puVar16);
          FUN_002e2ea0(puVar9,puVar16);
        }
        if (((ulong)local_b0 & 1) != 0) {
          FUN_002e2ea0(puVar9,local_a0);
        }
      }
      else {
        iVar2 = iVar23;
        if (!bVar7) {
          iVar2 = -1;
        }
                    /* try { // try from 003657d0 to 003657db has its CatchHandler @ 00365c84 */
        FUN_00375778(param_2,local_80[uVar27],iVar2,&local_98);
      }
      local_100 = (long *)0x0;
      local_f8 = (undefined8 *)0x0;
      local_108 = (undefined7 *)0x0;
      puVar16 = (undefined8 *)local_80[uVar27];
      if (*(char *)((long)puVar16 + 0x43) == '\0') {
        ppuVar17 = (undefined7 **)*puVar16;
        if (&local_108 != ppuVar17) {
          puVar3 = ppuVar17[1];
          pbVar25 = (byte *)ppuVar17[2];
          if ((*(byte *)ppuVar17 & 1) == 0) {
            pbVar25 = (byte *)((long)ppuVar17 + 1);
            puVar3 = (undefined7 *)(ulong)(*(byte *)ppuVar17 >> 1);
          }
                    /* try { // try from 00365870 to 00365877 has its CatchHandler @ 00365c44 */
          FUN_00291910(&local_108,pbVar25,puVar3);
        }
      }
      else {
                    /* try { // try from 003657f8 to 00365807 has its CatchHandler @ 00365c64 */
        FUN_0034b2f0(&local_b0,&DAT_0388b4f8,puVar16[1]);
                    /* try { // try from 00365808 to 0036581b has its CatchHandler @ 00365c74 */
        puVar13 = (undefined8 *)FUN_002e4094(&local_b0,&DAT_039a0269,1);
        puVar16 = (undefined8 *)puVar13[2];
        uVar6 = *(undefined1 *)puVar13;
        uStack_110 = (undefined7)((ulong)puVar13[1] >> 8);
        local_118 = (undefined7)*(undefined8 *)((long)puVar13 + 1);
        uStack_111 = (undefined1)((ulong)*(undefined8 *)((long)puVar13 + 1) >> 0x38);
        *puVar13 = 0;
        puVar13[1] = 0;
        puVar13[2] = 0;
        if (((ulong)local_108 & 1) == 0) {
          local_108 = (undefined7 *)((ulong)local_108 & 0xffffffffffff0000);
        }
        else {
          *(undefined1 *)local_f8 = 0;
          local_100 = (long *)0x0;
          if (((ulong)local_108 & 1) != 0) {
            FUN_002e2ea0(puVar9,local_f8);
            local_108 = (undefined7 *)0x0;
          }
        }
        uVar30 = CONCAT17(uStack_111,local_118);
        local_108 = (undefined7 *)CONCAT71(local_108._1_7_,uVar6);
        uVar18 = CONCAT71(uStack_110,uStack_111);
        local_118 = 0;
        uStack_111 = 0;
        uStack_110 = 0;
        *(undefined8 *)((long)puVar28 + 7) = uVar18;
        *puVar28 = uVar30;
        local_f8 = puVar16;
        if (((ulong)local_b0 & 1) != 0) {
          FUN_002e2ea0(puVar9,local_a0);
        }
      }
      bVar10 = ((ulong)local_108 & 1) != 0;
      plVar1 = (long *)((ulong)local_108 >> 1 & 0x7f);
      if (bVar10) {
        plVar1 = local_100;
      }
      local_a8 = (long *)0x0;
      local_a0 = (void *)0x0;
      puVar16 = puVar28;
      if (bVar10) {
        puVar16 = local_f8;
      }
      local_b0 = (undefined7 **)0x0;
      if (0xffffffffffffffef < (long)plVar1 + 3U) {
                    /* try { // try from 00365bcc to 00365bd3 has its CatchHandler @ 00365c14 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      if ((long)plVar1 + 3U < 0x17) {
        local_b0 = (undefined7 **)(ulong)(byte)((int)plVar1 << 1);
        pvVar14 = pvVar15;
        if (plVar1 != (long *)0x0) goto LAB_00365944;
      }
      else {
        uVar26 = (long)plVar1 + 0x13U & 0xfffffffffffffff0;
        pvVar14 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar26);
        local_b0 = (undefined7 **)(uVar26 | 1);
        local_a8 = plVar1;
        local_a0 = pvVar14;
LAB_00365944:
        memcpy(pvVar14,puVar16,(size_t)plVar1);
      }
      *(undefined1 *)((long)pvVar14 + (long)plVar1) = 0;
                    /* try { // try from 00365958 to 0036596b has its CatchHandler @ 00365c94 */
      FUN_002e4094(&local_b0,&DAT_038c83e2,3);
      uVar26 = local_98 >> 1 & 0x7f;
      uVar29 = (ulong)&local_98 | 1;
      if ((local_98 & 1) != 0) {
        uVar26 = local_90;
        uVar29 = local_88;
      }
                    /* try { // try from 00365988 to 0036598f has its CatchHandler @ 00365ca4 */
      puVar16 = (undefined8 *)FUN_002e4094(&local_b0,uVar29,uVar26);
      uVar18 = *(undefined8 *)((long)puVar16 + 1);
      uVar30 = puVar16[2];
      uVar6 = *(undefined1 *)puVar16;
      uStack_110 = (undefined7)((ulong)puVar16[1] >> 8);
      local_118 = (undefined7)uVar18;
      uStack_111 = (undefined1)((ulong)uVar18 >> 0x38);
      *puVar16 = 0;
      puVar16[1] = 0;
      puVar16[2] = 0;
      puVar4 = (undefined1 *)param_3[1];
      if (puVar4 < (undefined1 *)param_3[2]) {
        *puVar4 = uVar6;
        *(ulong *)(puVar4 + 8) = CONCAT71(uStack_110,uStack_111);
        *(undefined8 *)(puVar4 + 0x10) = uVar30;
        *(undefined8 *)(puVar4 + 1) = uVar18;
        uStack_110 = 0;
        local_118 = 0;
        uStack_111 = 0;
        param_3[1] = param_3[1] + 0x18;
      }
      else {
        lVar24 = (long)puVar4 - *param_3 >> 3;
        uVar29 = 0xaaaaaaaaaaaaaaa;
        uVar26 = lVar24 * -0x5555555555555555 + 1;
        if (0xaaaaaaaaaaaaaaa < uVar26) {
                    /* try { // try from 00365bd4 to 00365bdb has its CatchHandler @ 00365bdc */
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar19 = param_3[2] - *param_3 >> 3;
        if ((ulong)(lVar19 * -0x5555555555555555) < 0x555555555555555) {
          uVar20 = lVar19 * 0x5555555555555556;
          uVar29 = uVar26;
          if (uVar26 <= uVar20) {
            uVar29 = uVar20;
          }
          if (uVar29 != 0) goto LAB_00365a48;
          lVar19 = 0;
        }
        else {
LAB_00365a48:
          lVar19 = FUN_002e2e80(PTR_FUN_04373078,uVar29 * 0x18);
        }
        puVar21 = (undefined1 *)(lVar19 + lVar24 * 8);
        lVar19 = lVar19 + uVar29 * 0x18;
        *puVar21 = uVar6;
        *(ulong *)(puVar21 + 8) = CONCAT71(uStack_110,uStack_111);
        *(undefined8 *)(puVar21 + 0x10) = uVar30;
        *(ulong *)(puVar21 + 1) = CONCAT17(uStack_111,local_118);
        uStack_110 = 0;
        local_118 = 0;
        uStack_111 = 0;
        puVar4 = puVar21 + 0x18;
        pbVar25 = (byte *)*param_3;
        pbVar22 = (byte *)param_3[1];
        if (pbVar22 == pbVar25) {
          *param_3 = (long)puVar21;
          param_3[1] = (long)puVar4;
          param_3[2] = lVar19;
        }
        else {
          do {
            uVar18 = *(undefined8 *)(pbVar22 + -0x10);
            uVar30 = *(undefined8 *)(pbVar22 + -0x18);
            *(undefined8 *)(puVar21 + -8) = *(undefined8 *)(pbVar22 + -8);
            *(undefined8 *)(puVar21 + -0x10) = uVar18;
            *(undefined8 *)(puVar21 + -0x18) = uVar30;
            pbVar22[-0x18] = 0;
            pbVar22[-0x17] = 0;
            pbVar22[-0x16] = 0;
            pbVar22[-0x15] = 0;
            pbVar22[-0x14] = 0;
            pbVar22[-0x13] = 0;
            pbVar22[-0x12] = 0;
            pbVar22[-0x11] = 0;
            pbVar22[-0x10] = 0;
            pbVar22[-0xf] = 0;
            pbVar22[-0xe] = 0;
            pbVar22[-0xd] = 0;
            pbVar22[-0xc] = 0;
            pbVar22[-0xb] = 0;
            pbVar22[-10] = 0;
            pbVar22[-9] = 0;
            pbVar22[-8] = 0;
            pbVar22[-7] = 0;
            pbVar22[-6] = 0;
            pbVar22[-5] = 0;
            pbVar22[-4] = 0;
            pbVar22[-3] = 0;
            pbVar22[-2] = 0;
            pbVar22[-1] = 0;
            pbVar22 = pbVar22 + -0x18;
            puVar21 = puVar21 + -0x18;
          } while (pbVar25 != pbVar22);
          pbVar25 = (byte *)*param_3;
          pbVar22 = (byte *)param_3[1];
          *param_3 = (long)puVar21;
          param_3[1] = (long)puVar4;
          param_3[2] = lVar19;
          if (pbVar22 != pbVar25) {
            bVar5 = pbVar22[-0x18];
            pbVar8 = pbVar22 + -0x18;
            while( true ) {
              if ((bVar5 & 1) != 0) {
                FUN_002e2ea0(puVar9,*(undefined8 *)(pbVar22 + -8));
              }
              if (pbVar25 == pbVar8) break;
              bVar5 = pbVar8[-0x18];
              pbVar22 = pbVar8;
              pbVar8 = pbVar8 + -0x18;
            }
          }
        }
        if (pbVar25 != (byte *)0x0) {
          FUN_002e2ea0(puVar9,pbVar25);
        }
      }
      if (((ulong)local_b0 & 1) != 0) {
        FUN_002e2ea0(puVar9,local_a0);
      }
      if (((ulong)local_108 & 1) != 0) {
        FUN_002e2ea0(puVar9,local_f8);
      }
      if ((local_98 & 1) != 0) {
        FUN_002e2ea0(puVar9,local_88);
      }
      iVar23 = iVar23 + 1;
    } while (iVar23 != iVar11);
    do {
      uVar27 = uVar27 + 1;
      if ((ulong)((long)local_78 - (long)local_80 >> 3) <= uVar27) goto LAB_00365b8c;
      if (*(int *)(local_80[uVar27] + 0x3c) != 3) goto LAB_0036564c;
LAB_0036562c:
                    /* try { // try from 0036562c to 00365637 has its CatchHandler @ 00365c34 */
      iVar11 = FUN_00386cec(extraout_x1,param_2);
    } while (iVar11 < 1);
    bVar7 = true;
  } while( true );
}


