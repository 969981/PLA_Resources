/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031d9074; name: FUN_031d9074
 */


void FUN_031d9074(ulong *param_1,int param_2)

{
  void *__s;
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  uint uVar4;
  void *pvVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  void *pvVar11;
  ulong uVar12;
  ulong uVar13;
  
  uVar12 = param_1[3];
  uVar4 = param_2 + 0x1f >> 5;
  *(int *)(param_1 + 3) = param_2;
  if ((int)(*(uint *)((long)param_1 + 0xc) & 0x3fffffff) < (int)uVar4) {
    uVar8 = (*(uint *)((long)param_1 + 0xc) & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar8) {
      uVar8 = 0x3fffffff;
    }
    uVar6 = uVar4;
    if ((int)uVar4 <= (int)uVar8) {
      uVar6 = uVar8;
    }
    uVar7 = FUN_032bd1d4(PTR_PTR_0434a080,uVar6,4,*param_1,(int)param_1[1]);
    *param_1 = uVar7;
  }
  if ((uint)param_1[1] != uVar4) {
    *(uint *)(param_1 + 1) = uVar4;
  }
  uVar8 = (uint)uVar12 & ((int)(uint)uVar12 >> 0x1f ^ 0xffffffffU);
  uVar4 = (int)param_1[3] + 0x1f;
  if ((int)uVar8 < (int)(uVar4 & 0xffffffe0)) {
    uVar6 = uVar8 >> 5;
    uVar4 = (int)uVar4 >> 5;
    if (uVar4 != uVar6) {
      uVar12 = *param_1;
      uVar7 = (ulong)(uVar6 + 1);
      __s = (void *)(uVar12 + uVar7 * 4);
      iVar1 = uVar4 + ~uVar6;
      uVar13 = (ulong)iVar1;
      *(uint *)(uVar12 + (ulong)uVar6 * 4) =
           *(uint *)(uVar12 + (ulong)uVar6 * 4) | -1 << (ulong)(uVar8 & 0x1f);
      pvVar11 = __s;
      if (((ulong)__s & 0xf) == 0) {
        uVar9 = uVar13;
      }
      else {
        uVar9 = 4 - (((ulong)__s & 0xf) >> 2);
        uVar10 = uVar13;
        if (uVar9 <= uVar13) {
          uVar10 = uVar9;
        }
        uVar9 = uVar13 - uVar10;
        if (0 < (long)uVar10) {
          pvVar3 = (void *)((long)__s + uVar10 * 4);
          pvVar2 = (void *)(uVar7 * 4 + uVar12 + 4);
          pvVar5 = pvVar3;
          if (pvVar3 <= pvVar2) {
            pvVar5 = pvVar2;
          }
          memset(__s,0xff,(long)pvVar5 + ~uVar12 + uVar7 * -4 + 4 & 0xfffffffffffffffc);
          do {
            pvVar11 = (void *)((long)pvVar11 + 4);
          } while (pvVar11 < pvVar3);
        }
      }
      if ((3 < uVar9) && (0 < (long)(uVar9 & 0xfffffffffffffffc))) {
        pvVar2 = (void *)((long)pvVar11 + (uVar9 & 0xfffffffffffffffc) * 4);
        pvVar3 = pvVar2;
        if (pvVar2 <= (void *)((long)pvVar11 + 0x10U)) {
          pvVar3 = (void *)((long)pvVar11 + 0x10U);
        }
        memset(pvVar11,0xff,(long)pvVar3 + ~(ulong)pvVar11 + 0x10 & 0xfffffffffffffff0);
        uVar10 = ~(ulong)pvVar11;
        uVar4 = ((uint)((long)pvVar3 + uVar10 >> 4) & 0xfffffff) + 1;
        uVar9 = (ulong)uVar4 & 7;
        if ((uVar4 & 7) != 0) {
          do {
            pvVar11 = (void *)((long)pvVar11 + 0x10);
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        if (0x6f < (long)pvVar3 + uVar10) {
          do {
            pvVar11 = (void *)((long)pvVar11 + 0x80);
          } while (pvVar11 < pvVar2);
        }
      }
      if (pvVar11 < (void *)((long)__s + (long)iVar1 * 4)) {
        memset(pvVar11,0xff,
               ((uVar12 + (uVar7 + uVar13) * 4) - (long)pvVar11) + 3 & 0xfffffffffffffffc);
      }
    }
  }
  return;
}


