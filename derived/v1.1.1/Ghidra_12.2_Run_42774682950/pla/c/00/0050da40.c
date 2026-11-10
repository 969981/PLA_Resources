/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0050da40; name: FUN_0050da40
 */


void FUN_0050da40(ulong *param_1,ulong *param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong *__s;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  
  uVar1 = *param_1;
  if ((uVar1 & 1) == 0) {
    __s = param_1 + 1;
    uVar2 = 1;
    puVar6 = __s;
    if (param_3 < 2) goto LAB_0050da80;
LAB_0050dab4:
    uVar5 = uVar1 >> 1;
    uVar1 = param_3;
    if (param_3 <= uVar2 << 1) {
      uVar1 = uVar2 << 1;
    }
    puVar4 = (ulong *)FUN_002e2e80(PTR_FUN_04373078,uVar1 * 0x90);
    uVar2 = param_3;
    puVar6 = puVar4;
  }
  else {
    __s = (ulong *)param_1[1];
    uVar2 = param_1[2];
    puVar6 = __s;
    if (uVar2 < param_3) goto LAB_0050dab4;
LAB_0050da80:
    uVar1 = uVar1 >> 1;
    uVar5 = uVar1 - param_3;
    if (uVar1 < param_3) {
      uVar5 = 0;
      puVar4 = puVar6 + uVar1 * 0x12;
      __s = (ulong *)0x0;
      uVar2 = param_3 - uVar1;
    }
    else {
      __s = puVar6 + param_3 * 0x12;
      uVar2 = 0;
      puVar4 = (ulong *)0x0;
      uVar1 = param_3;
    }
    if (uVar1 != 0) {
      puVar6 = puVar6 + 0x11;
      do {
        uVar7 = *param_2;
        puVar6[-0x10] = param_2[1];
        puVar6[-0x11] = uVar7;
        uVar8 = param_2[3];
        uVar7 = param_2[2];
        uVar10 = param_2[5];
        uVar9 = param_2[4];
        uVar12 = param_2[7];
        uVar11 = param_2[6];
        uVar13 = param_2[8];
        puVar6[-8] = param_2[9];
        puVar6[-9] = uVar13;
        puVar6[-10] = uVar12;
        puVar6[-0xb] = uVar11;
        puVar6[-0xc] = uVar10;
        puVar6[-0xd] = uVar9;
        puVar6[-0xe] = uVar8;
        puVar6[-0xf] = uVar7;
        uVar12 = param_2[0xf];
        uVar11 = param_2[0xe];
        uVar8 = param_2[0xb];
        uVar7 = param_2[10];
        uVar10 = param_2[0xd];
        uVar9 = param_2[0xc];
        *(int *)(puVar6 + -1) = (int)param_2[0x10];
        puVar6[-2] = uVar12;
        puVar6[-3] = uVar11;
        puVar6[-4] = uVar10;
        puVar6[-5] = uVar9;
        puVar6[-6] = uVar8;
        puVar6[-7] = uVar7;
        FUN_002e4a10(*puVar6);
        uVar1 = uVar1 - 1;
        *puVar6 = param_2[0x11];
        param_2[0x11] = 0;
        param_2 = param_2 + 0x12;
        puVar6 = puVar6 + 0x12;
      } while (uVar1 != 0);
    }
    uVar1 = 0;
    puVar6 = (ulong *)0x0;
    if (uVar2 == 0) goto LAB_0050dbbc;
  }
  do {
    uVar7 = *param_2;
    uVar2 = uVar2 - 1;
    puVar4[1] = param_2[1];
    *puVar4 = uVar7;
    uVar8 = param_2[3];
    uVar7 = param_2[2];
    uVar10 = param_2[5];
    uVar9 = param_2[4];
    uVar11 = param_2[6];
    uVar13 = param_2[9];
    uVar12 = param_2[8];
    puVar4[7] = param_2[7];
    puVar4[6] = uVar11;
    puVar4[9] = uVar13;
    puVar4[8] = uVar12;
    puVar4[3] = uVar8;
    puVar4[2] = uVar7;
    puVar4[5] = uVar10;
    puVar4[4] = uVar9;
    uVar12 = param_2[0xf];
    uVar11 = param_2[0xe];
    uVar8 = param_2[0xb];
    uVar7 = param_2[10];
    uVar10 = param_2[0xd];
    uVar9 = param_2[0xc];
    *(int *)(puVar4 + 0x10) = (int)param_2[0x10];
    puVar4[0xd] = uVar10;
    puVar4[0xc] = uVar9;
    puVar4[0xf] = uVar12;
    puVar4[0xe] = uVar11;
    puVar4[0xb] = uVar8;
    puVar4[10] = uVar7;
    puVar4[0x11] = param_2[0x11];
    param_2[0x11] = 0;
    puVar4 = puVar4 + 0x12;
    param_2 = param_2 + 0x12;
  } while (uVar2 != 0);
LAB_0050dbbc:
  if (__s != (ulong *)0x0) {
    puVar4 = __s + uVar5 * 0x12 + -1;
    lVar3 = uVar5 + 1;
    while (lVar3 = lVar3 + -1, lVar3 != 0) {
      uVar2 = *puVar4;
      puVar4 = puVar4 + -0x12;
                    /* try { // try from 0050dbe0 to 0050dbe3 has its CatchHandler @ 0050dc50 */
      FUN_002e4a10(uVar2);
    }
    memset(__s,0xab,uVar5 * 0x90);
  }
  uVar2 = *param_1;
  if (puVar6 != (ulong *)0x0) {
    if ((uVar2 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,param_1[1]);
      uVar2 = *param_1;
    }
    uVar2 = uVar2 | 1;
    *param_1 = uVar2;
    param_1[1] = (ulong)puVar6;
    param_1[2] = uVar1;
  }
  *param_1 = uVar2 & 1 | param_3 << 1;
  return;
}


