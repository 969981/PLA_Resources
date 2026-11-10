/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0034f378; name: FUN_0034f378
 */


undefined1  [16] FUN_0034f378(long param_1,byte *param_2,int param_3)

{
  byte bVar1;
  bool bVar2;
  undefined8 uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  byte *pbVar9;
  long lVar10;
  ulong uVar11;
  void *__dest;
  undefined8 *puVar12;
  void *pvVar13;
  size_t sVar14;
  ulong uVar15;
  ulong uVar16;
  undefined1 auVar17 [16];
  byte local_80;
  undefined7 uStack_7f;
  char cStack_78;
  undefined7 uStack_77;
  char local_70;
  undefined2 uStack_6f;
  undefined5 uStack_6d;
  ulong *local_68;
  
  bVar1 = *param_2;
  uVar11 = (ulong)(bVar1 >> 1);
  if ((bVar1 & 1) != 0) {
    uVar11 = *(ulong *)(param_2 + 8);
  }
  if (uVar11 != 0) {
    pbVar9 = *(byte **)(param_2 + 0x10);
    uVar8 = 0;
    bVar2 = false;
    if ((bVar1 & 1) == 0) {
      pbVar9 = param_2 + 1;
    }
    bVar1 = *pbVar9;
    while( true ) {
      if (bVar1 < 0x61) {
        if (bVar1 < 0x41) {
          if (bVar1 < 0x30) {
            if ((bool)(bVar2 | bVar1 != 0x2e)) goto LAB_0034f46c;
            bVar2 = true;
          }
          else {
            if (0x39 < bVar1) goto LAB_0034f46c;
            bVar2 = false;
          }
        }
        else {
          bVar2 = false;
          if ((0x5a < bVar1) && (bVar1 != 0x5f)) goto LAB_0034f46c;
        }
      }
      else {
        if (0x7a < bVar1) goto LAB_0034f46c;
        bVar2 = false;
      }
      uVar8 = uVar8 + 1;
      if (uVar11 == uVar8) break;
      bVar1 = pbVar9[uVar8];
    }
    if (!bVar2) {
      lVar10 = *(long *)(param_1 + 0x20);
      if (*pbVar9 == 0x2e) {
        uVar8 = uVar11 - 1;
        local_80 = 0;
        uStack_7f = 0;
        cStack_78 = 0;
        uStack_77 = 0;
        local_70 = 0;
        uStack_6f = 0;
        uStack_6d = 0;
        if (0xffffffffffffffef < uVar8) goto LAB_0034fd6c;
        if (uVar8 < 0x17) {
          local_80 = (byte)((int)uVar8 << 1);
          pvVar13 = (void *)((ulong)&local_80 | 1);
          if (uVar8 != 0) goto LAB_0034f520;
        }
        else {
          uVar11 = uVar11 + 0xf & 0xfffffffffffffff0;
          pvVar13 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar11);
          local_80 = (byte)uVar11 | 1;
          local_70 = (char)pvVar13;
          uStack_6f = (undefined2)((ulong)pvVar13 >> 8);
          uStack_6d = (undefined5)((ulong)pvVar13 >> 0x18);
          uStack_7f = (undefined7)(uVar11 >> 8);
          cStack_78 = (char)uVar8;
          uStack_77 = (undefined7)(uVar8 >> 8);
LAB_0034f520:
          memcpy(pvVar13,pbVar9 + 1,uVar8);
        }
        *(undefined1 *)((long)pvVar13 + uVar8) = 0;
        puVar4 = (ulong *)FUN_002e2e80(PTR_FUN_04373078,0x18);
        if (puVar4 != (ulong *)0x0) {
          *puVar4 = 0;
          puVar4[1] = 0;
          puVar4[2] = 0;
          if ((local_80 & 1) == 0) {
            puVar4[2] = CONCAT53(uStack_6d,CONCAT21(uStack_6f,local_70));
            puVar4[1] = CONCAT71(uStack_77,cStack_78);
            *puVar4 = CONCAT71(uStack_7f,local_80);
          }
          else {
            uVar11 = CONCAT71(uStack_77,cStack_78);
            if (0xffffffffffffffef < uVar11) {
                    /* try { // try from 0034fd84 to 0034fd8b has its CatchHandler @ 0034fde4 */
                    /* WARNING: Subroutine does not return */
              std::__basic_string_common<true>::__throw_length_error();
            }
            pvVar13 = (void *)CONCAT53(uStack_6d,CONCAT21(uStack_6f,local_70));
            if (uVar11 < 0x17) {
              pbVar9 = (byte *)((long)puVar4 + 1);
              *(byte *)puVar4 = (byte)((int)uVar11 << 1);
              if (uVar11 != 0) goto LAB_0034f5c4;
            }
            else {
              uVar8 = uVar11 + 0x10 & 0xfffffffffffffff0;
              pbVar9 = (byte *)FUN_002e2e80(PTR_FUN_04373078,uVar8);
              *puVar4 = uVar8 | 1;
              puVar4[1] = uVar11;
              puVar4[2] = (ulong)pbVar9;
LAB_0034f5c4:
              memcpy(pbVar9,pvVar13,uVar11);
            }
            pbVar9[uVar11] = 0;
          }
        }
                    /* try { // try from 0034f5e0 to 0034f5e7 has its CatchHandler @ 0034fde4 */
        local_68 = puVar4;
        FUN_003410d8(lVar10 + 0xd0,&local_68);
        if ((local_80 & 1) != 0) {
          FUN_002e2ea0(PTR_LAB_04373088,CONCAT53(uStack_6d,CONCAT21(uStack_6f,local_70)));
        }
        bVar1 = (byte)*puVar4;
      }
      else {
        puVar4 = (ulong *)FUN_00340fec(lVar10,param_2);
        bVar1 = (byte)*puVar4;
      }
      if ((bVar1 & 1) == 0) {
        pbVar9 = (byte *)((long)puVar4 + 1);
        uVar11 = (ulong)(bVar1 >> 1);
        if ((ulong)(bVar1 >> 1) == 0) goto LAB_0034f690;
LAB_0034f620:
        do {
          uVar8 = uVar11;
          if (uVar8 == 0) goto LAB_0034f690;
          uVar11 = uVar8 - 1;
        } while (pbVar9[uVar8 - 1] != 0x2e);
        if (uVar8 == 0) goto LAB_0034f690;
        lVar10 = *(long *)(param_1 + 0x20);
        cStack_78 = 0;
        uStack_77 = 0;
        local_70 = 0;
        uStack_6f = 0;
        uStack_6d = 0;
        uVar15 = (ulong)(bVar1 >> 1);
        local_80 = 0;
        uStack_7f = 0;
        pbVar9 = (byte *)puVar4[2];
        if ((bVar1 & 1) == 0) {
          pbVar9 = (byte *)((long)puVar4 + 1);
        }
        else {
          uVar15 = puVar4[1];
        }
        if (uVar11 <= uVar15) {
          uVar15 = uVar11;
        }
        if (0xffffffffffffffef < uVar15) goto LAB_0034fd6c;
        if (uVar15 < 0x17) {
          local_80 = (byte)((int)uVar15 << 1);
          pvVar13 = (void *)((ulong)&local_80 | 1);
          if (uVar15 != 0) goto LAB_0034f6f0;
        }
        else {
          uVar16 = uVar15 + 0x10 & 0xfffffffffffffff0;
          pvVar13 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar16);
          local_80 = (byte)uVar16 | 1;
          local_70 = (char)pvVar13;
          uStack_6f = (undefined2)((ulong)pvVar13 >> 8);
          uStack_6d = (undefined5)((ulong)pvVar13 >> 0x18);
          uStack_7f = (undefined7)(uVar16 >> 8);
          cStack_78 = (char)uVar15;
          uStack_77 = (undefined7)(uVar15 >> 8);
LAB_0034f6f0:
          memcpy(pvVar13,pbVar9,uVar15);
        }
        *(undefined1 *)((long)pvVar13 + uVar15) = 0;
        puVar5 = (ulong *)FUN_002e2e80(PTR_FUN_04373078,0x18);
        if (puVar5 != (ulong *)0x0) {
          *puVar5 = 0;
          puVar5[1] = 0;
          puVar5[2] = 0;
          if ((local_80 & 1) == 0) {
            puVar5[2] = CONCAT53(uStack_6d,CONCAT21(uStack_6f,local_70));
            puVar5[1] = CONCAT71(uStack_77,cStack_78);
            *puVar5 = CONCAT71(uStack_7f,local_80);
          }
          else {
            uVar15 = CONCAT71(uStack_77,cStack_78);
            if (0xffffffffffffffef < uVar15) {
                    /* try { // try from 0034fd94 to 0034fd9b has its CatchHandler @ 0034fdb4 */
                    /* WARNING: Subroutine does not return */
              std::__basic_string_common<true>::__throw_length_error();
            }
            pvVar13 = (void *)CONCAT53(uStack_6d,CONCAT21(uStack_6f,local_70));
            if (uVar15 < 0x17) {
              pbVar9 = (byte *)((long)puVar5 + 1);
              *(byte *)puVar5 = (byte)((int)uVar15 << 1);
              if (uVar15 != 0) goto LAB_0034f79c;
            }
            else {
              uVar16 = uVar15 + 0x10 & 0xfffffffffffffff0;
              pbVar9 = (byte *)FUN_002e2e80(PTR_FUN_04373078,uVar16);
              puVar5[1] = uVar15;
              puVar5[2] = (ulong)pbVar9;
              *puVar5 = uVar16 | 1;
LAB_0034f79c:
              memcpy(pbVar9,pvVar13,uVar15);
            }
            pbVar9[uVar15] = 0;
          }
        }
                    /* try { // try from 0034f7b8 to 0034f7bf has its CatchHandler @ 0034fdb4 */
        local_68 = puVar5;
        FUN_003410d8(lVar10 + 0xd0,&local_68);
        if ((local_80 & 1) != 0) {
          FUN_002e2ea0(PTR_LAB_04373088,CONCAT53(uStack_6d,CONCAT21(uStack_6f,local_70)));
        }
        lVar10 = *(long *)(param_1 + 0x20);
        cStack_78 = 0;
        uStack_77 = 0;
        local_70 = 0;
        uStack_6f = 0;
        uStack_6d = 0;
        local_80 = 0;
        uStack_7f = 0;
        bVar1 = (byte)*puVar4;
        uVar15 = (ulong)(bVar1 >> 1);
        if ((bVar1 & 1) != 0) {
          uVar15 = puVar4[1];
        }
        if (uVar15 <= uVar11) {
                    /* WARNING: Subroutine does not return */
          std::__basic_string_common<true>::__throw_out_of_range();
        }
        uVar15 = uVar15 - uVar8;
        pbVar9 = (byte *)((long)puVar4 + 1);
        if ((bVar1 & 1) != 0) {
          pbVar9 = (byte *)puVar4[2];
        }
        if (0xffffffffffffffef < uVar15) {
LAB_0034fd6c:
          uStack_6d = 0;
          uStack_6f = 0;
          local_70 = 0;
          uStack_77 = 0;
          cStack_78 = 0;
          uStack_7f = 0;
          local_80 = 0;
                    /* WARNING: Subroutine does not return */
          std::__basic_string_common<true>::__throw_length_error();
        }
        if (uVar15 < 0x17) {
          local_80 = (byte)((int)uVar15 << 1);
          pvVar13 = (void *)((ulong)&local_80 | 1);
          if (uVar15 != 0) goto LAB_0034f878;
        }
        else {
          uVar11 = uVar15 + 0x10 & 0xfffffffffffffff0;
          pvVar13 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar11);
          local_80 = (byte)uVar11 | 1;
          local_70 = (char)pvVar13;
          uStack_6f = (undefined2)((ulong)pvVar13 >> 8);
          uStack_6d = (undefined5)((ulong)pvVar13 >> 0x18);
          uStack_7f = (undefined7)(uVar11 >> 8);
          cStack_78 = (char)uVar15;
          uStack_77 = (undefined7)(uVar15 >> 8);
LAB_0034f878:
          memcpy(pvVar13,pbVar9 + uVar8,uVar15);
        }
        *(undefined1 *)((long)pvVar13 + uVar15) = 0;
        puVar6 = (ulong *)FUN_002e2e80(PTR_FUN_04373078,0x18);
        if (puVar6 != (ulong *)0x0) {
          *puVar6 = 0;
          puVar6[1] = 0;
          puVar6[2] = 0;
          if ((local_80 & 1) == 0) {
            puVar6[2] = CONCAT53(uStack_6d,CONCAT21(uStack_6f,local_70));
            puVar6[1] = CONCAT71(uStack_77,cStack_78);
            *puVar6 = CONCAT71(uStack_7f,local_80);
          }
          else {
            uVar11 = CONCAT71(uStack_77,cStack_78);
            if (0xffffffffffffffef < uVar11) {
                    /* try { // try from 0034fd9c to 0034fda3 has its CatchHandler @ 0034fda4 */
                    /* WARNING: Subroutine does not return */
              std::__basic_string_common<true>::__throw_length_error();
            }
            pvVar13 = (void *)CONCAT53(uStack_6d,CONCAT21(uStack_6f,local_70));
            if (uVar11 < 0x17) {
              pbVar9 = (byte *)((long)puVar6 + 1);
              *(byte *)puVar6 = (byte)((int)uVar11 << 1);
              if (uVar11 != 0) goto LAB_0034f920;
            }
            else {
              uVar8 = uVar11 + 0x10 & 0xfffffffffffffff0;
              pbVar9 = (byte *)FUN_002e2e80(PTR_FUN_04373078,uVar8);
              *puVar6 = uVar8 | 1;
              puVar6[1] = uVar11;
              puVar6[2] = (ulong)pbVar9;
LAB_0034f920:
              memcpy(pbVar9,pvVar13,uVar11);
            }
            pbVar9[uVar11] = 0;
          }
        }
                    /* try { // try from 0034f940 to 0034f947 has its CatchHandler @ 0034fda4 */
        local_68 = puVar6;
        FUN_003410d8(lVar10 + 0xd0,&local_68);
        if ((local_80 & 1) == 0) goto LAB_0034f6a0;
        FUN_002e2ea0(PTR_LAB_04373088,CONCAT53(uStack_6d,CONCAT21(uStack_6f,local_70)));
        bVar1 = (byte)*puVar4;
        if ((bVar1 & 1) == 0) goto LAB_0034f6b0;
LAB_0034f970:
        sVar14 = puVar4[1];
        pbVar9 = (byte *)puVar4[2];
      }
      else {
        pbVar9 = (byte *)puVar4[2];
        uVar11 = puVar4[1];
        if (puVar4[1] != 0) goto LAB_0034f620;
LAB_0034f690:
        FUN_0032cfe0();
        puVar5 = (ulong *)PTR_DAT_043730c0;
        puVar6 = puVar4;
LAB_0034f6a0:
        bVar1 = (byte)*puVar4;
        if ((bVar1 & 1) != 0) goto LAB_0034f970;
LAB_0034f6b0:
        sVar14 = (size_t)(bVar1 >> 1);
        pbVar9 = (byte *)((long)puVar4 + 1);
      }
      if (0xffffffffffffffef < sVar14 + 0x12) {
        uStack_6d = 0;
        uStack_6f = 0;
        local_70 = 0;
        uStack_77 = 0;
        cStack_78 = 0;
        uStack_7f = 0;
                    /* try { // try from 0034fd64 to 0034fd6b has its CatchHandler @ 0034fe00 */
        local_80 = 0;
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uStack_6d = 0;
      uStack_6f = 0;
      local_70 = 0;
      uStack_77 = 0;
      cStack_78 = 0;
      uStack_7f = 0;
      local_80 = 0;
      if (sVar14 + 0x12 < 0x17) {
        local_80 = (byte)((int)sVar14 << 1);
        pvVar13 = (void *)((ulong)&local_80 | 1);
        if (sVar14 != 0) goto LAB_0034f9c8;
      }
      else {
        uVar11 = sVar14 + 0x22 & 0xfffffffffffffff0;
        pvVar13 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar11);
        local_80 = (byte)uVar11 | 1;
        local_70 = (char)pvVar13;
        uStack_6f = (undefined2)((ulong)pvVar13 >> 8);
        uStack_6d = (undefined5)((ulong)pvVar13 >> 0x18);
        uStack_7f = (undefined7)(uVar11 >> 8);
        cStack_78 = (char)sVar14;
        uStack_77 = (undefined7)(sVar14 >> 8);
LAB_0034f9c8:
        memcpy(pvVar13,pbVar9,sVar14);
      }
      *(undefined1 *)((long)pvVar13 + sVar14) = 0;
                    /* try { // try from 0034f9dc to 0034f9ef has its CatchHandler @ 0034fe00 */
      FUN_002e4094(&local_80,".placeholder.proto",0x12);
                    /* try { // try from 0034f9f0 to 0034f9fb has its CatchHandler @ 0034fe10 */
      lVar10 = FUN_0034fe3c(param_1,&local_80);
      if ((local_80 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,CONCAT53(uStack_6d,CONCAT21(uStack_6f,local_70)));
      }
      *(ulong **)(lVar10 + 8) = puVar5;
      if (param_3 != 1) {
        *(undefined4 *)(lVar10 + 0x2c) = 1;
        puVar12 = (undefined8 *)FUN_003415f0(*(undefined8 *)(param_1 + 0x20),0x90);
        *(undefined8 **)(lVar10 + 0x68) = puVar12;
        puVar12[4] = 0;
        puVar12[3] = 0;
        puVar12[0x11] = 0;
        puVar12[2] = lVar10;
        puVar12[6] = 0;
        puVar12[5] = 0;
        puVar12[8] = 0;
        puVar12[7] = 0;
        puVar12[10] = 0;
        puVar12[9] = 0;
        puVar12[0xc] = 0;
        puVar12[0xb] = 0;
        puVar12[0xe] = 0;
        puVar12[0xd] = 0;
        *puVar12 = puVar6;
        puVar12[1] = puVar4;
        puVar12[0x10] = 0;
        puVar12[0xf] = 0;
        uVar3 = FUN_003b6164();
        puVar12[4] = uVar3;
        *(undefined1 *)((long)puVar12 + 0x8c) = 1;
        pbVar9 = param_2 + 1;
        if ((*param_2 & 1) != 0) {
          pbVar9 = *(byte **)(param_2 + 0x10);
        }
        *(bool *)((long)puVar12 + 0x8d) = *pbVar9 != 0x2e;
        if (param_3 == 2) {
          *(undefined4 *)((long)puVar12 + 0x7c) = 1;
          puVar7 = (undefined8 *)FUN_003415f0(*(undefined8 *)(param_1 + 0x20),0x10);
          uVar3 = DAT_0388a760;
          puVar12[9] = puVar7;
          *puVar7 = uVar3;
        }
        uVar3 = 1;
        goto LAB_0034f474;
      }
      *(undefined4 *)(lVar10 + 0x30) = 1;
      puVar12 = (undefined8 *)FUN_003415f0(*(undefined8 *)(param_1 + 0x20),0x50);
      *(undefined8 **)(lVar10 + 0x70) = puVar12;
      puVar12[4] = 0;
      puVar12[3] = 0;
      puVar12[9] = 0;
      puVar12[2] = lVar10;
      puVar12[6] = 0;
      puVar12[5] = 0;
      *puVar12 = puVar6;
      puVar12[1] = puVar4;
      puVar12[8] = 0;
      puVar12[7] = 0;
      uVar3 = FUN_003b83d0();
      puVar12[4] = uVar3;
      *(undefined1 *)(puVar12 + 5) = 1;
      pbVar9 = param_2 + 1;
      if ((*param_2 & 1) != 0) {
        pbVar9 = *(byte **)(param_2 + 0x10);
      }
      bVar1 = *pbVar9;
      *(undefined4 *)((long)puVar12 + 0x2c) = 1;
      *(bool *)((long)puVar12 + 0x29) = bVar1 != 0x2e;
      puVar7 = (undefined8 *)FUN_003415f0(*(undefined8 *)(param_1 + 0x20),0x28);
      puVar12[6] = puVar7;
      puVar7[1] = 0;
      *puVar7 = 0;
      puVar7[3] = 0;
      puVar7[2] = 0;
      puVar7[4] = 0;
      lVar10 = *(long *)(param_1 + 0x20);
      uStack_6d = 0;
      local_80 = 0x22;
      uStack_6f = 0x45;
      uStack_77 = s_PLACEHOLDER_VALUE_038c837c._8_7_;
      local_70 = s_PLACEHOLDER_VALUE_038c837c[0xf];
      uStack_7f = s_PLACEHOLDER_VALUE_038c837c._0_7_;
      cStack_78 = s_PLACEHOLDER_VALUE_038c837c[7];
      puVar4 = (ulong *)FUN_002e2e80(PTR_FUN_04373078,0x18);
      if (puVar4 != (ulong *)0x0) {
        puVar4[2] = CONCAT53(uStack_6d,CONCAT21(uStack_6f,local_70));
        puVar4[1] = CONCAT71(uStack_77,cStack_78);
        *puVar4 = CONCAT71(uStack_7f,local_80);
      }
                    /* try { // try from 0034fb04 to 0034fb0b has its CatchHandler @ 0034fdf4 */
      local_68 = puVar4;
      FUN_003410d8(lVar10 + 0xd0,&local_68);
      *puVar7 = puVar4;
      bVar1 = (byte)*puVar5;
      if ((bVar1 & 1) == 0) {
        if (bVar1 >> 1 == 0) goto LAB_0034fbf4;
LAB_0034fb20:
        lVar10 = *(long *)(param_1 + 0x20);
        cStack_78 = '\0';
        uStack_77 = 0;
        local_70 = '\0';
        uStack_6f = 0;
        uStack_6d = 0;
        local_80 = 0;
        uStack_7f = 0;
        if ((bVar1 & 1) == 0) {
          sVar14 = (size_t)(bVar1 >> 1);
          pbVar9 = (byte *)((long)puVar5 + 1);
        }
        else {
          sVar14 = puVar5[1];
          pbVar9 = (byte *)puVar5[2];
        }
        if (0xffffffffffffffef < sVar14 + 0x12) {
                    /* try { // try from 0034fd74 to 0034fd7b has its CatchHandler @ 0034fdd4 */
                    /* WARNING: Subroutine does not return */
          std::__basic_string_common<true>::__throw_length_error();
        }
        if (sVar14 + 0x12 < 0x17) {
          local_80 = (byte)((int)sVar14 << 1);
          pvVar13 = (void *)((ulong)&local_80 | 1);
          if (sVar14 != 0) goto LAB_0034fc54;
        }
        else {
          uVar11 = sVar14 + 0x22 & 0xfffffffffffffff0;
          pvVar13 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar11);
          local_80 = (byte)uVar11 | 1;
          local_70 = (char)pvVar13;
          uStack_6f = (undefined2)((ulong)pvVar13 >> 8);
          uStack_6d = (undefined5)((ulong)pvVar13 >> 0x18);
          uStack_7f = (undefined7)(uVar11 >> 8);
          cStack_78 = (char)sVar14;
          uStack_77 = (undefined7)(sVar14 >> 8);
LAB_0034fc54:
          memcpy(pvVar13,pbVar9,sVar14);
        }
        *(undefined1 *)((long)pvVar13 + sVar14) = 0;
                    /* try { // try from 0034fc68 to 0034fc7b has its CatchHandler @ 0034fdd4 */
        FUN_002e4094(&local_80,".PLACEHOLDER_VALUE",0x12);
        puVar4 = (ulong *)FUN_002e2e80(PTR_FUN_04373078,0x18);
        if (puVar4 != (ulong *)0x0) {
          *puVar4 = 0;
          puVar4[1] = 0;
          puVar4[2] = 0;
          if ((local_80 & 1) == 0) {
            puVar4[2] = CONCAT53(uStack_6d,CONCAT21(uStack_6f,local_70));
            puVar4[1] = CONCAT71(uStack_77,cStack_78);
            *puVar4 = CONCAT71(uStack_7f,local_80);
          }
          else {
            uVar11 = CONCAT71(uStack_77,cStack_78);
            if (0xffffffffffffffef < uVar11) {
                    /* try { // try from 0034fd8c to 0034fd93 has its CatchHandler @ 0034fdc4 */
                    /* WARNING: Subroutine does not return */
              std::__basic_string_common<true>::__throw_length_error();
            }
            pvVar13 = (void *)CONCAT53(uStack_6d,CONCAT21(uStack_6f,local_70));
            if (uVar11 < 0x17) {
              __dest = (void *)((long)puVar4 + 1);
              *(char *)puVar4 = (char)((int)uVar11 << 1);
              if (uVar11 != 0) goto LAB_0034fd0c;
            }
            else {
              uVar8 = uVar11 + 0x10 & 0xfffffffffffffff0;
              __dest = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar8);
              *puVar4 = uVar8 | 1;
              puVar4[1] = uVar11;
              puVar4[2] = (ulong)__dest;
LAB_0034fd0c:
              memcpy(__dest,pvVar13,uVar11);
            }
            *(undefined1 *)((long)__dest + uVar11) = 0;
          }
        }
                    /* try { // try from 0034fd28 to 0034fd2f has its CatchHandler @ 0034fdc4 */
        local_68 = puVar4;
        FUN_003410d8(lVar10 + 0xd0,&local_68);
        puVar7[1] = puVar4;
        if ((local_80 & 1) != 0) {
          FUN_002e2ea0(PTR_LAB_04373088,CONCAT53(uStack_6d,CONCAT21(uStack_6f,local_70)));
        }
      }
      else {
        if (puVar5[1] != 0) goto LAB_0034fb20;
LAB_0034fbf4:
        puVar7[1] = puVar4;
      }
      *(undefined4 *)(puVar7 + 2) = 0;
      puVar7[3] = puVar12;
      uVar3 = FUN_003b8ddc();
      puVar7[4] = uVar3;
      uVar3 = 4;
      goto LAB_0034f474;
    }
  }
LAB_0034f46c:
  uVar3 = 0;
  puVar12 = (undefined8 *)0x0;
LAB_0034f474:
  auVar17._8_8_ = puVar12;
  auVar17._0_8_ = uVar3;
  return auVar17;
}


