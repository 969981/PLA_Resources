/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0045ef20; name: FUN_0045ef20
 */


undefined8 FUN_0045ef20(long param_1,long param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int *piVar5;
  int iVar6;
  undefined8 uVar7;
  
  uVar4 = 1;
  if ((param_2 != 0) && (param_1 != param_2)) {
    if (param_1 == 0) {
LAB_0045f050:
      uVar4 = 0;
    }
    else {
      iVar2 = FUN_00407950(param_2);
      if (iVar2 < 1) {
        uVar4 = 1;
      }
      else {
        iVar6 = 0;
        iVar2 = 0;
        do {
          piVar5 = (int *)FUN_00407970(param_2,iVar6);
          if (piVar5 == (int *)0x0) {
LAB_0045f070:
                    /* WARNING: Subroutine does not return */
            FUN_00404dd0("Assertion failed: aor != NULL","external/openssl/crypto/x509v3/v3_asid.c",
                         0xed);
          }
          if (*piVar5 == 1) {
            uVar4 = **(undefined8 **)(piVar5 + 2);
            uVar1 = (*(undefined8 **)(piVar5 + 2))[1];
            iVar3 = FUN_00407950(param_1);
          }
          else {
            if (*piVar5 != 0) goto LAB_0045f050;
            uVar4 = *(undefined8 *)(piVar5 + 2);
            iVar3 = FUN_00407950(param_1);
            uVar1 = uVar4;
          }
          if (iVar3 <= iVar2) goto LAB_0045f050;
          while( true ) {
            piVar5 = (int *)FUN_00407970(param_1,iVar2);
            if (piVar5 == (int *)0x0) goto LAB_0045f070;
            if (*piVar5 == 1) {
              uVar7 = **(undefined8 **)(piVar5 + 2);
              iVar3 = FUN_00420090((*(undefined8 **)(piVar5 + 2))[1],uVar1);
            }
            else {
              if (*piVar5 != 0) goto LAB_0045f050;
              uVar7 = *(undefined8 *)(piVar5 + 2);
              iVar3 = FUN_00420090(uVar7,uVar1);
            }
            if (-1 < iVar3) break;
            iVar2 = iVar2 + 1;
            iVar3 = FUN_00407950(param_1);
            if (iVar3 <= iVar2) goto LAB_0045f050;
          }
          iVar3 = FUN_00420090(uVar7,uVar4);
          if (0 < iVar3) goto LAB_0045f050;
          iVar6 = iVar6 + 1;
          iVar3 = FUN_00407950(param_2);
          uVar4 = 1;
        } while (iVar6 < iVar3);
      }
    }
  }
  return uVar4;
}


