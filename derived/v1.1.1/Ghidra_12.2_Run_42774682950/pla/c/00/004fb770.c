/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004fb770; name: FUN_004fb770
 */


ulong * FUN_004fb770(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *__s;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar8 = *param_1;
  if ((uVar8 & 1) == 0) {
    __s = param_1 + 1;
    uVar2 = 2;
    puVar1 = __s;
    if (uVar8 >> 1 == 2) {
LAB_004fb7c8:
      uVar7 = uVar2 << 1;
      puVar1 = (ulong *)FUN_002e2e80(PTR_FUN_04373078,uVar2 << 4);
      puVar6 = puVar1;
      goto LAB_004fb7e4;
    }
  }
  else {
    __s = (ulong *)param_1[1];
    uVar2 = param_1[2];
    puVar1 = __s;
    if (uVar8 >> 1 == uVar2) goto LAB_004fb7c8;
  }
  uVar7 = 0;
  __s = puVar1;
  puVar6 = (ulong *)0x0;
LAB_004fb7e4:
  uVar2 = uVar8 >> 1;
  puVar1 = puVar1 + uVar2;
  *puVar1 = 0;
  *puVar1 = *param_2;
  *param_2 = 0;
  if (puVar6 == (ulong *)0x0) {
    uVar8 = *param_1;
  }
  else {
    if (uVar2 != 0) {
      uVar8 = uVar8 >> 1 & 1;
      puVar4 = __s;
      if (uVar2 == 1) {
        lVar3 = 0;
      }
      else {
        lVar3 = 0;
        puVar5 = puVar6 + 1;
        do {
          puVar5[-1] = 0;
          puVar5[-1] = *puVar4;
          *puVar4 = 0;
          *puVar5 = 0;
          lVar3 = lVar3 + 2;
          *puVar5 = puVar4[1];
          puVar4[1] = 0;
          puVar4 = puVar4 + 2;
          puVar5 = puVar5 + 2;
        } while (uVar2 - uVar8 != lVar3);
      }
      if (uVar8 != 0) {
        puVar6[lVar3] = 0;
        puVar6[lVar3] = *puVar4;
        *puVar4 = 0;
      }
    }
    if (__s != (ulong *)0x0) {
      if (uVar2 != 0) {
        puVar4 = __s + uVar2;
        uVar8 = uVar2;
        do {
          puVar4 = puVar4 + -1;
          uVar8 = uVar8 - 1;
          FUN_003f4f54(puVar4);
        } while (uVar8 != 0);
      }
      memset(__s,0xab,uVar2 << 3);
    }
    uVar8 = *param_1;
    if ((uVar8 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,param_1[1]);
      uVar8 = *param_1;
    }
    uVar8 = uVar8 | 1;
    param_1[1] = (ulong)puVar6;
    param_1[2] = uVar7;
  }
  *param_1 = uVar8 + 2;
  return puVar1;
}


