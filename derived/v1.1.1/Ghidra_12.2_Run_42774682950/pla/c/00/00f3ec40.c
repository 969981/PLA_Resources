/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00f3ec40; name: FUN_00f3ec40
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00f3ec40(void)

{
  byte *pbVar1;
  size_t sVar2;
  byte *pbVar3;
  byte bVar4;
  ulong uVar5;
  long *plVar6;
  bool bVar7;
  int iVar8;
  void *__dest;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  byte *pbVar12;
  long *plVar13;
  ulong uVar14;
  uint uVar15;
  byte *pbVar16;
  ulong local_78;
  ulong uStack_70;
  byte *local_68;
  
  if (((DAT_043b4e90 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043b4e90), iVar8 != 0)) {
    DAT_043b4e60 = 0x16;
    DAT_043b4e70 = (byte *)0x0;
    _DAT_043b4e6c = 0;
    DAT_043b4e61._0_7_ = s__anonymous__0388d6f5._0_7_;
    ram0x043b4e68 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
    DAT_043b4e78 = 0x2a;
    DAT_043b4e88._7_1_ = 0;
    DAT_043b4e88._1_1_ = s__anonymous_namespace__039071f8[0x10];
    DAT_043b4e88._2_1_ = s__anonymous_namespace__039071f8[0x11];
    DAT_043b4e88._3_1_ = s__anonymous_namespace__039071f8[0x12];
    DAT_043b4e88._4_1_ = s__anonymous_namespace__039071f8[0x13];
    DAT_043b4e88._5_1_ = s__anonymous_namespace__039071f8[0x14];
    DAT_043b4e81 = s__anonymous_namespace__039071f8[8];
    DAT_043b4e81_1._0_1_ = s__anonymous_namespace__039071f8[9];
    DAT_043b4e81_1._1_1_ = s__anonymous_namespace__039071f8[10];
    DAT_043b4e81_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
    DAT_043b4e81_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
    _DAT_043b4e86 = s__anonymous_namespace__039071f8._13_2_;
    DAT_043b4e88._0_1_ = s__anonymous_namespace__039071f8[0xf];
    DAT_043b4e79._0_7_ = s__anonymous_namespace__039071f8._0_7_;
    DAT_043b4e79._7_1_ = s__anonymous_namespace__039071f8[7];
    DAT_043b4e88._6_1_ = 0;
    FUN_00100250(PTR_FUN_04379930,&DAT_043b4e60,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043b4e90);
  }
  plVar6 = DAT_043f1798;
  lVar11 = tpidr_el0;
  plVar13 = *(long **)(lVar11 + 0x20);
  if (*(long **)(lVar11 + 0x20) == (long *)0x0) {
    *(long **)(lVar11 + 0x20) = DAT_043f1798;
    plVar13 = plVar6;
  }
  __dest = (void *)(**(code **)(*plVar13 + 0x10))(plVar13,0x90,8);
  _DAT_043b4e40 = 0x91;
  DAT_043b4e48 = 0x8e;
  DAT_043b4e50 = __dest;
  memcpy(__dest,
         "std::string sol::detail::ctti_get_type_name() [T = sol::detail::unique_usertype<contents::mssn_notify::EventMssnNotify>, seperator_mark = int]"
         ,0x8e);
  *(undefined1 *)((long)__dest + 0x8e) = 0;
  std::string::find('@',0x5b);
  uVar9 = std::string::find('@',0x3d);
  uVar10 = std::string::rfind('@',0x5d);
  if (uVar10 == 0xffffffffffffffff) {
    if ((_DAT_043b4e40 & 1) == 0) {
      uVar10 = (ulong)(DAT_043b4e40 >> 1);
    }
    else {
      uVar10 = DAT_043b4e48;
    }
    uVar14 = 0;
    if (uVar9 != 0xffffffffffffffff) {
      uVar14 = uVar9;
    }
    uVar9 = uVar10;
  }
  else {
    uVar14 = 0;
    if (uVar9 != 0xffffffffffffffff) {
      uVar14 = uVar9;
    }
    if ((_DAT_043b4e40 & 1) == 0) {
      uVar9 = (ulong)(DAT_043b4e40 >> 1);
    }
    else {
      uVar9 = DAT_043b4e48;
    }
  }
  if (uVar14 < uVar9 - 1) {
    uVar14 = uVar14 + 1;
  }
  std::string::string((string *)&local_78,(string *)&DAT_043b4e40,uVar14,uVar10 - uVar14,
                      (allocator *)&DAT_043b4e40);
  FUN_00f36bdc(&DAT_043b4e40);
  _DAT_043b4e40 = local_78;
  DAT_043b4e48 = uStack_70;
  DAT_043b4e50 = local_68;
  lVar11 = FUN_00f36b80(&DAT_043b4e40);
  if (lVar11 != -1) {
    std::string::erase(0x43b4e40,lVar11 - 2);
  }
  bVar7 = (_DAT_043b4e40 & 1) == 0;
  uVar9 = (ulong)(DAT_043b4e40 >> 1);
  uVar14 = _DAT_043b4e40;
  uVar5 = DAT_043b4e48;
  pbVar16 = DAT_043b4e50;
  uVar10 = uVar9;
  bVar4 = DAT_043b4e40;
  if (!bVar7) {
    uVar10 = DAT_043b4e48;
  }
  while( true ) {
    _DAT_043b4e40 = uVar14;
    DAT_043b4e48 = uVar5;
    DAT_043b4e50 = pbVar16;
    if (uVar10 == 0) break;
    pbVar3 = &DAT_043b4e41;
    if ((bVar4 & 1) != 0) {
      pbVar3 = pbVar16;
    }
    iVar8 = isblank((uint)*pbVar3);
    if (iVar8 == 0) break;
    pbVar12 = &DAT_043b4e41;
    if (!bVar7) {
      pbVar12 = pbVar16;
    }
    std::string::erase(0x43b4e40,(long)pbVar12 - (long)pbVar3);
    bVar7 = (_DAT_043b4e40 & 1) == 0;
    uVar9 = (ulong)(DAT_043b4e40 >> 1);
    uVar14 = _DAT_043b4e40;
    uVar5 = DAT_043b4e48;
    pbVar16 = DAT_043b4e50;
    uVar10 = uVar9;
    bVar4 = DAT_043b4e40;
    if (!bVar7) {
      uVar10 = DAT_043b4e48;
    }
  }
  bVar7 = (bVar4 & 1) == 0;
  uVar10 = uVar9;
  if (!bVar7) {
    uVar10 = uVar5;
  }
  while (uVar15 = (uint)bVar4, uVar10 != 0) {
    uVar15 = (uint)uVar14;
    uVar9 = (ulong)((uVar15 & 0xff) >> 1);
    uVar10 = uVar9;
    pbVar16 = &DAT_043b4e41;
    if (!bVar7) {
      uVar10 = uVar5;
      pbVar16 = DAT_043b4e50;
    }
    iVar8 = isblank((uint)pbVar16[uVar10 - 1]);
    if (iVar8 == 0) break;
    FUN_00f36b9c(&DAT_043b4e40);
    bVar7 = (_DAT_043b4e40 & 1) == 0;
    uVar9 = (ulong)(DAT_043b4e40 >> 1);
    uVar14 = _DAT_043b4e40;
    uVar5 = DAT_043b4e48;
    uVar10 = uVar9;
    bVar4 = DAT_043b4e40;
    if (!bVar7) {
      uVar10 = DAT_043b4e48;
    }
  }
  bVar7 = (uVar15 & 1) != 0;
  if (bVar7) {
    uVar9 = uVar5;
  }
  pbVar16 = &DAT_043b4e41;
  if (bVar7) {
    pbVar16 = DAT_043b4e50;
  }
  sVar2 = CONCAT44(_DAT_043b4e6c,ram0x043b4e68);
  if ((DAT_043b4e60 & 1) == 0) {
    sVar2 = (ulong)(DAT_043b4e60 >> 1);
    pbVar3 = (byte *)&DAT_043b4e61;
  }
  else {
    pbVar3 = DAT_043b4e70;
  }
  if (sVar2 == 0) {
    uVar10 = 0;
LAB_00f3ef80:
    do {
      while( true ) {
        std::string::erase(0x43b4e40,uVar10);
        sVar2 = CONCAT44(_DAT_043b4e6c,ram0x043b4e68);
        if ((_DAT_043b4e40 & 1) == 0) {
          uVar9 = _DAT_043b4e40 >> 1 & 0x7f;
          pbVar16 = &DAT_043b4e41;
        }
        else {
          uVar9 = DAT_043b4e48;
          pbVar16 = DAT_043b4e50;
        }
        if ((DAT_043b4e60 & 1) == 0) {
          sVar2 = (ulong)(DAT_043b4e60 >> 1);
          pbVar3 = (byte *)&DAT_043b4e61;
        }
        else {
          pbVar3 = DAT_043b4e70;
        }
        if (sVar2 != 0) break;
        uVar10 = 0;
      }
      if ((long)uVar9 < (long)sVar2) goto LAB_00f3eec4;
      bVar4 = *pbVar3;
      pbVar12 = pbVar16;
      uVar10 = uVar9;
      while( true ) {
        if ((0xfffffffffffffffe < uVar10 - sVar2) ||
           (pbVar12 = memchr(pbVar12,(uint)bVar4,(uVar10 - sVar2) + 1), pbVar12 == (byte *)0x0))
        goto LAB_00f3eec4;
        iVar8 = memcmp(pbVar12,pbVar3,sVar2);
        if (iVar8 == 0) break;
        pbVar12 = pbVar12 + 1;
        uVar10 = (long)(pbVar16 + uVar9) - (long)pbVar12;
        if ((long)uVar10 < (long)sVar2) goto LAB_00f3eec4;
      }
      if ((pbVar12 == pbVar16 + uVar9) ||
         (uVar10 = (long)pbVar12 - (long)pbVar16, uVar10 == 0xffffffffffffffff)) goto LAB_00f3eec4;
    } while( true );
  }
  if ((long)sVar2 <= (long)uVar9) {
    bVar4 = *pbVar3;
    pbVar12 = pbVar16;
    uVar10 = uVar9;
    do {
      if ((0xfffffffffffffffe < uVar10 - sVar2) ||
         (pbVar12 = memchr(pbVar12,(uint)bVar4,(uVar10 - sVar2) + 1), pbVar12 == (byte *)0x0))
      break;
      iVar8 = memcmp(pbVar12,pbVar3,sVar2);
      if (iVar8 == 0) {
        if ((pbVar12 != pbVar16 + uVar9) &&
           (uVar10 = (long)pbVar12 - (long)pbVar16, uVar10 != 0xffffffffffffffff))
        goto LAB_00f3ef80;
        break;
      }
      pbVar12 = pbVar12 + 1;
      uVar10 = (long)(pbVar16 + uVar9) - (long)pbVar12;
    } while ((long)sVar2 <= (long)uVar10);
  }
LAB_00f3eec4:
  sVar2 = CONCAT26(_DAT_043b4e86,CONCAT51(_DAT_043b4e81,DAT_043b4e79._7_1_));
  pbVar3 = (byte *)CONCAT17(DAT_043b4e88._7_1_,
                            CONCAT16(DAT_043b4e88._6_1_,
                                     CONCAT51(DAT_043b4e88._1_5_,(char)DAT_043b4e88)));
  if ((DAT_043b4e78 & 1) == 0) {
    pbVar3 = (byte *)&DAT_043b4e79;
    sVar2 = (ulong)(DAT_043b4e78 >> 1);
  }
  if (sVar2 == 0) {
    uVar10 = 0;
    goto LAB_00f3f02c;
  }
  if ((long)sVar2 <= (long)uVar9) {
    bVar4 = *pbVar3;
    pbVar1 = pbVar16 + uVar9;
    pbVar12 = pbVar16;
    do {
      if (0xfffffffffffffffe < uVar9 - sVar2) {
        return;
      }
      pbVar12 = memchr(pbVar12,(uint)bVar4,(uVar9 - sVar2) + 1);
      if (pbVar12 == (byte *)0x0) {
        return;
      }
      iVar8 = memcmp(pbVar12,pbVar3,sVar2);
      if (iVar8 == 0) {
        if (pbVar12 == pbVar1) {
          return;
        }
        do {
          uVar10 = (long)pbVar12 - (long)pbVar16;
          if (uVar10 == 0xffffffffffffffff) {
            return;
          }
LAB_00f3f02c:
          while( true ) {
            std::string::erase(0x43b4e40,uVar10);
            bVar7 = (_DAT_043b4e40 & 1) != 0;
            uVar10 = _DAT_043b4e40 >> 1 & 0x7f;
            if (bVar7) {
              uVar10 = DAT_043b4e48;
            }
            sVar2 = CONCAT26(_DAT_043b4e86,CONCAT51(_DAT_043b4e81,DAT_043b4e79._7_1_));
            pbVar3 = (byte *)CONCAT17(DAT_043b4e88._7_1_,
                                      CONCAT16(DAT_043b4e88._6_1_,
                                               CONCAT51(DAT_043b4e88._1_5_,(char)DAT_043b4e88)));
            pbVar16 = DAT_043b4e50;
            if (!bVar7) {
              pbVar16 = &DAT_043b4e41;
            }
            if ((DAT_043b4e78 & 1) == 0) {
              pbVar3 = (byte *)&DAT_043b4e79;
              sVar2 = (ulong)(DAT_043b4e78 >> 1);
            }
            if (sVar2 != 0) break;
            uVar10 = 0;
          }
          if ((long)uVar10 < (long)sVar2) {
            return;
          }
          bVar4 = *pbVar3;
          pbVar1 = pbVar16 + uVar10;
          pbVar12 = pbVar16;
          while( true ) {
            if (0xfffffffffffffffe < uVar10 - sVar2) {
              return;
            }
            pbVar12 = memchr(pbVar12,(uint)bVar4,(uVar10 - sVar2) + 1);
            if (pbVar12 == (byte *)0x0) {
              return;
            }
            iVar8 = memcmp(pbVar12,pbVar3,sVar2);
            if (iVar8 == 0) break;
            pbVar12 = pbVar12 + 1;
            uVar10 = (long)pbVar1 - (long)pbVar12;
            if ((long)uVar10 < (long)sVar2) {
              return;
            }
          }
          if (pbVar12 == pbVar1) {
            return;
          }
        } while( true );
      }
      pbVar12 = pbVar12 + 1;
      uVar9 = (long)pbVar1 - (long)pbVar12;
    } while ((long)sVar2 <= (long)uVar9);
  }
  return;
}


