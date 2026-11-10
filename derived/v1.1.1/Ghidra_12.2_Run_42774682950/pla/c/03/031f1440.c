/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031f1440; name: FUN_031f1440
 */


void FUN_031f1440(long param_1,long param_2)

{
  float fVar1;
  float fVar3;
  undefined8 uVar2;
  float fVar4;
  undefined8 uVar5;
  
  fVar1 = (float)*(undefined8 *)(param_2 + 0x10) - (float)*(undefined8 *)(param_1 + 0x10);
  fVar3 = (float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20) -
          (float)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x20);
  fVar4 = (float)*(undefined8 *)(param_2 + 0x18) - (float)*(undefined8 *)(param_1 + 0x18);
  fVar1 = fVar1 * fVar1;
  fVar3 = fVar3 * fVar3;
  fVar4 = fVar4 * fVar4;
  uVar2 = CONCAT44(fVar1 + fVar3 + fVar4,fVar1 + fVar3 + fVar4);
  uVar5 = NEON_frsqrte(uVar2,4);
  fVar1 = (float)uVar5;
  fVar3 = (float)((ulong)uVar5 >> 0x20);
  uVar5 = NEON_frsqrts(uVar2,CONCAT44(fVar3 * fVar3,fVar1 * fVar1),4);
  fVar1 = fVar1 * (float)uVar5;
  fVar3 = fVar3 * (float)((ulong)uVar5 >> 0x20);
  NEON_frsqrts(uVar2,CONCAT44(fVar3 * fVar3,fVar1 * fVar1),4);
  return;
}


