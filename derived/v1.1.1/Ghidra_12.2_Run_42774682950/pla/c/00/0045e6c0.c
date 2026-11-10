/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0045e6c0; name: FUN_0045e6c0
 */


undefined8 FUN_0045e6c0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int *piVar5;
  int *piVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  if ((param_1 == (int *)0x0) || (*param_1 == 0)) {
    uVar4 = 1;
  }
  else if ((*param_1 == 1) && (iVar1 = FUN_00407950(*(undefined8 *)(param_1 + 2)), iVar1 != 0)) {
    FUN_004079e0(*(undefined8 *)(param_1 + 2));
    iVar1 = FUN_00407950(*(undefined8 *)(param_1 + 2));
    uVar4 = *(undefined8 *)(param_1 + 2);
    if (iVar1 < 2) {
      lVar10 = 0;
      lVar11 = 0;
    }
    else {
      lVar11 = 0;
      lVar10 = 0;
      iVar1 = 0;
      do {
        piVar5 = (int *)FUN_00407970(uVar4,iVar1);
        iVar3 = iVar1 + 1;
        piVar6 = (int *)FUN_00407970(*(undefined8 *)(param_1 + 2),iVar3);
        if (piVar5 == (int *)0x0) {
LAB_0045e9fc:
                    /* WARNING: Subroutine does not return */
          FUN_00404dd0("Assertion failed: aor != NULL","external/openssl/crypto/x509v3/v3_asid.c",
                       0xed);
        }
        if (*piVar5 == 1) {
          uVar4 = **(undefined8 **)(piVar5 + 2);
          uVar9 = (*(undefined8 **)(piVar5 + 2))[1];
        }
        else {
          if (*piVar5 != 0) goto LAB_0045e9ac;
          uVar4 = *(undefined8 *)(piVar5 + 2);
          uVar9 = uVar4;
        }
        if (piVar6 == (int *)0x0) goto LAB_0045e9fc;
        if (*piVar6 == 1) {
          uVar12 = **(undefined8 **)(piVar6 + 2);
          uVar13 = (*(undefined8 **)(piVar6 + 2))[1];
        }
        else {
          if (*piVar6 != 0) goto LAB_0045e9ac;
          uVar12 = *(undefined8 *)(piVar6 + 2);
          uVar13 = uVar12;
        }
        iVar2 = FUN_00420090(uVar4,uVar12);
        if (0 < iVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_00404dd0("Assertion failed: ASN1_INTEGER_cmp(a_min, b_min) <= 0",
                       "external/openssl/crypto/x509v3/v3_asid.c",0x18b);
        }
        iVar2 = FUN_00420090(uVar4,uVar9);
        if ((0 < iVar2) || (iVar2 = FUN_00420090(uVar12,uVar13), 0 < iVar2)) goto LAB_0045e9ac;
        iVar2 = FUN_00420090(uVar9,uVar12);
        if (-1 < iVar2) {
          uVar4 = 0x74;
          uVar9 = 0x19a;
LAB_0045e9a8:
          FUN_004014b0(0x22,0xa1,uVar4,"external/openssl/crypto/x509v3/v3_asid.c",uVar9);
          goto LAB_0045e9ac;
        }
        if ((((lVar10 == 0) && (lVar10 = FUN_0040c260(), lVar10 == 0)) ||
            (lVar7 = FUN_00420ce0(uVar9,lVar10), lVar7 == 0)) ||
           ((iVar2 = FUN_0040bd20(lVar10,1), iVar2 == 0 ||
            (lVar11 = FUN_00420b80(lVar10,lVar11), lVar11 == 0)))) {
          uVar4 = 0x41;
          uVar9 = 0x1a7;
          goto LAB_0045e9a8;
        }
        iVar2 = FUN_00420090(lVar11,uVar12);
        if (iVar2 == 0) {
          if (*piVar5 == 1) {
            thunk_FUN_0040a4b0(*(undefined8 *)(*(long *)(piVar5 + 2) + 8));
            *(undefined8 *)(*(long *)(piVar5 + 2) + 8) = uVar13;
LAB_0045e8a8:
            iVar2 = *piVar6;
            if (iVar2 == 1) goto LAB_0045e888;
LAB_0045e8b4:
            piVar5 = piVar6;
            if (iVar2 == 0) goto LAB_0045e8bc;
          }
          else {
            if (*piVar5 != 0) goto LAB_0045e8a8;
            puVar8 = (undefined8 *)
                     FUN_00400260(0x10,"external/openssl/crypto/x509v3/v3_asid.c",0x1b2);
            if (puVar8 == (undefined8 *)0x0) {
              uVar4 = 0x41;
              uVar9 = 0x1b4;
              goto LAB_0045e9a8;
            }
            *puVar8 = uVar4;
            puVar8[1] = uVar13;
            *piVar5 = 1;
            *(undefined8 **)(piVar5 + 2) = puVar8;
            iVar2 = *piVar6;
            if (iVar2 != 1) goto LAB_0045e8b4;
LAB_0045e888:
            piVar5 = *(int **)(piVar6 + 2);
LAB_0045e8bc:
            piVar5[2] = 0;
            piVar5[3] = 0;
          }
          FUN_00421810(piVar6,PTR_DAT_043743a0);
          FUN_00407680(*(undefined8 *)(param_1 + 2),iVar3);
        }
        else {
          iVar1 = iVar3;
        }
        iVar3 = FUN_00407950(*(undefined8 *)(param_1 + 2));
        uVar4 = *(undefined8 *)(param_1 + 2);
      } while (iVar1 < iVar3 + -1);
    }
    iVar1 = FUN_00407950();
    piVar5 = (int *)FUN_00407970(*(undefined8 *)(param_1 + 2),iVar1 + -1);
    if (((piVar5 == (int *)0x0) || (*piVar5 != 1)) ||
       (iVar1 = FUN_00420090(**(undefined8 **)(piVar5 + 2),(*(undefined8 **)(piVar5 + 2))[1]),
       iVar1 < 1)) {
      iVar1 = FUN_0045e490(param_1);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00404dd0("Assertion failed: ASIdentifierChoice_is_canonical(choice)",
                     "external/openssl/crypto/x509v3/v3_asid.c",0x1df);
      }
      uVar4 = 1;
    }
    else {
LAB_0045e9ac:
      uVar4 = 0;
    }
    thunk_FUN_0040a4b0(lVar11);
    FUN_0040c1e0(lVar10);
  }
  else {
    FUN_004014b0(0x22,0xa1,0x74,"external/openssl/crypto/x509v3/v3_asid.c",0x171);
    uVar4 = 0;
  }
  return uVar4;
}


