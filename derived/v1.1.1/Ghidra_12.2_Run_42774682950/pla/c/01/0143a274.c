/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0143a274; name: FUN_0143a274
 */


void FUN_0143a274(float param_1,long param_2,uint param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (**(char **)(param_2 + 0x88) == '\0') {
    return;
  }
  lVar1 = param_2 + 0x80;
  FUN_0283b1e8(*(undefined8 *)(param_2 + 0x58),lVar1);
  fVar2 = (float)FUN_0283b914(*(undefined8 *)(param_2 + 0x58),lVar1);
  fVar4 = (float)param_3;
  if ((param_1 < fVar4) || (*(char *)(param_2 + 0xe0) == '\0')) {
    fVar3 = (float)(uint)(int)fVar2;
    fVar5 = fVar3;
    if (param_3 != 0) {
      fVar5 = (fVar3 * param_1) / fVar4;
      if ((0.0 < param_1) && (fVar5 < 1.0)) {
        fVar5 = 1.0;
      }
      if ((param_1 < fVar4) && (fVar3 <= fVar5)) {
        fVar5 = fVar5 + -1.0;
      }
    }
    if (fVar2 - fVar5 <= fVar2) {
      fVar2 = fVar2 - fVar5;
    }
    if (fVar2 <= 0.0) {
      fVar2 = 0.0;
    }
  }
  FUN_0283b748(fVar2,*(undefined8 *)(param_2 + 0x58),lVar1);
  return;
}


