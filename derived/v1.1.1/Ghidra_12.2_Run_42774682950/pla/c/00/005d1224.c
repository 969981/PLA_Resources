/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005d1224; name: FUN_005d1224
 */


ulong * FUN_005d1224(ulong *param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *__s;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  
  uVar2 = *param_1;
  if ((uVar2 & 1) == 0) {
    __s = param_1 + 1;
    uVar4 = 1;
    puVar1 = __s;
    if (uVar2 >> 1 == 1) {
LAB_005d1280:
      uVar8 = uVar4 << 1;
      puVar1 = (ulong *)FUN_002e2e80(PTR_FUN_04373078,uVar4 * 0x120);
      puVar6 = puVar1;
      goto LAB_005d12a0;
    }
  }
  else {
    __s = (ulong *)param_1[1];
    uVar4 = param_1[2];
    puVar1 = __s;
    if (uVar2 >> 1 == uVar4) goto LAB_005d1280;
  }
  uVar8 = 0;
  puVar6 = (ulong *)0x0;
  __s = puVar1;
LAB_005d12a0:
  uVar2 = uVar2 >> 1;
                    /* try { // try from 005d12ac to 005d12b7 has its CatchHandler @ 005d13ac */
  FUN_005c673c(puVar1 + uVar2 * 0x12,param_2,*param_3);
  if (puVar6 == (ulong *)0x0) {
    uVar4 = *param_1;
  }
  else {
    if (uVar2 != 0) {
      puVar3 = puVar6;
      uVar4 = uVar2;
      puVar5 = __s;
      do {
        uVar9 = *puVar5;
        uVar4 = uVar4 - 1;
        puVar3[1] = puVar5[1];
        *puVar3 = uVar9;
        uVar10 = puVar5[3];
        uVar9 = puVar5[2];
        uVar12 = puVar5[5];
        uVar11 = puVar5[4];
        uVar13 = puVar5[6];
        uVar15 = puVar5[9];
        uVar14 = puVar5[8];
        puVar3[7] = puVar5[7];
        puVar3[6] = uVar13;
        puVar3[9] = uVar15;
        puVar3[8] = uVar14;
        puVar3[3] = uVar10;
        puVar3[2] = uVar9;
        puVar3[5] = uVar12;
        puVar3[4] = uVar11;
        uVar14 = puVar5[0xf];
        uVar13 = puVar5[0xe];
        uVar10 = puVar5[0xb];
        uVar9 = puVar5[10];
        uVar12 = puVar5[0xd];
        uVar11 = puVar5[0xc];
        *(int *)(puVar3 + 0x10) = (int)puVar5[0x10];
        puVar3[0xd] = uVar12;
        puVar3[0xc] = uVar11;
        puVar3[0xf] = uVar14;
        puVar3[0xe] = uVar13;
        puVar3[0xb] = uVar10;
        puVar3[10] = uVar9;
        puVar3[0x11] = puVar5[0x11];
        puVar5[0x11] = 0;
        puVar3 = puVar3 + 0x12;
        puVar5 = puVar5 + 0x12;
      } while (uVar4 != 0);
    }
    if (__s != (ulong *)0x0) {
      puVar3 = __s + uVar2 * 0x12 + -1;
      lVar7 = uVar2 + 1;
      while (lVar7 = lVar7 + -1, lVar7 != 0) {
        uVar4 = *puVar3;
        puVar3 = puVar3 + -0x12;
                    /* try { // try from 005d133c to 005d133f has its CatchHandler @ 005d13cc */
        FUN_002e4a10(uVar4);
      }
      memset(__s,0xab,uVar2 * 0x90);
    }
    uVar4 = *param_1;
    if ((uVar4 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,param_1[1]);
      uVar4 = *param_1;
    }
    uVar4 = uVar4 | 1;
    param_1[1] = (ulong)puVar6;
    param_1[2] = uVar8;
  }
  *param_1 = uVar4 + 2;
  return puVar1 + uVar2 * 0x12;
}


