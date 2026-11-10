/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001bf4bc; name: FUN_001bf4bc
 */


int FUN_001bf4bc(long param_1,int param_2,long *param_3,long *param_4,char param_5)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  uint *puVar13;
  long *plVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  ulong uVar18;
  ulong uVar19;
  uint *puVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  int iVar30;
  long lVar31;
  ulong uVar32;
  undefined4 *puVar33;
  int iVar34;
  long local_280;
  undefined8 local_278;
  undefined4 *local_270;
  undefined8 local_268;
  undefined4 local_260 [128];
  
  lVar10 = *(long *)(param_1 + 0x18);
  if (*(char *)(lVar10 + 0x1fe) == '\0') {
    FUN_0331fefc(&local_280,&local_270,0x200);
    uVar11 = FUN_0332448c(&local_280,"No index available (");
    uVar11 = FUN_033245a4(uVar11,*(undefined4 *)(lVar10 + 0x1f8));
    FUN_0332448c(uVar11,") hkgpConvexHull::buildIndices need to be called before this operation.");
    iVar9 = FUN_03320b30(0x79f9d886,&local_270,
                         "../..\\Common/Internal/GeometryProcessing/ConvexHull/hkgpConvexHullInternals.h"
                         ,0x189);
    if (iVar9 != 0) {
      CallSupervisor(0x26);
    }
    FUN_0331ff7c(&local_280);
  }
  puVar13 = (uint *)((long)param_3 + 0xc);
  uVar29 = *puVar13;
  *(undefined4 *)(param_3 + 1) = 0;
  uVar28 = *(uint *)(lVar10 + 0x98);
  uVar11 = *(undefined8 *)PTR_PTR_04372408;
  if ((int)(uVar29 & 0x3fffffff) < (int)uVar28) {
    lVar31 = *param_3;
    if (0x3fffffff < (int)uVar28) {
      FUN_032bd0a8(uVar28);
      uVar29 = *puVar13;
    }
    uVar29 = (uVar29 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar29) {
      uVar29 = 0x3fffffff;
    }
    if ((int)uVar28 <= (int)uVar29) {
      uVar28 = uVar29;
    }
    lVar31 = FUN_032bd1d4(uVar11,uVar28,4,lVar31,0,puVar13);
    *param_3 = lVar31;
  }
  puVar20 = (uint *)((long)param_4 + 0xc);
  uVar29 = *puVar20;
  *(undefined4 *)(param_4 + 1) = 0;
  uVar28 = *(int *)(lVar10 + 0x60) * 3;
  if ((int)(uVar29 & 0x3fffffff) < (int)uVar28) {
    lVar31 = *param_4;
    if (0x3fffffff < (int)uVar28) {
      FUN_032bd0a8(uVar28);
      uVar29 = *puVar20;
    }
    uVar29 = (uVar29 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar29) {
      uVar29 = 0x3fffffff;
    }
    if ((int)uVar28 <= (int)uVar29) {
      uVar28 = uVar29;
    }
    lVar31 = FUN_032bd1d4(uVar11,uVar28,4,lVar31,0,puVar20);
    *param_4 = lVar31;
  }
  if (*(int *)(lVar10 + 0x1f0) == 2) {
    iVar9 = (int)param_3[1];
    uVar29 = *(uint *)((long)param_3 + 0xc);
    uVar2 = *(undefined4 *)(lVar10 + 0x60);
    uVar28 = iVar9 + 1;
    if (iVar9 < (int)(uVar29 & 0x3fffffff)) {
      lVar31 = *param_3;
    }
    else {
      lVar31 = *param_3;
      if (0x3ffffffe < iVar9) {
        FUN_032bd0a8(uVar28);
        uVar29 = *puVar13;
      }
      uVar29 = (uVar29 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar29) {
        uVar29 = 0x3fffffff;
      }
      uVar27 = uVar28;
      if ((int)uVar28 <= (int)uVar29) {
        uVar27 = uVar29;
      }
      lVar31 = FUN_032bd1d4(uVar11,uVar27,4,lVar31,iVar9,puVar13);
      iVar9 = (int)param_3[1];
      *param_3 = lVar31;
    }
    *(undefined4 *)(lVar31 + (long)iVar9 * 4) = uVar2;
    *(uint *)(param_3 + 1) = uVar28;
    if (param_2 != 0) {
      if (0 < *(int *)(lVar10 + 0x60)) {
        lVar31 = param_4[1];
        iVar9 = 0;
        do {
          uVar29 = *puVar20;
          iVar30 = (int)lVar31 + iVar9;
          uVar28 = iVar30 + 1;
          if (iVar30 < (int)(uVar29 & 0x3fffffff)) {
            lVar21 = *param_4;
          }
          else {
            lVar21 = *param_4;
            if (0x3ffffffe < iVar30) {
              FUN_032bd0a8(uVar28);
              uVar29 = *puVar20;
            }
            uVar29 = (uVar29 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar29) {
              uVar29 = 0x3fffffff;
            }
            uVar27 = uVar28;
            if ((int)uVar28 <= (int)uVar29) {
              uVar27 = uVar29;
            }
            lVar21 = FUN_032bd1d4(uVar11,uVar27,4,lVar21,iVar30,puVar20);
            *param_4 = lVar21;
            iVar30 = (int)param_4[1];
          }
          *(int *)(lVar21 + (long)iVar30 * 4) = iVar9;
          iVar9 = iVar9 + 1;
          *(uint *)(param_4 + 1) = uVar28;
        } while (iVar9 < *(int *)(lVar10 + 0x60));
      }
    }
    else {
      plVar14 = *(long **)(lVar10 + 0x58);
      if (plVar14 != (long *)0x0) {
        uVar28 = *(uint *)(param_4 + 1);
        do {
          uVar27 = *(uint *)((long)plVar14 + 0x1c);
          uVar26 = *puVar20;
          uVar29 = uVar28 + 1;
          if ((int)uVar28 < (int)(uVar26 & 0x3fffffff)) {
            lVar31 = *param_4;
          }
          else {
            lVar31 = *param_4;
            if (0x3ffffffe < (int)uVar28) {
              FUN_032bd0a8(uVar29);
              uVar26 = *puVar20;
            }
            uVar26 = (uVar26 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar26) {
              uVar26 = 0x3fffffff;
            }
            uVar1 = uVar29;
            if ((int)uVar29 <= (int)uVar26) {
              uVar1 = uVar26;
            }
            lVar31 = FUN_032bd1d4(uVar11,uVar1,4,lVar31,uVar28,puVar20);
            *param_4 = lVar31;
            uVar28 = *(uint *)(param_4 + 1);
          }
          *(uint *)(lVar31 + (long)(int)uVar28 * 4) = uVar27 & 0xc0ffffff;
          *(uint *)(param_4 + 1) = uVar29;
          plVar14 = (long *)*plVar14;
          uVar28 = uVar29;
        } while (plVar14 != (long *)0x0);
      }
    }
    iVar9 = 1;
  }
  else {
    if (*(int *)(lVar10 + 0x1f0) != 3) {
      return 0;
    }
    local_270 = (undefined4 *)0x0;
    local_268 = 0x8000000000000000;
    uVar28 = *(uint *)(lVar10 + 0x78);
    if ((int)uVar28 < 1) {
      uVar12 = 0;
      plVar14 = *(long **)(lVar10 + 0x70);
    }
    else {
      if ((int)uVar28 < 0x40000000) {
        uVar29 = 0;
      }
      else {
        FUN_032bd0a8(uVar28);
        uVar29 = (local_268._4_4_ & 0x3fffffff) * 2;
        if (0x3ffffffe < uVar29) {
          uVar29 = 0x3fffffff;
        }
      }
      if ((int)uVar28 <= (int)uVar29) {
        uVar28 = uVar29;
      }
      local_270 = (undefined4 *)FUN_032bd1d4(uVar11,uVar28,8,0,0,(long)&local_268 + 4);
      uVar12 = local_268 & 0xffffffff;
      plVar14 = *(long **)(lVar10 + 0x70);
    }
    if (plVar14 != (long *)0x0) {
      uVar18 = -(uVar12 >> 0x1f) & 0xfffffff800000000 | uVar12 << 3;
      do {
        uVar28 = (int)uVar12 + 1;
        uVar12 = (ulong)uVar28;
        *(long **)((long)local_270 + uVar18) = plVar14;
        local_268 = CONCAT44(local_268._4_4_,uVar28);
        plVar14 = (long *)*plVar14;
        uVar18 = uVar18 + 8;
      } while (plVar14 != (long *)0x0);
    }
    iVar9 = (int)uVar12 + -1;
    if (iVar9 != 0 && 0 < (int)uVar12) {
      FUN_001c37c0(local_270,0,iVar9);
      uVar12 = local_268 & 0xffffffff;
    }
    if ((int)uVar12 < 1) {
      iVar9 = 0;
    }
    else {
      uVar18 = 0;
      iVar9 = 0;
      do {
        while (uVar25 = *(ulong *)(local_270 + uVar18 * 2), *(int *)(uVar25 + 0x58) != iVar9) {
LAB_001bfe4c:
          uVar18 = uVar18 + 1;
          if (uVar18 == uVar12) goto LAB_001c01b8;
        }
        if (*(int *)((*(ulong *)(uVar25 + 0x28) & 0xfffffffffffffffc) + 0x58) == iVar9) {
          if (*(int *)((*(ulong *)(uVar25 + 0x30) & 0xfffffffffffffffc) + 0x58) == iVar9) {
            if (*(int *)((*(ulong *)(uVar25 + 0x38) & 0xfffffffffffffffc) + 0x58) == iVar9) {
              uVar25 = *(ulong *)PTR_DAT_04372578;
              uVar32 = (ulong)*(uint *)(PTR_DAT_04372578 + 8);
            }
            else {
              uVar32 = 2;
            }
          }
          else {
            uVar32 = 1;
          }
        }
        else {
          uVar32 = 0;
        }
        if (uVar25 == 0) goto LAB_001bfe4c;
        lVar31 = *(long *)(uVar25 + (long)(int)uVar32 * 8 + 0x10);
        iVar30 = 0;
        if (param_2 != 0) {
          lVar21 = lVar31;
          uVar28 = *(uint *)(param_4 + 1);
          while( true ) {
            uVar2 = *(undefined4 *)(lVar21 + 0x34);
            uVar29 = uVar28 + 1;
            uVar27 = *puVar20;
            if ((int)uVar28 < (int)(uVar27 & 0x3fffffff)) {
              lVar21 = *param_4;
            }
            else {
              lVar21 = *param_4;
              if (0x3ffffffe < (int)uVar28) {
                FUN_032bd0a8(uVar29);
                uVar27 = *puVar20;
              }
              uVar27 = (uVar27 & 0x3fffffff) << 1;
              if (0x3ffffffe < uVar27) {
                uVar27 = 0x3fffffff;
              }
              uVar26 = uVar29;
              if ((int)uVar29 <= (int)uVar27) {
                uVar26 = uVar27;
              }
              lVar21 = FUN_032bd1d4(uVar11,uVar26,4,lVar21,uVar28,puVar20);
              *param_4 = lVar21;
              uVar28 = *(uint *)(param_4 + 1);
            }
            uVar32 = (ulong)(9U >> (ulong)(((uint)uVar32 & 0xf) << 1) & 3);
            iVar30 = iVar30 + 1;
            *(undefined4 *)(lVar21 + (long)(int)uVar28 * 4) = uVar2;
            *(uint *)(param_4 + 1) = uVar29;
            lVar21 = uVar25 + uVar32 * 8;
            while( true ) {
              uVar19 = *(ulong *)(lVar21 + 0x28) & 0xfffffffffffffffc;
              if (*(int *)(uVar19 + 0x58) != iVar9) break;
              uVar32 = (ulong)(9U >> (ulong)(((uint)*(ulong *)(lVar21 + 0x28) & 3) << 1) & 3);
              lVar21 = uVar19 + uVar32 * 8;
              uVar25 = uVar19;
            }
            if (*(long *)(uVar25 + uVar32 * 8 + 0x10) == lVar31) break;
            lVar21 = *(long *)(uVar25 + uVar32 * 8 + 0x10);
            uVar28 = uVar29;
          }
        }
        else {
          lVar21 = lVar31;
          uVar28 = *(uint *)(param_4 + 1);
          while( true ) {
            uVar27 = *(uint *)(lVar21 + 0x1c);
            uVar26 = *puVar20;
            uVar29 = uVar28 + 1;
            if ((int)uVar28 < (int)(uVar26 & 0x3fffffff)) {
              lVar21 = *param_4;
            }
            else {
              lVar21 = *param_4;
              if (0x3ffffffe < (int)uVar28) {
                FUN_032bd0a8(uVar29);
                uVar26 = *puVar20;
              }
              uVar26 = (uVar26 & 0x3fffffff) << 1;
              if (0x3ffffffe < uVar26) {
                uVar26 = 0x3fffffff;
              }
              uVar1 = uVar29;
              if ((int)uVar29 <= (int)uVar26) {
                uVar1 = uVar26;
              }
              lVar21 = FUN_032bd1d4(uVar11,uVar1,4,lVar21,uVar28,puVar20);
              *param_4 = lVar21;
              uVar28 = *(uint *)(param_4 + 1);
            }
            uVar32 = (ulong)(9U >> (ulong)(((uint)uVar32 & 0xf) << 1) & 3);
            *(uint *)(lVar21 + (long)(int)uVar28 * 4) = uVar27 & 0xc0ffffff;
            *(uint *)(param_4 + 1) = uVar29;
            lVar21 = uVar25 + uVar32 * 8;
            iVar30 = iVar30 + 1;
            while( true ) {
              uVar19 = *(ulong *)(lVar21 + 0x28) & 0xfffffffffffffffc;
              if (*(int *)(uVar19 + 0x58) != iVar9) break;
              uVar32 = (ulong)(9U >> (ulong)(((uint)*(ulong *)(lVar21 + 0x28) & 3) << 1) & 3);
              lVar21 = uVar19 + uVar32 * 8;
              uVar25 = uVar19;
            }
            if (*(long *)(uVar25 + uVar32 * 8 + 0x10) == lVar31) break;
            lVar21 = *(long *)(uVar25 + uVar32 * 8 + 0x10);
            uVar28 = uVar29;
          }
        }
        iVar34 = (int)param_3[1];
        uVar29 = *(uint *)((long)param_3 + 0xc);
        uVar28 = iVar34 + 1;
        if (iVar34 < (int)(uVar29 & 0x3fffffff)) {
          lVar31 = *param_3;
        }
        else {
          lVar31 = *param_3;
          if (0x3ffffffe < iVar34) {
            FUN_032bd0a8(uVar28);
            uVar29 = *puVar13;
          }
          uVar29 = (uVar29 & 0x3fffffff) << 1;
          if (0x3ffffffe < uVar29) {
            uVar29 = 0x3fffffff;
          }
          uVar27 = uVar28;
          if ((int)uVar28 <= (int)uVar29) {
            uVar27 = uVar29;
          }
          lVar31 = FUN_032bd1d4(uVar11,uVar27,4,lVar31,iVar34,puVar13);
          iVar34 = (int)param_3[1];
          *param_3 = lVar31;
        }
        *(int *)(lVar31 + (long)iVar34 * 4) = iVar30;
        iVar9 = iVar9 + 1;
        *(uint *)(param_3 + 1) = uVar28;
        uVar18 = uVar18 + 1;
      } while (uVar18 != uVar12);
    }
LAB_001c01b8:
    uVar12 = local_268;
    uVar28 = local_268._4_4_;
    local_268 = (ulong)local_268._4_4_ << 0x20;
    if ((-1 < (long)uVar12) && (local_270 != (undefined4 *)0x0)) {
      FUN_032cf244(uVar11,local_270,8,uVar28 & 0x3fffffff);
    }
    if (iVar9 == 0) {
      return 0;
    }
  }
  if (param_5 != '\0') {
    local_280 = 0;
    local_278._0_4_ = 0;
    local_278._4_4_ = 0x80000000;
    uVar28 = *(uint *)(lVar10 + 0x60);
    puVar33 = (undefined4 *)*param_4;
    if (0 < (int)uVar28) {
      if ((int)uVar28 < 0x40000000) {
        uVar29 = 0;
      }
      else {
        FUN_032bd0a8(uVar28);
        uVar29 = (local_278._4_4_ & 0x3fffffff) * 2;
        if (0x3ffffffe < uVar29) {
          uVar29 = 0x3fffffff;
        }
      }
      if ((int)uVar28 <= (int)uVar29) {
        uVar28 = uVar29;
      }
      local_280 = FUN_032bd1d4(uVar11,uVar28,8,0,0,(long)&local_278 + 4);
    }
    plVar14 = *(long **)(lVar10 + 0x58);
    if (plVar14 != (long *)0x0) {
      do {
        uVar29 = (uint)local_278;
        lVar10 = local_280;
        uVar28 = (uint)local_278 + 1;
        if ((int)(local_278._4_4_ & 0x3fffffff) <= (int)(uint)local_278) {
          if (0x3ffffffe < (int)(uint)local_278) {
            FUN_032bd0a8(uVar28);
          }
          uVar27 = (local_278._4_4_ & 0x3fffffff) << 1;
          if (0x3ffffffe < uVar27) {
            uVar27 = 0x3fffffff;
          }
          uVar26 = uVar28;
          if ((int)uVar28 <= (int)uVar27) {
            uVar26 = uVar27;
          }
          local_280 = FUN_032bd1d4(uVar11,uVar26,8,lVar10,uVar29,(long)&local_278 + 4);
        }
        *(long **)(local_280 + (long)(int)(uint)local_278 * 8) = plVar14;
        plVar14 = (long *)*plVar14;
        local_278._0_4_ = uVar28;
      } while (plVar14 != (long *)0x0);
    }
    iVar30 = (int)param_3[1];
    if (0 < iVar30) {
      lVar10 = 0;
      do {
        uVar28 = *(uint *)(*param_3 + lVar10 * 4);
        lVar31 = (long)(int)uVar28;
        if (2 < (int)uVar28) {
          lVar21 = -1;
          uVar12 = 0;
          uVar29 = 0xffffffff;
          do {
            iVar34 = (uint)uVar12 + 2;
            iVar3 = 0;
            if (uVar28 != 0) {
              iVar3 = iVar34 / (int)uVar28;
            }
            uVar18 = uVar12 + 1;
            uVar25 = 0;
            if ((ulong)uVar28 - 1 != uVar12) {
              uVar25 = uVar18 & 0xffffffff;
            }
            lVar22 = *(long *)(local_280 + (long)(int)puVar33[uVar12] * 8);
            lVar24 = *(long *)(local_280 + (long)(int)puVar33[uVar25] * 8);
            lVar23 = *(long *)(local_280 + (long)(int)puVar33[iVar34 - iVar3 * uVar28] * 8);
            iVar4 = *(int *)(lVar24 + 0x24) - *(int *)(lVar22 + 0x24);
            iVar3 = *(int *)(lVar24 + 0x28) - *(int *)(lVar22 + 0x28);
            iVar5 = *(int *)(lVar23 + 0x28) - *(int *)(lVar22 + 0x28);
            iVar6 = *(int *)(lVar23 + 0x24) - *(int *)(lVar22 + 0x24);
            iVar7 = *(int *)(lVar24 + 0x20) - *(int *)(lVar22 + 0x20);
            iVar8 = *(int *)(lVar23 + 0x20) - *(int *)(lVar22 + 0x20);
            iVar34 = iVar5 * iVar4 - iVar6 * iVar3;
            iVar3 = iVar8 * iVar3 - iVar5 * iVar7;
            iVar4 = iVar6 * iVar7 - iVar8 * iVar4;
            lVar22 = (long)iVar3 * (long)iVar3 + (long)iVar4 * (long)iVar4 +
                     (long)iVar34 * (long)iVar34;
            uVar27 = (uint)uVar12;
            if (lVar22 <= lVar21) {
              uVar27 = uVar29;
              lVar22 = lVar21;
            }
            lVar21 = lVar22;
            uVar12 = uVar18;
            uVar29 = uVar27;
          } while (uVar28 != uVar18);
          if (0 < (int)uVar27) {
            local_268 = -0x7fffffe000000000;
            local_270 = local_260;
            if (0x20 < (int)uVar27) {
              if ((int)uVar27 < 0x40000000) {
                uVar29 = 0x40;
              }
              else {
                FUN_032bd0a8(uVar27);
                uVar29 = (local_268._4_4_ & 0x3fffffff) << 1;
                if (0x3ffffffe < uVar29) {
                  uVar29 = 0x3fffffff;
                }
              }
              uVar26 = uVar27;
              if ((int)uVar27 <= (int)uVar29) {
                uVar26 = uVar29;
              }
              local_270 = (undefined4 *)
                          FUN_032bd1d4(uVar11,uVar26,4,local_260,0,(long)&local_268 + 4);
            }
            lVar21 = local_268;
            uVar29 = local_268._4_4_;
            uVar12 = (ulong)uVar27;
            *local_270 = *puVar33;
            if (uVar27 != 1) {
              uVar18 = (ulong)(uVar27 - 1) & 3;
              if (uVar12 - 2 < 3) {
                lVar23 = 1;
              }
              else {
                lVar22 = 0;
                do {
                  lVar23 = lVar22;
                  local_270[lVar23 + 1] = puVar33[lVar23 + 1];
                  local_270[lVar23 + 2] = puVar33[lVar23 + 2];
                  local_270[lVar23 + 3] = puVar33[lVar23 + 3];
                  local_270[lVar23 + 4] = puVar33[lVar23 + 4];
                  lVar22 = lVar23 + 4;
                } while (~uVar18 + uVar12 != lVar23 + 4);
                lVar23 = lVar23 + 5;
              }
              if ((uVar27 - 1 & 3) != 0) {
                lVar23 = lVar23 << 2;
                do {
                  uVar18 = uVar18 - 1;
                  *(undefined4 *)((long)local_270 + lVar23) =
                       *(undefined4 *)((long)puVar33 + lVar23);
                  lVar23 = lVar23 + 4;
                } while (uVar18 != 0);
              }
            }
            puVar17 = puVar33;
            if ((int)uVar27 < (int)uVar28) {
              uVar25 = (ulong)(int)uVar27;
              uVar32 = ~uVar25;
              uVar18 = (ulong)(uVar28 - uVar27) & 7;
              if ((uVar28 - uVar27 & 7) != 0) {
                lVar22 = -uVar25;
                puVar15 = puVar33;
                do {
                  uVar18 = uVar18 - 1;
                  puVar17 = puVar15 + 1;
                  *puVar15 = puVar15[uVar25];
                  lVar22 = lVar22 + -1;
                  puVar15 = puVar17;
                } while (uVar18 != 0);
                uVar25 = -lVar22;
              }
              if (uVar32 + lVar31 < 7) goto LAB_001bfc44;
              lVar22 = lVar31 - uVar25;
              puVar15 = puVar33 + uVar25 + 4;
              puVar16 = puVar17;
              do {
                *puVar16 = puVar15[-4];
                puVar16[1] = puVar15[-3];
                puVar16[2] = puVar15[-2];
                puVar16[3] = puVar15[-1];
                puVar16[4] = *puVar15;
                puVar16[5] = puVar15[1];
                puVar16[6] = puVar15[2];
                puVar17 = puVar16 + 8;
                lVar22 = lVar22 + -8;
                puVar16[7] = puVar15[3];
                puVar15 = puVar15 + 8;
                puVar16 = puVar17;
              } while (lVar22 != 0);
              if (uVar12 - 1 < 3) goto LAB_001bfc54;
LAB_001bfce0:
              lVar22 = 0;
              puVar15 = puVar17;
              do {
                puVar16 = puVar15;
                lVar23 = lVar22 + 4;
                puVar15 = puVar17 + lVar22;
                *puVar15 = local_270[lVar22];
                puVar15[1] = local_270[lVar22 + 1];
                puVar15[2] = local_270[lVar22 + 2];
                puVar15[3] = local_270[lVar22 + 3];
                lVar22 = lVar23;
                puVar15 = puVar15 + 4;
              } while (uVar12 - (uVar12 & 3) != lVar23);
              puVar17 = puVar16 + 4;
            }
            else {
LAB_001bfc44:
              if (2 < uVar12 - 1) goto LAB_001bfce0;
LAB_001bfc54:
              lVar23 = 0;
            }
            if ((uVar27 & 3) != 0) {
              uVar12 = uVar12 & 3;
              lVar23 = lVar23 << 2;
              do {
                uVar12 = uVar12 - 1;
                puVar15 = (undefined4 *)((long)local_270 + lVar23);
                lVar23 = lVar23 + 4;
                *puVar17 = *puVar15;
                puVar17 = puVar17 + 1;
              } while (uVar12 != 0);
            }
            local_268 = (ulong)local_268._4_4_ << 0x20;
            if ((-1 < lVar21) && (local_270 != (undefined4 *)0x0)) {
              FUN_032cf244(uVar11,local_270,4,uVar29 & 0x3fffffff);
            }
            iVar30 = (int)param_3[1];
          }
        }
        puVar33 = puVar33 + lVar31;
        lVar10 = lVar10 + 1;
      } while (lVar10 < iVar30);
    }
    uVar28 = local_278._4_4_;
    local_278 = (ulong)local_278._4_4_ << 0x20;
    if ((-1 < (int)uVar28) && (local_280 != 0)) {
      FUN_032cf244(uVar11,local_280,8,uVar28 & 0x3fffffff);
    }
  }
  return iVar9;
}


