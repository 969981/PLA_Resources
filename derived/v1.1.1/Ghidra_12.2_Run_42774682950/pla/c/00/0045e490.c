/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0045e490; name: FUN_0045e490
 */


undefined8 FUN_0045e490(int *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  if ((param_1 == (int *)0x0) || (*param_1 == 0)) {
    uVar11 = 1;
  }
  else if ((*param_1 == 1) && (iVar3 = FUN_00407950(*(undefined8 *)(param_1 + 2)), iVar3 != 0)) {
    iVar3 = 0;
    lVar8 = 0;
    lVar9 = 0;
    while( true ) {
      iVar4 = FUN_00407950(*(undefined8 *)(param_1 + 2));
      if (iVar4 + -1 <= iVar3) break;
      piVar5 = (int *)FUN_00407970(*(undefined8 *)(param_1 + 2),iVar3);
      iVar3 = iVar3 + 1;
      piVar6 = (int *)FUN_00407970(*(undefined8 *)(param_1 + 2),iVar3);
      if (piVar5 == (int *)0x0) {
LAB_0045e69c:
                    /* WARNING: Subroutine does not return */
        FUN_00404dd0("Assertion failed: aor != NULL","external/openssl/crypto/x509v3/v3_asid.c",0xed
                    );
      }
      if (*piVar5 == 1) {
        uVar11 = **(undefined8 **)(piVar5 + 2);
        uVar2 = (*(undefined8 **)(piVar5 + 2))[1];
      }
      else {
        if (*piVar5 != 0) goto LAB_0045e664;
        uVar11 = *(undefined8 *)(piVar5 + 2);
        uVar2 = uVar11;
      }
      if (piVar6 == (int *)0x0) goto LAB_0045e69c;
      if (*piVar6 == 1) {
        uVar10 = **(undefined8 **)(piVar6 + 2);
        uVar1 = (*(undefined8 **)(piVar6 + 2))[1];
        iVar4 = FUN_00420090(uVar11,uVar10);
      }
      else {
        if (*piVar6 != 0) goto LAB_0045e664;
        uVar10 = *(undefined8 *)(piVar6 + 2);
        iVar4 = FUN_00420090(uVar11,uVar10);
        uVar1 = uVar10;
      }
      if (((-1 < iVar4) || (iVar4 = FUN_00420090(uVar11,uVar2), 0 < iVar4)) ||
         (iVar4 = FUN_00420090(uVar10,uVar1), 0 < iVar4)) goto LAB_0045e664;
      if (((lVar8 == 0) && (lVar8 = FUN_0040c260(), lVar8 == 0)) ||
         ((lVar7 = FUN_00420ce0(uVar2,lVar8), lVar7 == 0 ||
          ((iVar4 = FUN_0040bd20(lVar8,1), iVar4 == 0 ||
           (lVar9 = FUN_00420b80(lVar8,lVar9), lVar9 == 0)))))) {
        FUN_004014b0(0x22,0xa2,0x41,"external/openssl/crypto/x509v3/v3_asid.c",0x131);
        uVar11 = 0;
        goto LAB_0045e668;
      }
      iVar4 = FUN_00420090(lVar9,uVar10);
      if (-1 < iVar4) goto LAB_0045e664;
    }
    iVar3 = FUN_00407950(*(undefined8 *)(param_1 + 2));
    piVar5 = (int *)FUN_00407970(*(undefined8 *)(param_1 + 2),iVar3 + -1);
    if (((piVar5 == (int *)0x0) || (*piVar5 != 1)) ||
       (iVar3 = FUN_00420090(**(undefined8 **)(piVar5 + 2),(*(undefined8 **)(piVar5 + 2))[1]),
       iVar3 < 1)) {
      uVar11 = 1;
      goto LAB_0045e668;
    }
LAB_0045e664:
    uVar11 = 0;
LAB_0045e668:
    thunk_FUN_0040a4b0(lVar9);
    FUN_0040c1e0(lVar8);
  }
  else {
    uVar11 = 0;
  }
  return uVar11;
}


