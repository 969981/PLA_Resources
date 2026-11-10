/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02efcd10; name: FUN_02efcd10
 */


void FUN_02efcd10(uint param_1,long param_2,undefined8 param_3,undefined4 *param_4,float *param_5)

{
  ulong uVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float afStack_60 [4];
  float fStack_50;
  float local_4c;
  float fStack_48;
  float local_44;
  float local_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  
  uVar1 = (ulong)param_1;
  pfVar4 = afStack_60 + uVar1 * -4;
  param_1 = param_1 << 2;
  pfVar2 = pfVar4;
  do {
    pfVar3 = pfVar2 + 4;
    pfVar2[0] = 0.0;
    pfVar2[1] = 0.0;
    pfVar2[2] = 1.0;
    pfVar2[3] = 1.0;
    pfVar2 = pfVar3;
  } while (pfVar3 < pfVar4 + param_1);
  FUN_02f01290(*(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x1c),
               *(undefined4 *)(param_2 + 0x20),*param_4,param_4[1],param_4[2],param_3,afStack_60 + 3
              );
  if (param_1 != 0) {
    fVar5 = *pfVar4;
    fVar6 = afStack_60[uVar1 * -4 + 1];
    fVar7 = afStack_60[uVar1 * -4 + 2];
    *param_5 = fVar5 * afStack_60[3] + fVar6 * fStack_48 + fVar7 * fStack_3c;
    param_5[1] = fVar5 * fStack_50 + fVar6 * local_44 + fVar7 * local_38;
    param_5[2] = local_4c * fVar5 + fVar6 * local_40 + fVar7 * fStack_34;
    if (4 < param_1) {
      pfVar2 = afStack_60 + uVar1 * -4 + 4;
      pfVar3 = param_5 + 6;
      do {
        fVar5 = *pfVar2;
        fVar6 = pfVar2[1];
        fVar7 = pfVar2[2];
        pfVar2 = pfVar2 + 4;
        pfVar3[-2] = fVar5 * afStack_60[3] + fVar6 * fStack_48 + fVar7 * fStack_3c;
        pfVar3[-1] = fVar5 * fStack_50 + fVar6 * local_44 + fVar7 * local_38;
        *pfVar3 = local_4c * fVar5 + fVar6 * local_40 + fVar7 * fStack_34;
        pfVar3 = pfVar3 + 4;
      } while (pfVar2 < pfVar4 + param_1);
    }
  }
  return;
}


