/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003ea3e8; name: FUN_003ea3e8
 */


ulong * FUN_003ea3e8(ulong *param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *__s;
  ulong uVar7;
  
  uVar2 = *param_1;
  if ((uVar2 & 1) == 0) {
    __s = param_1 + 1;
    uVar7 = 1;
    if (uVar2 >> 1 == 1) {
LAB_003ea438:
      uVar2 = FUN_002e2e80(PTR_FUN_04373078,uVar7 << 7);
      puVar6 = (ulong *)(uVar2 + uVar7 * 0x40);
      puVar6[1] = 0;
      *puVar6 = 0;
      puVar6[3] = 0;
      puVar6[2] = 0;
      puVar6[5] = 0;
      puVar6[4] = 0;
      puVar6[7] = 0;
      puVar6[6] = 0;
      if (uVar2 != 0) {
        if (uVar7 != 0) {
          puVar3 = (ulong *)(uVar2 + 0x10);
          uVar4 = uVar7;
          puVar5 = __s;
          do {
            puVar3[-2] = *puVar5;
            puVar3[-1] = puVar5[1];
            *puVar3 = puVar5[2];
            puVar1 = puVar5 + 3;
            uVar4 = uVar4 - 1;
            puVar5 = puVar5 + 8;
            puVar3[1] = *puVar1;
            puVar3 = puVar3 + 8;
          } while (uVar4 != 0);
        }
        if (__s != (ulong *)0x0) {
          memset(__s,0xab,uVar7 << 6);
        }
        uVar4 = *param_1;
        if ((uVar4 & 1) != 0) {
          FUN_002e2ea0(PTR_LAB_04373088,param_1[1]);
          uVar4 = *param_1;
        }
        *param_1 = uVar4 | 1;
        param_1[1] = uVar2;
        param_1[2] = uVar7 << 1;
      }
      goto LAB_003ea4e0;
    }
  }
  else {
    __s = (ulong *)param_1[1];
    uVar7 = param_1[2];
    if (uVar2 >> 1 == uVar7) goto LAB_003ea438;
  }
  puVar6 = __s + (uVar2 >> 1) * 8;
  puVar6[5] = 0;
  puVar6[4] = 0;
  puVar6[7] = 0;
  puVar6[6] = 0;
  puVar6[1] = 0;
  *puVar6 = 0;
  puVar6[3] = 0;
  puVar6[2] = 0;
LAB_003ea4e0:
  *param_1 = *param_1 + 2;
  return puVar6;
}


