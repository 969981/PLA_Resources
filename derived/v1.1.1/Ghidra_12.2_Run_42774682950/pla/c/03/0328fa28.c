/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0328fa28; name: FUN_0328fa28
 */


void FUN_0328fa28(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  float fVar5;
  undefined8 uVar6;
  
  uVar1 = CONCAT44(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 4));
  uVar4 = NEON_frecpe(uVar1,4);
  uVar6 = NEON_frecps(uVar1,uVar4,4);
  fVar3 = (float)uVar4 * (float)uVar6;
  fVar5 = (float)((ulong)uVar4 >> 0x20) * (float)((ulong)uVar6 >> 0x20);
  uVar4 = NEON_frecps(uVar1,CONCAT44(fVar5,fVar3),4);
  uVar1 = *param_2;
  fVar2 = (float)uVar1;
  *(float *)(param_1 + 4) = fVar2;
  fVar2 = fVar2 * fVar3 * (float)uVar4;
  fVar3 = (float)((ulong)uVar1 >> 0x20) * fVar5 * (float)((ulong)uVar4 >> 0x20);
  *(ulong *)(param_1 + 0x28) =
       CONCAT44(fVar3 * (float)((ulong)*(undefined8 *)(param_1 + 0x28) >> 0x20),
                fVar2 * (float)*(undefined8 *)(param_1 + 0x28));
  *(ulong *)(param_1 + 0x20) =
       CONCAT44(fVar3 * (float)((ulong)*(undefined8 *)(param_1 + 0x20) >> 0x20),
                fVar2 * (float)*(undefined8 *)(param_1 + 0x20));
  *(ulong *)(param_1 + 0x38) =
       CONCAT44(fVar3 * (float)((ulong)*(undefined8 *)(param_1 + 0x38) >> 0x20),
                fVar2 * (float)*(undefined8 *)(param_1 + 0x38));
  *(ulong *)(param_1 + 0x30) =
       CONCAT44(fVar3 * (float)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x20),
                fVar2 * (float)*(undefined8 *)(param_1 + 0x30));
  *(ulong *)(param_1 + 0x48) =
       CONCAT44(fVar3 * (float)((ulong)*(undefined8 *)(param_1 + 0x48) >> 0x20),
                fVar2 * (float)*(undefined8 *)(param_1 + 0x48));
  *(ulong *)(param_1 + 0x40) =
       CONCAT44(fVar3 * (float)((ulong)*(undefined8 *)(param_1 + 0x40) >> 0x20),
                fVar2 * (float)*(undefined8 *)(param_1 + 0x40));
  return;
}


