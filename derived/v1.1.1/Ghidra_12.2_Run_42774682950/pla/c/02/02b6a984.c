/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b6a984; name: FUN_02b6a984
 */


undefined1  [16] FUN_02b6a984(long param_1)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  puVar1 = (undefined8 *)FUN_02b6962c();
  fVar3 = (float)*puVar1;
  fVar4 = (float)((ulong)*puVar1 >> 0x20);
  fVar5 = (float)puVar1[1];
  fVar6 = (float)((ulong)puVar1[1] >> 0x20);
  auVar2._0_4_ = (float)*(undefined8 *)(param_1 + 0x410) * fVar3 +
                 (float)*(undefined8 *)(param_1 + 0x420) * fVar4 +
                 (float)*(undefined8 *)(param_1 + 0x430) * fVar5 +
                 (float)*(undefined8 *)(param_1 + 0x440) * fVar6;
  auVar2._4_4_ = (float)((ulong)*(undefined8 *)(param_1 + 0x410) >> 0x20) * fVar3 +
                 (float)((ulong)*(undefined8 *)(param_1 + 0x420) >> 0x20) * fVar4 +
                 (float)((ulong)*(undefined8 *)(param_1 + 0x430) >> 0x20) * fVar5 +
                 (float)((ulong)*(undefined8 *)(param_1 + 0x440) >> 0x20) * fVar6;
  auVar2._8_4_ = (float)*(undefined8 *)(param_1 + 0x418) * fVar3 +
                 (float)*(undefined8 *)(param_1 + 0x428) * fVar4 +
                 (float)*(undefined8 *)(param_1 + 0x438) * fVar5 +
                 (float)*(undefined8 *)(param_1 + 0x448) * fVar6;
  auVar2._12_4_ =
       (float)((ulong)*(undefined8 *)(param_1 + 0x418) >> 0x20) * fVar3 +
       (float)((ulong)*(undefined8 *)(param_1 + 0x428) >> 0x20) * fVar4 +
       (float)((ulong)*(undefined8 *)(param_1 + 0x438) >> 0x20) * fVar5 +
       (float)((ulong)*(undefined8 *)(param_1 + 0x448) >> 0x20) * fVar6;
  return auVar2;
}


