/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03045830; name: FUN_03045830
 */


undefined8 *
FUN_03045830(long *param_1,uint param_2,undefined8 *param_3,ulong param_4,uint *param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  uint uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong local_48;
  
  if (0x3fffffff < (int)param_2) {
    FUN_032bd0a8(param_2);
  }
  uVar6 = (*param_5 & 0x3fffffff) << 1;
  if (0x3ffffffe < uVar6) {
    uVar6 = 0x3fffffff;
  }
  if ((int)param_2 <= (int)uVar6) {
    param_2 = uVar6;
  }
  FUN_032bd100(param_2,0x30,*param_5,&local_48);
  uVar6 = *param_5;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,local_48,&local_48);
  if (0 < (int)param_4) {
    if ((int)param_4 == 1) {
      lVar7 = 0;
    }
    else {
      lVar7 = 0;
      puVar8 = param_3;
      puVar9 = puVar5;
      do {
        uVar2 = puVar8[1];
        lVar7 = lVar7 + 2;
        *puVar9 = *puVar8;
        puVar9[1] = uVar2;
        uVar2 = puVar8[2];
        uVar3 = puVar8[3];
        uVar4 = puVar8[5];
        puVar9[4] = puVar8[4];
        puVar9[5] = uVar4;
        puVar9[2] = uVar2;
        puVar9[3] = uVar3;
        uVar2 = puVar8[8];
        uVar3 = puVar8[9];
        uVar4 = puVar8[0xb];
        puVar9[10] = puVar8[10];
        puVar9[0xb] = uVar4;
        puVar9[8] = uVar2;
        puVar9[9] = uVar3;
        puVar1 = puVar8 + 6;
        uVar2 = puVar8[7];
        puVar8 = puVar8 + 0xc;
        puVar9[6] = *puVar1;
        puVar9[7] = uVar2;
        puVar9 = puVar9 + 0xc;
      } while ((param_4 & 0xffffffff) - (param_4 & 1) != lVar7);
    }
    if ((param_4 & 1) != 0) {
      puVar8 = param_3 + lVar7 * 6;
      puVar9 = puVar5 + lVar7 * 6;
      uVar2 = puVar8[1];
      *puVar9 = *puVar8;
      puVar9[1] = uVar2;
      uVar2 = puVar8[2];
      uVar3 = puVar8[3];
      uVar4 = puVar8[5];
      puVar9[4] = puVar8[4];
      puVar9[5] = uVar4;
      puVar9[2] = uVar2;
      puVar9[3] = uVar3;
    }
  }
  if (-1 < (int)uVar6) {
    (**(code **)(*param_1 + 0x18))(param_1,param_3,((ulong)uVar6 & 0x3fffffff) * 0x30);
  }
  uVar6 = 0x3fffffff;
  if (local_48 < 0xbffffffd0) {
    uVar6 = (uint)(local_48 / 0x30);
  }
  *param_5 = uVar6;
  return puVar5;
}


