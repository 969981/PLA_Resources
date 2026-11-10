/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e51048; name: FUN_02e51048
 */


long FUN_02e51048(long param_1,float *param_2)

{
  bool bVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  float fVar8;
  float fVar9;
  float local_50;
  float fStack_4c;
  float local_48;
  
  uVar2 = *(uint *)(param_1 + 0x30);
  if (uVar2 < 2) {
    if (uVar2 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = 0;
      if (*(char *)(**(long **)(param_1 + 0x28) + 0x690) != '\0') {
        lVar5 = **(long **)(param_1 + 0x28);
      }
    }
  }
  else {
    plVar3 = *(long **)(param_1 + 0x28);
    fVar9 = 3.4028235e+38;
    lVar4 = 0;
    plVar7 = plVar3;
    do {
      lVar6 = *plVar7;
      lVar5 = lVar4;
      if (*(char *)(lVar6 + 0x690) != '\0') {
        FUN_02e54328(&local_50,lVar6,param_2);
        plVar3 = *(long **)(param_1 + 0x28);
        fVar8 = (local_50 - *param_2) * (local_50 - *param_2) +
                (fStack_4c - param_2[1]) * (fStack_4c - param_2[1]) +
                (local_48 - param_2[2]) * (local_48 - param_2[2]);
        bVar1 = fVar9 <= fVar8;
        fVar9 = (float)NEON_fminnm(fVar8,fVar9);
        uVar2 = *(uint *)(param_1 + 0x30);
        lVar5 = lVar6;
        if (bVar1) {
          lVar5 = lVar4;
        }
      }
      plVar7 = plVar7 + 1;
      lVar4 = lVar5;
    } while (plVar7 != plVar3 + uVar2);
  }
  return lVar5;
}


