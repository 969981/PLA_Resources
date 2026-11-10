/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00522c08; name: FUN_00522c08
 */


void FUN_00522c08(ulong *param_1,long param_2,ulong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  ulong *puVar10;
  ulong *__s;
  ulong *puVar11;
  ulong uVar12;
  ulong *puVar13;
  long lVar14;
  
  uVar3 = *param_1;
  if ((uVar3 & 1) == 0) {
    __s = param_1 + 1;
    uVar4 = 2;
    if (param_3 < 3) goto LAB_00522c4c;
LAB_00522c80:
    uVar12 = uVar3 >> 1;
    uVar3 = param_3;
    if (param_3 <= uVar4 << 1) {
      uVar3 = uVar4 << 1;
    }
    puVar10 = (ulong *)FUN_002e2e80(PTR_FUN_04373078,uVar3 * 0x18);
    uVar4 = param_3;
    puVar11 = puVar10;
  }
  else {
    __s = (ulong *)param_1[1];
    uVar4 = param_1[2];
    if (uVar4 < param_3) goto LAB_00522c80;
LAB_00522c4c:
    uVar3 = uVar3 >> 1;
    uVar12 = uVar3 - param_3;
    if (uVar3 < param_3) {
      uVar12 = 0;
      puVar10 = __s + uVar3 * 3;
      puVar13 = (ulong *)0x0;
      uVar4 = param_3 - uVar3;
    }
    else {
      puVar13 = __s + param_3 * 3;
      uVar4 = 0;
      puVar10 = (ulong *)0x0;
      uVar3 = param_3;
    }
    if (uVar3 != 0) {
      lVar5 = 0;
      do {
        while( true ) {
          lVar14 = lVar5;
          puVar1 = (undefined8 *)((long)__s + lVar14);
          plVar9 = puVar1 + 1;
          FUN_0051f624(puVar1,*plVar9);
          puVar2 = (undefined8 *)(param_2 + lVar14);
          *puVar1 = *puVar2;
          lVar5 = puVar2[1];
          *plVar9 = lVar5;
          lVar7 = puVar2[2];
          puVar1[2] = lVar7;
          if (lVar7 != 0) break;
          *(long **)((long)__s + lVar14) = plVar9;
          uVar3 = uVar3 - 1;
          lVar5 = lVar14 + 0x18;
          if (uVar3 == 0) goto LAB_00522d3c;
        }
        *(long **)(lVar5 + 0x10) = plVar9;
        *puVar2 = puVar2 + 1;
        puVar2[1] = 0;
        puVar2[2] = 0;
        uVar3 = uVar3 - 1;
        lVar5 = lVar14 + 0x18;
      } while (uVar3 != 0);
LAB_00522d3c:
      param_2 = param_2 + lVar14 + 0x18;
    }
    uVar3 = 0;
    puVar11 = (ulong *)0x0;
    __s = puVar13;
    if (uVar4 == 0) goto LAB_00522da8;
  }
  puVar13 = (ulong *)(param_2 + 8);
  puVar10 = puVar10 + 1;
  do {
    while( true ) {
      puVar10[-1] = puVar13[-1];
      uVar6 = *puVar13;
      *puVar10 = uVar6;
      uVar8 = puVar13[1];
      puVar10[1] = uVar8;
      if (uVar8 != 0) break;
      puVar10[-1] = (ulong)puVar10;
      puVar13 = puVar13 + 3;
      uVar4 = uVar4 - 1;
      puVar10 = puVar10 + 3;
      if (uVar4 == 0) goto LAB_00522da8;
    }
    *(ulong **)(uVar6 + 0x10) = puVar10;
    puVar13[1] = 0;
    puVar13[-1] = (ulong)puVar13;
    *puVar13 = 0;
    puVar13 = puVar13 + 3;
    uVar4 = uVar4 - 1;
    puVar10 = puVar10 + 3;
  } while (uVar4 != 0);
LAB_00522da8:
  if (__s != (ulong *)0x0) {
    if (uVar12 != 0) {
      uVar4 = uVar12;
      puVar10 = __s + uVar12 * 3;
      do {
        uVar4 = uVar4 - 1;
        FUN_0051f624(puVar10 + -3,puVar10[-2]);
        puVar10 = puVar10 + -3;
      } while (uVar4 != 0);
    }
    memset(__s,0xab,uVar12 * 0x18);
  }
  uVar4 = *param_1;
  if (puVar11 != (ulong *)0x0) {
    if ((uVar4 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,param_1[1]);
      uVar4 = *param_1;
    }
    uVar4 = uVar4 | 1;
    *param_1 = uVar4;
    param_1[1] = (ulong)puVar11;
    param_1[2] = uVar3;
  }
  *param_1 = uVar4 & 1 | param_3 << 1;
  return;
}


