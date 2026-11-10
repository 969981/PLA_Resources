/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00414060; name: FUN_00414060
 */


ulong FUN_00414060(long *param_1,byte *param_2)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  
  if ((param_2 != (byte *)0x0) && (bVar2 = *param_2, bVar2 != 0)) {
    uVar11 = 0;
    if (bVar2 == 0x2d) {
      param_2 = param_2 + 1;
    }
    uVar1 = (uint)(bVar2 == 0x2d);
    uVar8 = 0x1f;
    do {
      iVar4 = FUN_00405430(param_2[uVar11],4);
      if (iVar4 == 0) {
        uVar10 = (uint)uVar11;
        if (uVar10 - 1 < 0x1fffffff) {
          uVar6 = uVar1 + uVar11;
          if (param_1 == (long *)0x0) goto LAB_004140ec;
          lVar7 = *param_1;
          if (lVar7 == 0) {
            lVar7 = FUN_0040c260();
            if (lVar7 == 0) goto LAB_004140e8;
          }
          else {
            FUN_0040c6b0(lVar7,0);
          }
          if ((0x1ffffff8 < uVar10) ||
             ((*(int *)(lVar7 + 0xc) < (int)(uVar8 >> 5) &&
              (lVar5 = FUN_0040c320(lVar7), lVar5 == 0)))) goto LAB_004140d8;
          iVar3 = (int)(uVar11 / 9) * 9 - uVar10;
          iVar9 = 0;
          iVar4 = 0;
          if (iVar3 != 0) {
            iVar4 = iVar3 + 9;
          }
          goto LAB_004141b8;
        }
        break;
      }
      uVar11 = uVar11 + 1;
      uVar8 = uVar8 + 4;
    } while (uVar11 != 0x20000000);
    lVar7 = 0;
LAB_004140d8:
    if (*param_1 == 0) {
      FUN_0040c1e0(lVar7);
    }
  }
LAB_004140e8:
  uVar6 = 0;
  goto LAB_004140ec;
  while (uVar8 = (int)uVar11 - 1, uVar11 = (ulong)uVar8, param_2 = param_2 + 1, 0 < (int)uVar8) {
LAB_004141b8:
    iVar4 = iVar4 + 1;
    iVar9 = (uint)*param_2 + iVar9 * 10 + -0x30;
    if (iVar4 == 9) {
      iVar4 = FUN_0040bf40(lVar7,1000000000);
      if ((iVar4 == 0) || (iVar4 = FUN_0040bd20(lVar7,iVar9), iVar4 == 0)) goto LAB_004140d8;
      iVar9 = 0;
      iVar4 = 0;
    }
  }
  FUN_0040c8f0(lVar7);
  *param_1 = lVar7;
  if (*(int *)(lVar7 + 8) != 0) {
    *(uint *)(lVar7 + 0x10) = uVar1;
  }
LAB_004140ec:
  return uVar6 & 0xffffffff;
}


