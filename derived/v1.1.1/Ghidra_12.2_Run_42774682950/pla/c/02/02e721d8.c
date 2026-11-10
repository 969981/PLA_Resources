/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e721d8; name: FUN_02e721d8
 */


void FUN_02e721d8(long param_1,undefined4 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = *(float *)(param_1 + 0x100);
  if ((((*(float *)(param_1 + 0x110) == fVar5) &&
       (*(float *)(param_1 + 0x114) == *(float *)(param_1 + 0x104))) &&
      (*(float *)(param_1 + 0x118) == *(float *)(param_1 + 0x108))) &&
     ((((*(byte *)(param_1 + 0x10c) ^ *(byte *)(param_1 + 0x11c)) & 0xf) == 0 &&
      ((*(byte *)(param_3 + 0x168) >> 1 & 1) == 0)))) {
    lVar2 = ((ulong)(*(byte *)(*(long *)(param_3 + 0x58) + 0x80) + 3) & 0x1fc) *
            (ulong)*(byte *)(param_3 + 0x150);
    if ((int)lVar2 == 0) {
      return;
    }
    memcpy(*(void **)(param_3 + 0x30),*(void **)(param_3 + 0x38),lVar2 * 4);
    return;
  }
  uVar1 = FUN_02eca560(*(long *)(param_3 + 0x58) + 0x68);
  fVar3 = fVar5 * 0.005 + 0.5;
  fVar5 = 1.0;
  if (fVar3 <= 1.0) {
    fVar5 = fVar3;
  }
  fVar4 = 0.0;
  if (0.0 <= fVar3) {
    fVar4 = fVar5;
  }
  fVar3 = *(float *)(param_1 + 0x104) * 0.005 + 0.5;
  fVar5 = 0.0;
  if ((0.0 <= fVar3) && (fVar5 = 1.0, fVar3 <= 1.0)) {
    fVar5 = fVar3;
  }
  FUN_02efd104(fVar4,fVar5,*(float *)(param_1 + 0x108) * 0.01,*(byte *)(param_1 + 0x10c) & 7,param_2
               ,*(undefined4 *)(*(long *)(param_3 + 0x58) + 0x80),*(undefined8 *)(param_3 + 0x30),
               uVar1);
  return;
}


