/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ea8460; name: FUN_00ea8460
 */


/* WARNING: Removing unreachable block (ram,0x00ea8990) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ea8460(void)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  long *plVar4;
  bool bVar5;
  int iVar6;
  void *__dest;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  byte *pbVar10;
  long *plVar11;
  ulong uVar12;
  size_t sVar13;
  uint uVar14;
  ulong uVar15;
  byte *pbVar16;
  ulong local_78;
  ulong uStack_70;
  byte *local_68;
  
  if (((DAT_043b1968 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_043b1968), iVar6 != 0)) {
    DAT_043b1938 = 0x16;
    DAT_043b1948 = (byte *)0x0;
    _DAT_043b1944 = 0;
    DAT_043b1939._0_7_ = s__anonymous__0388d6f5._0_7_;
    ram0x043b1940 = CONCAT31(0x7d7375,s__anonymous__0388d6f5[7]);
    DAT_043b1950 = 0x2a;
    DAT_043b1960._7_1_ = 0;
    DAT_043b1960._1_1_ = s__anonymous_namespace__039071f8[0x10];
    DAT_043b1960._2_1_ = s__anonymous_namespace__039071f8[0x11];
    DAT_043b1960._3_1_ = s__anonymous_namespace__039071f8[0x12];
    DAT_043b1960._4_1_ = s__anonymous_namespace__039071f8[0x13];
    DAT_043b1960._5_1_ = s__anonymous_namespace__039071f8[0x14];
    DAT_043b1959 = s__anonymous_namespace__039071f8[8];
    DAT_043b1959_1._0_1_ = s__anonymous_namespace__039071f8[9];
    DAT_043b1959_1._1_1_ = s__anonymous_namespace__039071f8[10];
    DAT_043b1959_1._2_1_ = s__anonymous_namespace__039071f8[0xb];
    DAT_043b1959_1._3_1_ = s__anonymous_namespace__039071f8[0xc];
    _DAT_043b195e = s__anonymous_namespace__039071f8._13_2_;
    DAT_043b1960._0_1_ = s__anonymous_namespace__039071f8[0xf];
    DAT_043b1951._0_7_ = s__anonymous_namespace__039071f8._0_7_;
    DAT_043b1951._7_1_ = s__anonymous_namespace__039071f8[7];
    DAT_043b1960._6_1_ = 0;
    FUN_00100250(PTR_FUN_04379930,&DAT_043b1938,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043b1968);
  }
  plVar4 = DAT_043f1798;
  lVar9 = tpidr_el0;
  plVar11 = *(long **)(lVar9 + 0x20);
  if (*(long **)(lVar9 + 0x20) == (long *)0x0) {
    *(long **)(lVar9 + 0x20) = DAT_043f1798;
    plVar11 = plVar4;
  }
  __dest = (void *)(**(code **)(*plVar11 + 0x10))(plVar11,0x960,8);
  _DAT_043b1918 = 0x961;
  DAT_043b1920 = 0x959;
  DAT_043b1928 = __dest;
  memcpy(__dest,
         "std::string sol::detail::ctti_get_type_name() [T = sol::usertype_metatable<AppConfig, std::__1::integer_sequence<unsigned long, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15>, char const (&)[13], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/common/lua/source/generated/app_config_glue.cpp:9:22), char const (&)[12], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/common/lua/source/generated/app_config_glue.cpp:10:21), char const (&)[14], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/common/lua/source/generated/app_config_glue.cpp:11:23), char const (&)[16], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/common/lua/source/generated/app_config_glue.cpp:12:25), char const (&)[13], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/common/lua/source/generated/app_config_glue.cpp:13:22), char const (&)[29], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/common/lua/source/generated/app_config_glue.cpp:14:38), char const (&)[31], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/common/lua/source/generated/app_config_glue.cpp:15:40), char const (&)[17], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/common/lua/source/generated/app_config_glue.cpp:16:26), char const (&)[16], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/common/lua/source/generated/app_config_glue.cpp:17:25), char const (&)[18], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/common/lua/source/generated/app_config_glue.cpp:18:27), char const (&)[20], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/common/lua/source/generated/app_config_glue.cpp:19:29), char const (&)[21], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/common/lua/source/generated/app_config_glue.cpp:20:30), char const (&)[17], (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/pro..." /* TRUNCATED STRING LITERAL */
         ,0x959);
  *(undefined1 *)((long)__dest + 0x959) = 0;
  std::string::find('\x18',0x5b);
  uVar7 = std::string::find('\x18',0x3d);
  uVar8 = std::string::rfind('\x18',0x5d);
  if (uVar8 == 0xffffffffffffffff) {
    if ((_DAT_043b1918 & 1) == 0) {
      uVar8 = (ulong)(DAT_043b1918 >> 1);
    }
    else {
      uVar8 = DAT_043b1920;
    }
    uVar12 = 0;
    if (uVar7 != 0xffffffffffffffff) {
      uVar12 = uVar7;
    }
    uVar7 = uVar8;
  }
  else {
    uVar12 = 0;
    if (uVar7 != 0xffffffffffffffff) {
      uVar12 = uVar7;
    }
    if ((_DAT_043b1918 & 1) == 0) {
      uVar7 = (ulong)(DAT_043b1918 >> 1);
    }
    else {
      uVar7 = DAT_043b1920;
    }
  }
  if (uVar12 < uVar7 - 1) {
    uVar12 = uVar12 + 1;
  }
  std::string::string((string *)&local_78,(string *)&DAT_043b1918,uVar12,uVar8 - uVar12,
                      (allocator *)&DAT_043b1918);
  FUN_00e9cf50(&DAT_043b1918);
  _DAT_043b1918 = local_78;
  DAT_043b1920 = uStack_70;
  DAT_043b1928 = local_68;
  lVar9 = FUN_00e9cef4(&DAT_043b1918);
  if (lVar9 != -1) {
    std::string::erase(0x43b1918,lVar9 - 2);
  }
  uVar7 = (ulong)(DAT_043b1918 >> 1);
  uVar12 = DAT_043b1920;
  uVar8 = uVar7;
  if ((_DAT_043b1918 & 1) != 0) {
    uVar8 = DAT_043b1920;
  }
  while( true ) {
    uVar14 = (uint)DAT_043b1918;
    bVar3 = DAT_043b1918 & 1;
    uVar15 = _DAT_043b1918 & 0xff;
    DAT_043b1920 = uVar12;
    if (uVar8 == 0) break;
    pbVar16 = &DAT_043b1919;
    if ((DAT_043b1918 & 1) != 0) {
      pbVar16 = DAT_043b1928;
    }
    iVar6 = isblank((uint)*pbVar16);
    if (iVar6 == 0) break;
    std::string::erase(0x43b1918,0);
    uVar7 = (ulong)(DAT_043b1918 >> 1);
    uVar12 = DAT_043b1920;
    uVar8 = uVar7;
    if ((_DAT_043b1918 & 1) != 0) {
      uVar8 = DAT_043b1920;
    }
  }
  bVar5 = bVar3 == 0;
  uVar8 = uVar7;
  if (!bVar5) {
    uVar8 = uVar12;
  }
  while (uVar8 != 0) {
    uVar14 = (uint)uVar15;
    uVar7 = (ulong)(uVar14 >> 1);
    uVar8 = uVar7;
    pbVar16 = &DAT_043b1919;
    if (!bVar5) {
      uVar8 = uVar12;
      pbVar16 = DAT_043b1928;
    }
    iVar6 = isblank((uint)pbVar16[uVar8 - 1]);
    if (iVar6 == 0) break;
    FUN_00e9cf10(&DAT_043b1918);
    uVar15 = _DAT_043b1918 & 0xff;
    uVar14 = (uint)uVar15;
    bVar5 = (_DAT_043b1918 & 1) == 0;
    uVar7 = _DAT_043b1918 >> 1 & 0x7f;
    uVar12 = DAT_043b1920;
    uVar8 = uVar7;
    if (!bVar5) {
      uVar8 = DAT_043b1920;
    }
  }
  bVar5 = (uVar14 & 1) != 0;
  if (bVar5) {
    uVar7 = uVar12;
  }
  pbVar16 = &DAT_043b1919;
  if (bVar5) {
    pbVar16 = DAT_043b1928;
  }
  sVar13 = CONCAT44(_DAT_043b1944,ram0x043b1940);
  pbVar2 = DAT_043b1948;
  if ((DAT_043b1938 & 1) == 0) {
    sVar13 = (size_t)(DAT_043b1938 >> 1);
    pbVar2 = (byte *)&DAT_043b1939;
  }
  if (sVar13 == 0) {
    uVar8 = 0;
    goto LAB_00ea8894;
  }
  if ((long)sVar13 <= (long)uVar7) {
    bVar3 = *pbVar2;
    pbVar10 = pbVar16;
    uVar8 = uVar7;
    do {
      if ((0xfffffffffffffffe < uVar8 - sVar13) ||
         (pbVar10 = memchr(pbVar10,(uint)bVar3,(uVar8 - sVar13) + 1), pbVar10 == (byte *)0x0))
      break;
      iVar6 = memcmp(pbVar10,pbVar2,sVar13);
      if (iVar6 == 0) {
        if (pbVar10 != pbVar16 + uVar7) {
          uVar8 = (long)pbVar10 - (long)pbVar16;
          goto joined_r0x00ea8950;
        }
        break;
      }
      pbVar10 = pbVar10 + 1;
      uVar8 = (long)(pbVar16 + uVar7) - (long)pbVar10;
    } while ((long)sVar13 <= (long)uVar8);
  }
  goto LAB_00ea8700;
joined_r0x00ea8950:
  if (uVar8 != 0xffffffffffffffff) {
LAB_00ea8894:
    std::string::erase(0x43b1918,uVar8);
    bVar5 = (_DAT_043b1918 & 1) == 0;
    pbVar16 = DAT_043b1928;
    if (bVar5) {
      pbVar16 = &DAT_043b1919;
    }
    sVar13 = CONCAT44(_DAT_043b1944,ram0x043b1940);
    uVar7 = _DAT_043b1918 >> 1 & 0x7f;
    if (!bVar5) {
      uVar7 = DAT_043b1920;
    }
    if ((DAT_043b1938 & 1) == 0) {
      sVar13 = (ulong)(DAT_043b1938 >> 1);
      pbVar2 = (byte *)&DAT_043b1939;
    }
    else {
      pbVar2 = DAT_043b1948;
    }
    if (sVar13 == 0) {
      uVar8 = 0;
    }
    else {
      if ((long)uVar7 < (long)sVar13) goto LAB_00ea8700;
      bVar3 = *pbVar2;
      pbVar10 = pbVar16;
      uVar8 = uVar7;
      while( true ) {
        if ((0xfffffffffffffffe < uVar8 - sVar13) ||
           (pbVar10 = memchr(pbVar10,(uint)bVar3,(uVar8 - sVar13) + 1), pbVar10 == (byte *)0x0))
        goto LAB_00ea8700;
        iVar6 = memcmp(pbVar10,pbVar2,sVar13);
        if (iVar6 == 0) break;
        pbVar10 = pbVar10 + 1;
        uVar8 = (long)(pbVar16 + uVar7) - (long)pbVar10;
        if ((long)uVar8 < (long)sVar13) goto LAB_00ea8700;
      }
      if (pbVar10 == pbVar16 + uVar7) goto LAB_00ea8700;
      uVar8 = (long)pbVar10 - (long)pbVar16;
    }
    goto joined_r0x00ea8950;
  }
LAB_00ea8700:
  sVar13 = CONCAT26(_DAT_043b195e,CONCAT51(_DAT_043b1959,DAT_043b1951._7_1_));
  pbVar2 = (byte *)CONCAT17(DAT_043b1960._7_1_,
                            CONCAT16(DAT_043b1960._6_1_,
                                     CONCAT51(DAT_043b1960._1_5_,(char)DAT_043b1960)));
  if ((DAT_043b1950 & 1) == 0) {
    pbVar2 = (byte *)&DAT_043b1951;
    sVar13 = (ulong)(DAT_043b1950 >> 1);
  }
  if (sVar13 == 0) {
    uVar8 = 0;
    goto LAB_00ea8790;
  }
  if ((long)sVar13 <= (long)uVar7) {
    bVar3 = *pbVar2;
    pbVar1 = pbVar16 + uVar7;
    pbVar10 = pbVar16;
    do {
      if (0xfffffffffffffffe < uVar7 - sVar13) {
        return;
      }
      pbVar10 = memchr(pbVar10,(uint)bVar3,(uVar7 - sVar13) + 1);
      if (pbVar10 == (byte *)0x0) {
        return;
      }
      iVar6 = memcmp(pbVar10,pbVar2,sVar13);
      if (iVar6 == 0) {
        if (pbVar10 == pbVar1) {
          return;
        }
        do {
          uVar8 = (long)pbVar10 - (long)pbVar16;
          if (uVar8 == 0xffffffffffffffff) {
            return;
          }
LAB_00ea8790:
          while( true ) {
            std::string::erase(0x43b1918,uVar8);
            bVar5 = (_DAT_043b1918 & 1) != 0;
            uVar8 = _DAT_043b1918 >> 1 & 0x7f;
            if (bVar5) {
              uVar8 = DAT_043b1920;
            }
            sVar13 = CONCAT26(_DAT_043b195e,CONCAT51(_DAT_043b1959,DAT_043b1951._7_1_));
            pbVar2 = (byte *)CONCAT17(DAT_043b1960._7_1_,
                                      CONCAT16(DAT_043b1960._6_1_,
                                               CONCAT51(DAT_043b1960._1_5_,(char)DAT_043b1960)));
            pbVar16 = DAT_043b1928;
            if (!bVar5) {
              pbVar16 = &DAT_043b1919;
            }
            if ((DAT_043b1950 & 1) == 0) {
              pbVar2 = (byte *)&DAT_043b1951;
              sVar13 = (ulong)(DAT_043b1950 >> 1);
            }
            if (sVar13 != 0) break;
            uVar8 = 0;
          }
          if ((long)uVar8 < (long)sVar13) {
            return;
          }
          bVar3 = *pbVar2;
          pbVar1 = pbVar16 + uVar8;
          pbVar10 = pbVar16;
          while( true ) {
            if (0xfffffffffffffffe < uVar8 - sVar13) {
              return;
            }
            pbVar10 = memchr(pbVar10,(uint)bVar3,(uVar8 - sVar13) + 1);
            if (pbVar10 == (byte *)0x0) {
              return;
            }
            iVar6 = memcmp(pbVar10,pbVar2,sVar13);
            if (iVar6 == 0) break;
            pbVar10 = pbVar10 + 1;
            uVar8 = (long)pbVar1 - (long)pbVar10;
            if ((long)uVar8 < (long)sVar13) {
              return;
            }
          }
          if (pbVar10 == pbVar1) {
            return;
          }
        } while( true );
      }
      pbVar10 = pbVar10 + 1;
      uVar7 = (long)pbVar1 - (long)pbVar10;
    } while ((long)sVar13 <= (long)uVar7);
  }
  return;
}


