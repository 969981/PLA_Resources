/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0315161c; name: FUN_0315161c
 */


void FUN_0315161c(float param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  
  lVar1 = (**(code **)(**(long **)(param_2 + 0x28) + 0x38))();
  uVar5 = NEON_fmov(0x3f800000,4);
  lVar1 = *(long *)(lVar1 + 0x40) + (ulong)*(ushort *)(param_4 + 0x58) * 0x70;
  fVar4 = (float)uVar5 - param_1 * *(float *)(lVar1 + 0x1c);
  fVar2 = (float)uVar5 - param_1 * *(float *)(lVar1 + 0x18);
  uVar5 = NEON_fmax(CONCAT44(fVar2,fVar2),0,4);
  fVar2 = (float)((ulong)uVar5 >> 0x20);
  *(ulong *)(param_3 + 0x18) =
       CONCAT44(fVar2 * (float)((ulong)*(undefined8 *)(param_3 + 0x18) >> 0x20),
                (float)uVar5 * (float)*(undefined8 *)(param_3 + 0x18));
  *(ulong *)(param_3 + 0x10) =
       CONCAT44(fVar2 * (float)((ulong)*(undefined8 *)(param_3 + 0x10) >> 0x20),
                (float)uVar5 * (float)*(undefined8 *)(param_3 + 0x10));
  uVar5 = NEON_fmax(CONCAT44(fVar4,fVar4),0,4);
  fVar2 = (float)uVar5 * (float)*(undefined8 *)(param_3 + 0x20);
  fVar4 = (float)((ulong)uVar5 >> 0x20) * (float)((ulong)*(undefined8 *)(param_3 + 0x20) >> 0x20);
  fVar3 = (float)uVar5 * (float)*(undefined8 *)(param_3 + 0x28);
  *(ulong *)(param_3 + 0x28) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_3 + 0x68) >> 0x20) * fVar3 +
                (float)((ulong)*(undefined8 *)(param_3 + 0x48) >> 0x20) * fVar2 +
                (float)((ulong)*(undefined8 *)(param_3 + 0x58) >> 0x20) * fVar4,
                (float)*(undefined8 *)(param_3 + 0x68) * fVar3 +
                (float)*(undefined8 *)(param_3 + 0x48) * fVar2 +
                (float)*(undefined8 *)(param_3 + 0x58) * fVar4);
  *(ulong *)(param_3 + 0x20) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_3 + 0x60) >> 0x20) * fVar3 +
                (float)((ulong)*(undefined8 *)(param_3 + 0x40) >> 0x20) * fVar2 +
                (float)((ulong)*(undefined8 *)(param_3 + 0x50) >> 0x20) * fVar4,
                (float)*(undefined8 *)(param_3 + 0x60) * fVar3 +
                (float)*(undefined8 *)(param_3 + 0x40) * fVar2 +
                (float)*(undefined8 *)(param_3 + 0x50) * fVar4);
  return;
}


