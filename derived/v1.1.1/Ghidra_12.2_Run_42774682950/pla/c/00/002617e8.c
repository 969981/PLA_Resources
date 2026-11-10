/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002617e8; name: FUN_002617e8
 */


void FUN_002617e8(undefined8 param_1,undefined8 param_2,float *param_3,float *param_4,long param_5,
                 long param_6)

{
  byte bVar1;
  ulong uVar2;
  char *pcVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  uVar2 = (ulong)*(ushort *)(param_6 + 2);
  if (*(ushort *)(param_6 + 2) < *(ushort *)(param_5 + 0x10)) {
    fVar6 = 0.0;
    fVar4 = 1.0;
    pcVar3 = *(char **)(*(long *)(param_5 + 0x18) + uVar2 * 8);
    bVar1 = pcVar3[1];
    while( true ) {
      if ((((bVar1 & 1) == 0) && (*pcVar3 == '\x02')) && ((*(byte *)(param_6 + 4) >> 2 & 1) != 0)) {
        fVar5 = (float)FUN_0025ae80(param_1,pcVar3 + 8);
        fVar7 = fVar6 + (fVar4 - fVar6) * fVar5;
        fVar5 = (float)FUN_0025ae80(param_1,pcVar3 + 0x18);
        fVar5 = fVar6 + (fVar4 - fVar6) * fVar5;
        fVar6 = fVar5;
        fVar4 = fVar7;
        if (fVar7 <= fVar5) {
          fVar6 = fVar7;
          fVar4 = fVar5;
        }
        if (fVar4 - fVar6 < 1.0) {
          fVar5 = (float)FUN_0025ae80(param_1,pcVar3 + 0x28);
          if (1.0 < fVar5) {
            fVar5 = fVar5 - (float)(int)fVar5;
          }
          fVar7 = fVar5 + 1.0;
          if (0.0 <= fVar5) {
            fVar7 = fVar5;
          }
          fVar6 = fVar6 + fVar7;
          fVar4 = fVar4 + fVar7;
          if (1.0 < fVar6) {
            fVar6 = 1.0;
          }
          if (1.0 < fVar4) {
            fVar4 = 1.0;
          }
        }
      }
      uVar2 = uVar2 + 1;
      if (*(ushort *)(param_5 + 0x10) <= uVar2) break;
      pcVar3 = *(char **)(*(long *)(param_5 + 0x18) + uVar2 * 8);
      bVar1 = pcVar3[1];
    }
  }
  else {
    fVar6 = 0.0;
    fVar4 = 1.0;
  }
  *param_3 = fVar6;
  *param_4 = fVar4;
  return;
}


