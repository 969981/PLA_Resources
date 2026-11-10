/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0034d240; name: FUN_0034d240
 */


long FUN_0034d240(long *param_1,long param_2)

{
  char *__s2;
  size_t sVar1;
  size_t sVar2;
  char *__s1;
  ulong *puVar3;
  byte bVar4;
  char cVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  byte *pbVar12;
  size_t sVar13;
  char *pcVar14;
  byte *pbVar15;
  byte *pbVar16;
  long *plVar17;
  ulong *puVar18;
  void *pvVar19;
  ulong uVar20;
  long *plVar21;
  void *pvVar22;
  long lVar23;
  ulong *puVar24;
  ulong uVar25;
  ulong uVar26;
  byte local_168 [8];
  size_t local_160;
  char *local_158;
  byte local_150 [8];
  size_t local_148;
  char *local_140;
  byte *local_138 [27];
  
  pbVar12 = *(byte **)(param_2 + 0xb0);
  if ((byte *)(param_1 + 7) != pbVar12) {
    uVar20 = *(ulong *)(pbVar12 + 8);
    pbVar16 = *(byte **)(pbVar12 + 0x10);
    if ((*pbVar12 & 1) == 0) {
      pbVar16 = pbVar12 + 1;
      uVar20 = (ulong)(*pbVar12 >> 1);
    }
    FUN_00291910(param_1 + 7,pbVar16,uVar20);
  }
  local_138[0] = (byte *)param_1[9];
  if ((*(byte *)(param_1 + 7) & 1) == 0) {
    local_138[0] = (byte *)((long)param_1 + 0x39);
  }
  lVar9 = FUN_00364b6c(param_1[1] + 0x158,local_138);
  if ((lVar9 != 0) && (lVar9 = *(long *)(lVar9 + 0x18), lVar9 != 0)) {
    FUN_003a3678(local_138,0);
                    /* try { // try from 0034d2d0 to 0034d2ff has its CatchHandler @ 0034d9bc */
    FUN_003448a8(lVar9,local_138);
    if ((*(int *)(lVar9 + 0x3c) == 2) && ((*(byte *)(param_2 + 0x10) >> 2 & 1) != 0)) {
      FUN_00344fc8(local_138,"proto2");
    }
                    /* try { // try from 0034d300 to 0034d30b has its CatchHandler @ 0034d9b8 */
    FUN_0031f010(local_150,local_138);
                    /* try { // try from 0034d30c to 0034d317 has its CatchHandler @ 0034d998 */
    FUN_0031f010(local_168,param_2);
    bVar4 = local_150[0];
    sVar13 = (size_t)(local_150[0] >> 1);
    sVar1 = sVar13;
    if ((local_150[0] & 1) != 0) {
      sVar1 = local_148;
    }
    sVar2 = (ulong)(local_168[0] >> 1);
    if ((local_168[0] & 1) != 0) {
      sVar2 = local_160;
    }
    if (sVar1 == sVar2) {
      pcVar14 = (char *)((ulong)local_150 | 1);
      __s1 = pcVar14;
      if ((local_150[0] & 1) != 0) {
        __s1 = local_140;
      }
      __s2 = (char *)((ulong)local_168 | 1);
      if ((local_168[0] & 1) != 0) {
        __s2 = local_158;
      }
      if ((local_150[0] & 1) == 0) {
        while (sVar1 != 0) {
          if (*pcVar14 != *__s2) goto LAB_0034d3a0;
          pcVar14 = pcVar14 + 1;
          __s2 = __s2 + 1;
          sVar13 = sVar13 - 1;
          sVar1 = sVar13;
        }
      }
      else if (sVar1 != 0) {
        iVar8 = memcmp(__s1,__s2,sVar1);
        bVar7 = iVar8 == 0;
        goto joined_r0x0034d3a4;
      }
      bVar7 = true;
    }
    else {
LAB_0034d3a0:
      bVar7 = false;
    }
joined_r0x0034d3a4:
    if ((local_168[0] & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_158);
      bVar4 = local_150[0];
    }
    if ((bVar4 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_140);
    }
    FUN_003a3a04(local_138);
    if (bVar7) {
      return lVar9;
    }
  }
  plVar17 = (long *)param_1[1];
  puVar18 = (ulong *)*plVar17;
  puVar3 = (ulong *)plVar17[1];
  if ((long)puVar3 - (long)puVar18 == 0) {
    lVar9 = *param_1;
    cVar5 = *(char *)(lVar9 + 0x29);
    puVar18 = puVar3;
  }
  else {
    pbVar12 = *(byte **)(param_2 + 0xb0);
    uVar20 = 0;
    bVar4 = *pbVar12;
    sVar1 = (ulong)(bVar4 >> 1);
    if ((bVar4 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar12 + 8);
    }
    uVar25 = ((long)puVar3 - (long)puVar18 >> 3) * -0x5555555555555555;
    if ((bVar4 & 1) == 0) {
      do {
        puVar24 = puVar18 + uVar20 * 3;
        bVar4 = (byte)*puVar24;
        uVar26 = (ulong)(bVar4 >> 1);
        sVar13 = uVar26;
        if ((bVar4 & 1) != 0) {
          sVar13 = puVar24[1];
        }
        if (sVar13 == sVar1) {
          pbVar16 = (byte *)puVar18[uVar20 * 3 + 2];
          if ((bVar4 & 1) == 0) {
            pbVar16 = (byte *)((long)puVar24 + 1);
          }
          if ((bVar4 & 1) == 0) {
            if (sVar1 == 0) goto LAB_0034d588;
            pbVar16 = pbVar12 + 1;
            while (puVar24 = (ulong *)((long)puVar24 + 1), *(byte *)puVar24 == *pbVar16) {
              uVar26 = uVar26 - 1;
              pbVar16 = pbVar16 + 1;
              if (uVar26 == 0) goto LAB_0034d588;
            }
          }
          else if ((sVar1 == 0) || (iVar8 = memcmp(pbVar16,pbVar12 + 1,sVar1), iVar8 == 0))
          goto LAB_0034d588;
        }
        uVar20 = uVar20 + 1;
      } while (uVar20 < uVar25);
    }
    else {
      do {
        puVar24 = puVar18 + uVar20 * 3;
        bVar4 = (byte)*puVar24;
        uVar26 = (ulong)(bVar4 >> 1);
        sVar13 = uVar26;
        if ((bVar4 & 1) != 0) {
          sVar13 = puVar24[1];
        }
        if (sVar13 == sVar1) {
          pbVar15 = (byte *)puVar18[uVar20 * 3 + 2];
          pbVar16 = *(byte **)(pbVar12 + 0x10);
          if ((bVar4 & 1) == 0) {
            pbVar15 = (byte *)((long)puVar24 + 1);
          }
          if ((bVar4 & 1) == 0) {
            if (sVar1 == 0) {
LAB_0034d588:
              FUN_00351814(param_1,param_2,uVar20 & 0xffffffff);
              return 0;
            }
            while (puVar24 = (ulong *)((long)puVar24 + 1), *(byte *)puVar24 == *pbVar16) {
              uVar26 = uVar26 - 1;
              pbVar16 = pbVar16 + 1;
              if (uVar26 == 0) goto LAB_0034d588;
            }
          }
          else if ((sVar1 == 0) || (iVar8 = memcmp(pbVar15,pbVar16,sVar1), iVar8 == 0))
          goto LAB_0034d588;
        }
        uVar20 = uVar20 + 1;
      } while (uVar20 < uVar25);
    }
    lVar9 = *param_1;
    cVar5 = *(char *)(lVar9 + 0x29);
  }
  if ((cVar5 != '\0') || (*(long *)(lVar9 + 8) == 0)) goto LAB_0034d8f8;
  puVar24 = *(ulong **)(param_2 + 0xb0);
  if ((ulong *)plVar17[2] == puVar3) {
    lVar9 = plVar17[2] - (long)puVar18 >> 3;
    uVar25 = 0xaaaaaaaaaaaaaaa;
    uVar20 = lVar9 * -0x5555555555555555 + 1;
    if (0xaaaaaaaaaaaaaaa < uVar20) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    if ((ulong)(lVar9 * -0x5555555555555555) < 0x555555555555555) {
      uVar25 = uVar20;
      if (uVar20 <= (ulong)(lVar9 * 0x5555555555555556)) {
        uVar25 = lVar9 * 0x5555555555555556;
      }
      if (uVar25 != 0) goto LAB_0034d624;
      lVar10 = 0;
    }
    else {
LAB_0034d624:
      lVar10 = FUN_002e2e80(PTR_FUN_04373078,uVar25 * 0x18);
    }
    puVar18 = (ulong *)(lVar10 + lVar9 * 8);
    puVar18[2] = 0;
    *puVar18 = 0;
    puVar18[1] = 0;
    if ((*puVar24 & 1) == 0) {
      uVar26 = puVar24[1];
      uVar20 = *puVar24;
      puVar18[2] = puVar24[2];
      puVar18[1] = uVar26;
      *puVar18 = uVar20;
    }
    else {
      uVar20 = puVar24[1];
      if (0xffffffffffffffef < uVar20) {
                    /* try { // try from 0034d970 to 0034d977 has its CatchHandler @ 0034d978 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      pvVar22 = (void *)puVar24[2];
      if (uVar20 < 0x17) {
        pvVar19 = (void *)((long)puVar18 + 1);
        *(char *)puVar18 = (char)((int)uVar20 << 1);
        if (uVar20 != 0) goto LAB_0034d74c;
      }
      else {
        uVar26 = uVar20 + 0x10 & 0xfffffffffffffff0;
        pvVar19 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar26);
        lVar9 = lVar10 + lVar9 * 8;
        *(ulong *)(lVar9 + 8) = uVar20;
        *(void **)(lVar9 + 0x10) = pvVar19;
        *puVar18 = uVar26 | 1;
LAB_0034d74c:
        memcpy(pvVar19,pvVar22,uVar20);
      }
      *(undefined1 *)((long)pvVar19 + uVar20) = 0;
    }
    lVar10 = lVar10 + uVar25 * 0x18;
    pbVar12 = (byte *)*plVar17;
    pbVar16 = (byte *)plVar17[1];
    puVar3 = puVar18 + 3;
    if (pbVar16 == pbVar12) {
      *plVar17 = (long)puVar18;
      plVar17[1] = (long)puVar3;
      plVar17[2] = lVar10;
    }
    else {
      do {
        uVar25 = *(ulong *)(pbVar16 + -0x10);
        uVar20 = *(ulong *)(pbVar16 + -0x18);
        puVar18[-1] = *(ulong *)(pbVar16 + -8);
        puVar18[-2] = uVar25;
        puVar18[-3] = uVar20;
        pbVar16[-0x18] = 0;
        pbVar16[-0x17] = 0;
        pbVar16[-0x16] = 0;
        pbVar16[-0x15] = 0;
        pbVar16[-0x14] = 0;
        pbVar16[-0x13] = 0;
        pbVar16[-0x12] = 0;
        pbVar16[-0x11] = 0;
        pbVar16[-0x10] = 0;
        pbVar16[-0xf] = 0;
        pbVar16[-0xe] = 0;
        pbVar16[-0xd] = 0;
        pbVar16[-0xc] = 0;
        pbVar16[-0xb] = 0;
        pbVar16[-10] = 0;
        pbVar16[-9] = 0;
        pbVar16[-8] = 0;
        pbVar16[-7] = 0;
        pbVar16[-6] = 0;
        pbVar16[-5] = 0;
        pbVar16[-4] = 0;
        pbVar16[-3] = 0;
        pbVar16[-2] = 0;
        pbVar16[-1] = 0;
        pbVar16 = pbVar16 + -0x18;
        puVar18 = puVar18 + -3;
      } while (pbVar12 != pbVar16);
      pbVar12 = (byte *)*plVar17;
      pbVar16 = (byte *)plVar17[1];
      *plVar17 = (long)puVar18;
      plVar17[1] = (long)puVar3;
      plVar17[2] = lVar10;
      puVar6 = PTR_LAB_04373088;
      if (pbVar16 != pbVar12) {
        bVar4 = pbVar16[-0x18];
        pbVar15 = pbVar16 + -0x18;
        while( true ) {
          if ((bVar4 & 1) != 0) {
            FUN_002e2ea0(puVar6,*(undefined8 *)(pbVar16 + -8));
          }
          if (pbVar12 == pbVar15) break;
          bVar4 = pbVar15[-0x18];
          pbVar16 = pbVar15;
          pbVar15 = pbVar15 + -0x18;
        }
      }
    }
    if (pbVar12 != (byte *)0x0) {
      FUN_002e2ea0(PTR_LAB_04373088,pbVar12);
    }
    iVar8 = *(int *)(param_2 + 0x20);
    plVar21 = (long *)param_1[1];
  }
  else {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    if ((*puVar24 & 1) == 0) {
      uVar25 = puVar24[1];
      uVar20 = *puVar24;
      puVar3[2] = puVar24[2];
      puVar3[1] = uVar25;
      *puVar3 = uVar20;
    }
    else {
      uVar20 = puVar24[1];
      if (0xffffffffffffffef < uVar20) {
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      pvVar22 = (void *)puVar24[2];
      if (uVar20 < 0x17) {
        pvVar19 = (void *)((long)puVar3 + 1);
        *(char *)puVar3 = (char)((int)uVar20 << 1);
        if (uVar20 != 0) goto LAB_0034d6e4;
      }
      else {
        uVar25 = uVar20 + 0x10 & 0xfffffffffffffff0;
        pvVar19 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar25);
        puVar3[1] = uVar20;
        puVar3[2] = (ulong)pvVar19;
        *puVar3 = uVar25 | 1;
LAB_0034d6e4:
        memcpy(pvVar19,pvVar22,uVar20);
      }
      *(undefined1 *)((long)pvVar19 + uVar20) = 0;
    }
    plVar17[1] = plVar17[1] + 0x18;
    iVar8 = *(int *)(param_2 + 0x20);
    plVar21 = (long *)param_1[1];
  }
  if (0 < iVar8) {
    iVar8 = 0;
    lVar9 = param_2 + 0x18;
    do {
      pbVar12 = (byte *)FUN_0032b79c(lVar9,iVar8);
      local_138[0] = *(byte **)(pbVar12 + 0x10);
      if ((*pbVar12 & 1) == 0) {
        local_138[0] = pbVar12 + 1;
      }
      lVar10 = FUN_00364b6c(plVar21 + 0x2b,local_138);
      if ((lVar10 == 0) || (*(long *)(lVar10 + 0x18) == 0)) {
        lVar10 = *param_1;
        lVar23 = *(long *)(lVar10 + 0x18);
        if (lVar23 != 0) {
          uVar11 = FUN_0032b79c(lVar9,iVar8);
          lVar10 = FUN_0034222c(lVar23,uVar11);
          if (lVar10 != 0) goto LAB_0034d850;
          lVar10 = *param_1;
        }
        uVar11 = FUN_0032b79c(lVar9,iVar8);
        FUN_003424f8(lVar10,uVar11);
      }
LAB_0034d850:
      iVar8 = iVar8 + 1;
      plVar21 = (long *)param_1[1];
    } while (iVar8 < *(int *)(param_2 + 0x20));
  }
  pbVar12 = (byte *)(plVar21[1] + -0x18);
  plVar17 = plVar21;
  if ((*pbVar12 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(plVar21[1] + -8));
    plVar17 = (long *)param_1[1];
  }
  plVar21[1] = (long)pbVar12;
LAB_0034d8f8:
  FUN_0033eca8(plVar17);
  lVar9 = FUN_00351d04(param_1,param_2);
  FUN_00340388(param_1[0xb]);
  if (lVar9 == 0) {
    FUN_0033ef14(param_1[1]);
  }
  else {
    FUN_0033ee54();
    *(undefined1 *)(lVar9 + 0x41) = 1;
  }
  return lVar9;
}


