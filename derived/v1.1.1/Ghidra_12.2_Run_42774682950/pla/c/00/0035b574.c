/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0035b574; name: FUN_0035b574
 */


void FUN_0035b574(long param_1,long param_2,long param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined *puVar4;
  undefined8 uVar5;
  void *pvVar6;
  ulong *puVar7;
  int iVar8;
  long lVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  long *plVar19;
  undefined8 *puVar20;
  int *piVar21;
  size_t sVar22;
  uint uVar23;
  undefined8 local_290;
  undefined4 local_288;
  undefined8 local_260;
  undefined4 local_258;
  undefined8 local_230;
  undefined4 local_228;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined8 local_170;
  undefined4 local_168;
  undefined8 local_140;
  undefined4 local_138;
  byte *local_110;
  size_t local_108;
  void *local_100;
  byte *local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  byte local_b0 [16];
  undefined8 local_a0;
  ulong local_98;
  size_t local_90;
  void *local_88;
  ulong local_80;
  ulong uStack_78;
  ulong local_70;
  
  if (*(long *)(param_2 + 0x20) == 0) {
    uVar5 = FUN_003b6164();
    *(undefined8 *)(param_2 + 0x20) = uVar5;
  }
  if (0 < *(int *)(param_2 + 0x74)) {
    lVar18 = 0;
    uVar16 = 0;
    do {
      lVar9 = *(long *)(param_2 + 0x38);
      uVar5 = FUN_00365e80(param_3 + 0x30,uVar16 & 0xffffffff);
      FUN_0035b574(param_1,lVar9 + lVar18,uVar5);
      uVar16 = uVar16 + 1;
      lVar18 = lVar18 + 0x90;
    } while ((long)uVar16 < (long)*(int *)(param_2 + 0x74));
  }
  if (0 < *(int *)(param_2 + 0x78)) {
    uVar16 = 0;
    do {
      lVar9 = *(long *)(param_2 + 0x40);
      lVar18 = FUN_00365f68(param_3 + 0x48,uVar16 & 0xffffffff);
      plVar19 = (long *)(lVar9 + uVar16 * 0x50 + 0x20);
      if (*plVar19 == 0) {
        lVar13 = FUN_003b83d0();
        *plVar19 = lVar13;
        piVar21 = (int *)(lVar9 + uVar16 * 0x50 + 0x2c);
        iVar8 = *piVar21;
      }
      else {
        piVar21 = (int *)(lVar9 + uVar16 * 0x50 + 0x2c);
        iVar8 = *piVar21;
      }
      if (0 < iVar8) {
        uVar17 = 0;
        lVar13 = 0x20;
        do {
          lVar14 = *(long *)(lVar9 + uVar16 * 0x50 + 0x30);
          FUN_003664d8(lVar18 + 0x18,uVar17 & 0xffffffff);
          if (*(long *)(lVar14 + lVar13) == 0) {
            uVar5 = FUN_003b8ddc();
            *(undefined8 *)(lVar14 + lVar13) = uVar5;
          }
          uVar17 = uVar17 + 1;
          lVar13 = lVar13 + 0x28;
        } while ((long)uVar17 < (long)*piVar21);
      }
      uVar16 = uVar16 + 1;
    } while ((long)uVar16 < (long)*(int *)(param_2 + 0x78));
  }
  if (0 < *(int *)(param_2 + 0x68)) {
    lVar18 = 0;
    uVar16 = 0;
    do {
      lVar9 = *(long *)(param_2 + 0x28);
      uVar5 = FUN_00366138(param_3 + 0x18,uVar16 & 0xffffffff);
      FUN_0035c068(param_1,lVar9 + lVar18,uVar5);
      uVar16 = uVar16 + 1;
      lVar18 = lVar18 + 0x98;
    } while ((long)uVar16 < (long)*(int *)(param_2 + 0x68));
  }
  if (0 < *(int *)(param_2 + 0x80)) {
    lVar18 = 0;
    uVar16 = 0;
    do {
      lVar9 = *(long *)(param_2 + 0x50);
      uVar5 = FUN_00366138(param_3 + 0x78,uVar16 & 0xffffffff);
      FUN_0035c068(param_1,lVar9 + lVar18,uVar5);
      uVar16 = uVar16 + 1;
      lVar18 = lVar18 + 0x98;
    } while ((long)uVar16 < (long)*(int *)(param_2 + 0x80));
  }
  if (0 < *(int *)(param_2 + 0x7c)) {
    uVar16 = 0;
    lVar18 = 8;
    do {
      lVar9 = *(long *)(param_2 + 0x48);
      FUN_00366308(param_3 + 0x60,uVar16 & 0xffffffff);
      if (*(long *)(lVar9 + lVar18) == 0) {
        uVar5 = FUN_003aad08();
        *(undefined8 *)(lVar9 + lVar18) = uVar5;
      }
      uVar16 = uVar16 + 1;
      lVar18 = lVar18 + 0x10;
    } while ((long)uVar16 < (long)*(int *)(param_2 + 0x7c));
  }
  iVar8 = *(int *)(param_2 + 0x68);
  if (0 < iVar8) {
    lVar9 = 0;
    lVar18 = 0;
    lVar13 = *(long *)(param_2 + 0x28);
    puVar20 = *(undefined8 **)(lVar13 + 0x58);
    do {
      if (puVar20 != (undefined8 *)0x0) {
        if ((0 < *(int *)(puVar20 + 3)) && (*(undefined8 **)(lVar13 + -0x40) != puVar20)) {
          pbVar10 = *(byte **)(param_2 + 8);
          local_88 = (void *)0x0;
          local_90 = 0;
          local_98 = 0;
          if ((*pbVar10 & 1) == 0) {
            sVar22 = (size_t)(*pbVar10 >> 1);
            pbVar10 = pbVar10 + 1;
          }
          else {
            sVar22 = *(size_t *)(pbVar10 + 8);
            pbVar10 = *(byte **)(pbVar10 + 0x10);
          }
          if (0xffffffffffffffef < sVar22 + 1) {
                    /* try { // try from 0035bf4c to 0035bf53 has its CatchHandler @ 0035bf54 */
                    /* WARNING: Subroutine does not return */
            std::__basic_string_common<true>::__throw_length_error();
          }
          if (sVar22 + 1 < 0x17) {
            local_98 = (ulong)(byte)((int)sVar22 << 1);
            pvVar6 = (void *)((ulong)&local_98 | 1);
            if (sVar22 != 0) goto LAB_0035b928;
          }
          else {
            uVar16 = sVar22 + 0x11 & 0xfffffffffffffff0;
            pvVar6 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar16);
            local_98 = uVar16 | 1;
            local_90 = sVar22;
            local_88 = pvVar6;
LAB_0035b928:
            memcpy(pvVar6,pbVar10,sVar22);
          }
          *(undefined1 *)((long)pvVar6 + sVar22) = 0;
                    /* try { // try from 0035b938 to 0035b947 has its CatchHandler @ 0035bf74 */
          FUN_002e4094(&local_98,&DAT_0389ff53,1);
          pbVar11 = *(byte **)(*(long *)(param_2 + 0x28) + lVar9 + -0x98);
          uVar16 = *(ulong *)(pbVar11 + 8);
          pbVar10 = *(byte **)(pbVar11 + 0x10);
          if ((*pbVar11 & 1) == 0) {
            pbVar10 = pbVar11 + 1;
            uVar16 = (ulong)(*pbVar11 >> 1);
          }
                    /* try { // try from 0035b96c to 0035b973 has its CatchHandler @ 0035bff8 */
          puVar7 = (ulong *)FUN_002e4094(&local_98,pbVar10,uVar16);
          uStack_78 = puVar7[1];
          local_80 = *puVar7;
          local_70 = puVar7[2];
          puVar7[1] = 0;
          puVar7[2] = 0;
          *puVar7 = 0;
                    /* try { // try from 0035b998 to 0035b99f has its CatchHandler @ 0035bfd0 */
          uVar5 = FUN_00366138(param_3 + 0x18,(int)lVar18 + -1);
          pbVar10 = *(byte **)(*(long *)(param_2 + 0x28) + lVar9 + -0x98);
          local_e0 = *(byte **)(pbVar10 + 0x10);
          if ((*pbVar10 & 1) == 0) {
            local_e0 = pbVar10 + 1;
          }
          uVar12 = (uint)(*pbVar10 >> 1);
          if ((*pbVar10 & 1) != 0) {
            uVar12 = (uint)*(undefined8 *)(pbVar10 + 8);
          }
          uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar12);
          pbVar10 = (byte *)*puVar20;
          local_110 = *(byte **)(pbVar10 + 0x10);
          if ((*pbVar10 & 1) == 0) {
            local_110 = pbVar10 + 1;
          }
          local_140 = 0;
          local_138 = 0xffffffff;
          local_170 = 0;
          local_168 = 0xffffffff;
          local_1a0 = 0;
          local_198 = 0xffffffff;
          local_1d0 = 0;
          local_1c8 = 0xffffffff;
          local_200 = 0;
          local_1f8 = 0xffffffff;
          local_230 = 0;
          local_228 = 0xffffffff;
          local_260 = 0;
          local_258 = 0xffffffff;
          local_290 = 0;
          local_288 = 0xffffffff;
          uVar12 = (uint)(*pbVar10 >> 1);
          if ((*pbVar10 & 1) != 0) {
            uVar12 = (uint)*(undefined8 *)(pbVar10 + 8);
          }
          local_108 = CONCAT44(local_108._4_4_,uVar12);
                    /* try { // try from 0035ba4c to 0035ba87 has its CatchHandler @ 0035bfc0 */
          FUN_003c6830(local_b0,
                       "Fields in the same oneof must be defined consecutively. \"$0\" cannot be defined before the completion of the \"$1\" oneof definition."
                       ,&local_e0,&local_110,&local_140,&local_170,&local_1a0,&local_1d0,&local_200,
                       &local_230,&local_260,&local_290);
                    /* try { // try from 0035ba88 to 0035ba9f has its CatchHandler @ 0035bf84 */
          FUN_0034db00(param_1,&local_80,uVar5,2,local_b0);
          if ((local_b0[0] & 1) != 0) {
            FUN_002e2ea0(PTR_LAB_04373088,local_a0);
          }
          if ((local_80 & 1) != 0) {
            FUN_002e2ea0(PTR_LAB_04373088,local_70);
          }
          if ((local_98 & 1) != 0) {
            FUN_002e2ea0(PTR_LAB_04373088,local_88);
          }
          iVar8 = *(int *)(param_2 + 0x68);
        }
        lVar13 = *(long *)(param_2 + 0x30) +
                 (long)((int)((ulong)((long)puVar20 - *(long *)(puVar20[2] + 0x30)) >> 4) *
                       -0x55555555) * 0x30;
        *(int *)(lVar13 + 0x18) = *(int *)(lVar13 + 0x18) + 1;
      }
      lVar18 = lVar18 + 1;
      lVar9 = lVar9 + 0x98;
      if (iVar8 <= lVar18) break;
      lVar13 = *(long *)(param_2 + 0x28) + lVar9;
      puVar20 = *(undefined8 **)(lVar13 + 0x58);
    } while( true );
  }
  puVar4 = PTR_LAB_04373088;
  uVar16 = (ulong)*(uint *)(param_2 + 0x6c);
  if (0 < (int)*(uint *)(param_2 + 0x6c)) {
    lVar18 = 0;
    uVar17 = 0;
    lVar13 = *(long *)(param_2 + 0x30);
    iVar8 = *(int *)(lVar13 + 0x18);
    lVar9 = lVar13;
    do {
      if (iVar8 == 0) {
        pbVar10 = *(byte **)(param_2 + 8);
        local_108 = 0;
        local_100 = (void *)0x0;
        local_110 = (byte *)0x0;
        if ((*pbVar10 & 1) == 0) {
          sVar22 = (size_t)(*pbVar10 >> 1);
          pbVar10 = pbVar10 + 1;
        }
        else {
          sVar22 = *(size_t *)(pbVar10 + 8);
          pbVar10 = *(byte **)(pbVar10 + 0x10);
        }
        if (0xffffffffffffffef < sVar22 + 1) {
                    /* try { // try from 0035bf44 to 0035bf4b has its CatchHandler @ 0035bf64 */
                    /* WARNING: Subroutine does not return */
          std::__basic_string_common<true>::__throw_length_error();
        }
        if (sVar22 + 1 < 0x17) {
          local_110 = (byte *)(ulong)(byte)((int)sVar22 << 1);
          pvVar6 = (void *)((ulong)&local_110 | 1);
          if (sVar22 != 0) goto LAB_0035bc20;
        }
        else {
          uVar16 = sVar22 + 0x11 & 0xfffffffffffffff0;
          pvVar6 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar16);
          local_110 = (byte *)(uVar16 | 1);
          local_108 = sVar22;
          local_100 = pvVar6;
LAB_0035bc20:
          memcpy(pvVar6,pbVar10,sVar22);
        }
        *(undefined1 *)((long)pvVar6 + sVar22) = 0;
                    /* try { // try from 0035bc30 to 0035bc3f has its CatchHandler @ 0035c01c */
        FUN_002e4094(&local_110,&DAT_0389ff53,1);
        pbVar11 = *(byte **)(lVar13 + lVar18);
        uVar16 = *(ulong *)(pbVar11 + 8);
        pbVar10 = *(byte **)(pbVar11 + 0x10);
        if ((*pbVar11 & 1) == 0) {
          pbVar10 = pbVar11 + 1;
          uVar16 = (ulong)(*pbVar11 >> 1);
        }
                    /* try { // try from 0035bc5c to 0035bc63 has its CatchHandler @ 0035c00c */
        puVar20 = (undefined8 *)FUN_002e4094(&local_110,pbVar10,uVar16);
        uStack_d8 = puVar20[1];
        local_e0 = (byte *)*puVar20;
        local_d0 = puVar20[2];
        puVar20[1] = 0;
        puVar20[2] = 0;
        *puVar20 = 0;
                    /* try { // try from 0035bc7c to 0035bc9f has its CatchHandler @ 0035c02c */
        uVar5 = FUN_00366220(param_3 + 0x90,uVar17 & 0xffffffff);
        FUN_0034dc2c(param_1,&local_e0,uVar5,0,"Oneof must have at least one field.");
        if (((ulong)local_e0 & 1) != 0) {
          FUN_002e2ea0(puVar4,local_d0);
        }
        if (((ulong)local_110 & 1) != 0) {
          FUN_002e2ea0(puVar4,local_100);
        }
        iVar8 = *(int *)(lVar9 + 0x18);
      }
      uVar5 = FUN_003415f0(*(undefined8 *)(param_1 + 8),iVar8 << 3);
      *(undefined8 *)(lVar9 + 0x20) = uVar5;
      *(undefined4 *)(lVar9 + 0x18) = 0;
      if (*(long *)(lVar9 + 0x28) == 0) {
        uVar5 = FUN_003b7b84();
        *(undefined8 *)(lVar9 + 0x28) = uVar5;
      }
      uVar16 = (ulong)*(int *)(param_2 + 0x6c);
      uVar17 = uVar17 + 1;
      lVar18 = lVar18 + 0x30;
      if ((long)uVar16 <= (long)uVar17) goto LAB_0035bcf8;
      lVar13 = *(long *)(param_2 + 0x30);
      lVar9 = lVar13 + lVar18;
      iVar8 = *(int *)(lVar9 + 0x18);
    } while( true );
  }
LAB_0035bcfc:
  if (0 < iVar8) {
    lVar13 = 0;
    lVar18 = 0;
    lVar9 = *(long *)(param_2 + 0x28);
    lVar14 = *(long *)(lVar9 + 0x58);
    if (lVar14 != 0) goto LAB_0035bd4c;
    while (lVar18 = lVar18 + 1, lVar18 < iVar8) {
      while( true ) {
        lVar13 = lVar13 + 0x98;
        lVar9 = *(long *)(param_2 + 0x28) + lVar13;
        lVar14 = *(long *)(lVar9 + 0x58);
        if (lVar14 == 0) break;
LAB_0035bd4c:
        lVar14 = *(long *)(param_2 + 0x30) +
                 (long)((int)((ulong)(lVar14 - *(long *)(*(long *)(lVar14 + 0x10) + 0x30)) >> 4) *
                       -0x55555555) * 0x30;
        iVar3 = *(int *)(lVar14 + 0x18);
        *(int *)(lVar9 + 0x48) = iVar3;
        *(int *)(lVar14 + 0x18) = iVar3 + 1;
        *(long *)(*(long *)(lVar14 + 0x20) + (long)iVar3 * 8) = lVar9;
        lVar18 = lVar18 + 1;
        if (iVar8 <= lVar18) goto LAB_0035bd90;
      }
    }
LAB_0035bd90:
    if (0 < iVar8) {
      lVar18 = 0;
      uVar16 = 0;
      lVar9 = *(long *)(param_2 + 0x28);
      cVar2 = *(char *)(lVar9 + 0x41);
      while( true ) {
        if ((cVar2 != '\0') &&
           (((lVar9 = *(long *)(lVar9 + 0x58), lVar9 == 0 || (*(int *)(lVar9 + 0x18) != 1)) ||
            (*(char *)(**(long **)(lVar9 + 0x20) + 0x41) == '\0')))) {
          uVar15 = *(undefined8 *)(param_2 + 8);
          uVar5 = FUN_00366138(param_3 + 0x18,uVar16 & 0xffffffff);
          FUN_0034dc2c(param_1,uVar15,uVar5,10,
                       "Fields with proto3_optional set must be a member of a one-field oneof");
          iVar8 = *(int *)(param_2 + 0x68);
        }
        uVar16 = uVar16 + 1;
        lVar18 = lVar18 + 0x98;
        if ((long)iVar8 <= (long)uVar16) break;
        lVar9 = *(long *)(param_2 + 0x28) + lVar18;
        cVar2 = *(char *)(lVar9 + 0x41);
      }
      uVar16 = (ulong)*(uint *)(param_2 + 0x6c);
    }
  }
  uVar12 = (uint)uVar16;
  if (0 < (int)(uint)uVar16) {
    lVar18 = 0;
    uVar17 = 0;
    uVar23 = 0xffffffff;
    do {
      while( true ) {
        while( true ) {
          lVar9 = *(long *)(param_2 + 0x30) + lVar18;
          uVar12 = (uint)uVar16;
          if ((*(int *)(lVar9 + 0x18) != 1) || (*(char *)(**(long **)(lVar9 + 0x20) + 0x41) == '\0')
             ) break;
          uVar1 = (uint)uVar17;
          if (uVar23 != 0xffffffff) {
            uVar1 = uVar23;
          }
          uVar17 = uVar17 + 1;
          lVar18 = lVar18 + 0x30;
          uVar23 = uVar1;
          if ((long)(int)uVar12 <= (long)uVar17) goto LAB_0035bf08;
        }
        if (uVar23 == 0xffffffff) break;
        uVar15 = *(undefined8 *)(param_2 + 8);
        uVar5 = FUN_00366220(param_3 + 0x90,uVar17 & 0xffffffff);
        FUN_0034dc2c(param_1,uVar15,uVar5,10,"Synthetic oneofs must be after all other oneofs");
        uVar12 = *(uint *)(param_2 + 0x6c);
        uVar16 = (ulong)uVar12;
        uVar17 = uVar17 + 1;
        lVar18 = lVar18 + 0x30;
        if ((long)(int)uVar12 <= (long)uVar17) goto LAB_0035bf08;
      }
      uVar23 = 0xffffffff;
      uVar17 = uVar17 + 1;
      lVar18 = lVar18 + 0x30;
    } while ((long)uVar17 < (long)(int)uVar12);
LAB_0035bf08:
    if (uVar23 != 0xffffffff) goto LAB_0035bf20;
  }
  uVar23 = uVar12;
LAB_0035bf20:
  *(uint *)(param_2 + 0x70) = uVar23;
  return;
LAB_0035bcf8:
  iVar8 = *(int *)(param_2 + 0x68);
  goto LAB_0035bcfc;
}


