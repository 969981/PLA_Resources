/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00546430; name: FUN_00546430
 */


ulong * FUN_00546430(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  undefined *puVar2;
  ulong *puVar3;
  ulong uVar4;
  long lVar5;
  ulong *puVar6;
  ulong *__s;
  ulong *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  
  uVar8 = *param_1;
  if ((uVar8 & 1) == 0) {
    __s = param_1 + 1;
    uVar4 = 10;
    puVar3 = __s;
    if (uVar8 >> 1 == 10) {
LAB_0054648c:
      uVar10 = uVar4 << 1;
      puVar3 = (ulong *)FUN_002e2e80(PTR_FUN_04373078,uVar4 << 4);
      puVar7 = puVar3;
      goto LAB_005464a8;
    }
  }
  else {
    __s = (ulong *)param_1[1];
    uVar4 = param_1[2];
    puVar3 = __s;
    if (uVar8 >> 1 == uVar4) goto LAB_0054648c;
  }
  uVar10 = 0;
  __s = puVar3;
  puVar7 = (ulong *)0x0;
LAB_005464a8:
  uVar11 = uVar8 >> 1;
  uVar4 = *param_2;
  *param_2 = 0;
  puVar3[uVar11] = uVar4;
  if (puVar7 == (ulong *)0x0) {
    uVar8 = *param_1;
  }
  else {
    if (uVar11 != 0) {
      uVar8 = uVar8 >> 1 & 1;
      puVar6 = __s;
      if (uVar11 == 1) {
        lVar5 = 0;
      }
      else {
        lVar5 = 0;
        do {
          uVar4 = *puVar6;
          puVar1 = puVar7 + lVar5;
          *puVar6 = 0;
          *puVar1 = uVar4;
          uVar4 = puVar6[1];
          lVar5 = lVar5 + 2;
          puVar6[1] = 0;
          puVar6 = puVar6 + 2;
          puVar1[1] = uVar4;
        } while (uVar11 - uVar8 != lVar5);
      }
      if (uVar8 != 0) {
        uVar8 = *puVar6;
        *puVar6 = 0;
        puVar7[lVar5] = uVar8;
      }
    }
    puVar2 = PTR_LAB_04373088;
    if (__s != (ulong *)0x0) {
      if (uVar11 != 0) {
        uVar8 = uVar11;
        do {
          uVar4 = uVar8 - 1;
          puVar9 = (undefined8 *)__s[uVar8 - 1];
          __s[uVar8 - 1] = 0;
          if (puVar9 != (undefined8 *)0x0) {
            (**(code **)*puVar9)(puVar9);
            FUN_002e2ea0(puVar2,puVar9);
          }
          uVar8 = uVar4;
        } while (uVar4 != 0);
      }
      memset(__s,0xab,uVar11 << 3);
    }
    uVar8 = *param_1;
    if ((uVar8 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,param_1[1]);
      uVar8 = *param_1;
    }
    uVar8 = uVar8 | 1;
    param_1[1] = (ulong)puVar7;
    param_1[2] = uVar10;
  }
  *param_1 = uVar8 + 2;
  return puVar3 + uVar11;
}


