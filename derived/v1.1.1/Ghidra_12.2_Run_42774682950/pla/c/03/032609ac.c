/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032609ac; name: FUN_032609ac
 */


undefined8 *
FUN_032609ac(long *param_1,uint param_2,undefined8 *param_3,ulong param_4,uint *param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong local_48;
  
  if (0x3fffffff < (int)param_2) {
    FUN_032bd0a8(param_2);
  }
  uVar3 = (*param_5 & 0x3fffffff) << 1;
  if (0x3ffffffe < uVar3) {
    uVar3 = 0x3fffffff;
  }
  if ((int)param_2 <= (int)uVar3) {
    param_2 = uVar3;
  }
  FUN_032bd100(param_2,0x18,*param_5,&local_48);
  uVar3 = *param_5;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,local_48,&local_48);
  if (0 < (int)param_4) {
    if ((int)param_4 == 1) {
      lVar5 = 0;
    }
    else {
      lVar5 = 0;
      puVar6 = param_3;
      puVar7 = puVar2;
      do {
        uVar1 = *puVar6;
        lVar5 = lVar5 + 2;
        uVar4 = puVar6[2];
        puVar7[1] = puVar6[1];
        puVar7[2] = uVar4;
        *puVar7 = uVar1;
        uVar1 = puVar6[3];
        uVar4 = puVar6[5];
        puVar7[4] = puVar6[4];
        puVar7[5] = uVar4;
        puVar7[3] = uVar1;
        puVar7 = puVar7 + 6;
        puVar6 = puVar6 + 6;
      } while ((param_4 & 0xffffffff) - (param_4 & 1) != lVar5);
    }
    if ((param_4 & 1) != 0) {
      puVar7 = puVar2 + lVar5 * 3;
      puVar6 = param_3 + lVar5 * 3;
      uVar1 = *puVar6;
      uVar4 = puVar6[2];
      puVar7[1] = puVar6[1];
      puVar7[2] = uVar4;
      *puVar7 = uVar1;
    }
  }
  if (-1 < (int)uVar3) {
    (**(code **)(*param_1 + 0x18))(param_1,param_3,((ulong)uVar3 & 0x3fffffff) * 0x18);
  }
  uVar3 = 0x3fffffff;
  if (local_48 < 0x5ffffffe8) {
    uVar3 = (uint)(local_48 / 0x18);
  }
  *param_5 = uVar3;
  return puVar2;
}


