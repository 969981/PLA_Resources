/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032a895c; name: FUN_032a895c
 */


undefined4 FUN_032a895c(undefined4 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  
  if ((DAT_04440330 & 1) == 0) {
    FUN_032a7194();
  }
  lVar1 = DAT_044402e8;
  iVar5 = (int)((ulong)(param_3 - param_2) >> 2);
  if (iVar5 == 0) {
    uVar4 = 0;
  }
  else {
    fVar8 = 3.40282e+38;
    iVar6 = 0;
    uVar3 = 0;
    do {
      uVar4 = *(undefined4 *)(param_2 + (long)iVar6 * 4);
      lVar2 = FUN_032ad970(param_1,uVar4);
      if (lVar2 == 0) {
        fVar7 = 3.40282e+38;
      }
      else {
        fVar7 = *(float *)(lVar1 + (long)*(int *)(lVar2 + 4) * 0x20 + 0x1c);
      }
      if (fVar8 <= fVar7) {
        uVar4 = uVar3;
        fVar7 = fVar8;
      }
      fVar8 = fVar7;
      iVar6 = iVar6 + 1;
      uVar3 = uVar4;
    } while (iVar5 != iVar6);
  }
  return uVar4;
}


