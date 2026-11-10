/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032a7878; name: FUN_032a7878
 */


void FUN_032a7878(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = (float)FUN_032b5484(*(undefined4 *)(param_2 + 1));
  fVar4 = (float)FUN_032b5484(*(undefined4 *)((long)param_2 + 0xc));
  if (fVar4 < fVar3) {
    fVar3 = (float)FUN_032b5484(*(undefined4 *)(param_3 + 8));
    fVar4 = (float)FUN_032b5484(*(undefined4 *)(param_3 + 0xc));
    if (fVar3 < fVar4) {
      param_1[2] = 0x7f7fffee00000000;
      *param_1 = 0;
      param_1[1] = 0;
      return;
    }
  }
  fVar3 = *(float *)((long)param_2 + 0x14);
  fVar4 = *(float *)(param_3 + 0x14);
  uVar1 = param_2[1];
  uVar2 = *(undefined4 *)(param_2 + 2);
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined4 *)(param_1 + 2) = uVar2;
  *(float *)((long)param_1 + 0x14) = fVar3 + fVar4;
  return;
}


