/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030ff24c; name: FUN_030ff24c
 */


undefined8 *
FUN_030ff24c(long *param_1,uint param_2,undefined8 *param_3,ulong param_4,uint *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong local_48;
  
  if (0x3fffffff < (int)param_2) {
    FUN_032bd0a8(param_2);
  }
  uVar4 = (*param_5 & 0x3fffffff) << 1;
  if (0x3ffffffe < uVar4) {
    uVar4 = 0x3fffffff;
  }
  if ((int)param_2 <= (int)uVar4) {
    param_2 = uVar4;
  }
  FUN_032bd100(param_2,0x30,*param_5,&local_48);
  uVar4 = *param_5;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,local_48,&local_48);
  if (0 < (int)param_4) {
    if ((int)param_4 == 1) {
      lVar5 = 0;
    }
    else {
      lVar5 = 0;
      puVar7 = param_3;
      puVar8 = puVar3;
      do {
        uVar6 = puVar7[5];
        lVar5 = lVar5 + 2;
        puVar8[3] = puVar7[3];
        puVar8[5] = uVar6;
        puVar8[1] = puVar7[1];
        *puVar8 = *puVar7;
        uVar6 = puVar7[2];
        puVar8[4] = puVar7[4];
        puVar8[2] = uVar6;
        puVar8[7] = puVar7[7];
        uVar6 = puVar7[8];
        uVar1 = puVar7[9];
        uVar2 = puVar7[0xb];
        puVar8[10] = puVar7[10];
        puVar8[0xb] = uVar2;
        puVar8[8] = uVar6;
        puVar8[9] = uVar1;
        puVar8[6] = puVar7[6];
        puVar8 = puVar8 + 0xc;
        puVar7 = puVar7 + 0xc;
      } while ((param_4 & 0xffffffff) - (param_4 & 1) != lVar5);
    }
    if ((param_4 & 1) != 0) {
      puVar8 = puVar3 + lVar5 * 6;
      puVar7 = param_3 + lVar5 * 6;
      uVar6 = puVar7[5];
      puVar8[3] = puVar7[3];
      puVar8[5] = uVar6;
      puVar8[1] = puVar7[1];
      *puVar8 = *puVar7;
      uVar6 = puVar7[2];
      puVar8[4] = puVar7[4];
      puVar8[2] = uVar6;
    }
  }
  if (-1 < (int)uVar4) {
    (**(code **)(*param_1 + 0x18))(param_1,param_3,((ulong)uVar4 & 0x3fffffff) * 0x30);
  }
  uVar4 = 0x3fffffff;
  if (local_48 < 0xbffffffd0) {
    uVar4 = (uint)(local_48 / 0x30);
  }
  *param_5 = uVar4;
  return puVar3;
}


