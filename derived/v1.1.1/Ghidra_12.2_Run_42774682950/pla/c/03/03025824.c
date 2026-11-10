/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03025824; name: FUN_03025824
 */


undefined1  [16]
FUN_03025824(long param_1,ulong param_2,undefined8 *param_3,undefined8 *param_4,undefined8 *param_5,
            undefined8 *param_6)

{
  long lVar1;
  float fVar2;
  float fVar4;
  float fVar5;
  undefined1 auVar3 [16];
  
  lVar1 = param_1 + (param_2 & 0xff) * 0x20;
  fVar2 = (float)*(undefined8 *)(param_1 + 0x10) * ((float)*param_3 - (float)*param_5) +
          (float)*param_4 * (float)*(undefined8 *)(lVar1 + 0x40) +
          (float)*param_6 * (float)*(undefined8 *)(lVar1 + 0x50);
  fVar4 = (float)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x20) *
          ((float)((ulong)*param_3 >> 0x20) - (float)((ulong)*param_5 >> 0x20)) +
          (float)((ulong)*param_4 >> 0x20) * (float)((ulong)*(undefined8 *)(lVar1 + 0x40) >> 0x20) +
          (float)((ulong)*param_6 >> 0x20) * (float)((ulong)*(undefined8 *)(lVar1 + 0x50) >> 0x20);
  fVar5 = (float)*(undefined8 *)(param_1 + 0x18) * ((float)param_3[1] - (float)param_5[1]) +
          (float)param_4[1] * (float)*(undefined8 *)(lVar1 + 0x48) +
          (float)param_6[1] * (float)*(undefined8 *)(lVar1 + 0x58);
  auVar3._0_4_ = fVar2 + fVar4 + fVar5;
  auVar3._4_4_ = fVar2 + fVar4 + fVar5;
  auVar3._8_8_ = 0;
  return auVar3;
}


