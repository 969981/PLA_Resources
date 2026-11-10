/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031006dc; name: FUN_031006dc
 */


undefined8 *
FUN_031006dc(long *param_1,uint param_2,undefined8 *param_3,ulong param_4,uint *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong local_48;
  
  if (0x3fffffff < (int)param_2) {
    FUN_032bd0a8(param_2);
  }
  uVar5 = (*param_5 & 0x3fffffff) << 1;
  if (0x3ffffffe < uVar5) {
    uVar5 = 0x3fffffff;
  }
  if ((int)param_2 <= (int)uVar5) {
    param_2 = uVar5;
  }
  FUN_032bd100(param_2,0x28,*param_5,&local_48);
  uVar5 = *param_5;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,local_48,&local_48);
  if (0 < (int)param_4) {
    if ((int)param_4 == 1) {
      lVar6 = 0;
    }
    else {
      lVar6 = 0;
      puVar7 = param_3;
      puVar8 = puVar4;
      do {
        *puVar8 = *puVar7;
        lVar6 = lVar6 + 2;
        uVar1 = puVar7[1];
        uVar2 = puVar7[2];
        uVar3 = puVar7[4];
        puVar8[3] = puVar7[3];
        puVar8[4] = uVar3;
        puVar8[1] = uVar1;
        puVar8[2] = uVar2;
        uVar1 = puVar7[6];
        uVar2 = puVar7[7];
        uVar3 = puVar7[9];
        puVar8[8] = puVar7[8];
        puVar8[9] = uVar3;
        puVar8[6] = uVar1;
        puVar8[7] = uVar2;
        puVar8[5] = puVar7[5];
        puVar8 = puVar8 + 10;
        puVar7 = puVar7 + 10;
      } while ((param_4 & 0xffffffff) - (param_4 & 1) != lVar6);
    }
    if ((param_4 & 1) != 0) {
      puVar8 = param_3 + lVar6 * 5;
      puVar7 = puVar4 + lVar6 * 5;
      *puVar7 = *puVar8;
      uVar1 = puVar8[1];
      uVar2 = puVar8[2];
      uVar3 = puVar8[4];
      puVar7[3] = puVar8[3];
      puVar7[4] = uVar3;
      puVar7[1] = uVar1;
      puVar7[2] = uVar2;
    }
  }
  if (-1 < (int)uVar5) {
    (**(code **)(*param_1 + 0x18))(param_1,param_3,((ulong)uVar5 & 0x3fffffff) * 0x28);
  }
  uVar5 = 0x3fffffff;
  if (local_48 < 0x9ffffffd8) {
    uVar5 = (uint)(local_48 / 0x28);
  }
  *param_5 = uVar5;
  return puVar4;
}


