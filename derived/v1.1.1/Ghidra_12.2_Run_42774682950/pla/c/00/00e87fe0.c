/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00e87fe0; name: FUN_00e87fe0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e87fe0(void)

{
  byte *pbVar1;
  size_t sVar2;
  byte *pbVar3;
  byte bVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  bool bVar11;
  int iVar12;
  char *pcVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  byte *pbVar17;
  long *plVar18;
  ulong uVar19;
  uint uVar20;
  byte *pbVar21;
  ulong local_78;
  ulong uStack_70;
  byte *local_68;
  
  if (((DAT_043b1258 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_043b1258), iVar12 != 0)) {
    DAT_043b1228 = 0x16;
    DAT_043b1238 = (byte *)0x0;
    _DAT_043b1234 = 0;
    DAT_043b1229._0_7_ = s__anonymous__0388d6f5._0_7_;
    ram0x043b1230 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
    DAT_043b1240 = 0x2a;
    DAT_043b1250._7_1_ = 0;
    DAT_043b1250._1_1_ = s__anonymous_namespace__039071f8[0x10];
    DAT_043b1250._2_1_ = s__anonymous_namespace__039071f8[0x11];
    DAT_043b1250._3_1_ = s__anonymous_namespace__039071f8[0x12];
    DAT_043b1250._4_1_ = s__anonymous_namespace__039071f8[0x13];
    DAT_043b1250._5_1_ = s__anonymous_namespace__039071f8[0x14];
    DAT_043b1249 = s__anonymous_namespace__039071f8[8];
    DAT_043b1249_1._0_1_ = s__anonymous_namespace__039071f8[9];
    DAT_043b1249_1._1_1_ = s__anonymous_namespace__039071f8[10];
    DAT_043b1249_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
    DAT_043b1249_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
    _DAT_043b124e = s__anonymous_namespace__039071f8._13_2_;
    DAT_043b1250._0_1_ = s__anonymous_namespace__039071f8[0xf];
    DAT_043b1241._0_7_ = s__anonymous_namespace__039071f8._0_7_;
    DAT_043b1241._7_1_ = s__anonymous_namespace__039071f8[7];
    DAT_043b1250._6_1_ = 0;
    FUN_00100250(PTR_FUN_04379930,&DAT_043b1228,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043b1258);
  }
  plVar10 = DAT_043f1798;
  lVar16 = tpidr_el0;
  plVar18 = *(long **)(lVar16 + 0x20);
  if (*(long **)(lVar16 + 0x20) == (long *)0x0) {
    *(long **)(lVar16 + 0x20) = DAT_043f1798;
    plVar18 = plVar10;
  }
  pcVar13 = (char *)(**(code **)(*plVar18 + 0x10))(plVar18,0x70,8);
  uVar6 = s_std__string_sol__detail__ctti_ge_0395642c._24_8_;
  _DAT_043b1208 = 0x71;
  DAT_043b1210 = 0x69;
  DAT_043b1218 = (byte *)pcVar13;
  *(undefined8 *)(pcVar13 + 0x10) = s_std__string_sol__detail__ctti_ge_0395642c._16_8_;
  *(undefined8 *)(pcVar13 + 0x18) = uVar6;
  uVar8 = s_std__string_sol__detail__ctti_ge_0395642c._40_8_;
  uVar7 = s_std__string_sol__detail__ctti_ge_0395642c._32_8_;
  uVar6 = s_std__string_sol__detail__ctti_ge_0395642c._8_8_;
  *(undefined8 *)pcVar13 = s_std__string_sol__detail__ctti_ge_0395642c._0_8_;
  *(undefined8 *)(pcVar13 + 8) = uVar6;
  uVar6 = s_std__string_sol__detail__ctti_ge_0395642c._56_8_;
  *(undefined8 *)(pcVar13 + 0x30) = s_std__string_sol__detail__ctti_ge_0395642c._48_8_;
  *(undefined8 *)(pcVar13 + 0x38) = uVar6;
  *(undefined8 *)(pcVar13 + 0x20) = uVar7;
  *(undefined8 *)(pcVar13 + 0x28) = uVar8;
  uVar7 = s_std__string_sol__detail__ctti_ge_0395642c._72_8_;
  uVar6 = s_std__string_sol__detail__ctti_ge_0395642c._64_8_;
  *(undefined8 *)(pcVar13 + 0x60) = s_std__string_sol__detail__ctti_ge_0395642c._96_8_;
  uVar9 = s_std__string_sol__detail__ctti_ge_0395642c._88_8_;
  uVar8 = s_std__string_sol__detail__ctti_ge_0395642c._80_8_;
  pcVar13[0x68] = ']';
  *(undefined8 *)(pcVar13 + 0x50) = uVar8;
  *(undefined8 *)(pcVar13 + 0x58) = uVar9;
  pcVar13[0x69] = '\0';
  *(undefined8 *)(pcVar13 + 0x40) = uVar6;
  *(undefined8 *)(pcVar13 + 0x48) = uVar7;
  std::string::find('\b',0x5b);
  uVar14 = std::string::find('\b',0x3d);
  uVar15 = std::string::rfind('\b',0x5d);
  if (uVar15 == 0xffffffffffffffff) {
    if ((_DAT_043b1208 & 1) == 0) {
      uVar15 = (ulong)(DAT_043b1208 >> 1);
    }
    else {
      uVar15 = DAT_043b1210;
    }
    uVar19 = 0;
    if (uVar14 != 0xffffffffffffffff) {
      uVar19 = uVar14;
    }
    uVar14 = uVar15;
  }
  else {
    uVar19 = 0;
    if (uVar14 != 0xffffffffffffffff) {
      uVar19 = uVar14;
    }
    if ((_DAT_043b1208 & 1) == 0) {
      uVar14 = (ulong)(DAT_043b1208 >> 1);
    }
    else {
      uVar14 = DAT_043b1210;
    }
  }
  if (uVar19 < uVar14 - 1) {
    uVar19 = uVar19 + 1;
  }
  std::string::string((string *)&local_78,(string *)&DAT_043b1208,uVar19,uVar15 - uVar19,
                      (allocator *)&DAT_043b1208);
  FUN_00e7ff50(&DAT_043b1208);
  _DAT_043b1208 = local_78;
  DAT_043b1210 = uStack_70;
  DAT_043b1218 = local_68;
  lVar16 = FUN_00e7fef4(&DAT_043b1208);
  if (lVar16 != -1) {
    std::string::erase(0x43b1208,lVar16 - 2);
  }
  bVar11 = (_DAT_043b1208 & 1) == 0;
  uVar14 = (ulong)(DAT_043b1208 >> 1);
  uVar19 = _DAT_043b1208;
  uVar5 = DAT_043b1210;
  pbVar21 = DAT_043b1218;
  uVar15 = uVar14;
  bVar4 = DAT_043b1208;
  if (!bVar11) {
    uVar15 = DAT_043b1210;
  }
  while( true ) {
    _DAT_043b1208 = uVar19;
    DAT_043b1210 = uVar5;
    DAT_043b1218 = pbVar21;
    if (uVar15 == 0) break;
    pbVar3 = &DAT_043b1209;
    if ((bVar4 & 1) != 0) {
      pbVar3 = pbVar21;
    }
    iVar12 = isblank((uint)*pbVar3);
    if (iVar12 == 0) break;
    pbVar17 = &DAT_043b1209;
    if (!bVar11) {
      pbVar17 = pbVar21;
    }
    std::string::erase(0x43b1208,(long)pbVar17 - (long)pbVar3);
    bVar11 = (_DAT_043b1208 & 1) == 0;
    uVar14 = (ulong)(DAT_043b1208 >> 1);
    uVar19 = _DAT_043b1208;
    uVar5 = DAT_043b1210;
    pbVar21 = DAT_043b1218;
    uVar15 = uVar14;
    bVar4 = DAT_043b1208;
    if (!bVar11) {
      uVar15 = DAT_043b1210;
    }
  }
  bVar11 = (bVar4 & 1) == 0;
  uVar15 = uVar14;
  if (!bVar11) {
    uVar15 = uVar5;
  }
  while (uVar20 = (uint)bVar4, uVar15 != 0) {
    uVar20 = (uint)uVar19;
    uVar14 = (ulong)((uVar20 & 0xff) >> 1);
    uVar15 = uVar14;
    pbVar21 = &DAT_043b1209;
    if (!bVar11) {
      uVar15 = uVar5;
      pbVar21 = DAT_043b1218;
    }
    iVar12 = isblank((uint)pbVar21[uVar15 - 1]);
    if (iVar12 == 0) break;
    FUN_00e7ff10(&DAT_043b1208);
    bVar11 = (_DAT_043b1208 & 1) == 0;
    uVar14 = (ulong)(DAT_043b1208 >> 1);
    uVar19 = _DAT_043b1208;
    uVar5 = DAT_043b1210;
    uVar15 = uVar14;
    bVar4 = DAT_043b1208;
    if (!bVar11) {
      uVar15 = DAT_043b1210;
    }
  }
  bVar11 = (uVar20 & 1) != 0;
  if (bVar11) {
    uVar14 = uVar5;
  }
  pbVar21 = &DAT_043b1209;
  if (bVar11) {
    pbVar21 = DAT_043b1218;
  }
  sVar2 = CONCAT44(_DAT_043b1234,ram0x043b1230);
  if ((DAT_043b1228 & 1) == 0) {
    sVar2 = (ulong)(DAT_043b1228 >> 1);
    pbVar3 = (byte *)&DAT_043b1229;
  }
  else {
    pbVar3 = DAT_043b1238;
  }
  if (sVar2 == 0) {
    uVar15 = 0;
LAB_00e88358:
    do {
      while( true ) {
        std::string::erase(0x43b1208,uVar15);
        sVar2 = CONCAT44(_DAT_043b1234,ram0x043b1230);
        if ((_DAT_043b1208 & 1) == 0) {
          uVar14 = _DAT_043b1208 >> 1 & 0x7f;
          pbVar21 = &DAT_043b1209;
        }
        else {
          uVar14 = DAT_043b1210;
          pbVar21 = DAT_043b1218;
        }
        if ((DAT_043b1228 & 1) == 0) {
          sVar2 = (ulong)(DAT_043b1228 >> 1);
          pbVar3 = (byte *)&DAT_043b1229;
        }
        else {
          pbVar3 = DAT_043b1238;
        }
        if (sVar2 != 0) break;
        uVar15 = 0;
      }
      if ((long)uVar14 < (long)sVar2) goto LAB_00e8829c;
      bVar4 = *pbVar3;
      pbVar17 = pbVar21;
      uVar15 = uVar14;
      while( true ) {
        if ((0xfffffffffffffffe < uVar15 - sVar2) ||
           (pbVar17 = memchr(pbVar17,(uint)bVar4,(uVar15 - sVar2) + 1), pbVar17 == (byte *)0x0))
        goto LAB_00e8829c;
        iVar12 = memcmp(pbVar17,pbVar3,sVar2);
        if (iVar12 == 0) break;
        pbVar17 = pbVar17 + 1;
        uVar15 = (long)(pbVar21 + uVar14) - (long)pbVar17;
        if ((long)uVar15 < (long)sVar2) goto LAB_00e8829c;
      }
      if ((pbVar17 == pbVar21 + uVar14) ||
         (uVar15 = (long)pbVar17 - (long)pbVar21, uVar15 == 0xffffffffffffffff)) goto LAB_00e8829c;
    } while( true );
  }
  if ((long)sVar2 <= (long)uVar14) {
    bVar4 = *pbVar3;
    pbVar17 = pbVar21;
    uVar15 = uVar14;
    do {
      if ((0xfffffffffffffffe < uVar15 - sVar2) ||
         (pbVar17 = memchr(pbVar17,(uint)bVar4,(uVar15 - sVar2) + 1), pbVar17 == (byte *)0x0))
      break;
      iVar12 = memcmp(pbVar17,pbVar3,sVar2);
      if (iVar12 == 0) {
        if ((pbVar17 != pbVar21 + uVar14) &&
           (uVar15 = (long)pbVar17 - (long)pbVar21, uVar15 != 0xffffffffffffffff))
        goto LAB_00e88358;
        break;
      }
      pbVar17 = pbVar17 + 1;
      uVar15 = (long)(pbVar21 + uVar14) - (long)pbVar17;
    } while ((long)sVar2 <= (long)uVar15);
  }
LAB_00e8829c:
  sVar2 = CONCAT26(_DAT_043b124e,CONCAT51(_DAT_043b1249,DAT_043b1241._7_1_));
  pbVar3 = (byte *)CONCAT17(DAT_043b1250._7_1_,
                            CONCAT16(DAT_043b1250._6_1_,
                                     CONCAT51(DAT_043b1250._1_5_,(char)DAT_043b1250)));
  if ((DAT_043b1240 & 1) == 0) {
    pbVar3 = (byte *)&DAT_043b1241;
    sVar2 = (ulong)(DAT_043b1240 >> 1);
  }
  if (sVar2 == 0) {
    uVar15 = 0;
    goto LAB_00e88404;
  }
  if ((long)sVar2 <= (long)uVar14) {
    bVar4 = *pbVar3;
    pbVar1 = pbVar21 + uVar14;
    pbVar17 = pbVar21;
    do {
      if (0xfffffffffffffffe < uVar14 - sVar2) {
        return;
      }
      pbVar17 = memchr(pbVar17,(uint)bVar4,(uVar14 - sVar2) + 1);
      if (pbVar17 == (byte *)0x0) {
        return;
      }
      iVar12 = memcmp(pbVar17,pbVar3,sVar2);
      if (iVar12 == 0) {
        if (pbVar17 == pbVar1) {
          return;
        }
        do {
          uVar15 = (long)pbVar17 - (long)pbVar21;
          if (uVar15 == 0xffffffffffffffff) {
            return;
          }
LAB_00e88404:
          while( true ) {
            std::string::erase(0x43b1208,uVar15);
            bVar11 = (_DAT_043b1208 & 1) != 0;
            uVar15 = _DAT_043b1208 >> 1 & 0x7f;
            if (bVar11) {
              uVar15 = DAT_043b1210;
            }
            sVar2 = CONCAT26(_DAT_043b124e,CONCAT51(_DAT_043b1249,DAT_043b1241._7_1_));
            pbVar3 = (byte *)CONCAT17(DAT_043b1250._7_1_,
                                      CONCAT16(DAT_043b1250._6_1_,
                                               CONCAT51(DAT_043b1250._1_5_,(char)DAT_043b1250)));
            pbVar21 = DAT_043b1218;
            if (!bVar11) {
              pbVar21 = &DAT_043b1209;
            }
            if ((DAT_043b1240 & 1) == 0) {
              pbVar3 = (byte *)&DAT_043b1241;
              sVar2 = (ulong)(DAT_043b1240 >> 1);
            }
            if (sVar2 != 0) break;
            uVar15 = 0;
          }
          if ((long)uVar15 < (long)sVar2) {
            return;
          }
          bVar4 = *pbVar3;
          pbVar1 = pbVar21 + uVar15;
          pbVar17 = pbVar21;
          while( true ) {
            if (0xfffffffffffffffe < uVar15 - sVar2) {
              return;
            }
            pbVar17 = memchr(pbVar17,(uint)bVar4,(uVar15 - sVar2) + 1);
            if (pbVar17 == (byte *)0x0) {
              return;
            }
            iVar12 = memcmp(pbVar17,pbVar3,sVar2);
            if (iVar12 == 0) break;
            pbVar17 = pbVar17 + 1;
            uVar15 = (long)pbVar1 - (long)pbVar17;
            if ((long)uVar15 < (long)sVar2) {
              return;
            }
          }
          if (pbVar17 == pbVar1) {
            return;
          }
        } while( true );
      }
      pbVar17 = pbVar17 + 1;
      uVar14 = (long)pbVar1 - (long)pbVar17;
    } while ((long)sVar2 <= (long)uVar14);
  }
  return;
}


