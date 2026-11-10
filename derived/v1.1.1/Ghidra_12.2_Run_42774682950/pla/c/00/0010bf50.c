/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0010bf50; name: FUN_0010bf50
 */


undefined8 FUN_0010bf50(long param_1,ulong *param_2)

{
  ulong *puVar1;
  void *__s;
  undefined8 uVar2;
  char *pcVar3;
  int iVar4;
  ulong uVar5;
  code *pcVar6;
  ulong uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  long lVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  long lVar27;
  ulong *puVar28;
  
  puVar28 = (ulong *)*param_2;
  puVar1 = (ulong *)param_2[1];
  uVar7 = param_2[3];
  if ((long)puVar1 - (long)puVar28 < 8) {
    if ((long)puVar1 - (long)puVar28 < 1) {
      uVar15 = 0;
      if ((long)puVar1 - (long)((long)puVar28 + 1U) < 1) goto LAB_0010c008;
LAB_0010bfbc:
      uVar9 = (uint)*(byte *)((long)puVar28 + 1) << 0x10;
      if (0 < (long)puVar1 - (long)((long)puVar28 + 2U)) goto LAB_0010bfd4;
LAB_0010c01c:
      uVar11 = 0;
      if ((long)puVar1 - (long)((long)puVar28 + 3U) < 1) goto LAB_0010c030;
LAB_0010bfec:
      uVar5 = (ulong)*(byte *)((long)puVar28 + 3);
    }
    else {
      uVar15 = (uint)(byte)*puVar28 << 0x18;
      if (0 < (long)puVar1 - (long)((long)puVar28 + 1U)) goto LAB_0010bfbc;
LAB_0010c008:
      uVar9 = 0;
      if ((long)puVar1 - (long)((long)puVar28 + 2U) < 1) goto LAB_0010c01c;
LAB_0010bfd4:
      uVar11 = (uint)*(byte *)((long)puVar28 + 2) << 8;
      if (0 < (long)puVar1 - (long)((long)puVar28 + 3U)) goto LAB_0010bfec;
LAB_0010c030:
      uVar5 = 0;
    }
    if ((long)puVar1 - (long)((long)puVar28 + 4U) < 1) {
      uVar16 = 0;
      if ((long)puVar1 - (long)((long)puVar28 + 5U) < 1) goto LAB_0010c084;
LAB_0010c064:
      uVar13 = (uint)*(byte *)((long)puVar28 + 5) << 0x10;
    }
    else {
      uVar16 = (uint)*(byte *)((long)puVar28 + 4U) << 0x18;
      if (0 < (long)puVar1 - (long)((long)puVar28 + 5U)) goto LAB_0010c064;
LAB_0010c084:
      uVar13 = 0;
    }
    if ((long)puVar1 - (long)((long)puVar28 + 6U) < 1) {
      uVar21 = 0;
    }
    else {
      uVar21 = (uint)*(byte *)((long)puVar28 + 6U) << 8;
    }
    if ((long)puVar1 - (long)((long)puVar28 + 7U) < 1) {
      uVar14 = 0;
    }
    else {
      uVar14 = (ulong)*(byte *)((long)puVar28 + 7U);
    }
    uVar14 = (ulong)(uVar13 | uVar16 | uVar21) | (uVar5 | (uVar9 | uVar15 | uVar11)) << 0x20 |
             uVar14;
  }
  else {
    uVar5 = (*puVar28 & 0xff00ff00ff00ff00) >> 8 | (*puVar28 & 0xff00ff00ff00ff) << 8;
    uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
    uVar14 = uVar5 >> 0x20 | uVar5 << 0x20;
  }
  uVar15 = *(uint *)(param_1 + 0x284);
  uVar5 = uVar7 & 7;
  uVar14 = uVar14 >> (0x3f - uVar7 & 0x3f) | param_2[2];
  puVar28 = (ulong *)((long)puVar28 + ((long)uVar7 >> 3));
  if ((long)uVar14 < 0) {
    if (uVar15 < 2) {
      iVar4 = 0;
    }
    else {
      iVar4 = 0x20 - (int)LZCOUNT(uVar15 - 1);
    }
    if ((long)puVar1 - (long)puVar28 < 8) {
      if ((long)puVar1 - (long)puVar28 < 1) {
        uVar9 = 0;
        if ((long)puVar1 - (long)((long)puVar28 + 1U) < 1) goto LAB_0010c2a8;
LAB_0010c1f4:
        uVar11 = (uint)*(byte *)((long)puVar28 + 1) << 0x10;
        if (0 < (long)puVar1 - (long)((long)puVar28 + 2U)) goto LAB_0010c20c;
LAB_0010c2bc:
        uVar16 = 0;
        if ((long)puVar1 - (long)((long)puVar28 + 3U) < 1) goto LAB_0010c2d0;
LAB_0010c224:
        uVar7 = (ulong)*(byte *)((long)puVar28 + 3);
      }
      else {
        uVar9 = (uint)(byte)*puVar28 << 0x18;
        if (0 < (long)puVar1 - (long)((long)puVar28 + 1U)) goto LAB_0010c1f4;
LAB_0010c2a8:
        uVar11 = 0;
        if ((long)puVar1 - (long)((long)puVar28 + 2U) < 1) goto LAB_0010c2bc;
LAB_0010c20c:
        uVar16 = (uint)*(byte *)((long)puVar28 + 2) << 8;
        if (0 < (long)puVar1 - (long)((long)puVar28 + 3U)) goto LAB_0010c224;
LAB_0010c2d0:
        uVar7 = 0;
      }
      if ((long)puVar1 - (long)((long)puVar28 + 4U) < 1) {
        uVar13 = 0;
        if ((long)puVar1 - (long)((long)puVar28 + 5U) < 1) goto LAB_0010c324;
LAB_0010c304:
        uVar21 = (uint)*(byte *)((long)puVar28 + 5) << 0x10;
      }
      else {
        uVar13 = (uint)*(byte *)((long)puVar28 + 4U) << 0x18;
        if (0 < (long)puVar1 - (long)((long)puVar28 + 5U)) goto LAB_0010c304;
LAB_0010c324:
        uVar21 = 0;
      }
      if ((long)puVar1 - (long)((long)puVar28 + 6U) < 1) {
        uVar22 = 0;
      }
      else {
        uVar22 = (uint)*(byte *)((long)puVar28 + 6U) << 8;
      }
      if ((long)puVar1 - (long)((long)puVar28 + 7U) < 1) {
        uVar26 = 0;
      }
      else {
        uVar26 = (ulong)*(byte *)((long)puVar28 + 7U);
      }
      uVar26 = (ulong)(uVar21 | uVar13 | uVar22) | (uVar7 | (uVar11 | uVar9 | uVar16)) << 0x20 |
               uVar26;
    }
    else {
      uVar7 = (*puVar28 & 0xff00ff00ff00ff00) >> 8 | (*puVar28 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar26 = uVar7 >> 0x20 | uVar7 << 0x20;
    }
    __s = *(void **)(param_1 + 0x2a0);
    puVar28 = (ulong *)((long)puVar28 + (uVar5 + 3 >> 3));
    uVar25 = uVar26 >> (0x3c - uVar5 & 0x3f) | uVar14 << 3;
    memset(__s,0,(ulong)uVar15);
    uVar26 = uVar25 << 1;
    uVar7 = (uVar5 + 3 & 7) + 1;
    if ((long)uVar25 < 0) {
      uVar9 = 0;
LAB_0010ce20:
      uVar5 = uVar14 >> 0x3d & 3;
      iVar17 = 0;
      iVar4 = iVar4 << 2;
      do {
        if ((long)puVar1 - (long)puVar28 < 8) {
          if ((long)puVar1 - (long)puVar28 < 1) {
            uVar11 = 0;
            if ((long)puVar1 - (long)((long)puVar28 + 1U) < 1) goto LAB_0010cec8;
LAB_0010ce7c:
            uVar16 = (uint)*(byte *)((long)puVar28 + 1) << 0x10;
            if (0 < (long)puVar1 - (long)((long)puVar28 + 2U)) goto LAB_0010ce94;
LAB_0010cedc:
            uVar13 = 0;
            if ((long)puVar1 - (long)((long)puVar28 + 3U) < 1) goto LAB_0010cef0;
LAB_0010ceac:
            uVar14 = (ulong)*(byte *)((long)puVar28 + 3);
          }
          else {
            uVar11 = (uint)(byte)*puVar28 << 0x18;
            if (0 < (long)puVar1 - (long)((long)puVar28 + 1U)) goto LAB_0010ce7c;
LAB_0010cec8:
            uVar16 = 0;
            if ((long)puVar1 - (long)((long)puVar28 + 2U) < 1) goto LAB_0010cedc;
LAB_0010ce94:
            uVar13 = (uint)*(byte *)((long)puVar28 + 2) << 8;
            if (0 < (long)puVar1 - (long)((long)puVar28 + 3U)) goto LAB_0010ceac;
LAB_0010cef0:
            uVar14 = 0;
          }
          if ((long)puVar1 - (long)((long)puVar28 + 4U) < 1) {
            uVar21 = 0;
            if ((long)puVar1 - (long)((long)puVar28 + 5U) < 1) goto LAB_0010cf44;
LAB_0010cf24:
            uVar22 = (uint)*(byte *)((long)puVar28 + 5) << 0x10;
          }
          else {
            uVar21 = (uint)*(byte *)((long)puVar28 + 4U) << 0x18;
            if (0 < (long)puVar1 - (long)((long)puVar28 + 5U)) goto LAB_0010cf24;
LAB_0010cf44:
            uVar22 = 0;
          }
          if ((long)puVar1 - (long)((long)puVar28 + 6U) < 1) {
            uVar10 = 0;
          }
          else {
            uVar10 = (uint)*(byte *)((long)puVar28 + 6U) << 8;
          }
          if ((long)puVar1 - (long)((long)puVar28 + 7U) < 1) {
            uVar25 = 0;
          }
          else {
            uVar25 = (ulong)*(byte *)((long)puVar28 + 7U);
          }
          uVar25 = (ulong)(uVar22 | uVar21 | uVar10) | (uVar14 | (uVar16 | uVar11 | uVar13)) << 0x20
                   | uVar25;
        }
        else {
          uVar14 = (*puVar28 & 0xff00ff00ff00ff00) >> 8 | (*puVar28 & 0xff00ff00ff00ff) << 8;
          uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
          uVar25 = uVar14 >> 0x20 | uVar14 << 0x20;
        }
        uVar14 = uVar25 >> (0x3f - uVar7 & 0x3f) | uVar26;
        uVar11 = (int)LZCOUNT(uVar14) << 1 | 1;
        puVar28 = (ulong *)((long)puVar28 + ((long)uVar7 >> 3));
        uVar7 = uVar7 & 7;
        if (uVar14 == 0 || 0x1d < uVar11) {
          iVar20 = 0;
          lVar19 = (long)puVar1 - (long)puVar28;
          lVar27 = 0;
          if (7 < lVar19) goto LAB_0010d1e4;
LAB_0010d07c:
          if (lVar19 < 1) {
            uVar11 = 0;
          }
          else {
            uVar11 = (uint)(byte)*puVar28 << 0x18;
          }
          if ((long)puVar1 - (long)((long)puVar28 + 1U) < 1) {
            uVar16 = 0;
          }
          else {
            uVar16 = (uint)*(byte *)((long)puVar28 + 1) << 0x10;
          }
          if ((long)puVar1 - (long)((long)puVar28 + 2U) < 1) {
            uVar13 = 0;
          }
          else {
            uVar13 = (uint)*(byte *)((long)puVar28 + 2) << 8;
          }
          if ((long)puVar1 - (long)((long)puVar28 + 3U) < 1) {
            uVar26 = 0;
          }
          else {
            uVar26 = (ulong)*(byte *)((long)puVar28 + 3);
          }
          if ((long)puVar1 - (long)((long)puVar28 + 4U) < 1) {
            uVar21 = 0;
          }
          else {
            uVar21 = (uint)*(byte *)((long)puVar28 + 4U) << 0x18;
          }
          if ((long)puVar1 - (long)((long)puVar28 + 5U) < 1) {
            uVar22 = 0;
          }
          else {
            uVar22 = (uint)*(byte *)((long)puVar28 + 5) << 0x10;
          }
          if ((long)puVar1 - (long)((long)puVar28 + 6U) < 1) {
            uVar10 = 0;
          }
          else {
            uVar10 = (uint)*(byte *)((long)puVar28 + 6U) << 8;
          }
          if ((long)puVar1 - (long)((long)puVar28 + 7U) < 1) {
            uVar25 = 0;
          }
          else {
            uVar25 = (ulong)*(byte *)((long)puVar28 + 7U);
          }
          uVar25 = (ulong)(uVar22 | uVar21 | uVar10) | (uVar26 | (uVar16 | uVar11 | uVar13)) << 0x20
                   | uVar25;
          do {
            uVar14 = uVar25 >> (0x3f - uVar7 & 0x3f) | uVar14;
            puVar28 = (ulong *)((long)puVar28 + lVar27);
            uVar7 = uVar7 & 7;
            if (uVar14 == 0) {
              if (puVar28 < puVar1) {
                uVar11 = (uint)uVar7 ^ 0x3f;
                uVar14 = 0;
                uVar7 = 0x3f;
                goto LAB_0010d1d0;
              }
              FUN_0010a430();
              if (*(code **)PTR_PTR_043722f8 != (code *)0x0) {
                (**(code **)PTR_PTR_043722f8)
                          (0,"v:/devel/projects/oodle2/core/rrvarbitcodes.cpp",0x3f,
                           "OODLE ERROR : corruption : ReadUnary past end\n");
              }
              FUN_0010a450();
              uVar14 = 0;
              uVar26 = 0x3f;
LAB_0010d3d0:
              uVar11 = 0;
              lVar27 = (long)puVar1 - (long)puVar28;
              uVar7 = uVar26 >> 3;
              if (7 < lVar27) goto LAB_0010d3e0;
LAB_0010d578:
              if (lVar27 < 1) {
                uVar16 = 0;
                if ((long)puVar1 - (long)((long)puVar28 + 1U) < 1) goto LAB_0010d5e4;
LAB_0010d598:
                uVar13 = (uint)*(byte *)((long)puVar28 + 1) << 0x10;
                if (0 < (long)puVar1 - (long)((long)puVar28 + 2U)) goto LAB_0010d5b0;
LAB_0010d5f8:
                uVar21 = 0;
                if ((long)puVar1 - (long)((long)puVar28 + 3U) < 1) goto LAB_0010d60c;
LAB_0010d5c8:
                uVar24 = (ulong)*(byte *)((long)puVar28 + 3);
              }
              else {
                uVar16 = (uint)(byte)*puVar28 << 0x18;
                if (0 < (long)puVar1 - (long)((long)puVar28 + 1U)) goto LAB_0010d598;
LAB_0010d5e4:
                uVar13 = 0;
                if ((long)puVar1 - (long)((long)puVar28 + 2U) < 1) goto LAB_0010d5f8;
LAB_0010d5b0:
                uVar21 = (uint)*(byte *)((long)puVar28 + 2) << 8;
                if (0 < (long)puVar1 - (long)((long)puVar28 + 3U)) goto LAB_0010d5c8;
LAB_0010d60c:
                uVar24 = 0;
              }
              if ((long)puVar1 - (long)((long)puVar28 + 4U) < 1) {
                uVar22 = 0;
                if ((long)puVar1 - (long)((long)puVar28 + 5U) < 1) goto LAB_0010d660;
LAB_0010d640:
                uVar10 = (uint)*(byte *)((long)puVar28 + 5) << 0x10;
              }
              else {
                uVar22 = (uint)*(byte *)((long)puVar28 + 4U) << 0x18;
                if (0 < (long)puVar1 - (long)((long)puVar28 + 5U)) goto LAB_0010d640;
LAB_0010d660:
                uVar10 = 0;
              }
              if ((long)puVar1 - (long)((long)puVar28 + 6U) < 1) {
                uVar12 = 0;
              }
              else {
                uVar12 = (uint)*(byte *)((long)puVar28 + 6U) << 8;
              }
              if ((long)puVar1 - (long)((long)puVar28 + 7U) < 1) {
                uVar25 = 0;
              }
              else {
                uVar25 = (ulong)*(byte *)((long)puVar28 + 7U);
              }
              uVar25 = (ulong)(uVar10 | uVar22 | uVar12) |
                       (uVar24 | (uVar13 | uVar16 | uVar21)) << 0x20 | uVar25;
LAB_0010d6bc:
              uVar14 = uVar25 >> (0x3f - uVar26 & 0x3f) | uVar14;
              puVar28 = (ulong *)((long)puVar28 + uVar7);
              uVar7 = (uVar26 + 1) - (uVar26 & 0x1fffffff8);
              uVar26 = uVar14 << 1;
              uVar11 = (uVar11 | (uint)(uVar14 >> 0x3f)) + 1;
              if (uVar11 <= uVar15 - uVar9) goto LAB_0010cff4;
              goto LAB_0010e38c;
            }
            uVar11 = (uint)LZCOUNT(uVar14);
            if (uVar11 < 0x1f) {
              uVar26 = LZCOUNT(uVar14) + 1;
              uVar14 = uVar14 << (uVar26 & 0x3f);
              uVar26 = uVar26 + uVar7;
              uVar11 = iVar20 + uVar11;
              if (uVar11 == 0) goto LAB_0010d3d0;
              if ((long)puVar1 - (long)puVar28 < 8) {
                if ((long)puVar1 - (long)puVar28 < 1) {
                  uVar16 = 0;
                  if ((long)puVar1 - (long)((long)puVar28 + 1U) < 1) goto LAB_0010d458;
LAB_0010d40c:
                  uVar13 = (uint)*(byte *)((long)puVar28 + 1) << 0x10;
                  if (0 < (long)puVar1 - (long)((long)puVar28 + 2U)) goto LAB_0010d424;
LAB_0010d46c:
                  uVar21 = 0;
                  if ((long)puVar1 - (long)((long)puVar28 + 3U) < 1) goto LAB_0010d480;
LAB_0010d43c:
                  uVar7 = (ulong)*(byte *)((long)puVar28 + 3);
                }
                else {
                  uVar16 = (uint)(byte)*puVar28 << 0x18;
                  if (0 < (long)puVar1 - (long)((long)puVar28 + 1U)) goto LAB_0010d40c;
LAB_0010d458:
                  uVar13 = 0;
                  if ((long)puVar1 - (long)((long)puVar28 + 2U) < 1) goto LAB_0010d46c;
LAB_0010d424:
                  uVar21 = (uint)*(byte *)((long)puVar28 + 2) << 8;
                  if (0 < (long)puVar1 - (long)((long)puVar28 + 3U)) goto LAB_0010d43c;
LAB_0010d480:
                  uVar7 = 0;
                }
                if ((long)puVar1 - (long)((long)puVar28 + 4U) < 1) {
                  uVar22 = 0;
                  if ((long)puVar1 - (long)((long)puVar28 + 5U) < 1) goto LAB_0010d4d4;
LAB_0010d4b4:
                  uVar10 = (uint)*(byte *)((long)puVar28 + 5) << 0x10;
                }
                else {
                  uVar22 = (uint)*(byte *)((long)puVar28 + 4U) << 0x18;
                  if (0 < (long)puVar1 - (long)((long)puVar28 + 5U)) goto LAB_0010d4b4;
LAB_0010d4d4:
                  uVar10 = 0;
                }
                if ((long)puVar1 - (long)((long)puVar28 + 6U) < 1) {
                  uVar12 = 0;
                }
                else {
                  uVar12 = (uint)*(byte *)((long)puVar28 + 6U) << 8;
                }
                if ((long)puVar1 - (long)((long)puVar28 + 7U) < 1) {
                  uVar25 = 0;
                }
                else {
                  uVar25 = (ulong)*(byte *)((long)puVar28 + 7U);
                }
                uVar25 = (ulong)(uVar10 | uVar22 | uVar12) |
                         (uVar7 | (uVar13 | uVar16 | uVar21)) << 0x20 | uVar25;
              }
              else {
                uVar7 = (*puVar28 & 0xff00ff00ff00ff00) >> 8 | (*puVar28 & 0xff00ff00ff00ff) << 8;
                uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
                uVar25 = uVar7 >> 0x20 | uVar7 << 0x20;
              }
              uVar7 = uVar25 >> (0x3f - uVar26 & 0x3f) | uVar14;
              puVar28 = (ulong *)((long)puVar28 + (uVar26 >> 3));
              uVar14 = uVar7 << ((ulong)uVar11 & 0x3f);
              uVar26 = (uVar26 & 7) + (ulong)uVar11;
              uVar11 = (~(-1 << (ulong)(uVar11 & 0x1f)) + (int)(uVar7 >> ((ulong)-uVar11 & 0x3f))) *
                       2;
              lVar27 = (long)puVar1 - (long)puVar28;
              uVar7 = uVar26 >> 3;
              if (lVar27 < 8) goto LAB_0010d578;
LAB_0010d3e0:
              uVar25 = (*puVar28 & 0xff00ff00ff00ff00) >> 8 | (*puVar28 & 0xff00ff00ff00ff) << 8;
              uVar25 = (uVar25 & 0xffff0000ffff0000) >> 0x10 | (uVar25 & 0xffff0000ffff) << 0x10;
              uVar25 = uVar25 >> 0x20 | uVar25 << 0x20;
              goto LAB_0010d6bc;
            }
            uVar7 = uVar7 + 0x1f;
            uVar11 = 0x1f;
            uVar14 = uVar14 << 0x1f;
LAB_0010d1d0:
            iVar20 = uVar11 + iVar20;
            lVar19 = (long)puVar1 - (long)puVar28;
            lVar27 = (long)uVar7 >> 3;
            if (lVar19 < 8) goto LAB_0010d07c;
LAB_0010d1e4:
            uVar26 = (*puVar28 & 0xff00ff00ff00ff00) >> 8 | (*puVar28 & 0xff00ff00ff00ff) << 8;
            uVar26 = (uVar26 & 0xffff0000ffff0000) >> 0x10 | (uVar26 & 0xffff0000ffff) << 0x10;
            uVar25 = uVar26 >> 0x20 | uVar26 << 0x20;
          } while( true );
        }
        uVar26 = uVar14 << ((ulong)(uVar11 + 1) & 0x3f);
        uVar7 = uVar7 + (uVar11 + 1);
        uVar11 = (int)(uVar14 >> ((ulong)(0x3f - uVar11) & 0x3f)) - 1;
        if (uVar15 - uVar9 < uVar11) {
LAB_0010e38c:
          FUN_0010a430();
          pcVar6 = *(code **)PTR_PTR_043722f8;
          if (pcVar6 != (code *)0x0) {
            pcVar3 = "OODLE ERROR : LZ corruption : i + RunLen > packNumSymbols \n";
            uVar2 = 0x3c8;
LAB_0010e300:
            (*pcVar6)(0,"v:\\devel\\projects\\oodle2\\core\\rrhuffmandecode.cpp",uVar2,pcVar3);
          }
LAB_0010e308:
          FUN_0010a450();
          uVar2 = 0;
          goto LAB_0010e364;
        }
LAB_0010cff4:
        lVar27 = (long)uVar7 >> 3;
        if ((long)puVar1 - (long)puVar28 < 8) {
          if ((long)puVar1 - (long)puVar28 < 1) {
            uVar16 = 0;
            if ((long)puVar1 - (long)((long)puVar28 + 1U) < 1) goto LAB_0010d270;
LAB_0010d030:
            uVar13 = (uint)*(byte *)((long)puVar28 + 1) << 0x10;
            if (0 < (long)puVar1 - (long)((long)puVar28 + 2U)) goto LAB_0010d048;
LAB_0010d284:
            uVar21 = 0;
            if ((long)puVar1 - (long)((long)puVar28 + 3U) < 1) goto LAB_0010d298;
LAB_0010d060:
            uVar14 = (ulong)*(byte *)((long)puVar28 + 3);
          }
          else {
            uVar16 = (uint)(byte)*puVar28 << 0x18;
            if (0 < (long)puVar1 - (long)((long)puVar28 + 1U)) goto LAB_0010d030;
LAB_0010d270:
            uVar13 = 0;
            if ((long)puVar1 - (long)((long)puVar28 + 2U) < 1) goto LAB_0010d284;
LAB_0010d048:
            uVar21 = (uint)*(byte *)((long)puVar28 + 2) << 8;
            if (0 < (long)puVar1 - (long)((long)puVar28 + 3U)) goto LAB_0010d060;
LAB_0010d298:
            uVar14 = 0;
          }
          if ((long)puVar1 - (long)((long)puVar28 + 4U) < 1) {
            uVar22 = 0;
            if ((long)puVar1 - (long)((long)puVar28 + 5U) < 1) goto LAB_0010d2ec;
LAB_0010d2cc:
            uVar10 = (uint)*(byte *)((long)puVar28 + 5) << 0x10;
          }
          else {
            uVar22 = (uint)*(byte *)((long)puVar28 + 4U) << 0x18;
            if (0 < (long)puVar1 - (long)((long)puVar28 + 5U)) goto LAB_0010d2cc;
LAB_0010d2ec:
            uVar10 = 0;
          }
          if ((long)puVar1 - (long)((long)puVar28 + 6U) < 1) {
            uVar12 = 0;
          }
          else {
            uVar12 = (uint)*(byte *)((long)puVar28 + 6U) << 8;
          }
          if ((long)puVar1 - (long)((long)puVar28 + 7U) < 1) {
            uVar25 = 0;
          }
          else {
            uVar25 = (ulong)*(byte *)((long)puVar28 + 7U);
          }
          uVar25 = (ulong)(uVar10 | uVar22 | uVar12) | (uVar14 | (uVar13 | uVar16 | uVar21)) << 0x20
                   | uVar25;
        }
        else {
          uVar14 = (*puVar28 & 0xff00ff00ff00ff00) >> 8 | (*puVar28 & 0xff00ff00ff00ff) << 8;
          uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
          uVar25 = uVar14 >> 0x20 | uVar14 << 0x20;
        }
        uVar14 = 0x3f - uVar7;
        uVar7 = uVar7 & 7;
        uVar26 = uVar25 >> (uVar14 & 0x3f) | uVar26;
        puVar28 = (ulong *)((long)puVar28 + lVar27);
        uVar16 = uVar9;
        if (uVar11 != 0) {
          uVar9 = 0;
          do {
            uVar13 = (int)uVar5 + 1 + (int)LZCOUNT(uVar26);
            if (0x1e < uVar13) {
              iVar20 = 0;
              lVar19 = (long)puVar1 - (long)puVar28;
              lVar27 = 0;
              if (7 < lVar19) goto LAB_0010d874;
LAB_0010d70c:
              if (lVar19 < 1) {
                uVar13 = 0;
              }
              else {
                uVar13 = (uint)(byte)*puVar28 << 0x18;
              }
              if ((long)puVar1 - (long)((long)puVar28 + 1U) < 1) {
                uVar21 = 0;
              }
              else {
                uVar21 = (uint)*(byte *)((long)puVar28 + 1) << 0x10;
              }
              if ((long)puVar1 - (long)((long)puVar28 + 2U) < 1) {
                uVar22 = 0;
              }
              else {
                uVar22 = (uint)*(byte *)((long)puVar28 + 2) << 8;
              }
              if ((long)puVar1 - (long)((long)puVar28 + 3U) < 1) {
                uVar14 = 0;
              }
              else {
                uVar14 = (ulong)*(byte *)((long)puVar28 + 3);
              }
              if ((long)puVar1 - (long)((long)puVar28 + 4U) < 1) {
                uVar10 = 0;
              }
              else {
                uVar10 = (uint)*(byte *)((long)puVar28 + 4U) << 0x18;
              }
              if ((long)puVar1 - (long)((long)puVar28 + 5U) < 1) {
                uVar12 = 0;
              }
              else {
                uVar12 = (uint)*(byte *)((long)puVar28 + 5) << 0x10;
              }
              if ((long)puVar1 - (long)((long)puVar28 + 6U) < 1) {
                uVar18 = 0;
              }
              else {
                uVar18 = (uint)*(byte *)((long)puVar28 + 6U) << 8;
              }
              if ((long)puVar1 - (long)((long)puVar28 + 7U) < 1) {
                uVar25 = 0;
              }
              else {
                uVar25 = (ulong)*(byte *)((long)puVar28 + 7U);
              }
              uVar25 = (ulong)(uVar12 | uVar10 | uVar18) |
                       (uVar14 | (uVar21 | uVar13 | uVar22)) << 0x20 | uVar25;
              do {
                uVar26 = uVar25 >> (0x3f - uVar7 & 0x3f) | uVar26;
                puVar28 = (ulong *)((long)puVar28 + lVar27);
                uVar7 = uVar7 & 7;
                if (uVar26 == 0) {
                  if (puVar28 < puVar1) {
                    uVar13 = (uint)uVar7 ^ 0x3f;
                    uVar26 = 0;
                    uVar7 = 0x3f;
                    goto LAB_0010d860;
                  }
                  FUN_0010a430();
                  if (*(code **)PTR_PTR_043722f8 != (code *)0x0) {
                    (**(code **)PTR_PTR_043722f8)
                              (0,"v:/devel/projects/oodle2/core/rrvarbitcodes.cpp",0x3f,
                               "OODLE ERROR : corruption : ReadUnary past end\n");
                  }
                  FUN_0010a450();
                  uVar26 = 0;
                  iVar20 = 0;
                  uVar14 = 0x3f;
                  lVar27 = (long)puVar1 - (long)puVar28;
                  uVar7 = 7;
                  if (lVar27 < 8) goto LAB_0010d960;
LAB_0010d8dc:
                  uVar25 = (*puVar28 & 0xff00ff00ff00ff00) >> 8 | (*puVar28 & 0xff00ff00ff00ff) << 8
                  ;
                  uVar25 = (uVar25 & 0xffff0000ffff0000) >> 0x10 | (uVar25 & 0xffff0000ffff) << 0x10
                  ;
                  uVar24 = uVar25 >> 0x20 | uVar25 << 0x20;
LAB_0010daa4:
                  uVar26 = uVar24 >> (0x3f - uVar14 & 0x3f) | uVar26;
                  puVar28 = (ulong *)((long)puVar28 + uVar7);
                  uVar25 = uVar26 << uVar5;
                  iVar8 = (int)((uVar26 >> 1) >> (uVar5 ^ 0x3f));
                  uVar7 = (uVar14 & 7) + uVar5;
                  goto LAB_0010daf4;
                }
                uVar13 = (uint)LZCOUNT(uVar26);
                if (uVar13 < 0x1f) {
                  uVar14 = LZCOUNT(uVar26) + 1;
                  uVar26 = uVar26 << (uVar14 & 0x3f);
                  uVar14 = uVar14 + uVar7;
                  iVar20 = iVar20 + uVar13;
                  lVar27 = (long)puVar1 - (long)puVar28;
                  uVar7 = uVar14 >> 3;
                  if (7 < lVar27) goto LAB_0010d8dc;
LAB_0010d960:
                  if (lVar27 < 1) {
                    uVar13 = 0;
                    if ((long)puVar1 - (long)((long)puVar28 + 1U) < 1) goto LAB_0010d9cc;
LAB_0010d980:
                    uVar21 = (uint)*(byte *)((long)puVar28 + 1) << 0x10;
                    if (0 < (long)puVar1 - (long)((long)puVar28 + 2U)) goto LAB_0010d998;
LAB_0010d9e0:
                    uVar22 = 0;
                    if ((long)puVar1 - (long)((long)puVar28 + 3U) < 1) goto LAB_0010d9f4;
LAB_0010d9b0:
                    uVar25 = (ulong)*(byte *)((long)puVar28 + 3);
                  }
                  else {
                    uVar13 = (uint)(byte)*puVar28 << 0x18;
                    if (0 < (long)puVar1 - (long)((long)puVar28 + 1U)) goto LAB_0010d980;
LAB_0010d9cc:
                    uVar21 = 0;
                    if ((long)puVar1 - (long)((long)puVar28 + 2U) < 1) goto LAB_0010d9e0;
LAB_0010d998:
                    uVar22 = (uint)*(byte *)((long)puVar28 + 2) << 8;
                    if (0 < (long)puVar1 - (long)((long)puVar28 + 3U)) goto LAB_0010d9b0;
LAB_0010d9f4:
                    uVar25 = 0;
                  }
                  if ((long)puVar1 - (long)((long)puVar28 + 4U) < 1) {
                    uVar10 = 0;
                    if ((long)puVar1 - (long)((long)puVar28 + 5U) < 1) goto LAB_0010da48;
LAB_0010da28:
                    uVar12 = (uint)*(byte *)((long)puVar28 + 5) << 0x10;
                  }
                  else {
                    uVar10 = (uint)*(byte *)((long)puVar28 + 4U) << 0x18;
                    if (0 < (long)puVar1 - (long)((long)puVar28 + 5U)) goto LAB_0010da28;
LAB_0010da48:
                    uVar12 = 0;
                  }
                  if ((long)puVar1 - (long)((long)puVar28 + 6U) < 1) {
                    uVar18 = 0;
                  }
                  else {
                    uVar18 = (uint)*(byte *)((long)puVar28 + 6U) << 8;
                  }
                  if ((long)puVar1 - (long)((long)puVar28 + 7U) < 1) {
                    uVar24 = 0;
                  }
                  else {
                    uVar24 = (ulong)*(byte *)((long)puVar28 + 7U);
                  }
                  uVar24 = (ulong)(uVar12 | uVar10 | uVar18) |
                           (uVar25 | (uVar21 | uVar13 | uVar22)) << 0x20 | uVar24;
                  goto LAB_0010daa4;
                }
                uVar13 = 0x1f;
                uVar26 = uVar26 << 0x1f;
                uVar7 = uVar7 + 0x1f;
LAB_0010d860:
                iVar20 = uVar13 + iVar20;
                lVar19 = (long)puVar1 - (long)puVar28;
                lVar27 = (long)uVar7 >> 3;
                if (lVar19 < 8) goto LAB_0010d70c;
LAB_0010d874:
                uVar14 = (*puVar28 & 0xff00ff00ff00ff00) >> 8 | (*puVar28 & 0xff00ff00ff00ff) << 8;
                uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
                uVar25 = uVar14 >> 0x20 | uVar14 << 0x20;
              } while( true );
            }
            iVar8 = (int)(uVar26 >> ((ulong)-uVar13 & 0x3f));
            uVar25 = uVar26 << ((ulong)uVar13 & 0x3f);
            uVar7 = uVar7 + uVar13;
            iVar20 = (int)LZCOUNT(uVar26) + -1;
LAB_0010daf4:
            uVar13 = (iVar20 << uVar5) + iVar8;
            if ((long)puVar1 - (long)puVar28 < 8) {
              if ((long)puVar1 - (long)puVar28 < 1) {
                uVar21 = 0;
                if ((long)puVar1 - (long)((long)puVar28 + 1U) < 1) goto LAB_0010db90;
LAB_0010db44:
                uVar22 = (uint)*(byte *)((long)puVar28 + 1) << 0x10;
                if (0 < (long)puVar1 - (long)((long)puVar28 + 2U)) goto LAB_0010db5c;
LAB_0010dba4:
                uVar10 = 0;
                if ((long)puVar1 - (long)((long)puVar28 + 3U) < 1) goto LAB_0010dbb8;
LAB_0010db74:
                uVar14 = (ulong)*(byte *)((long)puVar28 + 3);
              }
              else {
                uVar21 = (uint)(byte)*puVar28 << 0x18;
                if (0 < (long)puVar1 - (long)((long)puVar28 + 1U)) goto LAB_0010db44;
LAB_0010db90:
                uVar22 = 0;
                if ((long)puVar1 - (long)((long)puVar28 + 2U) < 1) goto LAB_0010dba4;
LAB_0010db5c:
                uVar10 = (uint)*(byte *)((long)puVar28 + 2) << 8;
                if (0 < (long)puVar1 - (long)((long)puVar28 + 3U)) goto LAB_0010db74;
LAB_0010dbb8:
                uVar14 = 0;
              }
              if ((long)puVar1 - (long)((long)puVar28 + 4U) < 1) {
                uVar12 = 0;
                if ((long)puVar1 - (long)((long)puVar28 + 5U) < 1) goto LAB_0010dc0c;
LAB_0010dbec:
                uVar18 = (uint)*(byte *)((long)puVar28 + 5) << 0x10;
              }
              else {
                uVar12 = (uint)*(byte *)((long)puVar28 + 4U) << 0x18;
                if (0 < (long)puVar1 - (long)((long)puVar28 + 5U)) goto LAB_0010dbec;
LAB_0010dc0c:
                uVar18 = 0;
              }
              if ((long)puVar1 - (long)((long)puVar28 + 6U) < 1) {
                uVar23 = 0;
              }
              else {
                uVar23 = (uint)*(byte *)((long)puVar28 + 6U) << 8;
              }
              if ((long)puVar1 - (long)((long)puVar28 + 7U) < 1) {
                uVar26 = 0;
              }
              else {
                uVar26 = (ulong)*(byte *)((long)puVar28 + 7U);
              }
              uVar26 = (ulong)(uVar18 | uVar12 | uVar23) |
                       (uVar14 | (uVar22 | uVar21 | uVar10)) << 0x20 | uVar26;
            }
            else {
              uVar14 = (*puVar28 & 0xff00ff00ff00ff00) >> 8 | (*puVar28 & 0xff00ff00ff00ff) << 8;
              uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
              uVar26 = uVar14 >> 0x20 | uVar14 << 0x20;
            }
            uVar26 = uVar26 >> (0x3f - uVar7 & 0x3f) | uVar25;
            iVar20 = (-(uVar13 & 1) ^ uVar13 >> 1) + (iVar4 + 2 >> 2);
            puVar28 = (ulong *)((long)puVar28 + ((long)uVar7 >> 3));
            uVar7 = uVar7 & 7;
            if (0xf < iVar20 - 1U) {
              FUN_0010a430();
              pcVar6 = *(code **)PTR_PTR_043722f8;
              if (pcVar6 == (code *)0x0) goto LAB_0010e308;
              pcVar3 = 
              "OODLE ERROR : LZ corruption : curCodeLen < 1 || curCodeLen > RR_HUFFMAN_MAX_CODELEN_LIMIT ) \n"
              ;
              uVar2 = 0x3da;
              goto LAB_0010e300;
            }
            lVar27 = param_1 + (long)iVar20 * 4;
            *(char *)((long)__s + (ulong)uVar16) = (char)iVar20;
            iVar4 = iVar20 + (iVar4 * 3 + 2 >> 2);
            uVar9 = uVar9 + 1;
            uVar16 = uVar16 + 1;
            *(int *)(lVar27 + 0x200) = *(int *)(lVar27 + 0x200) + 1;
          } while (uVar9 < uVar11);
        }
        iVar17 = uVar11 + iVar17;
        if (uVar15 <= uVar16) break;
        if ((uVar26 == 0) || (uVar9 = (int)LZCOUNT(uVar26) << 1 | 1, 0x1d < uVar9)) {
          iVar20 = 0;
          lVar27 = (long)puVar1 - (long)puVar28;
          uVar14 = 0;
          if (7 < lVar27) goto LAB_0010de9c;
LAB_0010dd34:
          if (lVar27 < 1) {
            uVar9 = 0;
          }
          else {
            uVar9 = (uint)(byte)*puVar28 << 0x18;
          }
          if ((long)puVar1 - (long)((long)puVar28 + 1U) < 1) {
            uVar11 = 0;
          }
          else {
            uVar11 = (uint)*(byte *)((long)puVar28 + 1) << 0x10;
          }
          if ((long)puVar1 - (long)((long)puVar28 + 2U) < 1) {
            uVar13 = 0;
          }
          else {
            uVar13 = (uint)*(byte *)((long)puVar28 + 2) << 8;
          }
          if ((long)puVar1 - (long)((long)puVar28 + 3U) < 1) {
            uVar25 = 0;
          }
          else {
            uVar25 = (ulong)*(byte *)((long)puVar28 + 3);
          }
          if ((long)puVar1 - (long)((long)puVar28 + 4U) < 1) {
            uVar21 = 0;
          }
          else {
            uVar21 = (uint)*(byte *)((long)puVar28 + 4U) << 0x18;
          }
          if ((long)puVar1 - (long)((long)puVar28 + 5U) < 1) {
            uVar22 = 0;
          }
          else {
            uVar22 = (uint)*(byte *)((long)puVar28 + 5) << 0x10;
          }
          if ((long)puVar1 - (long)((long)puVar28 + 6U) < 1) {
            uVar10 = 0;
          }
          else {
            uVar10 = (uint)*(byte *)((long)puVar28 + 6U) << 8;
          }
          if ((long)puVar1 - (long)((long)puVar28 + 7U) < 1) {
            uVar24 = 0;
          }
          else {
            uVar24 = (ulong)*(byte *)((long)puVar28 + 7U);
          }
          uVar24 = (ulong)(uVar22 | uVar21 | uVar10) | (uVar25 | (uVar11 | uVar9 | uVar13)) << 0x20
                   | uVar24;
          do {
            uVar26 = uVar24 >> (0x3f - uVar7 & 0x3f) | uVar26;
            puVar28 = (ulong *)((long)puVar28 + uVar14);
            uVar7 = uVar7 & 7;
            if (uVar26 == 0) {
              if (puVar28 < puVar1) {
                uVar9 = (uint)uVar7 ^ 0x3f;
                uVar26 = 0;
                uVar7 = 0x3f;
                goto LAB_0010de88;
              }
              FUN_0010a430();
              if (*(code **)PTR_PTR_043722f8 != (code *)0x0) {
                (**(code **)PTR_PTR_043722f8)
                          (0,"v:/devel/projects/oodle2/core/rrvarbitcodes.cpp",0x3f,
                           "OODLE ERROR : corruption : ReadUnary past end\n");
              }
              FUN_0010a450();
              uVar26 = 0;
              uVar14 = 0x3f;
LAB_0010df88:
              uVar9 = 0;
              lVar27 = (long)puVar1 - (long)puVar28;
              uVar7 = uVar14 >> 3;
              if (7 < lVar27) goto LAB_0010df98;
LAB_0010e130:
              if (lVar27 < 1) {
                uVar11 = 0;
                if ((long)puVar1 - (long)((long)puVar28 + 1U) < 1) goto LAB_0010e19c;
LAB_0010e150:
                uVar13 = (uint)*(byte *)((long)puVar28 + 1) << 0x10;
                if (0 < (long)puVar1 - (long)((long)puVar28 + 2U)) goto LAB_0010e168;
LAB_0010e1b0:
                uVar21 = 0;
                if ((long)puVar1 - (long)((long)puVar28 + 3U) < 1) goto LAB_0010e1c4;
LAB_0010e180:
                uVar24 = (ulong)*(byte *)((long)puVar28 + 3);
              }
              else {
                uVar11 = (uint)(byte)*puVar28 << 0x18;
                if (0 < (long)puVar1 - (long)((long)puVar28 + 1U)) goto LAB_0010e150;
LAB_0010e19c:
                uVar13 = 0;
                if ((long)puVar1 - (long)((long)puVar28 + 2U) < 1) goto LAB_0010e1b0;
LAB_0010e168:
                uVar21 = (uint)*(byte *)((long)puVar28 + 2) << 8;
                if (0 < (long)puVar1 - (long)((long)puVar28 + 3U)) goto LAB_0010e180;
LAB_0010e1c4:
                uVar24 = 0;
              }
              if ((long)puVar1 - (long)((long)puVar28 + 4U) < 1) {
                uVar22 = 0;
                if ((long)puVar1 - (long)((long)puVar28 + 5U) < 1) goto LAB_0010e218;
LAB_0010e1f8:
                uVar10 = (uint)*(byte *)((long)puVar28 + 5) << 0x10;
              }
              else {
                uVar22 = (uint)*(byte *)((long)puVar28 + 4U) << 0x18;
                if (0 < (long)puVar1 - (long)((long)puVar28 + 5U)) goto LAB_0010e1f8;
LAB_0010e218:
                uVar10 = 0;
              }
              if ((long)puVar1 - (long)((long)puVar28 + 6U) < 1) {
                uVar12 = 0;
              }
              else {
                uVar12 = (uint)*(byte *)((long)puVar28 + 6U) << 8;
              }
              if ((long)puVar1 - (long)((long)puVar28 + 7U) < 1) {
                uVar25 = 0;
              }
              else {
                uVar25 = (ulong)*(byte *)((long)puVar28 + 7U);
              }
              uVar25 = (ulong)(uVar10 | uVar22 | uVar12) |
                       (uVar24 | (uVar13 | uVar11 | uVar21)) << 0x20 | uVar25;
LAB_0010e274:
              uVar25 = uVar25 >> (0x3f - uVar14 & 0x3f) | uVar26;
              puVar28 = (ulong *)((long)puVar28 + uVar7);
              uVar7 = (uVar14 + 1) - (uVar14 & 0x1fffffff8);
              uVar26 = uVar25 << 1;
              uVar9 = (uVar9 | (uint)(uVar25 >> 0x3f)) + 1;
              if (uVar15 - uVar16 < uVar9) goto LAB_0010e2ac;
              goto LAB_0010dd10;
            }
            uVar9 = (uint)LZCOUNT(uVar26);
            if (uVar9 < 0x1f) {
              uVar14 = LZCOUNT(uVar26) + 1;
              uVar26 = uVar26 << (uVar14 & 0x3f);
              uVar14 = uVar14 + uVar7;
              uVar9 = iVar20 + uVar9;
              if (uVar9 == 0) goto LAB_0010df88;
              if ((long)puVar1 - (long)puVar28 < 8) {
                if ((long)puVar1 - (long)puVar28 < 1) {
                  uVar11 = 0;
                  if ((long)puVar1 - (long)((long)puVar28 + 1U) < 1) goto LAB_0010e010;
LAB_0010dfc4:
                  uVar13 = (uint)*(byte *)((long)puVar28 + 1) << 0x10;
                  if (0 < (long)puVar1 - (long)((long)puVar28 + 2U)) goto LAB_0010dfdc;
LAB_0010e024:
                  uVar21 = 0;
                  if ((long)puVar1 - (long)((long)puVar28 + 3U) < 1) goto LAB_0010e038;
LAB_0010dff4:
                  uVar7 = (ulong)*(byte *)((long)puVar28 + 3);
                }
                else {
                  uVar11 = (uint)(byte)*puVar28 << 0x18;
                  if (0 < (long)puVar1 - (long)((long)puVar28 + 1U)) goto LAB_0010dfc4;
LAB_0010e010:
                  uVar13 = 0;
                  if ((long)puVar1 - (long)((long)puVar28 + 2U) < 1) goto LAB_0010e024;
LAB_0010dfdc:
                  uVar21 = (uint)*(byte *)((long)puVar28 + 2) << 8;
                  if (0 < (long)puVar1 - (long)((long)puVar28 + 3U)) goto LAB_0010dff4;
LAB_0010e038:
                  uVar7 = 0;
                }
                if ((long)puVar1 - (long)((long)puVar28 + 4U) < 1) {
                  uVar22 = 0;
                  if ((long)puVar1 - (long)((long)puVar28 + 5U) < 1) goto LAB_0010e08c;
LAB_0010e06c:
                  uVar10 = (uint)*(byte *)((long)puVar28 + 5) << 0x10;
                }
                else {
                  uVar22 = (uint)*(byte *)((long)puVar28 + 4U) << 0x18;
                  if (0 < (long)puVar1 - (long)((long)puVar28 + 5U)) goto LAB_0010e06c;
LAB_0010e08c:
                  uVar10 = 0;
                }
                if ((long)puVar1 - (long)((long)puVar28 + 6U) < 1) {
                  uVar12 = 0;
                }
                else {
                  uVar12 = (uint)*(byte *)((long)puVar28 + 6U) << 8;
                }
                if ((long)puVar1 - (long)((long)puVar28 + 7U) < 1) {
                  uVar25 = 0;
                }
                else {
                  uVar25 = (ulong)*(byte *)((long)puVar28 + 7U);
                }
                uVar25 = (ulong)(uVar10 | uVar22 | uVar12) |
                         (uVar7 | (uVar13 | uVar11 | uVar21)) << 0x20 | uVar25;
              }
              else {
                uVar7 = (*puVar28 & 0xff00ff00ff00ff00) >> 8 | (*puVar28 & 0xff00ff00ff00ff) << 8;
                uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
                uVar25 = uVar7 >> 0x20 | uVar7 << 0x20;
              }
              uVar7 = uVar25 >> (0x3f - uVar14 & 0x3f) | uVar26;
              puVar28 = (ulong *)((long)puVar28 + (uVar14 >> 3));
              uVar26 = uVar7 << ((ulong)uVar9 & 0x3f);
              uVar14 = (uVar14 & 7) + (ulong)uVar9;
              uVar9 = (~(-1 << (ulong)(uVar9 & 0x1f)) + (int)(uVar7 >> ((ulong)-uVar9 & 0x3f))) * 2;
              lVar27 = (long)puVar1 - (long)puVar28;
              uVar7 = uVar14 >> 3;
              if (lVar27 < 8) goto LAB_0010e130;
LAB_0010df98:
              uVar25 = (*puVar28 & 0xff00ff00ff00ff00) >> 8 | (*puVar28 & 0xff00ff00ff00ff) << 8;
              uVar25 = (uVar25 & 0xffff0000ffff0000) >> 0x10 | (uVar25 & 0xffff0000ffff) << 0x10;
              uVar25 = uVar25 >> 0x20 | uVar25 << 0x20;
              goto LAB_0010e274;
            }
            uVar7 = uVar7 + 0x1f;
            uVar9 = 0x1f;
            uVar26 = uVar26 << 0x1f;
LAB_0010de88:
            iVar20 = uVar9 + iVar20;
            lVar27 = (long)puVar1 - (long)puVar28;
            uVar14 = uVar7 >> 3;
            if (lVar27 < 8) goto LAB_0010dd34;
LAB_0010de9c:
            uVar25 = (*puVar28 & 0xff00ff00ff00ff00) >> 8 | (*puVar28 & 0xff00ff00ff00ff) << 8;
            uVar25 = (uVar25 & 0xffff0000ffff0000) >> 0x10 | (uVar25 & 0xffff0000ffff) << 0x10;
            uVar24 = uVar25 >> 0x20 | uVar25 << 0x20;
          } while( true );
        }
        uVar14 = uVar26 >> ((ulong)(0x3f - uVar9) & 0x3f);
        uVar26 = uVar26 << ((ulong)(uVar9 + 1) & 0x3f);
        uVar7 = uVar7 + (uVar9 + 1);
        uVar9 = (int)uVar14 - 1;
        if (uVar15 - uVar16 < uVar9) {
LAB_0010e2ac:
          FUN_0010a430();
          pcVar6 = *(code **)PTR_PTR_043722f8;
          if (pcVar6 != (code *)0x0) {
            pcVar3 = "OODLE ERROR : LZ corruption : i + RunLen > packNumSymbols \n";
            uVar2 = 0x3f4;
            goto LAB_0010e300;
          }
          goto LAB_0010e308;
        }
LAB_0010dd10:
        uVar9 = uVar9 + uVar16;
      } while (uVar9 < uVar15);
    }
    else {
      if ((uVar26 == 0) || (uVar9 = (int)LZCOUNT(uVar26) << 1 | 1, 0x1d < uVar9)) {
        iVar17 = 0;
        lVar27 = (long)puVar1 - (long)puVar28;
        uVar5 = uVar7 >> 3;
        if (7 < lVar27) goto LAB_0010c5e4;
LAB_0010c47c:
        if (lVar27 < 1) {
          uVar9 = 0;
        }
        else {
          uVar9 = (uint)(byte)*puVar28 << 0x18;
        }
        if ((long)puVar1 - (long)((long)puVar28 + 1U) < 1) {
          uVar11 = 0;
        }
        else {
          uVar11 = (uint)*(byte *)((long)puVar28 + 1) << 0x10;
        }
        if ((long)puVar1 - (long)((long)puVar28 + 2U) < 1) {
          uVar16 = 0;
        }
        else {
          uVar16 = (uint)*(byte *)((long)puVar28 + 2) << 8;
        }
        if ((long)puVar1 - (long)((long)puVar28 + 3U) < 1) {
          uVar25 = 0;
        }
        else {
          uVar25 = (ulong)*(byte *)((long)puVar28 + 3);
        }
        if ((long)puVar1 - (long)((long)puVar28 + 4U) < 1) {
          uVar13 = 0;
        }
        else {
          uVar13 = (uint)*(byte *)((long)puVar28 + 4U) << 0x18;
        }
        if ((long)puVar1 - (long)((long)puVar28 + 5U) < 1) {
          uVar21 = 0;
        }
        else {
          uVar21 = (uint)*(byte *)((long)puVar28 + 5) << 0x10;
        }
        if ((long)puVar1 - (long)((long)puVar28 + 6U) < 1) {
          uVar22 = 0;
        }
        else {
          uVar22 = (uint)*(byte *)((long)puVar28 + 6U) << 8;
        }
        if ((long)puVar1 - (long)((long)puVar28 + 7U) < 1) {
          uVar24 = 0;
        }
        else {
          uVar24 = (ulong)*(byte *)((long)puVar28 + 7U);
        }
        uVar24 = (ulong)(uVar21 | uVar13 | uVar22) | (uVar25 | (uVar11 | uVar9 | uVar16)) << 0x20 |
                 uVar24;
        do {
          uVar26 = uVar24 >> (0x3f - uVar7 & 0x3f) | uVar26;
          puVar28 = (ulong *)((long)puVar28 + uVar5);
          uVar7 = uVar7 & 7;
          if (uVar26 == 0) {
            if (puVar28 < puVar1) {
              uVar9 = (uint)uVar7 ^ 0x3f;
              uVar26 = 0;
              uVar7 = 0x3f;
              goto LAB_0010c5d0;
            }
            FUN_0010a430();
            if (*(code **)PTR_PTR_043722f8 != (code *)0x0) {
              (**(code **)PTR_PTR_043722f8)
                        (0,"v:/devel/projects/oodle2/core/rrvarbitcodes.cpp",0x3f,
                         "OODLE ERROR : corruption : ReadUnary past end\n");
            }
            FUN_0010a450();
            uVar26 = 0;
            uVar5 = 0x3f;
LAB_0010c914:
            uVar9 = 0;
            lVar27 = (long)puVar1 - (long)puVar28;
            uVar7 = uVar5 >> 3;
            if (7 < lVar27) goto LAB_0010c924;
LAB_0010cc98:
            if (lVar27 < 1) {
              uVar11 = 0;
              if ((long)puVar1 - (long)((long)puVar28 + 1U) < 1) goto LAB_0010cd04;
LAB_0010ccb8:
              uVar16 = (uint)*(byte *)((long)puVar28 + 1) << 0x10;
              if (0 < (long)puVar1 - (long)((long)puVar28 + 2U)) goto LAB_0010ccd0;
LAB_0010cd18:
              uVar13 = 0;
              if ((long)puVar1 - (long)((long)puVar28 + 3U) < 1) goto LAB_0010cd2c;
LAB_0010cce8:
              uVar24 = (ulong)*(byte *)((long)puVar28 + 3);
            }
            else {
              uVar11 = (uint)(byte)*puVar28 << 0x18;
              if (0 < (long)puVar1 - (long)((long)puVar28 + 1U)) goto LAB_0010ccb8;
LAB_0010cd04:
              uVar16 = 0;
              if ((long)puVar1 - (long)((long)puVar28 + 2U) < 1) goto LAB_0010cd18;
LAB_0010ccd0:
              uVar13 = (uint)*(byte *)((long)puVar28 + 2) << 8;
              if (0 < (long)puVar1 - (long)((long)puVar28 + 3U)) goto LAB_0010cce8;
LAB_0010cd2c:
              uVar24 = 0;
            }
            if ((long)puVar1 - (long)((long)puVar28 + 4U) < 1) {
              uVar21 = 0;
              if ((long)puVar1 - (long)((long)puVar28 + 5U) < 1) goto LAB_0010cd80;
LAB_0010cd60:
              uVar22 = (uint)*(byte *)((long)puVar28 + 5) << 0x10;
            }
            else {
              uVar21 = (uint)*(byte *)((long)puVar28 + 4U) << 0x18;
              if (0 < (long)puVar1 - (long)((long)puVar28 + 5U)) goto LAB_0010cd60;
LAB_0010cd80:
              uVar22 = 0;
            }
            if ((long)puVar1 - (long)((long)puVar28 + 6U) < 1) {
              uVar10 = 0;
            }
            else {
              uVar10 = (uint)*(byte *)((long)puVar28 + 6U) << 8;
            }
            if ((long)puVar1 - (long)((long)puVar28 + 7U) < 1) {
              uVar25 = 0;
            }
            else {
              uVar25 = (ulong)*(byte *)((long)puVar28 + 7U);
            }
            uVar25 = (ulong)(uVar22 | uVar21 | uVar10) |
                     (uVar24 | (uVar16 | uVar11 | uVar13)) << 0x20 | uVar25;
LAB_0010cddc:
            uVar25 = uVar25 >> (0x3f - uVar5 & 0x3f) | uVar26;
            puVar28 = (ulong *)((long)puVar28 + uVar7);
            uVar7 = (uVar5 + 1) - (uVar5 & 0x1fffffff8);
            uVar26 = uVar25 << 1;
            uVar9 = (uVar9 | (uint)(uVar25 >> 0x3f)) + 1;
            goto joined_r0x0010ce10;
          }
          uVar9 = (uint)LZCOUNT(uVar26);
          if (uVar9 < 0x1f) {
            uVar5 = LZCOUNT(uVar26) + 1;
            uVar26 = uVar26 << (uVar5 & 0x3f);
            uVar5 = uVar5 + uVar7;
            uVar9 = iVar17 + uVar9;
            if (uVar9 == 0) goto LAB_0010c914;
            if ((long)puVar1 - (long)puVar28 < 8) {
              if ((long)puVar1 - (long)puVar28 < 1) {
                uVar11 = 0;
                if ((long)puVar1 - (long)((long)puVar28 + 1U) < 1) goto LAB_0010cb70;
LAB_0010cacc:
                uVar16 = (uint)*(byte *)((long)puVar28 + 1) << 0x10;
                if (0 < (long)puVar1 - (long)((long)puVar28 + 2U)) goto LAB_0010cae4;
LAB_0010cb84:
                uVar13 = 0;
                if ((long)puVar1 - (long)((long)puVar28 + 3U) < 1) goto LAB_0010cb98;
LAB_0010cafc:
                uVar7 = (ulong)*(byte *)((long)puVar28 + 3);
              }
              else {
                uVar11 = (uint)(byte)*puVar28 << 0x18;
                if (0 < (long)puVar1 - (long)((long)puVar28 + 1U)) goto LAB_0010cacc;
LAB_0010cb70:
                uVar16 = 0;
                if ((long)puVar1 - (long)((long)puVar28 + 2U) < 1) goto LAB_0010cb84;
LAB_0010cae4:
                uVar13 = (uint)*(byte *)((long)puVar28 + 2) << 8;
                if (0 < (long)puVar1 - (long)((long)puVar28 + 3U)) goto LAB_0010cafc;
LAB_0010cb98:
                uVar7 = 0;
              }
              if ((long)puVar1 - (long)((long)puVar28 + 4U) < 1) {
                uVar21 = 0;
                if ((long)puVar1 - (long)((long)puVar28 + 5U) < 1) goto LAB_0010cbec;
LAB_0010cbcc:
                uVar22 = (uint)*(byte *)((long)puVar28 + 5) << 0x10;
              }
              else {
                uVar21 = (uint)*(byte *)((long)puVar28 + 4U) << 0x18;
                if (0 < (long)puVar1 - (long)((long)puVar28 + 5U)) goto LAB_0010cbcc;
LAB_0010cbec:
                uVar22 = 0;
              }
              if ((long)puVar1 - (long)((long)puVar28 + 6U) < 1) {
                uVar10 = 0;
              }
              else {
                uVar10 = (uint)*(byte *)((long)puVar28 + 6U) << 8;
              }
              if ((long)puVar1 - (long)((long)puVar28 + 7U) < 1) {
                uVar25 = 0;
              }
              else {
                uVar25 = (ulong)*(byte *)((long)puVar28 + 7U);
              }
              uVar25 = (ulong)(uVar22 | uVar21 | uVar10) |
                       (uVar7 | (uVar16 | uVar11 | uVar13)) << 0x20 | uVar25;
            }
            else {
              uVar7 = (*puVar28 & 0xff00ff00ff00ff00) >> 8 | (*puVar28 & 0xff00ff00ff00ff) << 8;
              uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
              uVar25 = uVar7 >> 0x20 | uVar7 << 0x20;
            }
            uVar7 = uVar25 >> (0x3f - uVar5 & 0x3f) | uVar26;
            puVar28 = (ulong *)((long)puVar28 + (uVar5 >> 3));
            uVar26 = uVar7 << ((ulong)uVar9 & 0x3f);
            uVar5 = (uVar5 & 7) + (ulong)uVar9;
            uVar9 = (~(-1 << (ulong)(uVar9 & 0x1f)) + (int)(uVar7 >> ((ulong)-uVar9 & 0x3f))) * 2;
            lVar27 = (long)puVar1 - (long)puVar28;
            uVar7 = uVar5 >> 3;
            if (lVar27 < 8) goto LAB_0010cc98;
LAB_0010c924:
            uVar25 = (*puVar28 & 0xff00ff00ff00ff00) >> 8 | (*puVar28 & 0xff00ff00ff00ff) << 8;
            uVar25 = (uVar25 & 0xffff0000ffff0000) >> 0x10 | (uVar25 & 0xffff0000ffff) << 0x10;
            uVar25 = uVar25 >> 0x20 | uVar25 << 0x20;
            goto LAB_0010cddc;
          }
          uVar9 = 0x1f;
          uVar26 = uVar26 << 0x1f;
          uVar7 = uVar7 + 0x1f;
LAB_0010c5d0:
          iVar17 = uVar9 + iVar17;
          lVar27 = (long)puVar1 - (long)puVar28;
          uVar5 = uVar7 >> 3;
          if (lVar27 < 8) goto LAB_0010c47c;
LAB_0010c5e4:
          uVar25 = (*puVar28 & 0xff00ff00ff00ff00) >> 8 | (*puVar28 & 0xff00ff00ff00ff) << 8;
          uVar25 = (uVar25 & 0xffff0000ffff0000) >> 0x10 | (uVar25 & 0xffff0000ffff) << 0x10;
          uVar24 = uVar25 >> 0x20 | uVar25 << 0x20;
        } while( true );
      }
      uVar5 = uVar26 >> ((ulong)(0x3f - uVar9) & 0x3f);
      uVar26 = uVar26 << ((ulong)(uVar9 + 1) & 0x3f);
      uVar7 = uVar7 + (uVar9 + 1);
      uVar9 = (int)uVar5 - 1;
joined_r0x0010ce10:
      if (uVar15 < uVar9) {
        FUN_0010a430();
        pcVar6 = *(code **)PTR_PTR_043722f8;
        if (pcVar6 != (code *)0x0) {
          pcVar3 = "OODLE ERROR : LZ corruption : i + RunLen > packNumSymbols \n";
          uVar2 = 0x3bb;
          goto LAB_0010ca98;
        }
        goto LAB_0010caa0;
      }
      if (uVar9 < uVar15) goto LAB_0010ce20;
      iVar17 = 0;
      uVar16 = 1;
    }
    *(uint *)(param_1 + 0x294) = uVar16 - 1;
    uVar15 = 0xffffffff;
    *(int *)(param_1 + 0x288) = iVar17;
    do {
      uVar15 = uVar15 + 1;
    } while (*(int *)(param_1 + (ulong)uVar15 * 4 + 0x200) == 0);
    uVar9 = 0x20;
    do {
      uVar9 = uVar9 - 1;
    } while (*(int *)(param_1 + (ulong)uVar9 * 4 + 0x200) == 0);
    *(uint *)(param_1 + 0x29c) = uVar9;
    uVar2 = 1;
    *(uint *)(param_1 + 0x298) = uVar15;
  }
  else {
    uVar9 = 0;
    if (1 < uVar15) {
      uVar9 = 0x20 - (int)LZCOUNT(uVar15 - 1);
    }
    uVar24 = (ulong)uVar9;
    lVar27 = (long)(int)uVar9;
    uVar25 = (uVar14 << 1) << (uVar24 & 0x3f);
    uVar7 = uVar5 + 1 + lVar27;
    iVar4 = (int)((uVar14 << 1) >> ((ulong)-uVar9 & 0x3f));
    *(int *)(param_1 + 0x288) = iVar4;
    uVar26 = uVar25;
    if (iVar4 <= (int)uVar15) {
      if (iVar4 == 1) {
        if ((long)puVar1 - (long)puVar28 < 8) {
          if ((long)puVar1 - (long)puVar28 < 1) {
            uVar11 = 0;
            if ((long)puVar1 - (long)((long)puVar28 + 1U) < 1) goto LAB_0010c944;
LAB_0010c660:
            uVar16 = (uint)*(byte *)((long)puVar28 + 1) << 0x10;
            if (0 < (long)puVar1 - (long)((long)puVar28 + 2U)) goto LAB_0010c678;
LAB_0010c958:
            uVar13 = 0;
            if ((long)puVar1 - (long)((long)puVar28 + 3U) < 1) goto LAB_0010c96c;
LAB_0010c690:
            uVar5 = (ulong)*(byte *)((long)puVar28 + 3);
          }
          else {
            uVar11 = (uint)(byte)*puVar28 << 0x18;
            if (0 < (long)puVar1 - (long)((long)puVar28 + 1U)) goto LAB_0010c660;
LAB_0010c944:
            uVar16 = 0;
            if ((long)puVar1 - (long)((long)puVar28 + 2U) < 1) goto LAB_0010c958;
LAB_0010c678:
            uVar13 = (uint)*(byte *)((long)puVar28 + 2) << 8;
            if (0 < (long)puVar1 - (long)((long)puVar28 + 3U)) goto LAB_0010c690;
LAB_0010c96c:
            uVar5 = 0;
          }
          if ((long)puVar1 - (long)((long)puVar28 + 4U) < 1) {
            uVar21 = 0;
            if ((long)puVar1 - (long)((long)puVar28 + 5U) < 1) goto LAB_0010c9c0;
LAB_0010c9a0:
            uVar22 = (uint)*(byte *)((long)puVar28 + 5) << 0x10;
          }
          else {
            uVar21 = (uint)*(byte *)((long)puVar28 + 4U) << 0x18;
            if (0 < (long)puVar1 - (long)((long)puVar28 + 5U)) goto LAB_0010c9a0;
LAB_0010c9c0:
            uVar22 = 0;
          }
          if ((long)puVar1 - (long)((long)puVar28 + 6U) < 1) {
            uVar10 = 0;
          }
          else {
            uVar10 = (uint)*(byte *)((long)puVar28 + 6U) << 8;
          }
          if ((long)puVar1 - (long)((long)puVar28 + 7U) < 1) {
            uVar14 = 0;
          }
          else {
            uVar14 = (ulong)*(byte *)((long)puVar28 + 7U);
          }
          uVar14 = (ulong)(uVar22 | uVar21 | uVar10) | (uVar5 | (uVar16 | uVar11 | uVar13)) << 0x20
                   | uVar14;
        }
        else {
          uVar5 = (*puVar28 & 0xff00ff00ff00ff00) >> 8 | (*puVar28 & 0xff00ff00ff00ff) << 8;
          uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
          uVar14 = uVar5 >> 0x20 | uVar5 << 0x20;
        }
        uVar25 = uVar14 >> (0x3f - uVar7 & 0x3f) | uVar25;
        puVar28 = (ulong *)((long)puVar28 + (uVar7 >> 3));
        uVar5 = uVar25 >> ((ulong)(0x40 - uVar9) & 0x3f);
        uVar26 = uVar25 << (uVar24 & 0x3f);
        uVar7 = (uVar7 & 7) + lVar27;
        if ((ulong)(long)(int)uVar15 <= uVar5) {
          FUN_0010a430();
          pcVar6 = *(code **)PTR_PTR_043722f8;
          if (pcVar6 != (code *)0x0) {
            pcVar3 = "OODLE ERROR : LZ corruption : HI->oneChar >= HI->numSymbols\n";
            uVar2 = 0x2b6;
            goto LAB_0010ca98;
          }
          goto LAB_0010caa0;
        }
        *(uint *)(param_1 + 0x290) = (uint)uVar5 & 0xffff;
        *(undefined8 *)(param_1 + 0x298) = 0;
        *(uint *)(param_1 + 0x294) = (uint)uVar5;
        *(undefined1 *)(*(long *)(param_1 + 0x2a0) + uVar5) = 0;
        **(undefined2 **)(param_1 + 0x2b0) = (short)uVar5;
      }
      else if (iVar4 == 0) {
        *(undefined8 *)(param_1 + 0x298) = 0;
      }
      else {
        memset(*(void **)(param_1 + 0x2a0),0,(long)(int)uVar15);
        uVar5 = uVar25 >> 0x3d;
        uVar26 = uVar25 << 3;
        uVar7 = uVar7 + 3;
        if (5 < (uint)(uVar25 >> 0x3d)) {
          FUN_0010a430();
          pcVar6 = *(code **)PTR_PTR_043722f8;
          if (pcVar6 != (code *)0x0) {
            pcVar3 = "OODLE ERROR : LZ corruption : log2CodeLen > 5\n";
            uVar2 = 0x2cf;
            goto LAB_0010ca98;
          }
          goto LAB_0010caa0;
        }
        *(undefined4 *)(param_1 + 0x29c) = 0;
        *(undefined8 *)(param_1 + 0x294) = 0x20ffffffff;
        if (0 < *(int *)(param_1 + 0x288)) {
          iVar4 = 0;
          do {
            lVar19 = (long)uVar7 >> 3;
            if ((long)puVar1 - (long)puVar28 < 8) {
              if ((long)puVar1 - (long)puVar28 < 1) {
                uVar15 = 0;
                if ((long)puVar1 - (long)((long)puVar28 + 1U) < 1) goto LAB_0010c750;
LAB_0010c704:
                uVar11 = (uint)*(byte *)((long)puVar28 + 1) << 0x10;
                if (0 < (long)puVar1 - (long)((long)puVar28 + 2U)) goto LAB_0010c71c;
LAB_0010c764:
                uVar16 = 0;
                if ((long)puVar1 - (long)((long)puVar28 + 3U) < 1) goto LAB_0010c778;
LAB_0010c734:
                uVar14 = (ulong)*(byte *)((long)puVar28 + 3);
              }
              else {
                uVar15 = (uint)(byte)*puVar28 << 0x18;
                if (0 < (long)puVar1 - (long)((long)puVar28 + 1U)) goto LAB_0010c704;
LAB_0010c750:
                uVar11 = 0;
                if ((long)puVar1 - (long)((long)puVar28 + 2U) < 1) goto LAB_0010c764;
LAB_0010c71c:
                uVar16 = (uint)*(byte *)((long)puVar28 + 2) << 8;
                if (0 < (long)puVar1 - (long)((long)puVar28 + 3U)) goto LAB_0010c734;
LAB_0010c778:
                uVar14 = 0;
              }
              if ((long)puVar1 - (long)((long)puVar28 + 4U) < 1) {
                uVar13 = 0;
                if ((long)puVar1 - (long)((long)puVar28 + 5U) < 1) goto LAB_0010c7cc;
LAB_0010c7ac:
                uVar21 = (uint)*(byte *)((long)puVar28 + 5) << 0x10;
              }
              else {
                uVar13 = (uint)*(byte *)((long)puVar28 + 4U) << 0x18;
                if (0 < (long)puVar1 - (long)((long)puVar28 + 5U)) goto LAB_0010c7ac;
LAB_0010c7cc:
                uVar21 = 0;
              }
              if ((long)puVar1 - (long)((long)puVar28 + 6U) < 1) {
                uVar22 = 0;
              }
              else {
                uVar22 = (uint)*(byte *)((long)puVar28 + 6U) << 8;
              }
              if ((long)puVar1 - (long)((long)puVar28 + 7U) < 1) {
                uVar25 = 0;
              }
              else {
                uVar25 = (ulong)*(byte *)((long)puVar28 + 7U);
              }
              uVar25 = (ulong)(uVar21 | uVar13 | uVar22) |
                       (uVar14 | (uVar11 | uVar15 | uVar16)) << 0x20 | uVar25;
            }
            else {
              uVar14 = (*puVar28 & 0xff00ff00ff00ff00) >> 8 | (*puVar28 & 0xff00ff00ff00ff) << 8;
              uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
              uVar25 = uVar14 >> 0x20 | uVar14 << 0x20;
            }
            uVar14 = 0x3f - uVar7;
            uVar7 = uVar5 + lVar27 + (uVar7 & 7);
            uVar14 = uVar25 >> (uVar14 & 0x3f) | uVar26;
            puVar28 = (ulong *)((long)puVar28 + lVar19);
            uVar25 = uVar14 << (uVar24 & 0x3f);
            uVar26 = uVar25 << uVar5;
            iVar17 = (int)(uVar14 >> ((ulong)(0x40 - uVar9) & 0x3f));
            if ((*(int *)(param_1 + 0x284) <= iVar17) ||
               (iVar20 = (int)((uVar25 >> 1) >> (uVar5 ^ 0x3f)), 0xf < iVar20)) {
              FUN_0010a430();
              pcVar6 = *(code **)PTR_PTR_043722f8;
              if (pcVar6 == (code *)0x0) goto LAB_0010caa0;
              pcVar3 = 
              "OODLE ERROR : LZ corruption : sym >= HI->numSymbols || len > RR_HUFFMAN_MAX_CODELEN_LIMIT \n"
              ;
              uVar2 = 0x2ef;
              goto LAB_0010ca98;
            }
            uVar15 = iVar20 + 1;
            *(char *)(*(long *)(param_1 + 0x2a0) + (long)iVar17) = (char)uVar15;
            if (iVar17 <= *(int *)(param_1 + 0x294)) {
              FUN_0010a430();
              pcVar6 = *(code **)PTR_PTR_043722f8;
              if (pcVar6 == (code *)0x0) goto LAB_0010caa0;
              pcVar3 = "OODLE ERROR : LZ corruption : sym <= HI->topSym\n";
              uVar2 = 0x2f8;
              goto LAB_0010ca98;
            }
            lVar19 = param_1 + (ulong)uVar15 * 4;
            *(int *)(param_1 + 0x294) = iVar17;
            *(int *)(lVar19 + 0x200) = *(int *)(lVar19 + 0x200) + 1;
            uVar11 = *(uint *)(param_1 + 0x29c);
            if ((int)*(uint *)(param_1 + 0x29c) <= (int)uVar15) {
              uVar11 = uVar15;
            }
            *(uint *)(param_1 + 0x29c) = uVar11;
            uVar11 = *(uint *)(param_1 + 0x298);
            if ((int)uVar15 <= (int)*(uint *)(param_1 + 0x298)) {
              uVar11 = uVar15;
            }
            *(uint *)(param_1 + 0x298) = uVar11;
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(int *)(param_1 + 0x288));
        }
      }
      uVar2 = 1;
      goto LAB_0010e364;
    }
    FUN_0010a430();
    pcVar6 = *(code **)PTR_PTR_043722f8;
    if (pcVar6 != (code *)0x0) {
      pcVar3 = "OODLE ERROR : LZ corruption : HI->gotNumSymbols > HI->numSymbols\n";
      uVar2 = 0x2a5;
LAB_0010ca98:
      (*pcVar6)(0,"v:\\devel\\projects\\oodle2\\core\\rrhuffmandecode.cpp",uVar2,pcVar3);
    }
LAB_0010caa0:
    FUN_0010a450();
    uVar2 = 0;
  }
LAB_0010e364:
  param_2[2] = uVar26;
  param_2[3] = uVar7;
  *param_2 = (ulong)puVar28;
  param_2[1] = (ulong)puVar1;
  return uVar2;
}


