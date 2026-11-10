/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0060f180; name: FUN_0060f180
 */


undefined8
FUN_0060f180(long *param_1,void *param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
            undefined8 param_6,undefined8 param_7)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong *__dest;
  ulong *puVar6;
  ulong *puVar7;
  long lVar8;
  undefined8 uVar9;
  
  uVar5 = (**(code **)(*param_1 + 0x10))();
  if (uVar5 < 0x21) {
    __dest = (ulong *)FUN_002e2ec0(PTR_FUN_04373078,0x40);
    if (param_3 < 0x41) {
      memcpy(__dest,param_2,param_3);
      uVar5 = param_3;
    }
    else {
                    /* try { // try from 0060f1f0 to 0060f23b has its CatchHandler @ 0060f50c */
      (**(code **)(*param_1 + 0x18))(param_1,param_2,param_3);
      (**(code **)(*param_1 + 0x20))(param_1,__dest,0x40);
      uVar5 = (**(code **)(*param_1 + 0x10))(param_1);
      param_3 = (**(code **)(*param_1 + 0x10))(param_1);
    }
    memset((void *)((long)__dest + uVar5),0,0x40 - param_3);
    puVar4 = PTR_FUN_04373078;
    puVar6 = (ulong *)FUN_002e2ec0(PTR_FUN_04373078,0x40);
    puVar7 = (ulong *)FUN_002e2ec0(puVar4,0x40);
    if (((puVar6 < puVar7 + 8 && puVar7 < puVar6 + 8) ||
        (puVar6 < __dest + 8 && __dest < puVar6 + 8)) ||
       (puVar7 < __dest + 8 && __dest < puVar7 + 8)) {
      lVar8 = 0;
      do {
        pbVar1 = (byte *)((long)__dest + lVar8);
        pbVar2 = (byte *)((long)puVar6 + lVar8 + 1);
        pbVar2[-1] = *pbVar1 ^ 0x5c;
        pbVar3 = (byte *)((long)puVar7 + lVar8 + 1);
        lVar8 = lVar8 + 2;
        pbVar3[-1] = *pbVar1 ^ 0x36;
        *pbVar2 = pbVar1[1] ^ 0x5c;
        *pbVar3 = pbVar1[1] ^ 0x36;
      } while (lVar8 != 0x40);
    }
    else {
      uVar5 = *__dest;
      puVar6[1] = __dest[1] ^ 0x5c5c5c5c5c5c5c5c;
      *puVar6 = uVar5 ^ 0x5c5c5c5c5c5c5c5c;
      uVar5 = *__dest;
      puVar7[1] = __dest[1] ^ 0x3636363636363636;
      *puVar7 = uVar5 ^ 0x3636363636363636;
      uVar5 = __dest[2];
      puVar6[3] = __dest[3] ^ 0x5c5c5c5c5c5c5c5c;
      puVar6[2] = uVar5 ^ 0x5c5c5c5c5c5c5c5c;
      uVar5 = __dest[2];
      puVar7[3] = __dest[3] ^ 0x3636363636363636;
      puVar7[2] = uVar5 ^ 0x3636363636363636;
      uVar5 = __dest[4];
      puVar6[5] = __dest[5] ^ 0x5c5c5c5c5c5c5c5c;
      puVar6[4] = uVar5 ^ 0x5c5c5c5c5c5c5c5c;
      uVar5 = __dest[4];
      puVar7[5] = __dest[5] ^ 0x3636363636363636;
      puVar7[4] = uVar5 ^ 0x3636363636363636;
      uVar5 = __dest[6];
      puVar6[7] = __dest[7] ^ 0x5c5c5c5c5c5c5c5c;
      puVar6[6] = uVar5 ^ 0x5c5c5c5c5c5c5c5c;
      uVar5 = __dest[6];
      puVar7[7] = __dest[7] ^ 0x3636363636363636;
      puVar7[6] = uVar5 ^ 0x3636363636363636;
    }
                    /* try { // try from 0060f3b8 to 0060f3c3 has its CatchHandler @ 0060f504 */
    uVar9 = (**(code **)(*param_1 + 0x10))(param_1);
    lVar8 = FUN_002e2ec0(PTR_FUN_04373078,uVar9);
                    /* try { // try from 0060f3dc to 0060f483 has its CatchHandler @ 0060f518 */
    (**(code **)(*param_1 + 0x18))(param_1,puVar7,0x40);
    (**(code **)(*param_1 + 0x18))(param_1,param_4,param_5);
    uVar9 = (**(code **)(*param_1 + 0x10))(param_1);
    (**(code **)(*param_1 + 0x20))(param_1,lVar8,uVar9);
    (**(code **)(*param_1 + 0x18))(param_1,puVar6,0x40);
    uVar9 = (**(code **)(*param_1 + 0x10))(param_1);
    (**(code **)(*param_1 + 0x18))(param_1,lVar8,uVar9);
    uVar9 = (**(code **)(*param_1 + 0x20))(param_1,param_6,param_7);
    if (lVar8 != 0) {
      FUN_002e2f10(lVar8);
      FUN_002e2ef0(PTR_LAB_04373088,lVar8);
    }
    FUN_002e2f10(puVar7);
    puVar4 = PTR_LAB_04373088;
    FUN_002e2ef0(PTR_LAB_04373088,puVar7);
    FUN_002e2f10(puVar6);
    FUN_002e2ef0(puVar4,puVar6);
    FUN_002e2f10(__dest);
    FUN_002e2ef0(puVar4,__dest);
  }
  else {
    uVar9 = 0;
  }
  return uVar9;
}


