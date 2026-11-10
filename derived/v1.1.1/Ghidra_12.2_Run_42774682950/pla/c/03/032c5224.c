/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032c5224; name: FUN_032c5224
 */


void FUN_032c5224(long *param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  void *pvVar7;
  uint uVar8;
  uint *puVar9;
  void *__s;
  long lVar10;
  
  puVar4 = PTR_PTR_0434a090;
  lVar10 = *param_1;
  puVar9 = (uint *)((long)param_2 + 0xc);
  uVar8 = *puVar9;
  iVar5 = (int)param_2[1];
  uVar1 = iVar5 + 1;
  if (iVar5 < (int)(uVar8 & 0x3fffffff)) {
    lVar6 = *param_2;
  }
  else {
    lVar6 = *param_2;
    if (0x3ffffffe < iVar5) {
      FUN_032bd0a8(uVar1);
      uVar8 = *puVar9;
    }
    uVar8 = (uVar8 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar8) {
      uVar8 = 0x3fffffff;
    }
    uVar3 = uVar1;
    if ((int)uVar1 <= (int)uVar8) {
      uVar3 = uVar8;
    }
    lVar6 = FUN_032bd1d4(puVar4,uVar3,8,lVar6,iVar5,puVar9);
    iVar5 = (int)param_2[1];
    *param_2 = lVar6;
  }
  *(long *)(lVar6 + (long)iVar5 * 8) = lVar10;
  *(uint *)(param_2 + 1) = uVar1;
  __s = (void *)*param_1;
  pvVar7 = memchr(__s,0x2f,(long)(int)param_1[1] - 1);
  iVar5 = (int)pvVar7 - (int)__s;
  if (pvVar7 == (void *)0x0) {
    iVar5 = -1;
  }
  if (-1 < iVar5) {
    while( true ) {
      *(undefined1 *)((long)__s + (long)iVar5) = 0;
      uVar2 = (long)iVar5 + 1;
      lVar10 = *param_1;
      iVar5 = (int)param_2[1];
      uVar8 = *(uint *)((long)param_2 + 0xc);
      uVar1 = iVar5 + 1;
      if (iVar5 < (int)(uVar8 & 0x3fffffff)) {
        lVar6 = *param_2;
      }
      else {
        lVar6 = *param_2;
        if (0x3ffffffe < iVar5) {
          FUN_032bd0a8(uVar1);
          uVar8 = *puVar9;
        }
        uVar8 = (uVar8 & 0x3fffffff) << 1;
        if (0x3ffffffe < uVar8) {
          uVar8 = 0x3fffffff;
        }
        uVar3 = uVar1;
        if ((int)uVar1 <= (int)uVar8) {
          uVar3 = uVar8;
        }
        lVar6 = FUN_032bd1d4(puVar4,uVar3,8,lVar6,iVar5,puVar9);
        iVar5 = (int)param_2[1];
        *param_2 = lVar6;
      }
      *(ulong *)(lVar6 + (long)iVar5 * 8) = lVar10 + uVar2;
      *(uint *)(param_2 + 1) = uVar1;
      iVar5 = FUN_032c50d4(param_1,0x2f,uVar2 & 0xffffffff,0x7fffffff);
      if (iVar5 < 0) break;
      __s = (void *)*param_1;
    }
  }
  return;
}


