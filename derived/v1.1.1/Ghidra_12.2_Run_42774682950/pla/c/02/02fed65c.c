/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fed65c; name: FUN_02fed65c
 */


void FUN_02fed65c(undefined1 *param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  
  *param_1 = 1;
  puVar1 = *(undefined8 **)(param_2 + 8);
  uVar2 = *puVar1;
  uVar3 = puVar1[2];
  fVar5 = (float)((ulong)*param_3 >> 0x20);
  fVar4 = (float)*param_3;
  uVar7 = puVar1[4];
  fVar6 = (float)param_3[1];
  *(ulong *)(param_1 + 0x18) =
       CONCAT44((float)((ulong)puVar1[5] >> 0x20) * fVar6 +
                (float)((ulong)puVar1[1] >> 0x20) * fVar4 +
                (float)((ulong)puVar1[3] >> 0x20) * fVar5,
                (float)puVar1[5] * fVar6 + (float)puVar1[1] * fVar4 + (float)puVar1[3] * fVar5);
  *(ulong *)(param_1 + 0x10) =
       CONCAT44((float)((ulong)uVar7 >> 0x20) * fVar6 +
                (float)((ulong)uVar2 >> 0x20) * fVar4 + (float)((ulong)uVar3 >> 0x20) * fVar5,
                (float)uVar7 * fVar6 + (float)uVar2 * fVar4 + (float)uVar3 * fVar5);
  puVar1 = *(undefined8 **)(param_2 + 8);
  uVar7 = puVar1[4];
  uVar2 = *puVar1;
  uVar3 = puVar1[2];
  fVar5 = (float)((ulong)*param_4 >> 0x20);
  fVar4 = (float)*param_4;
  fVar6 = (float)param_4[1];
  *(ulong *)(param_1 + 0x28) =
       CONCAT44((float)((ulong)puVar1[5] >> 0x20) * fVar6 +
                (float)((ulong)puVar1[1] >> 0x20) * fVar4 +
                (float)((ulong)puVar1[3] >> 0x20) * fVar5,
                (float)puVar1[5] * fVar6 + (float)puVar1[1] * fVar4 + (float)puVar1[3] * fVar5);
  *(ulong *)(param_1 + 0x20) =
       CONCAT44((float)((ulong)uVar7 >> 0x20) * fVar6 +
                (float)((ulong)uVar2 >> 0x20) * fVar4 + (float)((ulong)uVar3 >> 0x20) * fVar5,
                (float)uVar7 * fVar6 + (float)uVar2 * fVar4 + (float)uVar3 * fVar5);
  return;
}


