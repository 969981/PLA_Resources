/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00573418; name: FUN_00573418
 */


ulong * FUN_00573418(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong *__s;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong *local_58;
  
  uVar3 = *param_1;
  if ((uVar3 & 1) == 0) {
    local_58 = param_1 + 1;
    uVar4 = 1;
    if (uVar3 >> 1 == 1) {
LAB_0057347c:
      __s = local_58;
      uVar6 = uVar4 << 1;
      puVar5 = (ulong *)FUN_002e2e80(PTR_FUN_04373078,uVar4 * 0xd0);
      puVar7 = puVar5;
      goto LAB_0057349c;
    }
  }
  else {
    local_58 = (ulong *)param_1[1];
    uVar4 = param_1[2];
    if (uVar3 >> 1 == uVar4) goto LAB_0057347c;
  }
  puVar5 = (ulong *)0x0;
  uVar6 = 0;
  __s = local_58;
  puVar7 = local_58;
LAB_0057349c:
  uVar3 = uVar3 >> 1;
  puVar7 = puVar7 + uVar3 * 0xd;
  uVar8 = *param_2;
  uVar4 = param_2[2];
  puVar7[1] = param_2[1];
  *puVar7 = uVar8;
  puVar7[2] = uVar4;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
                    /* try { // try from 005734c4 to 005734cb has its CatchHandler @ 005735e0 */
  FUN_003ee80c(puVar7 + 3,param_2 + 3);
  if (puVar5 == (ulong *)0x0) {
    uVar3 = *param_1;
  }
  else {
                    /* try { // try from 005734d0 to 005734e3 has its CatchHandler @ 005735a0 */
    FUN_005732f0(param_1,puVar5,&local_58,uVar3);
    puVar2 = PTR_LAB_04373088;
    if (__s != (ulong *)0x0) {
      if (uVar3 != 0) {
        uVar4 = uVar3;
        puVar1 = __s + uVar3 * 0xd;
        do {
          uVar4 = uVar4 - 1;
          FUN_003ee5f8(puVar1 + -10);
          if ((puVar1[-0xd] & 1) != 0) {
            FUN_002e2ea0(puVar2,puVar1[-0xb]);
          }
          puVar1 = puVar1 + -0xd;
        } while (uVar4 != 0);
      }
      memset(__s,0xab,uVar3 * 0x68);
    }
    uVar3 = *param_1;
    if ((uVar3 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,param_1[1]);
      uVar3 = *param_1;
    }
    uVar3 = uVar3 | 1;
    *param_1 = uVar3;
    param_1[1] = (ulong)puVar5;
    param_1[2] = uVar6;
  }
  *param_1 = uVar3 + 2;
  return puVar7;
}


