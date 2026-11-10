/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00e0f290; name: FUN_00e0f290
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e0f290(void)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  bool bVar9;
  int iVar10;
  char *pcVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  byte *pbVar15;
  long *plVar16;
  ulong uVar17;
  uint uVar18;
  size_t sVar19;
  byte *pbVar20;
  ulong local_78;
  ulong uStack_70;
  byte *local_68;
  
  if (((DAT_043aeb28 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_043aeb28), iVar10 != 0)) {
    DAT_043aeaf8 = 0x16;
    DAT_043aeb08 = (byte *)0x0;
    _DAT_043aeb04 = 0;
    DAT_043aeaf9._0_7_ = s__anonymous__0388d6f5._0_7_;
    ram0x043aeb00 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
    DAT_043aeb10 = 0x2a;
    DAT_043aeb20._7_1_ = 0;
    DAT_043aeb20._1_1_ = s__anonymous_namespace__039071f8[0x10];
    DAT_043aeb20._2_1_ = s__anonymous_namespace__039071f8[0x11];
    DAT_043aeb20._3_1_ = s__anonymous_namespace__039071f8[0x12];
    DAT_043aeb20._4_1_ = s__anonymous_namespace__039071f8[0x13];
    DAT_043aeb20._5_1_ = s__anonymous_namespace__039071f8[0x14];
    DAT_043aeb19 = s__anonymous_namespace__039071f8[8];
    DAT_043aeb19_1._0_1_ = s__anonymous_namespace__039071f8[9];
    DAT_043aeb19_1._1_1_ = s__anonymous_namespace__039071f8[10];
    DAT_043aeb19_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
    DAT_043aeb19_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
    _DAT_043aeb1e = s__anonymous_namespace__039071f8._13_2_;
    DAT_043aeb20._0_1_ = s__anonymous_namespace__039071f8[0xf];
    DAT_043aeb11._0_7_ = s__anonymous_namespace__039071f8._0_7_;
    DAT_043aeb11._7_1_ = s__anonymous_namespace__039071f8[7];
    DAT_043aeb20._6_1_ = 0;
    FUN_00100250(PTR_FUN_04379930,&DAT_043aeaf8,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043aeb28);
  }
  plVar8 = DAT_043f1798;
  lVar14 = tpidr_el0;
  plVar16 = *(long **)(lVar14 + 0x20);
  if (*(long **)(lVar14 + 0x20) == (long *)0x0) {
    *(long **)(lVar14 + 0x20) = DAT_043f1798;
    plVar16 = plVar8;
  }
  pcVar11 = (char *)(**(code **)(*plVar16 + 0x10))(plVar16,0x80,8);
  uVar4 = s_std__string_sol__detail__ctti_ge_038b6cf5._88_8_;
  _DAT_043aead8 = 0x81;
  DAT_043aeae0 = 0x75;
  DAT_043aeae8 = (byte *)pcVar11;
  *(undefined8 *)(pcVar11 + 0x50) = s_std__string_sol__detail__ctti_ge_038b6cf5._80_8_;
  *(undefined8 *)(pcVar11 + 0x58) = uVar4;
  uVar5 = CONCAT53(s_std__string_sol__detail__ctti_ge_038b6cf5._112_5_,
                   s_std__string_sol__detail__ctti_ge_038b6cf5._109_3_);
  uVar4 = CONCAT35(s_std__string_sol__detail__ctti_ge_038b6cf5._109_3_,
                   s_std__string_sol__detail__ctti_ge_038b6cf5._104_5_);
  *(undefined8 *)(pcVar11 + 0x60) = s_std__string_sol__detail__ctti_ge_038b6cf5._96_8_;
  *(undefined8 *)(pcVar11 + 0x68) = uVar4;
  *(undefined8 *)(pcVar11 + 0x6d) = uVar5;
  uVar7 = s_std__string_sol__detail__ctti_ge_038b6cf5._72_8_;
  uVar5 = s_std__string_sol__detail__ctti_ge_038b6cf5._64_8_;
  uVar4 = s_std__string_sol__detail__ctti_ge_038b6cf5._56_8_;
  *(undefined8 *)(pcVar11 + 0x30) = s_std__string_sol__detail__ctti_ge_038b6cf5._48_8_;
  *(undefined8 *)(pcVar11 + 0x38) = uVar4;
  *(undefined8 *)(pcVar11 + 0x40) = uVar5;
  *(undefined8 *)(pcVar11 + 0x48) = uVar7;
  uVar7 = s_std__string_sol__detail__ctti_ge_038b6cf5._40_8_;
  uVar5 = s_std__string_sol__detail__ctti_ge_038b6cf5._32_8_;
  uVar4 = s_std__string_sol__detail__ctti_ge_038b6cf5._24_8_;
  *(undefined8 *)(pcVar11 + 0x10) = s_std__string_sol__detail__ctti_ge_038b6cf5._16_8_;
  *(undefined8 *)(pcVar11 + 0x18) = uVar4;
  *(undefined8 *)(pcVar11 + 0x20) = uVar5;
  *(undefined8 *)(pcVar11 + 0x28) = uVar7;
  uVar5 = s_std__string_sol__detail__ctti_ge_038b6cf5._8_8_;
  uVar4 = s_std__string_sol__detail__ctti_ge_038b6cf5._0_8_;
  pcVar11[0x75] = '\0';
  *(undefined8 *)pcVar11 = uVar4;
  *(undefined8 *)(pcVar11 + 8) = uVar5;
  std::string::find(-0x28,0x5b);
  uVar12 = std::string::find(-0x28,0x3d);
  uVar13 = std::string::rfind(-0x28,0x5d);
  if (uVar13 == 0xffffffffffffffff) {
    if ((_DAT_043aead8 & 1) == 0) {
      uVar13 = (ulong)(DAT_043aead8 >> 1);
    }
    else {
      uVar13 = DAT_043aeae0;
    }
    uVar17 = 0;
    if (uVar12 != 0xffffffffffffffff) {
      uVar17 = uVar12;
    }
    uVar12 = uVar13;
  }
  else {
    uVar17 = 0;
    if (uVar12 != 0xffffffffffffffff) {
      uVar17 = uVar12;
    }
    if ((_DAT_043aead8 & 1) == 0) {
      uVar12 = (ulong)(DAT_043aead8 >> 1);
    }
    else {
      uVar12 = DAT_043aeae0;
    }
  }
  if (uVar17 < uVar12 - 1) {
    uVar17 = uVar17 + 1;
  }
  std::string::string((string *)&local_78,(string *)&DAT_043aead8,uVar17,uVar13 - uVar17,
                      (allocator *)&DAT_043aead8);
  FUN_00e0f920(&DAT_043aead8);
  _DAT_043aead8 = local_78;
  DAT_043aeae0 = uStack_70;
  DAT_043aeae8 = local_68;
  lVar14 = FUN_00e0f8c4(&DAT_043aead8);
  if (lVar14 != -1) {
    std::string::erase(0x43aead8,lVar14 - 2);
  }
  bVar9 = (_DAT_043aead8 & 1) == 0;
  uVar12 = (ulong)(DAT_043aead8 >> 1);
  uVar17 = _DAT_043aead8;
  uVar6 = DAT_043aeae0;
  pbVar20 = DAT_043aeae8;
  uVar13 = uVar12;
  bVar3 = DAT_043aead8;
  if (!bVar9) {
    uVar13 = DAT_043aeae0;
  }
  while( true ) {
    _DAT_043aead8 = uVar17;
    DAT_043aeae0 = uVar6;
    DAT_043aeae8 = pbVar20;
    if (uVar13 == 0) break;
    pbVar2 = &DAT_043aead9;
    if ((bVar3 & 1) != 0) {
      pbVar2 = pbVar20;
    }
    iVar10 = isblank((uint)*pbVar2);
    if (iVar10 == 0) break;
    pbVar15 = &DAT_043aead9;
    if (!bVar9) {
      pbVar15 = pbVar20;
    }
    std::string::erase(0x43aead8,(long)pbVar15 - (long)pbVar2);
    bVar9 = (_DAT_043aead8 & 1) == 0;
    uVar12 = (ulong)(DAT_043aead8 >> 1);
    uVar17 = _DAT_043aead8;
    uVar6 = DAT_043aeae0;
    pbVar20 = DAT_043aeae8;
    uVar13 = uVar12;
    bVar3 = DAT_043aead8;
    if (!bVar9) {
      uVar13 = DAT_043aeae0;
    }
  }
  bVar9 = (bVar3 & 1) == 0;
  uVar13 = uVar12;
  if (!bVar9) {
    uVar13 = uVar6;
  }
  while (uVar18 = (uint)bVar3, uVar13 != 0) {
    uVar18 = (uint)uVar17;
    uVar12 = (ulong)((uVar18 & 0xff) >> 1);
    uVar13 = uVar12;
    pbVar20 = &DAT_043aead9;
    if (!bVar9) {
      uVar13 = uVar6;
      pbVar20 = DAT_043aeae8;
    }
    iVar10 = isblank((uint)pbVar20[uVar13 - 1]);
    if (iVar10 == 0) break;
    FUN_00e0f8e0(&DAT_043aead8);
    bVar9 = (_DAT_043aead8 & 1) == 0;
    uVar12 = (ulong)(DAT_043aead8 >> 1);
    uVar17 = _DAT_043aead8;
    uVar6 = DAT_043aeae0;
    uVar13 = uVar12;
    bVar3 = DAT_043aead8;
    if (!bVar9) {
      uVar13 = DAT_043aeae0;
    }
  }
  bVar9 = (uVar18 & 1) != 0;
  if (bVar9) {
    uVar12 = uVar6;
  }
  pbVar20 = &DAT_043aead9;
  if (bVar9) {
    pbVar20 = DAT_043aeae8;
  }
  sVar19 = CONCAT44(_DAT_043aeb04,ram0x043aeb00);
  pbVar2 = DAT_043aeb08;
  if ((DAT_043aeaf8 & 1) == 0) {
    sVar19 = (size_t)(DAT_043aeaf8 >> 1);
    pbVar2 = (byte *)&DAT_043aeaf9;
  }
  if (sVar19 == 0) {
    uVar13 = 0;
    goto LAB_00e0f610;
  }
  if ((long)sVar19 <= (long)uVar12) {
    bVar3 = *pbVar2;
    pbVar15 = pbVar20;
    uVar13 = uVar12;
    do {
      if ((0xfffffffffffffffe < uVar13 - sVar19) ||
         (pbVar15 = memchr(pbVar15,(uint)bVar3,(uVar13 - sVar19) + 1), pbVar15 == (byte *)0x0))
      break;
      iVar10 = memcmp(pbVar15,pbVar2,sVar19);
      if (iVar10 == 0) {
        if (pbVar15 != pbVar20 + uVar12) {
          uVar13 = (long)pbVar15 - (long)pbVar20;
          goto joined_r0x00e0f7d0;
        }
        break;
      }
      pbVar15 = pbVar15 + 1;
      uVar13 = (long)(pbVar20 + uVar12) - (long)pbVar15;
    } while ((long)sVar19 <= (long)uVar13);
  }
  goto LAB_00e0f548;
joined_r0x00e0f7d0:
  if (uVar13 != 0xffffffffffffffff) {
LAB_00e0f610:
    std::string::erase(0x43aead8,uVar13);
    bVar9 = (_DAT_043aead8 & 1) == 0;
    pbVar20 = DAT_043aeae8;
    if (bVar9) {
      pbVar20 = &DAT_043aead9;
    }
    sVar19 = CONCAT44(_DAT_043aeb04,ram0x043aeb00);
    uVar12 = _DAT_043aead8 >> 1 & 0x7f;
    if (!bVar9) {
      uVar12 = DAT_043aeae0;
    }
    if ((DAT_043aeaf8 & 1) == 0) {
      sVar19 = (ulong)(DAT_043aeaf8 >> 1);
      pbVar2 = (byte *)&DAT_043aeaf9;
    }
    else {
      pbVar2 = DAT_043aeb08;
    }
    if (sVar19 == 0) {
      uVar13 = 0;
    }
    else {
      if ((long)uVar12 < (long)sVar19) goto LAB_00e0f548;
      bVar3 = *pbVar2;
      pbVar15 = pbVar20;
      uVar13 = uVar12;
      while( true ) {
        if ((0xfffffffffffffffe < uVar13 - sVar19) ||
           (pbVar15 = memchr(pbVar15,(uint)bVar3,(uVar13 - sVar19) + 1), pbVar15 == (byte *)0x0))
        goto LAB_00e0f548;
        iVar10 = memcmp(pbVar15,pbVar2,sVar19);
        if (iVar10 == 0) break;
        pbVar15 = pbVar15 + 1;
        uVar13 = (long)(pbVar20 + uVar12) - (long)pbVar15;
        if ((long)uVar13 < (long)sVar19) goto LAB_00e0f548;
      }
      if (pbVar15 == pbVar20 + uVar12) goto LAB_00e0f548;
      uVar13 = (long)pbVar15 - (long)pbVar20;
    }
    goto joined_r0x00e0f7d0;
  }
LAB_00e0f548:
  sVar19 = CONCAT26(_DAT_043aeb1e,CONCAT51(_DAT_043aeb19,DAT_043aeb11._7_1_));
  pbVar2 = (byte *)CONCAT17(DAT_043aeb20._7_1_,
                            CONCAT16(DAT_043aeb20._6_1_,
                                     CONCAT51(DAT_043aeb20._1_5_,(char)DAT_043aeb20)));
  if ((DAT_043aeb10 & 1) == 0) {
    pbVar2 = (byte *)&DAT_043aeb11;
    sVar19 = (ulong)(DAT_043aeb10 >> 1);
  }
  if (sVar19 == 0) {
    uVar13 = 0;
    goto LAB_00e0f708;
  }
  if ((long)sVar19 <= (long)uVar12) {
    bVar3 = *pbVar2;
    pbVar1 = pbVar20 + uVar12;
    pbVar15 = pbVar20;
    do {
      if (0xfffffffffffffffe < uVar12 - sVar19) {
        return;
      }
      pbVar15 = memchr(pbVar15,(uint)bVar3,(uVar12 - sVar19) + 1);
      if (pbVar15 == (byte *)0x0) {
        return;
      }
      iVar10 = memcmp(pbVar15,pbVar2,sVar19);
      if (iVar10 == 0) {
        if (pbVar15 == pbVar1) {
          return;
        }
        do {
          uVar13 = (long)pbVar15 - (long)pbVar20;
          if (uVar13 == 0xffffffffffffffff) {
            return;
          }
LAB_00e0f708:
          while( true ) {
            std::string::erase(0x43aead8,uVar13);
            bVar9 = (_DAT_043aead8 & 1) != 0;
            uVar13 = _DAT_043aead8 >> 1 & 0x7f;
            if (bVar9) {
              uVar13 = DAT_043aeae0;
            }
            sVar19 = CONCAT26(_DAT_043aeb1e,CONCAT51(_DAT_043aeb19,DAT_043aeb11._7_1_));
            pbVar2 = (byte *)CONCAT17(DAT_043aeb20._7_1_,
                                      CONCAT16(DAT_043aeb20._6_1_,
                                               CONCAT51(DAT_043aeb20._1_5_,(char)DAT_043aeb20)));
            pbVar20 = DAT_043aeae8;
            if (!bVar9) {
              pbVar20 = &DAT_043aead9;
            }
            if ((DAT_043aeb10 & 1) == 0) {
              pbVar2 = (byte *)&DAT_043aeb11;
              sVar19 = (ulong)(DAT_043aeb10 >> 1);
            }
            if (sVar19 != 0) break;
            uVar13 = 0;
          }
          if ((long)uVar13 < (long)sVar19) {
            return;
          }
          bVar3 = *pbVar2;
          pbVar1 = pbVar20 + uVar13;
          pbVar15 = pbVar20;
          while( true ) {
            if (0xfffffffffffffffe < uVar13 - sVar19) {
              return;
            }
            pbVar15 = memchr(pbVar15,(uint)bVar3,(uVar13 - sVar19) + 1);
            if (pbVar15 == (byte *)0x0) {
              return;
            }
            iVar10 = memcmp(pbVar15,pbVar2,sVar19);
            if (iVar10 == 0) break;
            pbVar15 = pbVar15 + 1;
            uVar13 = (long)pbVar1 - (long)pbVar15;
            if ((long)uVar13 < (long)sVar19) {
              return;
            }
          }
          if (pbVar15 == pbVar1) {
            return;
          }
        } while( true );
      }
      pbVar15 = pbVar15 + 1;
      uVar12 = (long)pbVar1 - (long)pbVar15;
    } while ((long)sVar19 <= (long)uVar12);
  }
  return;
}


