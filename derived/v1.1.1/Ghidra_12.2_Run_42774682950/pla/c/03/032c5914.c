/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032c5914; name: FUN_032c5914
 */


long * FUN_032c5914(long *param_1,long param_2,long *param_3,long param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  int iVar12;
  int iVar13;
  undefined1 *local_b0;
  undefined8 local_a8;
  undefined1 local_a0 [64];
  
  puVar4 = PTR_PTR_0434a090;
  local_b0 = local_a0;
  local_a8 = -0x7ffffff000000000;
  uVar9 = param_4 - (long)param_3;
  uVar11 = uVar9 >> 3;
  iVar10 = (int)uVar11;
  if (iVar10 < 0x11) {
    if (iVar10 == 0) goto LAB_032c5980;
  }
  else {
    if (iVar10 < 0x40000000) {
      uVar8 = 0x20;
    }
    else {
      FUN_032bd0a8(uVar11 & 0xffffffff);
      uVar3 = (local_a8._4_4_ & 0x3fffffff) * 2;
      uVar8 = (ulong)uVar3;
      if (0x3ffffffe < uVar3) {
        uVar8 = 0x3fffffff;
      }
    }
    uVar11 = uVar11 & 0xffffffff;
    if (iVar10 <= (int)uVar8) {
      uVar11 = uVar8;
    }
    local_b0 = (undefined1 *)FUN_032bd1d4(puVar4,uVar11,4,local_b0,0,(long)&local_a8 + 4);
    if ((int)local_a8 == iVar10) goto LAB_032c5980;
  }
  local_a8 = CONCAT44(local_a8._4_4_,iVar10);
LAB_032c5980:
  if (param_2 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = FUN_032c4900(param_2);
  }
  iVar12 = (int)param_1[1] + -1;
  iVar13 = iVar12;
  if (0 < iVar10) {
    uVar11 = 0;
    if (*param_3 != 0) goto LAB_032c59dc;
    do {
      *(undefined4 *)(local_b0 + uVar11 * 4) = 0;
      while( true ) {
        uVar11 = uVar11 + 1;
        if ((uVar9 >> 3 & 0xffffffff) == uVar11) goto LAB_032c59fc;
        if (param_3[uVar11] == 0) break;
LAB_032c59dc:
        uVar6 = FUN_032c4900();
        *(undefined4 *)(local_b0 + uVar11 * 4) = uVar6;
        iVar13 = *(int *)(local_b0 + uVar11 * 4) + iVar13;
      }
    } while( true );
  }
LAB_032c59fc:
  FUN_032c4fd4(param_1,iVar13 + iVar5 * (iVar10 + -1));
  if (0 < iVar10) {
    iVar13 = (int)param_1[1] + -1;
    if (param_2 == 0) {
      lVar7 = *param_3;
      uVar11 = 0;
      iVar10 = iVar12;
      if (lVar7 != 0) goto LAB_032c5b28;
      do {
        do {
          uVar11 = uVar11 + 1;
          if ((uVar9 >> 3 & 0xffffffff) == uVar11) goto LAB_032c5b58;
          lVar7 = param_3[uVar11];
          iVar10 = iVar12;
        } while (lVar7 == 0);
LAB_032c5b28:
        iVar12 = *(int *)(local_b0 + uVar11 * 4) + iVar10;
        iVar5 = iVar12;
        if (iVar13 <= iVar12) {
          iVar5 = iVar13;
        }
        FUN_032c4a00(*param_1 + (long)iVar10,lVar7,iVar5 - iVar10);
      } while (iVar12 < iVar13);
    }
    else {
      uVar11 = 0;
      lVar7 = *param_3;
      if (lVar7 != 0) goto LAB_032c5a4c;
      do {
        do {
          if ((long)uVar11 < (long)(iVar10 + -1)) {
            iVar1 = iVar12 + iVar5;
            iVar2 = iVar1;
            if (iVar13 <= iVar1) {
              iVar2 = iVar13;
            }
            FUN_032c4a00(*param_1 + (long)iVar12,param_2,iVar2 - iVar12);
            iVar12 = iVar1;
            if (iVar13 <= iVar1) goto LAB_032c5b58;
          }
          uVar11 = uVar11 + 1;
          if ((uVar9 >> 3 & 0xffffffff) == uVar11) goto LAB_032c5b58;
          lVar7 = param_3[uVar11];
        } while (lVar7 == 0);
LAB_032c5a4c:
        iVar1 = *(int *)(local_b0 + uVar11 * 4) + iVar12;
        iVar2 = iVar1;
        if (iVar13 <= iVar1) {
          iVar2 = iVar13;
        }
        FUN_032c4a00(*param_1 + (long)iVar12,lVar7,iVar2 - iVar12);
        iVar12 = iVar1;
      } while (iVar1 < iVar13);
    }
  }
LAB_032c5b58:
  lVar7 = local_a8;
  uVar3 = local_a8._4_4_;
  local_a8 = (ulong)local_a8._4_4_ << 0x20;
  if ((-1 < lVar7) && (local_b0 != (undefined1 *)0x0)) {
    FUN_032cf244(puVar4,local_b0,4,uVar3 & 0x3fffffff);
  }
  return param_1;
}


