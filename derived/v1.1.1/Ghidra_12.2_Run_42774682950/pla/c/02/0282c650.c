/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0282c650; name: FUN_0282c650
 */


undefined1  [16] FUN_0282c650(int *param_1,int *param_2,int param_3)

{
  float fVar1;
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar10 = (float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20);
  fVar1 = (float)(uint)(param_3 - *param_1) / (float)(uint)(*param_2 - *param_1);
  fVar5 = (float)*(undefined8 *)(param_1 + 8);
  fVar9 = (float)*(undefined8 *)(param_2 + 8);
  fVar3 = (float)*(undefined8 *)(param_1 + 4);
  fVar11 = fVar3 - (float)*(undefined8 *)(param_2 + 4);
  fVar6 = (float)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20);
  fVar4 = (float)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20);
  fVar12 = fVar4 - (float)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20);
  fVar8 = (float)*(undefined8 *)(param_1 + 6) - (float)*(undefined8 *)(param_2 + 6);
  fVar7 = (float)*(undefined8 *)(param_1 + 10);
  auVar2._4_4_ = fVar4 + fVar1 * (fVar6 + fVar1 * (((fVar6 * -2.0 - fVar10) - fVar12 * 3.0) +
                                                  fVar1 * (fVar6 + fVar10 + fVar12 + fVar12)));
  auVar2._0_4_ = fVar3 + fVar1 * (fVar5 + fVar1 * (((fVar5 * -2.0 - fVar9) - fVar11 * 3.0) +
                                                  fVar1 * (fVar5 + fVar9 + fVar11 + fVar11)));
  auVar2._8_4_ = (float)*(undefined8 *)(param_1 + 6) +
                 fVar1 * (fVar7 + fVar1 * (((fVar7 * -2.0 - (float)*(undefined8 *)(param_2 + 10)) -
                                           fVar8 * 3.0) +
                                          fVar1 * (fVar7 + (float)*(undefined8 *)(param_2 + 10) +
                                                  fVar8 + fVar8)));
  auVar2._12_4_ = 0;
  return auVar2;
}


