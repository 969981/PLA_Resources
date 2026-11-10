/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005e4110; name: FUN_005e4110
 */


ulong * FUN_005e4110(ulong *param_1,ulong *param_2,int *param_3)

{
  ulong *puVar1;
  int iVar2;
  ulong *puVar3;
  ulong *puVar4;
  void *__ptr;
  ulong uVar5;
  long lVar6;
  ulong *puVar7;
  ulong *__s;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  uVar11 = *param_1;
  if ((uVar11 & 1) == 0) {
    __s = param_1 + 1;
    uVar5 = 10;
    puVar4 = __s;
    if (uVar11 >> 1 != 10) {
LAB_005e414c:
      uVar9 = 0;
      __s = puVar4;
      puVar8 = (ulong *)0x0;
      goto LAB_005e4188;
    }
  }
  else {
    __s = (ulong *)param_1[1];
    uVar5 = param_1[2];
    puVar4 = __s;
    if (uVar11 >> 1 != uVar5) goto LAB_005e414c;
  }
  uVar9 = uVar5 << 1;
  puVar4 = (ulong *)FUN_002e2e80(PTR_FUN_04373078,uVar5 << 5);
  puVar8 = puVar4;
LAB_005e4188:
  uVar10 = uVar11 >> 1;
  puVar4 = puVar4 + uVar10 * 2;
  uVar5 = *param_2;
  *param_2 = 0;
  iVar2 = *param_3;
  *puVar4 = uVar5;
  puVar4[1] = (long)iVar2;
  if (puVar8 == (ulong *)0x0) {
    uVar11 = *param_1;
  }
  else {
    if (uVar10 != 0) {
      uVar11 = uVar11 >> 1 & 1;
      puVar7 = __s;
      if (uVar10 == 1) {
        lVar6 = 0;
      }
      else {
        lVar6 = 0;
        do {
          uVar5 = *puVar7;
          puVar1 = puVar8 + lVar6 * 2;
          *puVar7 = 0;
          puVar1[1] = puVar7[1];
          *puVar1 = uVar5;
          puVar3 = puVar7 + 3;
          uVar5 = puVar7[2];
          lVar6 = lVar6 + 2;
          puVar7[2] = 0;
          puVar7 = puVar7 + 4;
          puVar1[3] = *puVar3;
          puVar1[2] = uVar5;
        } while (uVar10 - uVar11 != lVar6);
      }
      if (uVar11 != 0) {
        uVar11 = *puVar7;
        *puVar7 = 0;
        (puVar8 + lVar6 * 2)[1] = puVar7[1];
        puVar8[lVar6 * 2] = uVar11;
      }
    }
    if (__s != (ulong *)0x0) {
      if (uVar10 != 0) {
        puVar7 = __s + uVar10 * 2 + -2;
        __ptr = (void *)*puVar7;
        *puVar7 = 0;
        uVar11 = uVar10;
        while( true ) {
          if (__ptr != (void *)0x0) {
                    /* try { // try from 005e4248 to 005e424b has its CatchHandler @ 005e42a8 */
            free(__ptr);
          }
          uVar11 = uVar11 - 1;
          puVar7 = puVar7 + -2;
          if (uVar11 == 0) break;
          __ptr = (void *)*puVar7;
          *puVar7 = 0;
        }
      }
      memset(__s,0xab,uVar10 << 4);
    }
    uVar11 = *param_1;
    if ((uVar11 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,param_1[1]);
      uVar11 = *param_1;
    }
    uVar11 = uVar11 | 1;
    param_1[1] = (ulong)puVar8;
    param_1[2] = uVar9;
  }
  *param_1 = uVar11 + 2;
  return puVar4;
}


