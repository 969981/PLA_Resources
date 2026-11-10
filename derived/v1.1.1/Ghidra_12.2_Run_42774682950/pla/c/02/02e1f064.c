/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e1f064; name: FUN_02e1f064
 */


void FUN_02e1f064(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_02e1ef94();
  uVar2 = *param_2;
  uVar3 = *param_5;
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  uVar4 = *param_3;
  uVar5 = *param_4;
  puVar1[1] = CONCAT44((((float)((ulong)puVar1[1] >> 0x20) +
                        (float)((ulong)param_2[1] >> 0x20) + (float)((ulong)param_5[1] >> 0x20)) -
                       (float)((ulong)param_3[1] >> 0x20)) - (float)((ulong)param_4[1] >> 0x20),
                       (((float)puVar1[1] + (float)param_2[1] + (float)param_5[1]) -
                       (float)param_3[1]) - (float)param_4[1]);
  *puVar1 = CONCAT44((((float)((ulong)*puVar1 >> 0x20) +
                      (float)((ulong)uVar2 >> 0x20) + (float)((ulong)uVar3 >> 0x20)) -
                     (float)((ulong)uVar4 >> 0x20)) - (float)((ulong)uVar5 >> 0x20),
                     (((float)*puVar1 + (float)uVar2 + (float)uVar3) - (float)uVar4) - (float)uVar5)
  ;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  return;
}


