/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00587b00; name: FUN_00587b00
 */


byte * FUN_00587b00(byte *param_1,int param_2,int param_3,int param_4,int *param_5)

{
  byte bVar1;
  byte bVar2;
  void *pvVar3;
  int iVar4;
  byte *pbVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  
  if (param_1 == (byte *)0x0) {
    return (byte *)0x0;
  }
  bVar2 = *param_1;
  if (bVar2 == 0x2d) {
LAB_00587b48:
    param_1 = param_1 + 1;
    bVar1 = *param_1;
    iVar7 = -param_4;
    if (bVar2 != 0x2d) {
      iVar7 = param_4;
    }
  }
  else {
    iVar7 = param_4;
    bVar1 = bVar2;
    if (bVar2 == 0x2b) goto LAB_00587b48;
  }
  uVar8 = (uint)bVar1;
  pvVar3 = memchr("0123456789",uVar8,0xb);
  if (pvVar3 == (void *)0x0) {
    return (byte *)0x0;
  }
  iVar4 = (int)pvVar3 + -0x3a344b0;
  pbVar5 = param_1;
  if (iVar4 < 10) {
    iVar10 = 0;
    do {
      pbVar5 = pbVar5 + 1;
      if (0xccccccc < iVar10) {
        return (byte *)0x0;
      }
      if (0x7fffffff - iVar4 < iVar10 * 10) {
        return (byte *)0x0;
      }
      uVar8 = (uint)*pbVar5;
      iVar10 = iVar4 + iVar10 * 10;
      pvVar3 = memchr("0123456789",uVar8,0xb);
    } while ((pvVar3 != (void *)0x0) && (iVar4 = (int)pvVar3 + -0x3a344b0, iVar4 < 10));
  }
  else {
    iVar10 = 0;
  }
  if (param_3 < iVar10) {
    return (byte *)0x0;
  }
  if (iVar10 < param_2) {
    return (byte *)0x0;
  }
  if (pbVar5 == param_1) {
    return (byte *)0x0;
  }
  if (uVar8 == 0x3a) {
    pvVar3 = memchr("0123456789",(uint)pbVar5[1],0xb);
    if (pvVar3 == (void *)0x0) {
      return (byte *)0x0;
    }
    uVar8 = 0;
    lVar6 = 2;
    do {
      iVar4 = (int)pvVar3 + -0x3a344b0;
      if (9 < iVar4) break;
      if (0xccccccc < (int)uVar8) {
        return (byte *)0x0;
      }
      if (0x7fffffff - iVar4 < (int)(uVar8 * 10)) {
        return (byte *)0x0;
      }
      uVar8 = iVar4 + uVar8 * 10;
      pvVar3 = memchr("0123456789",(uint)pbVar5[lVar6],0xb);
      lVar6 = lVar6 + 1;
    } while (pvVar3 != (void *)0x0);
    if (0x3b < uVar8) {
      return (byte *)0x0;
    }
    if (lVar6 + -1 == 1) {
      return (byte *)0x0;
    }
    pbVar5 = pbVar5 + lVar6 + -1;
    if (*pbVar5 == 0x3a) {
      pvVar3 = memchr("0123456789",(uint)pbVar5[1],0xb);
      if (pvVar3 == (void *)0x0) {
        return (byte *)0x0;
      }
      uVar9 = 0;
      lVar6 = 2;
      do {
        iVar4 = (int)pvVar3 + -0x3a344b0;
        if (9 < iVar4) break;
        if ((0xccccccc < (int)uVar9) || (0x7fffffff - iVar4 < (int)(uVar9 * 10))) {
          return (byte *)0x0;
        }
        uVar9 = iVar4 + uVar9 * 10;
        pvVar3 = memchr("0123456789",(uint)pbVar5[lVar6],0xb);
        lVar6 = lVar6 + 1;
      } while (pvVar3 != (void *)0x0);
      if (0x3b < uVar9) {
        return (byte *)0x0;
      }
      if (lVar6 + -1 == 1) {
        return (byte *)0x0;
      }
      pbVar5 = pbVar5 + lVar6 + -1;
      goto LAB_00587d6c;
    }
  }
  else {
    uVar8 = 0;
  }
  uVar9 = 0;
LAB_00587d6c:
  *param_5 = (uVar9 + (uVar8 + iVar10 * 0x3c) * 0x3c) * iVar7;
  return pbVar5;
}


