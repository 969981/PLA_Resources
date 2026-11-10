/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0024ef5c; name: FUN_0024ef5c
 */


void FUN_0024ef5c(long param_1,float *param_2)

{
  ushort uVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  
  if (*(float *)(param_1 + 0xf8) == *param_2) {
    uVar1 = (ushort)(*(float *)(param_1 + 0xfc) != param_2[1]);
  }
  else {
    uVar1 = 1;
  }
  *(ushort *)(param_1 + 0x114) =
       *(ushort *)(param_1 + 0x114) & 0xfffb | (*(ushort *)(param_1 + 0x114) >> 2 & 1 | uVar1) << 2;
  if (uVar1 != 0) {
    if (*(float *)(param_1 + 0xfc) == 0.0) {
      *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)param_2;
      return;
    }
    fVar3 = *(float *)(param_1 + 0xf8) / *(float *)(param_1 + 0xfc);
    uVar2 = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 0xf8) = uVar2;
    fVar4 = (float)((ulong)uVar2 >> 0x20) / (float)uVar2;
    *(float *)(param_1 + 0x118) = fVar3 * *(float *)(param_1 + 0x118) * fVar4;
    *(float *)(param_1 + 0x134) = fVar3 * *(float *)(param_1 + 0x134) * fVar4;
  }
  return;
}


