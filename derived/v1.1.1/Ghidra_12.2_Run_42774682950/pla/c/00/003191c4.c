/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003191c4; name: FUN_003191c4
 */


/* WARNING: Type propagation algorithm not settling */

byte * FUN_003191c4(byte *param_1)

{
  long lVar1;
  long lVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  char cVar9;
  byte bVar10;
  uint uVar11;
  uint uVar12;
  undefined8 *puVar13;
  undefined *puVar14;
  ulong uVar15;
  long lVar16;
  long *plVar17;
  undefined8 extraout_x1;
  size_t __n;
  uint uVar18;
  ulong in_x4;
  uint uVar19;
  ulong in_x5;
  byte *in_x6;
  ulong uVar20;
  uint uVar21;
  long lVar22;
  ulong uVar23;
  uint uVar24;
  long lVar25;
  uint *puVar26;
  ulong uVar27;
  byte *unaff_x20;
  ulong uVar28;
  uint uVar29;
  undefined *unaff_x23;
  undefined *puVar30;
  byte *unaff_x24;
  byte *pbVar31;
  long lVar32;
  long lVar33;
  byte *pbVar34;
  byte *local_88;
  byte *local_78;
  byte *local_70;
  byte *local_68;
  
  uVar15 = (**(code **)(*(long *)param_1 + 0x98))();
  (**(code **)(*(long *)param_1 + 0x98))(param_1);
  puVar14 = PTR_LAB_04373088;
  puVar30 = PTR_FUN_04373078;
  local_70 = (byte *)0x0;
  local_68 = (byte *)0x0;
  local_78 = (byte *)0x0;
  if (*(char *)(*(long *)(uVar15 + 0x20) + 0x4b) == '\0') {
                    /* try { // try from 00319338 to 00319347 has its CatchHandler @ 00319808 */
    FUN_00387324(extraout_x1,param_1,&local_78);
    puVar30 = unaff_x23;
    pbVar34 = local_70;
LAB_0031934c:
    unaff_x23 = puVar30;
    if (pbVar34 == local_78) goto LAB_00319358;
    unaff_x23 = (undefined *)0x0;
    lVar32 = 0;
    do {
                    /* try { // try from 00319388 to 0031938f has its CatchHandler @ 00319818 */
      lVar33 = FUN_0031983c(*(undefined8 *)(local_78 + (long)unaff_x23 * 8),param_1);
      unaff_x23 = unaff_x23 + 1;
      lVar32 = lVar33 + lVar32;
    } while (unaff_x23 < (undefined *)((long)local_70 - (long)local_78 >> 3));
    cVar9 = *(char *)(*(long *)(uVar15 + 0x20) + 0x48);
  }
  else {
    if (0 < *(int *)(uVar15 + 0x68)) {
      lVar32 = 0;
      pbVar34 = (byte *)0x0;
      lVar33 = 1;
      pbVar31 = *(byte **)(uVar15 + 0x28);
      do {
        lVar22 = (long)pbVar34 - (long)local_78 >> 3;
        uVar28 = lVar22 + 1;
        if (uVar28 >> 0x3d != 0) {
                    /* try { // try from 003197f0 to 003197f7 has its CatchHandler @ 003197f8 */
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        if ((ulong)((long)local_68 - (long)local_78 >> 3) < 0xfffffffffffffff) {
          uVar20 = (long)local_68 - (long)local_78 >> 2;
          if (uVar28 <= uVar20) {
            uVar28 = uVar20;
          }
          if (uVar28 != 0) goto LAB_003192b8;
          lVar16 = 0;
        }
        else {
          uVar28 = 0x1fffffffffffffff;
LAB_003192b8:
          lVar16 = FUN_002e2e80(puVar30,uVar28 << 3);
        }
        unaff_x24 = local_78;
        plVar17 = (long *)(lVar16 + lVar22 * 8);
        unaff_x20 = (byte *)(lVar16 + uVar28 * 8);
        pbVar34 = (byte *)(plVar17 + 1);
        *plVar17 = (long)pbVar31;
        __n = (long)local_70 - (long)local_78;
        pbVar31 = (byte *)((long)plVar17 - __n);
        if (0 < (long)__n) {
          memcpy(pbVar31,local_78,__n);
        }
        local_78 = pbVar31;
        local_70 = pbVar34;
        local_68 = unaff_x20;
        if (unaff_x24 != (byte *)0x0) {
          FUN_002e2ea0(puVar14,unaff_x24);
        }
        if (*(int *)(uVar15 + 0x68) <= lVar33) goto LAB_0031934c;
        while( true ) {
          lVar32 = lVar32 + 0x98;
          lVar33 = lVar33 + 1;
          unaff_x24 = (byte *)(*(long *)(uVar15 + 0x28) + lVar32);
          pbVar31 = unaff_x24;
          if (local_68 <= pbVar34) break;
          *(byte **)pbVar34 = unaff_x24;
          pbVar34 = local_70 + 8;
          local_70 = pbVar34;
          if (*(int *)(uVar15 + 0x68) <= lVar33) goto LAB_0031934c;
        }
      } while( true );
    }
LAB_00319358:
    lVar32 = 0;
    cVar9 = *(char *)(*(long *)(uVar15 + 0x20) + 0x48);
  }
  if (cVar9 == '\0') {
    FUN_00380d50(extraout_x1,param_1);
    pbVar34 = (byte *)FUN_003120e4();
  }
  else {
                    /* try { // try from 003193b4 to 00319413 has its CatchHandler @ 00319808 */
    plVar17 = (long *)FUN_00380d50(extraout_x1,param_1);
    lVar33 = *plVar17;
    if ((int)((ulong)(plVar17[1] - lVar33) >> 4) < 1) {
      pbVar34 = (byte *)0x0;
    }
    else {
      lVar22 = *(long *)PTR_DAT_04373ac0;
      uVar20 = (plVar17[1] - lVar33) * 0x10000000 >> 0x20;
      uVar28 = uVar20;
      if ((long)uVar20 < 2) {
        uVar28 = 1;
      }
      if (uVar28 < 5) {
        uVar23 = 0;
        pbVar34 = (byte *)0x0;
      }
      else {
        uVar23 = uVar28 & 0x7ffffffffffffffc;
        puVar26 = (uint *)(lVar33 + 0x20);
        lVar16 = 0;
        lVar25 = 0;
        pbVar34 = (byte *)0x0;
        pbVar31 = (byte *)0x0;
        uVar27 = uVar23;
        do {
          uVar19 = (uint)in_x5;
          uVar29 = (uint)uVar15;
          uVar6 = puVar26[-7];
          uVar7 = puVar26[-3];
          uVar21 = puVar26[1];
          uVar5 = puVar26[5];
          if (uVar6 == 3) {
            in_x4 = (ulong)puVar26[-8];
          }
          if (uVar7 == 3) {
            uVar19 = puVar26[-4];
          }
          if (uVar21 == 3) {
            uVar29 = *puVar26;
          }
          if (uVar5 == 3) {
            unaff_x23 = (undefined *)(ulong)puVar26[4];
          }
          if (uVar6 == 3) {
            unaff_x20 = *(byte **)(puVar26 + -6);
          }
          if (uVar7 == 3) {
            param_1 = *(byte **)(puVar26 + -2);
          }
          if (uVar21 == 3) {
            in_x6 = *(byte **)(puVar26 + 2);
          }
          if (uVar5 == 3) {
            local_88 = *(byte **)(puVar26 + 6);
          }
          uVar18 = (uint)in_x4;
          uVar11 = (uint)unaff_x23 | 1;
          in_x5 = (ulong)uVar11;
          if (uVar6 == 3) {
            in_x4 = (ulong)*unaff_x20;
          }
          if (uVar7 == 3) {
            in_x5 = (ulong)*param_1;
          }
          uVar18 = (uint)LZCOUNT(uVar18 | 1) ^ 0x1f;
          uVar15 = (ulong)uVar18;
          if (uVar21 == 3) {
            unaff_x23 = (undefined *)(ulong)*in_x6;
          }
          if (uVar5 == 3) {
            unaff_x24 = (byte *)(ulong)*local_88;
          }
          uVar18 = uVar18 * 9 + 0x49;
          if ((uVar6 == 3) && ((in_x4 & 1) != 0)) {
            uVar15 = *(ulong *)(unaff_x20 + 8);
          }
          uVar12 = uVar18 >> 6;
          uVar24 = (uint)unaff_x23 & (uint)(uVar21 == 3);
          if (((uint)in_x5 & (uint)(uVar7 == 3)) != 0) {
            unaff_x20 = *(byte **)(param_1 + 8);
          }
          if (uVar24 != 0) {
            uVar18 = (uint)*(undefined8 *)(in_x6 + 8);
          }
          in_x6 = pbVar34 + (ulong)uVar12 + lVar22;
          param_1 = pbVar31 + (ulong)(((uint)LZCOUNT(uVar19 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + lVar22;
          if (((uint)unaff_x24 & (uint)(uVar5 == 3)) != 0) {
            uVar24 = (uint)*(undefined8 *)(local_88 + 8);
          }
          uVar19 = (uint)unaff_x24 >> 1 & 0x7f;
          if (uVar5 != 3 || ((ulong)unaff_x24 & 1) != 0) {
            uVar19 = uVar24;
          }
          lVar1 = lVar16 + lVar22 + (ulong)(((uint)LZCOUNT(uVar11) ^ 0x1f) * 9 + 0x49 >> 6) +
                  (long)(int)uVar19 + (ulong)(((uint)LZCOUNT(uVar19 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
          if (uVar5 != 3) {
            lVar1 = lVar16;
          }
          uVar5 = (uint)unaff_x23 >> 1 & 0x7f;
          if (uVar21 != 3 || ((ulong)unaff_x23 & 1) != 0) {
            uVar5 = uVar18;
          }
          lVar2 = lVar25 + lVar22 + (ulong)(((uint)LZCOUNT(uVar29 | 1) ^ 0x1f) * 9 + 0x49 >> 6) +
                  (long)(int)uVar5 + (ulong)(((uint)LZCOUNT(uVar5 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
          if (uVar21 != 3) {
            lVar2 = lVar25;
          }
          pbVar3 = (byte *)(ulong)((uint)in_x5 >> 1 & 0x7f);
          if (uVar7 != 3 || (in_x5 & 1) != 0) {
            pbVar3 = unaff_x20;
          }
          pbVar3 = param_1 + (ulong)(((uint)LZCOUNT((uint)pbVar3 | 1) ^ 0x1f) * 9 + 0x49 >> 6) +
                             (long)(int)(uint)pbVar3;
          if (uVar7 != 3) {
            pbVar3 = pbVar31;
          }
          uVar21 = (uint)in_x4 >> 1 & 0x7f;
          if (uVar6 != 3 || (in_x4 & 1) != 0) {
            uVar21 = (uint)uVar15;
          }
          pbVar4 = in_x6 + (ulong)(((uint)LZCOUNT(uVar21 | 1) ^ 0x1f) * 9 + 0x49 >> 6) +
                           (long)(int)uVar21;
          if (uVar6 != 3) {
            pbVar4 = pbVar34;
          }
          uVar27 = uVar27 - 4;
          puVar26 = puVar26 + 0x10;
          lVar16 = lVar1;
          lVar25 = lVar2;
          pbVar34 = pbVar4;
          pbVar31 = pbVar3;
        } while (uVar27 != 0);
        pbVar34 = pbVar3 + (long)pbVar4 + lVar1 + lVar2;
        if (uVar28 == uVar23) goto LAB_003197b0;
      }
      lVar33 = lVar33 + uVar23 * 0x10;
      iVar8 = *(int *)(lVar33 + 4);
      puVar13 = (undefined8 *)(lVar33 + 8);
      while( true ) {
        if (iVar8 == 3) {
          bVar10 = *(byte *)*puVar13;
          if ((bVar10 & 1) == 0) {
            uVar21 = (uint)(bVar10 >> 1);
          }
          else {
            uVar21 = (uint)*(undefined8 *)((byte *)*puVar13 + 8);
          }
          pbVar34 = pbVar34 + (ulong)(((uint)LZCOUNT(uVar21 | 1) ^ 0x1f) * 9 + 0x49 >> 6) +
                              (long)(int)uVar21 +
                              (ulong)(((uint)LZCOUNT(*(uint *)(puVar13 + -1) | 1) ^ 0x1f) * 9 + 0x49
                                     >> 6) + lVar22;
        }
        uVar23 = uVar23 + 1;
        if ((long)uVar20 <= (long)uVar23) break;
        iVar8 = *(int *)((long)puVar13 + 0xc);
        puVar13 = puVar13 + 2;
      }
    }
  }
LAB_003197b0:
  if (local_78 != (byte *)0x0) {
    local_70 = local_78;
    FUN_002e2ea0(PTR_LAB_04373088);
  }
  return pbVar34 + lVar32;
}


