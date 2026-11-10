/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f2aa1c; name: FUN_02f2aa1c
 */


void FUN_02f2aa1c(float param_1,long param_2,long *param_3)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  float fVar4;
  
  bVar1 = *(byte *)(param_3 + 1);
  if (param_1 <= 0.0) {
    if (bVar1 != 0) {
      memset(*(void **)(param_2 + 0x10),0,(ulong)bVar1 << 2);
      return;
    }
  }
  else {
    uVar2 = 0;
    do {
      lVar3 = uVar2 * 4;
      fVar4 = (float)FUN_02f2b120(*param_3 + lVar3 * (ulong)*(ushort *)(param_3 + 2));
      uVar2 = uVar2 + 1;
      *(float *)(*(long *)(param_2 + 0x10) + lVar3) = param_1 * 1.0009619 * fVar4;
    } while (uVar2 < bVar1);
  }
  return;
}


