/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002522c8; name: FUN_002522c8
 */


void FUN_002522c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  short *psVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  FUN_0028ee60();
  FUN_0025183c(param_1);
  FUN_0028ee68(param_1,param_4);
  iVar5 = FUN_0028ee3c(param_1);
  if (iVar5 != 2) {
    if (iVar5 != 1) {
                    /* WARNING: Subroutine does not return */
      nn::detail::UnexpectedDefaultImpl("","",0);
    }
    psVar6 = (short *)FUN_0028ede8();
    fVar10 = *(float *)(param_1 + 0x40);
    fVar11 = *(float *)(param_1 + 0x44);
    fVar12 = 2.0;
    if (fVar10 <= 1.0) {
      fVar12 = fVar10 + fVar10;
    }
    iVar5 = *(int *)(param_1 + 0x48);
    fVar10 = 2.0;
    if (fVar11 <= 1.0) {
      fVar10 = fVar11 + fVar11;
    }
    iVar1 = iVar5 + 1;
    if (iVar5 != -1) {
      sVar4 = (short)iVar5 + 2;
      while (iVar8 = 1, iVar1 != 1) {
        while (iVar8 != 0) {
          *psVar6 = 0;
          psVar6[1] = (short)iVar8;
          psVar6[2] = (short)iVar8 + 1;
          psVar6 = psVar6 + 3;
          iVar8 = iVar8 + 1;
          if (iVar1 == iVar8) goto LAB_002523c0;
        }
      }
LAB_002523c0:
      while (iVar8 = 1, iVar5 + 1 != 1) {
        while (iVar8 != 0) {
          sVar3 = sVar4 + (short)iVar8;
          psVar6[1] = sVar3;
          *psVar6 = sVar4;
          psVar6[2] = sVar3 + 1;
          psVar6 = psVar6 + 3;
          iVar8 = iVar8 + 1;
          if (iVar5 + 1 == iVar8) goto LAB_00252400;
        }
      }
LAB_00252400:
      while (iVar8 = 1, iVar1 != 1) {
        while (iVar8 != 0) {
          sVar3 = sVar4 * 2 + (short)iVar8;
          psVar6[1] = sVar3;
          *psVar6 = sVar4 * 2;
          psVar6[2] = sVar3 + 1;
          psVar6 = psVar6 + 3;
          iVar8 = iVar8 + 1;
          if (iVar1 == iVar8) goto LAB_00252440;
        }
      }
LAB_00252440:
      while (iVar8 = 1, iVar1 != 1) {
        while (iVar8 != 0) {
          sVar3 = sVar4 * 3 + (short)iVar8;
          psVar6[1] = sVar3;
          *psVar6 = sVar4 * 3;
          psVar6[2] = sVar3 + 1;
          psVar6 = psVar6 + 3;
          iVar8 = iVar8 + 1;
          if (iVar1 == iVar8) goto LAB_00252480;
        }
      }
    }
LAB_00252480:
    sVar3 = (short)iVar5 * 4;
    sVar4 = sVar3 + 8;
    if (fVar12 < 2.0) {
      *psVar6 = sVar4;
      psVar6[3] = sVar4;
      psVar6[5] = sVar3 + 9;
      psVar6[1] = sVar3 + 10;
      psVar6[2] = sVar3 + 0xb;
      psVar6[4] = sVar3 + 0xb;
      psVar6[6] = sVar3 + 0xc;
      psVar6[9] = sVar3 + 0xc;
      psVar6[7] = sVar3 + 0xf;
      psVar6[8] = sVar3 + 0xe;
      psVar6[10] = sVar3 + 0xd;
      sVar4 = sVar3 + 0x10;
      psVar6[0xb] = sVar3 + 0xf;
      psVar6 = psVar6 + 0xc;
    }
    if (fVar10 < 2.0) {
      *psVar6 = sVar4;
      psVar6[3] = sVar4;
      psVar6[1] = sVar4 + 1;
      psVar6[2] = sVar4 + 2;
      psVar6[4] = sVar4 + 2;
      psVar6[5] = sVar4 + 3;
      return;
    }
    return;
  }
  piVar7 = (int *)FUN_0028ede8();
  fVar10 = *(float *)(param_1 + 0x40);
  fVar11 = *(float *)(param_1 + 0x44);
  fVar12 = 2.0;
  if (fVar10 <= 1.0) {
    fVar12 = fVar10 + fVar10;
  }
  iVar5 = *(int *)(param_1 + 0x48);
  fVar10 = 2.0;
  if (fVar11 <= 1.0) {
    fVar10 = fVar11 + fVar11;
  }
  iVar1 = iVar5 + 1;
  if (iVar5 != -1) {
    iVar8 = iVar5 + 2;
    while (iVar9 = 1, iVar1 != 1) {
      while (iVar9 != 0) {
        *piVar7 = 0;
        piVar7[1] = iVar9;
        iVar9 = iVar9 + 1;
        piVar7[2] = iVar9;
        piVar7 = piVar7 + 3;
        if (iVar9 == iVar1) goto LAB_002525b0;
      }
    }
LAB_002525b0:
    do {
      iVar9 = 1;
      if (iVar1 == 1) goto LAB_002525e4;
      while (iVar9 != 0) {
        *piVar7 = iVar8;
        piVar7[1] = iVar1 + iVar9 + 1;
        piVar7[2] = iVar1 + iVar9 + 2;
        piVar7 = piVar7 + 3;
        iVar9 = iVar9 + 1;
        if (iVar1 == iVar9) goto LAB_002525e4;
      }
    } while( true );
  }
LAB_0025266c:
  iVar5 = iVar5 * 4;
  iVar1 = iVar5 + 8;
  if (fVar12 < 2.0) {
    *piVar7 = iVar1;
    piVar7[1] = iVar5 + 10;
    piVar7[2] = iVar5 + 0xb;
    piVar7[3] = iVar1;
    piVar7[4] = iVar5 + 0xb;
    piVar7[5] = iVar5 + 9;
    piVar7[6] = iVar5 + 0xc;
    piVar7[7] = iVar5 + 0xf;
    piVar7[8] = iVar5 + 0xe;
    piVar7[9] = iVar5 + 0xc;
    piVar7[10] = iVar5 + 0xd;
    piVar7[0xb] = iVar5 + 0xf;
    piVar7 = piVar7 + 0xc;
    iVar1 = iVar5 + 0x10;
  }
  if (fVar10 < 2.0) {
    *piVar7 = iVar1;
    piVar7[1] = iVar1 + 1;
    piVar7[2] = iVar1 + 2;
    piVar7[3] = iVar1;
    piVar7[4] = iVar1 + 2;
    piVar7[5] = iVar1 + 3;
    return;
  }
  return;
LAB_002525e4:
  while (iVar9 = 1, iVar1 != 1) {
    while (iVar9 != 0) {
      iVar2 = iVar8 * 2 + -4 + iVar9;
      *piVar7 = iVar8 * 2;
      piVar7[1] = iVar2 + 4;
      piVar7[2] = iVar2 + 5;
      piVar7 = piVar7 + 3;
      iVar9 = iVar9 + 1;
      if (iVar1 == iVar9) goto LAB_00252628;
    }
  }
LAB_00252628:
  while (iVar9 = 1, iVar1 != 1) {
    while (iVar9 != 0) {
      iVar2 = iVar8 * 3 + -6 + iVar9;
      *piVar7 = iVar8 * 3;
      piVar7[1] = iVar2 + 6;
      piVar7[2] = iVar2 + 7;
      piVar7 = piVar7 + 3;
      iVar9 = iVar9 + 1;
      if (iVar1 == iVar9) goto LAB_0025266c;
    }
  }
  goto LAB_0025266c;
}


