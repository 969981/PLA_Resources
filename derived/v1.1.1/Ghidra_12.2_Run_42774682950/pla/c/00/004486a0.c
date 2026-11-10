/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004486a0; name: FUN_004486a0
 */


undefined8 FUN_004486a0(undefined8 param_1,undefined8 param_2,uint param_3,ulong param_4)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint uVar4;
  
  if (param_4 == 0) {
    uVar2 = FUN_0044ac20(param_1,param_2,param_3);
    return uVar2;
  }
  uVar4 = param_3 & ((int)param_3 >> 0x1f ^ 0xffffffffU);
  if (0 < (int)param_3) {
    do {
      iVar1 = FUN_00448a70(param_1,&DAT_038bdc00,1);
      if (iVar1 == 0) {
        return 0xffffffff;
      }
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  uVar3 = (param_4 & 0xf0000) - 0x10000 >> 0x10;
  if (uVar3 < 4) {
                    /* WARNING: Jumptable with 0 entries at 0x00448778 */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(&UNK_0044877c + (ulong)(byte)(&DAT_03a0be5c)[uVar3] * 4))();
    return uVar2;
  }
  return 0xffffffff;
}


