/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0050d74c; name: FUN_0050d74c
 */


void FUN_0050d74c(ulong *param_1,ulong *param_2,ulong param_3)

{
  ulong *puVar1;
  bool bVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *__s;
  ulong *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong *local_58;
  
  uVar3 = *param_1;
  local_58 = param_2;
  if ((uVar3 & 1) == 0) {
    __s = param_1 + 1;
    uVar5 = 1;
    puVar6 = __s;
    if (1 < param_3) {
LAB_0050d844:
      uVar9 = uVar3 >> 1;
      uVar3 = param_3;
      if (param_3 <= uVar5 << 1) {
        uVar3 = uVar5 << 1;
      }
      puVar6 = (ulong *)FUN_002e2e80(PTR_FUN_04373078,uVar3 * 0x90);
      uVar5 = param_3;
      puVar4 = puVar6;
      goto LAB_0050d878;
    }
  }
  else {
    __s = (ulong *)param_1[1];
    uVar5 = param_1[2];
    puVar6 = __s;
    if (uVar5 < param_3) goto LAB_0050d844;
  }
  uVar3 = uVar3 >> 1;
  __s = puVar6 + param_3 * 0x12;
  bVar2 = uVar3 < param_3;
  uVar9 = uVar3 - param_3;
  if (bVar2) {
    uVar9 = 0;
  }
  uVar5 = 0;
  if (bVar2) {
    uVar5 = param_3 - uVar3;
  }
  uVar8 = param_3;
  puVar4 = (ulong *)0x0;
  if (bVar2) {
    __s = (ulong *)0x0;
    uVar8 = uVar3;
    puVar4 = puVar6 + uVar3 * 0x12;
  }
  if (uVar8 != 0) {
    puVar6 = puVar6 + 0x11;
    do {
      puVar1 = local_58;
      uVar3 = *local_58;
      puVar6[-0x10] = local_58[1];
      puVar6[-0x11] = uVar3;
      uVar10 = local_58[3];
      uVar3 = local_58[2];
      uVar12 = local_58[5];
      uVar11 = local_58[4];
      uVar14 = local_58[7];
      uVar13 = local_58[6];
      uVar15 = local_58[8];
      puVar6[-8] = local_58[9];
      puVar6[-9] = uVar15;
      puVar6[-10] = uVar14;
      puVar6[-0xb] = uVar13;
      puVar6[-0xc] = uVar12;
      puVar6[-0xd] = uVar11;
      puVar6[-0xe] = uVar10;
      puVar6[-0xf] = uVar3;
      uVar14 = local_58[0xf];
      uVar13 = local_58[0xe];
      uVar10 = local_58[0xb];
      uVar3 = local_58[10];
      uVar12 = local_58[0xd];
      uVar11 = local_58[0xc];
      *(int *)(puVar6 + -1) = (int)local_58[0x10];
      puVar6[-2] = uVar14;
      puVar6[-3] = uVar13;
      puVar6[-4] = uVar12;
      puVar6[-5] = uVar11;
      puVar6[-6] = uVar10;
      puVar6[-7] = uVar3;
      FUN_002e4a10(*puVar6);
      uVar3 = FUN_002e45d0(puVar1[0x11]);
      *puVar6 = uVar3;
      local_58 = local_58 + 0x12;
      uVar8 = uVar8 - 1;
      puVar6 = puVar6 + 0x12;
    } while (uVar8 != 0);
  }
  uVar3 = 0;
  puVar6 = (ulong *)0x0;
LAB_0050d878:
                    /* try { // try from 0050d878 to 0050d88b has its CatchHandler @ 0050d920 */
  FUN_0050d950(param_1,puVar4,&local_58,uVar5);
  if (__s != (ulong *)0x0) {
    puVar4 = __s + uVar9 * 0x12 + -1;
    lVar7 = uVar9 + 1;
    while (lVar7 = lVar7 + -1, lVar7 != 0) {
      uVar5 = *puVar4;
      puVar4 = puVar4 + -0x12;
                    /* try { // try from 0050d8b0 to 0050d8b3 has its CatchHandler @ 0050d940 */
      FUN_002e4a10(uVar5);
    }
    memset(__s,0xab,uVar9 * 0x90);
  }
  uVar5 = *param_1;
  if (puVar6 != (ulong *)0x0) {
    if ((uVar5 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,param_1[1]);
      uVar5 = *param_1;
    }
    uVar5 = uVar5 | 1;
    *param_1 = uVar5;
    param_1[1] = (ulong)puVar6;
    param_1[2] = uVar3;
  }
  *param_1 = uVar5 & 1 | param_3 << 1;
  return;
}


