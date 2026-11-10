/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0315fddc; name: FUN_0315fddc
 */


undefined1  [16] FUN_0315fddc(long param_1,uint param_2,int param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  float *pfVar7;
  ulong uVar8;
  long lVar9;
  float fVar10;
  undefined1 auVar11 [16];
  
  lVar4 = (long)*(int *)(*(long *)(param_1 + 0x18) + (long)(int)param_2 * 0x18 + 8);
  lVar9 = 8;
  uVar2 = 0;
  do {
    uVar8 = uVar2;
    if (lVar4 <= (long)uVar8) goto LAB_0315fe04;
    lVar5 = *(long *)(*(long *)(param_1 + 0x18) + (long)(int)param_2 * 0x18);
    pfVar7 = (float *)(lVar5 + lVar9);
    lVar9 = lVar9 + 0x18;
    uVar2 = uVar8 + 1;
  } while (*pfVar7 < 0.0);
  if ((int)(uVar8 + 1) == 0) {
LAB_0315fe04:
    uVar1 = 0xffffffff;
    uVar2 = 0xffffffff;
    uVar3 = uVar1;
  }
  else {
    uVar3 = 0xffffffff;
    do {
      iVar6 = (int)uVar8;
      lVar9 = (long)iVar6;
      if (*(int *)(lVar5 + (long)iVar6 * 0x18 + 0xc) == param_3) {
        uVar2 = (ulong)*(uint *)(lVar5 + lVar9 * 0x18 + 0x10);
        uVar1 = (ulong)param_2;
        uVar3 = uVar8 & 0xffffffff;
        break;
      }
      iVar6 = -iVar6;
      pfVar7 = (float *)(lVar5 + 0x20 + lVar9 * 0x18);
      do {
        lVar9 = lVar9 + 1;
        if (lVar4 <= lVar9) {
          uVar1 = 0xffffffff;
          uVar2 = uVar1;
          goto LAB_0315fe0c;
        }
        fVar10 = *pfVar7;
        iVar6 = iVar6 + -1;
        pfVar7 = pfVar7 + 6;
      } while (fVar10 < 0.0);
      uVar8 = (ulong)(uint)-iVar6;
      uVar1 = 0xffffffff;
      uVar2 = 0xffffffff;
    } while (iVar6 != 1);
  }
LAB_0315fe0c:
  auVar11._8_8_ = uVar2;
  auVar11._0_8_ = uVar1 | uVar3 << 0x20;
  return auVar11;
}


