/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001c02c4; name: FUN_001c02c4
 */


void FUN_001c02c4(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  uint uVar21;
  uint *puVar22;
  uint *puVar23;
  long lVar24;
  long *plVar25;
  undefined4 *puVar26;
  undefined1 auStack_280 [16];
  long local_270;
  undefined8 local_268;
  
  if (*(char *)(param_1 + 0x1fe) == '\0') {
    FUN_0331fefc(auStack_280,&local_270,0x200);
    uVar8 = FUN_0332448c(auStack_280,"No index available (");
    uVar8 = FUN_033245a4(uVar8,*(undefined4 *)(param_1 + 0x1f8));
    FUN_0332448c(uVar8,") hkgpConvexHull::buildIndices need to be called before this operation.");
    iVar7 = FUN_03320b30(0x79f9d886,&local_270,
                         "../..\\Common/Internal/GeometryProcessing/ConvexHull/hkgpConvexHullInternals.h"
                         ,0x189);
    if (iVar7 != 0) {
      CallSupervisor(0x26);
    }
    FUN_0331ff7c(auStack_280);
  }
  uVar3 = *(uint *)(param_1 + 0x60);
  local_270 = 0;
  local_268 = 0x8000000000000000;
  uVar8 = *(undefined8 *)PTR_PTR_04372408;
  if ((int)uVar3 < 1) {
    uVar11 = 0;
    bVar5 = SBORROW4(0,uVar3);
    iVar7 = -uVar3;
    bVar6 = uVar3 == 0;
    if (0 < (int)uVar3) goto LAB_001c03ac;
  }
  else {
    local_270 = FUN_031ef340(uVar8,uVar3,0,0,(long)&local_268 + 4);
    uVar11 = local_268 & 0xffffffff;
    bVar5 = SBORROW4((uint)local_268,uVar3);
    iVar7 = (uint)local_268 - uVar3;
    bVar6 = (uint)local_268 == uVar3;
    if ((int)(uint)local_268 < (int)uVar3) {
LAB_001c03ac:
      uVar11 = -(uVar11 >> 0x1f) & 0xfffffff000000000 | uVar11 << 4;
      local_268 = CONCAT44(local_268._4_4_,uVar3);
      puVar13 = (undefined8 *)(local_270 + uVar11);
      uVar11 = ((long)(int)uVar3 * 0x10 - uVar11) - 0x10;
      uVar21 = ((uint)(uVar11 >> 4) & 0xfffffff) + 1;
      if ((uVar21 & 3) != 0) {
        lVar19 = -((ulong)uVar21 & 3);
        puVar12 = puVar13;
        do {
          puVar13 = puVar12 + 2;
          *puVar12 = 0;
          puVar12[1] = 0x8000000000000000;
          bVar6 = lVar19 != -1;
          lVar19 = lVar19 + 1;
          puVar12 = puVar13;
        } while (bVar6);
      }
      if (0x2f < uVar11) {
        do {
          *puVar13 = 0;
          puVar13[1] = 0x8000000000000000;
          puVar13[2] = 0;
          puVar13[3] = 0x8000000000000000;
          puVar13[4] = 0;
          puVar13[5] = 0x8000000000000000;
          puVar13[6] = 0;
          puVar13[7] = 0x8000000000000000;
          puVar13 = puVar13 + 8;
        } while (puVar13 != (undefined8 *)(local_270 + (long)(int)uVar3 * 0x10));
      }
      goto LAB_001c049c;
    }
  }
  if (!bVar6 && iVar7 < 0 == bVar5) {
    uVar11 = -(uVar11 >> 0x1f) & 0xfffffff000000000 | uVar11 << 4;
    lVar24 = local_270 + uVar11;
    lVar19 = (long)(int)uVar3 * 0x10 - uVar11;
    local_268 = CONCAT44(local_268._4_4_,uVar3);
    puVar26 = (undefined4 *)(lVar24 + -8);
    uVar21 = *(uint *)(lVar24 + -4);
    *puVar26 = 0;
    while( true ) {
      if ((-1 < (int)uVar21) && (*(long *)(puVar26 + -2) != 0)) {
        FUN_032cf244(uVar8,*(long *)(puVar26 + -2),4,uVar21 & 0x3fffffff);
      }
      *(undefined8 *)(puVar26 + -2) = 0;
      lVar19 = lVar19 + 0x10;
      puVar26[1] = 0x80000000;
      if (lVar19 == 0) break;
      uVar21 = puVar26[-3];
      puVar26[-4] = 0;
      puVar26 = puVar26 + -4;
    }
  }
LAB_001c049c:
  for (plVar25 = *(long **)(param_1 + 0x70); plVar25 != (long *)0x0; plVar25 = (long *)*plVar25) {
    plVar1 = (long *)(local_270 + (long)*(int *)(plVar25[2] + 0x34) * 0x10);
    iVar7 = *(int *)(plVar25 + 0xb);
    puVar23 = (uint *)(plVar1 + 1);
    uVar21 = *puVar23;
    if (0 < (int)uVar21) {
      uVar11 = 0;
      do {
        if (*(int *)(*plVar1 + uVar11 * 4) == iVar7) {
          if (-1 < (int)uVar11) goto LAB_001c057c;
          break;
        }
        uVar11 = uVar11 + 1;
      } while (uVar21 != uVar11);
    }
    puVar22 = (uint *)((long)plVar1 + 0xc);
    uVar9 = *puVar22;
    uVar10 = uVar21 + 1;
    if ((int)uVar21 < (int)(uVar9 & 0x3fffffff)) {
      lVar19 = *plVar1;
    }
    else {
      lVar19 = *plVar1;
      if (0x3ffffffe < (int)uVar21) {
        FUN_032bd0a8(uVar10);
        uVar9 = *puVar22;
      }
      uVar9 = (uVar9 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar9) {
        uVar9 = 0x3fffffff;
      }
      uVar2 = uVar10;
      if ((int)uVar10 <= (int)uVar9) {
        uVar2 = uVar9;
      }
      lVar19 = FUN_032bd1d4(uVar8,uVar2,4,lVar19,uVar21,puVar22);
      *plVar1 = lVar19;
      uVar21 = *puVar23;
    }
    *(int *)(lVar19 + (long)(int)uVar21 * 4) = iVar7;
    *puVar23 = uVar10;
LAB_001c057c:
    plVar1 = (long *)(local_270 + (long)*(int *)(plVar25[3] + 0x34) * 0x10);
    puVar23 = (uint *)(plVar1 + 1);
    uVar21 = *puVar23;
    if (0 < (int)uVar21) {
      uVar11 = 0;
      do {
        if (*(int *)(*plVar1 + uVar11 * 4) == iVar7) {
          if (-1 < (int)uVar11) goto LAB_001c062c;
          break;
        }
        uVar11 = uVar11 + 1;
      } while (uVar21 != uVar11);
    }
    puVar22 = (uint *)((long)plVar1 + 0xc);
    uVar9 = *puVar22;
    uVar10 = uVar21 + 1;
    if ((int)uVar21 < (int)(uVar9 & 0x3fffffff)) {
      lVar19 = *plVar1;
    }
    else {
      lVar19 = *plVar1;
      if (0x3ffffffe < (int)uVar21) {
        FUN_032bd0a8(uVar10);
        uVar9 = *puVar22;
      }
      uVar9 = (uVar9 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar9) {
        uVar9 = 0x3fffffff;
      }
      uVar2 = uVar10;
      if ((int)uVar10 <= (int)uVar9) {
        uVar2 = uVar9;
      }
      lVar19 = FUN_032bd1d4(uVar8,uVar2,4,lVar19,(ulong)uVar21,puVar22);
      *plVar1 = lVar19;
      uVar21 = *puVar23;
    }
    *(int *)(lVar19 + (long)(int)uVar21 * 4) = iVar7;
    *puVar23 = uVar10;
LAB_001c062c:
    plVar1 = (long *)(local_270 + (long)*(int *)(plVar25[4] + 0x34) * 0x10);
    puVar23 = (uint *)(plVar1 + 1);
    uVar21 = *puVar23;
    if (0 < (int)uVar21) {
      uVar11 = 0;
      do {
        if (*(int *)(*plVar1 + uVar11 * 4) == iVar7) {
          if (-1 < (int)uVar11) goto LAB_001c04bc;
          break;
        }
        uVar11 = uVar11 + 1;
      } while (uVar21 != uVar11);
    }
    puVar22 = (uint *)((long)plVar1 + 0xc);
    uVar9 = *puVar22;
    uVar10 = uVar21 + 1;
    if ((int)uVar21 < (int)(uVar9 & 0x3fffffff)) {
      lVar19 = *plVar1;
    }
    else {
      lVar19 = *plVar1;
      if (0x3ffffffe < (int)uVar21) {
        FUN_032bd0a8(uVar10);
        uVar9 = *puVar22;
      }
      uVar9 = (uVar9 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar9) {
        uVar9 = 0x3fffffff;
      }
      uVar2 = uVar10;
      if ((int)uVar10 <= (int)uVar9) {
        uVar2 = uVar9;
      }
      lVar19 = FUN_032bd1d4(uVar8,uVar2,4,lVar19,uVar21,puVar22);
      *plVar1 = lVar19;
      uVar21 = *puVar23;
    }
    *(int *)(lVar19 + (long)(int)uVar21 * 4) = iVar7;
    *puVar23 = uVar10;
LAB_001c04bc:
  }
  *(undefined4 *)(param_3 + 1) = 0;
  puVar23 = (uint *)((long)param_2 + 0xc);
  uVar10 = *puVar23;
  uVar21 = uVar3 + 1;
  if ((int)(uVar10 & 0x3fffffff) <= (int)uVar3) {
    lVar24 = *param_2;
    lVar19 = param_2[1];
    if (0x3ffffffe < (int)uVar3) {
      FUN_032bd0a8(uVar21);
      uVar10 = *puVar23;
    }
    uVar10 = (uVar10 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar10) {
      uVar10 = 0x3fffffff;
    }
    uVar9 = uVar21;
    if ((int)uVar21 <= (int)uVar10) {
      uVar9 = uVar10;
    }
    lVar19 = FUN_032bd1d4(uVar8,uVar9,4,lVar24,(int)lVar19,puVar23);
    *param_2 = lVar19;
  }
  if (((int)param_2[1] <= (int)uVar3) || ((int)uVar21 < (int)param_2[1])) {
    *(uint *)(param_2 + 1) = uVar21;
  }
  *(undefined4 *)*param_2 = 0;
  if (0 < (int)uVar3) {
    uVar11 = 0;
    do {
      puVar13 = (undefined8 *)(local_270 + uVar11 * 0x10);
      puVar26 = (undefined4 *)*puVar13;
      iVar4 = *(int *)(puVar13 + 1);
      iVar7 = (int)param_3[1];
      uVar10 = *(uint *)((long)param_3 + 0xc);
      uVar21 = iVar7 + iVar4;
      if ((int)(uVar10 & 0x3fffffff) < (int)uVar21) {
        lVar19 = *param_3;
        if (0x3fffffff < (int)uVar21) {
          FUN_032bd0a8(uVar21);
          uVar10 = *(uint *)((long)param_3 + 0xc);
        }
        uVar10 = (uVar10 & 0x3fffffff) << 1;
        if (0x3ffffffe < uVar10) {
          uVar10 = 0x3fffffff;
        }
        uVar9 = uVar21;
        if ((int)uVar21 <= (int)uVar10) {
          uVar9 = uVar10;
        }
        lVar19 = FUN_032bd1d4(uVar8,uVar9,4,lVar19,iVar7,(uint *)((long)param_3 + 0xc));
        *param_3 = lVar19;
      }
      else {
        lVar19 = *param_3;
      }
      if (iVar4 != 0) {
        uVar18 = (long)iVar4 * 4 - 4;
        puVar15 = (undefined4 *)(lVar19 + (long)iVar7 * 4);
        uVar10 = ((uint)(uVar18 >> 2) & 0x3fffffff) + 1;
        puVar17 = puVar26;
        if ((uVar10 & 7) != 0) {
          lVar19 = -((ulong)uVar10 & 7);
          puVar14 = puVar15;
          puVar16 = puVar26;
          do {
            puVar17 = puVar16 + 1;
            bVar6 = lVar19 != -1;
            lVar19 = lVar19 + 1;
            puVar15 = puVar14 + 1;
            *puVar14 = *puVar16;
            puVar14 = puVar15;
            puVar16 = puVar17;
          } while (bVar6);
        }
        if (0x1b < uVar18) {
          do {
            *puVar15 = *puVar17;
            puVar15[1] = puVar17[1];
            puVar15[2] = puVar17[2];
            puVar15[3] = puVar17[3];
            puVar15[4] = puVar17[4];
            puVar15[5] = puVar17[5];
            puVar15[6] = puVar17[6];
            puVar14 = puVar17 + 7;
            puVar17 = puVar17 + 8;
            puVar15[7] = *puVar14;
            puVar15 = puVar15 + 8;
          } while (puVar17 != puVar26 + iVar4);
        }
      }
      *(uint *)(param_3 + 1) = uVar21;
      uVar11 = uVar11 + 1;
      *(uint *)(*param_2 + uVar11 * 4) = uVar21;
    } while (uVar11 != uVar3);
  }
  lVar19 = local_270;
  if ((uint)local_268 != 0) {
    lVar20 = (long)(int)(uint)local_268 * 0x10;
    lVar24 = local_270 + lVar20;
    uVar3 = *(uint *)(lVar24 + -4);
    *(undefined4 *)(lVar24 + -8) = 0;
    if (-1 < (int)uVar3) goto LAB_001c0968;
LAB_001c0948:
    lVar20 = lVar20 + -0x10;
    *(undefined8 *)(lVar24 + -0x10) = 0;
    *(undefined4 *)(lVar24 + -4) = 0x80000000;
    if (lVar20 != 0) {
      while( true ) {
        lVar24 = lVar19 + lVar20;
        uVar3 = *(uint *)(lVar24 + -4);
        *(undefined4 *)(lVar24 + -8) = 0;
        if ((int)uVar3 < 0) break;
LAB_001c0968:
        if (*(long *)(lVar24 + -0x10) == 0) break;
        FUN_032cf244(uVar8,*(long *)(lVar24 + -0x10),4,uVar3 & 0x3fffffff);
        lVar20 = lVar20 + -0x10;
        *(undefined8 *)(lVar24 + -0x10) = 0;
        *(undefined4 *)(lVar24 + -4) = 0x80000000;
        if (lVar20 == 0) goto LAB_001c0990;
      }
      goto LAB_001c0948;
    }
  }
LAB_001c0990:
  uVar11 = local_268;
  uVar3 = local_268._4_4_;
  local_268 = (ulong)local_268._4_4_ << 0x20;
  if ((-1 < (long)uVar11) && (local_270 != 0)) {
    FUN_032cf244(uVar8,local_270,0x10,uVar3 & 0x3fffffff);
  }
  return;
}


