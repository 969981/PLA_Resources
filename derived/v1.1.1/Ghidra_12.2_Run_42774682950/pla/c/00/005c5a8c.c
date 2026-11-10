/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005c5a8c; name: FUN_005c5a8c
 */


ulong * FUN_005c5a8c(ulong *param_1,ulong *param_2)

{
  undefined *puVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong *__s;
  ulong *puVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  
  uVar3 = *param_1;
  if ((uVar3 & 1) == 0) {
    __s = param_1 + 1;
    uVar5 = 2;
    puVar2 = __s;
    if (uVar3 >> 1 == 2) {
LAB_005c5ae4:
      uVar8 = uVar5 << 1;
      puVar2 = (ulong *)FUN_002e2e80(PTR_FUN_04373078,uVar5 << 6);
      puVar7 = puVar2;
      goto LAB_005c5b00;
    }
  }
  else {
    __s = (ulong *)param_1[1];
    uVar5 = param_1[2];
    puVar2 = __s;
    if (uVar3 >> 1 == uVar5) goto LAB_005c5ae4;
  }
  uVar8 = 0;
  __s = puVar2;
  puVar7 = (ulong *)0x0;
LAB_005c5b00:
  uVar3 = uVar3 >> 1;
  uVar10 = param_2[1];
  uVar5 = *param_2;
  puVar2 = puVar2 + uVar3 * 4;
  puVar2[2] = param_2[2];
  puVar2[1] = uVar10;
  *puVar2 = uVar5;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  *(int *)(puVar2 + 3) = (int)param_2[3];
  if (puVar7 == (ulong *)0x0) {
    uVar3 = *param_1;
  }
  else {
    if (uVar3 != 0) {
      puVar4 = puVar7;
      uVar5 = uVar3;
      puVar6 = __s;
      do {
        uVar11 = puVar6[1];
        uVar10 = *puVar6;
        uVar5 = uVar5 - 1;
        puVar4[2] = puVar6[2];
        puVar4[1] = uVar11;
        *puVar4 = uVar10;
        puVar6[1] = 0;
        puVar6[2] = 0;
        *puVar6 = 0;
        *(int *)(puVar4 + 3) = (int)puVar6[3];
        puVar4 = puVar4 + 4;
        puVar6 = puVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = PTR_LAB_04373088;
    if (__s != (ulong *)0x0) {
      if (uVar3 != 0) {
        puVar4 = __s + uVar3 * 4 + -2;
        lVar9 = uVar3 - 1;
        if ((__s[uVar3 * 4 + -4] & 1) != 0) goto LAB_005c5ba4;
        while (puVar6 = puVar4, lVar9 != 0) {
          while( true ) {
            puVar4 = puVar6 + -4;
            lVar9 = lVar9 + -1;
            if ((puVar6[-6] & 1) == 0) break;
LAB_005c5ba4:
            FUN_002e2ea0(puVar1,*puVar4);
            puVar6 = puVar4;
            if (lVar9 == 0) goto LAB_005c5bb4;
          }
        }
      }
LAB_005c5bb4:
      memset(__s,0xab,uVar3 << 5);
    }
    uVar3 = *param_1;
    if ((uVar3 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,param_1[1]);
      uVar3 = *param_1;
    }
    uVar3 = uVar3 | 1;
    param_1[1] = (ulong)puVar7;
    param_1[2] = uVar8;
  }
  *param_1 = uVar3 + 2;
  return puVar2;
}


