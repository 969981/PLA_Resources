/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025e9444; name: FUN_025e9444
 */


void FUN_025e9444(float param_1,long param_2,uint param_3,uint *param_4)

{
  ulong uVar1;
  long lVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  
  lVar2 = *(long *)(param_2 + 0x1f8);
  if ((lVar2 != 0) &&
     ((uVar1 = *(ulong *)(param_2 + 600) & 0xf, uVar1 == 0 || ((~*param_4 & uVar1) == 0)))) {
    fVar5 = *(float *)(lVar2 + 0x6c) - *(float *)(lVar2 + 0x68);
    if ((fVar5 < *(float *)(param_2 + 0x20c)) ||
       (fVar4 = (float)FUN_025e974c(), fVar5 < fVar4 + -1.0)) {
      if (param_1 < 1.1920929e-07) {
        return;
      }
    }
    else {
      fVar4 = (float)FUN_025e974c();
      if (param_1 < 1.1920929e-07) {
        return;
      }
      if (fVar4 <= fVar5) {
        return;
      }
    }
    lVar2 = *(long *)(param_2 + 0x1f8);
    *(undefined4 *)(param_2 + 0x21c) = 0;
    fVar5 = *(float *)(lVar2 + 0x68);
    if (((param_3 & 1) == 0) ||
       (((fVar5 <= 1.0 || (1.0 <= fVar5 - param_1)) && (*(char *)(param_2 + 0x278) == '\0')))) {
      fVar5 = fVar5 - param_1;
      fVar4 = *(float *)(lVar2 + 0x6c);
      if (fVar5 <= *(float *)(lVar2 + 0x6c)) {
        fVar4 = fVar5;
      }
      *(undefined1 *)(lVar2 + 0x70) = 1;
      if (fVar5 < 0.0) {
        fVar4 = 0.0;
      }
      *(float *)(lVar2 + 0x68) = fVar4;
    }
    else {
      uVar3 = NEON_fminnm(*(undefined4 *)(lVar2 + 0x6c),0x3f800000);
      *(undefined1 *)(lVar2 + 0x70) = 1;
      *(undefined4 *)(lVar2 + 0x68) = uVar3;
      *(undefined1 *)(param_2 + 0x278) = 1;
    }
  }
  return;
}


