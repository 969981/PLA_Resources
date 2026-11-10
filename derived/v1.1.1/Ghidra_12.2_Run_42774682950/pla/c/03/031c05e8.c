/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031c05e8; name: FUN_031c05e8
 */


void FUN_031c05e8(long param_1,ushort *param_2,undefined8 *param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  float fVar5;
  undefined8 uVar6;
  
  fVar2 = (float)NEON_ucvtf((uint)*param_2);
  fVar5 = (float)NEON_ucvtf((uint)param_2[1]);
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x38);
  fVar3 = (float)NEON_ucvtf((uint)param_2[2]);
  uVar4 = *(undefined8 *)(lVar1 + 0x90);
  uVar6 = *(undefined8 *)(lVar1 + 0xa0);
  param_3[1] = CONCAT44((float)((ulong)*(undefined8 *)(lVar1 + 0xa8) >> 0x20) +
                        (float)((ulong)*(undefined8 *)(lVar1 + 0x98) >> 0x20) * 0.0,
                        (float)*(undefined8 *)(lVar1 + 0xa8) +
                        (float)*(undefined8 *)(lVar1 + 0x98) * fVar3);
  *param_3 = CONCAT44((float)((ulong)uVar6 >> 0x20) + (float)((ulong)uVar4 >> 0x20) * fVar5,
                      (float)uVar6 + (float)uVar4 * fVar2);
  FUN_03159c80(param_1 + 0x40,param_3);
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  param_3[1] = CONCAT44((float)((ulong)param_3[1] >> 0x20) +
                        (float)((ulong)*(undefined8 *)(param_1 + 0x58) >> 0x20),
                        (float)param_3[1] + (float)*(undefined8 *)(param_1 + 0x58));
  *param_3 = CONCAT44((float)((ulong)*param_3 >> 0x20) + (float)((ulong)uVar4 >> 0x20),
                      (float)*param_3 + (float)uVar4);
  return;
}


