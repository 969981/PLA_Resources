/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004119c0; name: FUN_004119c0
 */


undefined8 FUN_004119c0(long *param_1,long *param_2,undefined8 *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  long lVar11;
  int iVar12;
  
  iVar4 = (int)param_2[1];
  iVar3 = *(int *)(param_3 + 1);
  iVar12 = iVar4 - iVar3;
  if (iVar12 < 0) {
    FUN_004014b0(3,0x73,100,"external/openssl/crypto/bn/bn_add.c",0x8b);
    uVar7 = 0;
  }
  else {
    lVar6 = FUN_0040c660(param_1,iVar4);
    uVar7 = 0;
    if (lVar6 != 0) {
      lVar11 = *param_2;
      lVar6 = *param_1;
      uVar5 = FUN_0040f430(lVar6,lVar11,*param_3,iVar3);
      piVar9 = (int *)(lVar6 + (long)iVar3 * 4);
      piVar8 = piVar9;
      if (iVar12 != 0) {
        piVar1 = (int *)(lVar11 + (long)iVar3 * 4);
        piVar10 = piVar1;
        if ((iVar4 - iVar3 & 1U) != 0) {
          piVar10 = piVar1 + 1;
          iVar2 = *piVar1;
          iVar12 = iVar12 + -1;
          piVar8 = piVar9 + 1;
          *piVar9 = iVar2 - uVar5;
          uVar5 = uVar5 & iVar2 == 0;
        }
        piVar9 = piVar8;
        if (iVar4 != iVar3 + 1) {
          do {
            iVar3 = *piVar10;
            *piVar9 = iVar3 - uVar5;
            iVar2 = piVar10[1];
            uVar5 = uVar5 & iVar3 == 0;
            piVar8 = piVar9 + 2;
            piVar9[1] = iVar2 - uVar5;
            iVar12 = iVar12 + -2;
            piVar10 = piVar10 + 2;
            uVar5 = uVar5 & iVar2 == 0;
            piVar9 = piVar8;
          } while (iVar12 != 0);
        }
      }
      while ((iVar4 != 0 && (piVar8[-1] == 0))) {
        iVar4 = iVar4 + -1;
        piVar8 = piVar8 + -1;
      }
      uVar7 = 1;
      *(int *)(param_1 + 1) = iVar4;
      *(undefined4 *)(param_1 + 2) = 0;
    }
  }
  return uVar7;
}


