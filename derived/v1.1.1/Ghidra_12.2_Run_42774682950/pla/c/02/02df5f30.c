/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02df5f30; name: FUN_02df5f30
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_02df5f30(long param_1,int *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  size_t sVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  byte *pbVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  uint *puVar14;
  long lVar15;
  uint *puVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  byte bVar20;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  undefined8 uVar21;
  byte bVar28;
  byte bVar29;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  undefined8 uVar30;
  byte bVar37;
  int iVar38;
  byte bVar40;
  byte bVar41;
  int iVar39;
  byte bVar42;
  int iVar43;
  byte bVar45;
  byte bVar46;
  int iVar44;
  byte bVar47;
  byte bVar48;
  byte bVar50;
  byte bVar51;
  int iVar49;
  byte bVar52;
  byte bVar53;
  byte bVar55;
  byte bVar56;
  int iVar54;
  byte bVar57;
  byte bVar58;
  byte bVar60;
  byte bVar61;
  int iVar59;
  byte bVar62;
  byte bVar63;
  byte bVar65;
  byte bVar66;
  int iVar64;
  byte bVar67;
  size_t local_20a0;
  long *local_2098;
  undefined1 auStack_2090 [8240];
  
  lVar15 = *(long *)(param_1 + 0x18);
  uVar1 = *(uint *)(lVar15 + (long)*(int *)(param_1 + 0x3c) * 4);
  uVar8 = (ulong)*(int *)(param_1 + 0x10);
  uVar10 = uVar8 * 8 + 0xf & 0xfffffffffffffff0;
  puVar12 = (undefined8 *)(auStack_2090 + (-0x10 - uVar10));
  uVar11 = uVar8 * 4 + 0xf & 0xfffffffffffffff0;
  puVar14 = (uint *)((long)puVar12 - uVar11);
  puVar16 = (uint *)((long)puVar14 - uVar11);
  local_2098 = (long *)((long)puVar16 - uVar10);
  if (0 < *(int *)(param_1 + 0x10)) {
    local_20a0 = (size_t)(uVar1 << 1);
    lVar6 = FUN_02def170(param_1);
    sVar4 = local_20a0;
    *local_2098 = lVar6;
    *puVar16 = (uint)(lVar6 != 0);
    memset((void *)**(undefined8 **)(param_1 + 0x20),0,sVar4);
    uVar8 = (ulong)*(uint *)(param_1 + 0x10);
    if (1 < (int)*(uint *)(param_1 + 0x10)) {
      lVar6 = 1;
      do {
        lVar7 = FUN_02def170(param_1);
        sVar4 = local_20a0;
        local_2098[lVar6] = lVar7;
        puVar16[lVar6] = (uint)(lVar7 != 0);
        memset(*(void **)(*(long *)(param_1 + 0x20) + lVar6 * 8),0,sVar4);
        uVar8 = (ulong)*(int *)(param_1 + 0x10);
        lVar6 = lVar6 + 1;
      } while (lVar6 < (long)uVar8);
    }
  }
  lVar6 = (long)param_2[6];
  if (0 < param_2[6]) {
    pbVar9 = (byte *)(*(long *)(param_2 + 8) + 1);
    do {
      bVar20 = *pbVar9;
      if ((puVar16[pbVar9[-1]] != 0) || (puVar16[bVar20] != 0)) {
        puVar16[pbVar9[-1]] = 1;
        puVar16[bVar20] = 1;
      }
      lVar6 = lVar6 + -1;
      pbVar9 = pbVar9 + 2;
    } while (lVar6 != 0);
  }
  if (*param_2 < 1) {
LAB_02df61b8:
    if (((DAT_04409000 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04409000), iVar5 != 0)) {
      DAT_04408ff0 = 0;
      DAT_04408ff8 = 0;
      __cxa_guard_release(&DAT_04409000);
    }
    if (((DAT_04409020 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04409020), iVar5 != 0)) {
      uRam0000000004409018 = 0xffffffffffffffff;
      _DAT_04409010 = 0xffffffffffffffff;
      __cxa_guard_release(&DAT_04409020);
    }
    lVar6 = (long)param_2[6];
    if ((0 < param_2[6]) && (7 < (int)uVar1)) {
      do {
        lVar6 = lVar6 + -1;
        pbVar9 = (byte *)(*(long *)(param_2 + 8) + lVar6 * 2);
        puVar12 = *(undefined8 **)(*(long *)(param_1 + 0x20) + (ulong)*pbVar9 * 8);
        puVar13 = *(undefined8 **)(*(long *)(param_1 + 0x20) + (ulong)pbVar9[1] * 8);
        uVar8 = (ulong)(uVar1 >> 3);
        do {
          uVar8 = uVar8 - 1;
          uVar30 = puVar13[1];
          uVar21 = *puVar13;
          iVar5 = (int)*puVar12;
          iVar38 = -(uint)(iVar5 < (int)DAT_04408ff0);
          iVar17 = (int)((ulong)*puVar12 >> 0x20);
          iVar39 = -(uint)(iVar17 < (int)((ulong)DAT_04408ff0 >> 0x20));
          iVar18 = (int)puVar12[1];
          iVar43 = -(uint)(iVar18 < (int)DAT_04408ff8);
          iVar19 = (int)((ulong)puVar12[1] >> 0x20);
          iVar44 = -(uint)(iVar19 < (int)((ulong)DAT_04408ff8 >> 0x20));
          iVar49 = -(uint)((int)_DAT_04409010 < (int)uVar21);
          iVar54 = -(uint)((int)((ulong)_DAT_04409010 >> 0x20) < (int)((ulong)uVar21 >> 0x20));
          iVar59 = -(uint)((int)uRam0000000004409018 < (int)uVar30);
          iVar64 = -(uint)((int)((ulong)uRam0000000004409018 >> 0x20) < (int)((ulong)uVar30 >> 0x20)
                          );
          bVar48 = (byte)iVar49 ^ (byte)iVar38;
          bVar25 = (byte)((uint)iVar38 >> 8);
          bVar50 = (byte)((uint)iVar49 >> 8) ^ bVar25;
          bVar26 = (byte)((uint)iVar38 >> 0x10);
          bVar51 = (byte)((uint)iVar49 >> 0x10) ^ bVar26;
          bVar27 = (byte)((uint)iVar38 >> 0x18);
          bVar52 = (byte)((uint)iVar49 >> 0x18) ^ bVar27;
          bVar53 = (byte)iVar54 ^ (byte)iVar39;
          bVar40 = (byte)((uint)iVar39 >> 8);
          bVar55 = (byte)((uint)iVar54 >> 8) ^ bVar40;
          bVar41 = (byte)((uint)iVar39 >> 0x10);
          bVar56 = (byte)((uint)iVar54 >> 0x10) ^ bVar41;
          bVar42 = (byte)((uint)iVar39 >> 0x18);
          bVar57 = (byte)((uint)iVar54 >> 0x18) ^ bVar42;
          bVar58 = (byte)iVar59 ^ (byte)iVar43;
          bVar34 = (byte)((uint)iVar43 >> 8);
          bVar60 = (byte)((uint)iVar59 >> 8) ^ bVar34;
          bVar35 = (byte)((uint)iVar43 >> 0x10);
          bVar61 = (byte)((uint)iVar59 >> 0x10) ^ bVar35;
          bVar36 = (byte)((uint)iVar43 >> 0x18);
          bVar62 = (byte)((uint)iVar59 >> 0x18) ^ bVar36;
          bVar63 = (byte)iVar64 ^ (byte)iVar44;
          bVar45 = (byte)((uint)iVar44 >> 8);
          bVar65 = (byte)((uint)iVar64 >> 8) ^ bVar45;
          bVar46 = (byte)((uint)iVar44 >> 0x10);
          bVar66 = (byte)((uint)iVar64 >> 0x10) ^ bVar46;
          bVar47 = (byte)((uint)iVar44 >> 0x18);
          bVar67 = (byte)((uint)iVar64 >> 0x18) ^ bVar47;
          bVar20 = (byte)uVar21;
          bVar22 = (byte)((ulong)uVar21 >> 8);
          bVar23 = (byte)((ulong)uVar21 >> 0x10);
          bVar24 = (byte)((ulong)uVar21 >> 0x18);
          iVar49 = CONCAT13(bVar24 & bVar27,
                            CONCAT12(bVar23 & bVar26,CONCAT11(bVar22 & bVar25,bVar20 & (byte)iVar38)
                                    ));
          bVar25 = (byte)((ulong)uVar21 >> 0x20);
          bVar26 = (byte)((ulong)uVar21 >> 0x28);
          bVar27 = (byte)((ulong)uVar21 >> 0x30);
          bVar28 = (byte)((ulong)uVar21 >> 0x38);
          bVar29 = (byte)uVar30;
          bVar31 = (byte)((ulong)uVar30 >> 8);
          bVar32 = (byte)((ulong)uVar30 >> 0x10);
          bVar33 = (byte)((ulong)uVar30 >> 0x18);
          iVar59 = CONCAT13(bVar33 & bVar36,
                            CONCAT12(bVar32 & bVar35,CONCAT11(bVar31 & bVar34,bVar29 & (byte)iVar43)
                                    ));
          bVar34 = (byte)((ulong)uVar30 >> 0x20);
          bVar35 = (byte)((ulong)uVar30 >> 0x28);
          bVar36 = (byte)((ulong)uVar30 >> 0x30);
          bVar37 = (byte)((ulong)uVar30 >> 0x38);
          uVar10 = (ulong)_DAT_04409010 >> 0x20;
          uVar11 = (ulong)_DAT_04409010 >> 0x28;
          uVar2 = (ulong)_DAT_04409010 >> 0x30;
          uVar3 = (ulong)_DAT_04409010 >> 0x38;
          iVar54 = (int)(CONCAT17(bVar28 & bVar42,
                                  CONCAT16(bVar27 & bVar41,
                                           CONCAT15(bVar26 & bVar40,
                                                    CONCAT14(bVar25 & (byte)iVar39,iVar49)))) >>
                        0x20);
          iVar64 = (int)(CONCAT17(bVar37 & bVar47,
                                  CONCAT16(bVar36 & bVar46,
                                           CONCAT15(bVar35 & bVar45,
                                                    CONCAT14(bVar34 & (byte)iVar44,iVar59)))) >>
                        0x20);
          iVar43 = CONCAT13(((byte)((ulong)_DAT_04409010 >> 0x18) ^ bVar52) & bVar24,
                            CONCAT12(((byte)((ulong)_DAT_04409010 >> 0x10) ^ bVar51) & bVar23,
                                     CONCAT11(((byte)((ulong)_DAT_04409010 >> 8) ^ bVar50) & bVar22,
                                              ((byte)_DAT_04409010 ^ bVar48) & bVar20)));
          iVar44 = CONCAT13(((byte)((ulong)uRam0000000004409018 >> 0x18) ^ bVar62) & bVar33,
                            CONCAT12(((byte)((ulong)uRam0000000004409018 >> 0x10) ^ bVar61) & bVar32
                                     ,CONCAT11(((byte)((ulong)uRam0000000004409018 >> 8) ^ bVar60) &
                                               bVar31,((byte)uRam0000000004409018 ^ bVar58) & bVar29
                                              )));
          iVar38 = CONCAT13(bVar24 & bVar52,
                            CONCAT12(bVar23 & bVar51,CONCAT11(bVar22 & bVar50,bVar20 & bVar48)));
          iVar39 = CONCAT13(bVar33 & bVar62,
                            CONCAT12(bVar32 & bVar61,CONCAT11(bVar31 & bVar60,bVar29 & bVar58)));
          puVar12[1] = CONCAT44((iVar19 - iVar64) +
                                (int)(CONCAT17(((byte)((ulong)uRam0000000004409018 >> 0x38) ^ bVar67
                                               ) & bVar37,
                                               CONCAT16(((byte)((ulong)uRam0000000004409018 >> 0x30)
                                                        ^ bVar66) & bVar36,
                                                        CONCAT15(((byte)((ulong)uRam0000000004409018
                                                                        >> 0x28) ^ bVar65) & bVar35,
                                                                 CONCAT14(((byte)((ulong)
                                                  uRam0000000004409018 >> 0x20) ^ bVar63) & bVar34,
                                                  iVar44)))) >> 0x20),(iVar18 - iVar59) + iVar44);
          *puVar12 = CONCAT44((iVar17 - iVar54) +
                              (int)(CONCAT17(((byte)uVar3 ^ bVar57) & bVar28,
                                             CONCAT16(((byte)uVar2 ^ bVar56) & bVar27,
                                                      CONCAT15(((byte)uVar11 ^ bVar55) & bVar26,
                                                               CONCAT14(((byte)uVar10 ^ bVar53) &
                                                                        bVar25,iVar43)))) >> 0x20),
                              (iVar5 - iVar49) + iVar43);
          puVar13[1] = CONCAT44((iVar64 + iVar19) -
                                (int)(CONCAT17(bVar37 & bVar67,
                                               CONCAT16(bVar36 & bVar66,
                                                        CONCAT15(bVar35 & bVar65,
                                                                 CONCAT14(bVar34 & bVar63,iVar39))))
                                     >> 0x20),(iVar59 + iVar18) - iVar39);
          *puVar13 = CONCAT44((iVar54 + iVar17) -
                              (int)(CONCAT17(bVar28 & bVar57,
                                             CONCAT16(bVar27 & bVar56,
                                                      CONCAT15(bVar26 & bVar55,
                                                               CONCAT14(bVar25 & bVar53,iVar38))))
                                   >> 0x20),(iVar49 + iVar5) - iVar38);
          puVar12 = puVar12 + 2;
          puVar13 = puVar13 + 2;
        } while (uVar8 != 0);
      } while (0 < lVar6);
    }
    if (0 < *(int *)(param_1 + 0x10)) {
      if (*param_2 < 2) {
        uVar8 = 0;
      }
      else {
        uVar8 = (ulong)**(byte **)(param_2 + 2);
      }
      pbVar9 = (byte *)(*(long *)(param_2 + 4) + uVar8 * 2);
      iVar17 = *(int *)(*(long *)(lVar15 + 0x38) + (ulong)pbVar9[1] * 0x28 + 0x1c);
      iVar5 = *(int *)(lVar15 + (long)*(int *)(param_1 + 0x3c) * 4) >> 1;
      if (iVar17 <= iVar5) {
        iVar5 = iVar17;
      }
      (*DAT_04408fe0)(param_1,*(long *)(lVar15 + 0x30) + (ulong)*pbVar9 * 0x40,*local_2098,
                      auStack_2090,iVar5);
      FUN_02df4640(uVar1,**(undefined8 **)(param_1 + 0x20),auStack_2090,iVar5);
      if (1 < *(int *)(param_1 + 0x10)) {
        lVar6 = 1;
        do {
          if (*param_2 < 2) {
            uVar8 = 0;
          }
          else {
            uVar8 = (ulong)*(byte *)(*(long *)(param_2 + 2) + lVar6);
          }
          pbVar9 = (byte *)(*(long *)(param_2 + 4) + uVar8 * 2);
          iVar17 = *(int *)(*(long *)(lVar15 + 0x38) + (ulong)pbVar9[1] * 0x28 + 0x1c);
          iVar5 = *(int *)(lVar15 + (long)*(int *)(param_1 + 0x3c) * 4) >> 1;
          if (iVar17 <= iVar5) {
            iVar5 = iVar17;
          }
          (*DAT_04408fe0)(param_1,*(long *)(lVar15 + 0x30) + (ulong)*pbVar9 * 0x40,local_2098[lVar6]
                          ,auStack_2090,iVar5);
          FUN_02df4640(uVar1,*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar6 * 8),auStack_2090,
                       iVar5);
          lVar6 = lVar6 + 1;
        } while (lVar6 < *(int *)(param_1 + 0x10));
      }
    }
    *(undefined1 *)(param_1 + 0x48) = 0;
    return 0;
  }
  uVar10 = 0;
  if ((int)uVar8 < 1) goto LAB_02df61b0;
  do {
    pbVar9 = *(byte **)(param_2 + 2);
    if ((pbVar9 == (byte *)0x0) || (uVar10 == *pbVar9)) {
      *puVar14 = (uint)(*puVar16 != 0);
      iVar5 = 1;
      *puVar12 = **(undefined8 **)(param_1 + 0x20);
    }
    else {
      iVar5 = 0;
    }
    if ((int)uVar8 != 1) {
      lVar6 = 1;
      do {
        if ((pbVar9 == (byte *)0x0) || (uVar10 == pbVar9[lVar6])) {
          puVar14[iVar5] = (uint)(puVar16[lVar6] != 0);
          puVar12[iVar5] = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar6 * 8);
          iVar5 = iVar5 + 1;
        }
        lVar6 = lVar6 + 1;
      } while ((int)uVar8 != lVar6);
    }
    while( true ) {
      FUN_02df6c60(param_1,*(long *)(lVar15 + 0x38) +
                           (ulong)*(byte *)(*(long *)(param_2 + 4) + uVar10 * 2 + 1) * 0x28,puVar12,
                   puVar14,iVar5);
      uVar10 = uVar10 + 1;
      if ((long)*param_2 <= (long)uVar10) goto LAB_02df61b8;
      uVar8 = (ulong)*(uint *)(param_1 + 0x10);
      if (0 < (int)*(uint *)(param_1 + 0x10)) break;
LAB_02df61b0:
      iVar5 = 0;
    }
  } while( true );
}


