/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03341040; name: FUN_03341040
 */


void FUN_03341040(char *param_1,float *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  
  fVar5 = *param_2;
  if (fVar5 < 0.0099983215) {
    *param_1 = '\0';
    return;
  }
  uVar2 = 0;
  iVar3 = 6;
  uVar1 = 0x80;
  uVar4 = 0x100;
  do {
    fVar6 = (float)((uint)*(ushort *)(&DAT_03ab05f0 + (long)(int)uVar1 * 2) * 0x1000 + 0x3b800000);
    do {
      if (iVar3 < 0) {
        *param_1 = (char)uVar1 + (uVar1 < 0xff && fVar6 < fVar5);
        return;
      }
      if (fVar5 <= fVar6) {
        uVar4 = uVar1;
        uVar1 = uVar2;
      }
      uVar2 = uVar1;
      uVar1 = (int)(uVar2 + uVar4) >> 1;
      iVar3 = iVar3 + -1;
      fVar6 = 0.0;
    } while (uVar1 == 0);
  } while( true );
}


