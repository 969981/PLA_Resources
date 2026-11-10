/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0045f090; name: FUN_0045f090
 */


/* WARNING: Removing unreachable block (ram,0x0045f130) */

ulong FUN_0045f090(long param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  int *piVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  
  if (((*(long *)(param_1 + 0x98) == 0) || (iVar3 = FUN_00407950(), iVar3 == 0)) ||
     (*(long *)(param_1 + 0x38) == 0)) {
    *(undefined4 *)(param_1 + 0xb0) = 1;
    return 0;
  }
  lVar8 = *(long *)(param_1 + 0x98);
  if ((lVar8 == 0) || (iVar3 = FUN_00407950(lVar8), iVar3 < 1)) {
                    /* WARNING: Subroutine does not return */
    FUN_00404dd0("Assertion failed: chain != NULL && sk_X509_num(chain) > 0",
                 "external/openssl/crypto/x509v3/v3_asid.c",0x2d8);
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00404dd0("Assertion failed: ctx != NULL || ext != NULL",
                 "external/openssl/crypto/x509v3/v3_asid.c",0x2d9);
  }
  if ((param_1 != 0) && (*(long *)(param_1 + 0x38) == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00404dd0("Assertion failed: ctx == NULL || ctx->verify_cb != NULL",
                 "external/openssl/crypto/x509v3/v3_asid.c",0x2da);
  }
  lVar6 = FUN_00407970(lVar8,0);
  puVar13 = *(undefined8 **)(lVar6 + 0x128);
  if (puVar13 == (undefined8 *)0x0) {
    return 1;
  }
  iVar3 = FUN_0045e490(*puVar13);
  if ((iVar3 == 0) || (iVar3 = FUN_0045e490(puVar13[1]), iVar3 == 0)) {
    if (param_1 != 0) {
      *(undefined4 *)(param_1 + 0xac) = 0;
      *(undefined4 *)(param_1 + 0xb0) = 0x29;
      *(long *)(param_1 + 0xb8) = lVar6;
      uVar7 = (**(code **)(param_1 + 0x38))(0,param_1);
      uVar10 = uVar7 & 0xffffffff;
      if ((int)uVar7 == 0) {
        return uVar7;
      }
      piVar9 = (int *)*puVar13;
      if (piVar9 != (int *)0x0) goto LAB_0045f15c;
      goto LAB_0045f1f0;
    }
LAB_0045f500:
    uVar10 = 0;
  }
  else {
    uVar10 = 1;
    piVar9 = (int *)*puVar13;
    if (piVar9 == (int *)0x0) {
LAB_0045f1f0:
      lVar11 = 0;
      bVar1 = false;
      piVar9 = (int *)puVar13[1];
      if (piVar9 != (int *)0x0) goto LAB_0045f17c;
LAB_0045f21c:
      lVar12 = 0;
LAB_0045f228:
      bVar2 = false;
    }
    else {
LAB_0045f15c:
      if (*piVar9 == 1) {
        lVar11 = *(long *)(piVar9 + 2);
        bVar1 = false;
        piVar9 = (int *)puVar13[1];
      }
      else {
        if (*piVar9 != 0) goto LAB_0045f1f0;
        lVar11 = 0;
        bVar1 = true;
        piVar9 = (int *)puVar13[1];
      }
      if (piVar9 == (int *)0x0) goto LAB_0045f21c;
LAB_0045f17c:
      if (*piVar9 == 1) {
        lVar12 = *(long *)(piVar9 + 2);
        goto LAB_0045f228;
      }
      if (*piVar9 != 0) goto LAB_0045f21c;
      lVar12 = 0;
      bVar2 = true;
    }
    iVar3 = 1;
    iVar4 = FUN_00407950(lVar8);
    if (1 < iVar4) {
      lVar6 = FUN_00407970(lVar8,1);
      do {
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00404dd0("Assertion failed: x != NULL","external/openssl/crypto/x509v3/v3_asid.c",
                       0x30c);
        }
        puVar13 = *(undefined8 **)(lVar6 + 0x128);
        if (puVar13 == (undefined8 *)0x0) {
          if (lVar11 == 0 && lVar12 == 0) {
            lVar11 = 0;
            lVar12 = 0;
          }
          else {
            if (param_1 == 0) goto LAB_0045f500;
            *(int *)(param_1 + 0xac) = iVar3;
            *(undefined4 *)(param_1 + 0xb0) = 0x2e;
            *(long *)(param_1 + 0xb8) = lVar6;
            uVar7 = (**(code **)(param_1 + 0x38))(0,param_1);
            uVar10 = uVar7 & 0xffffffff;
            if ((int)uVar7 == 0) {
              return uVar7;
            }
          }
        }
        else {
          iVar4 = FUN_0045e490(*puVar13);
          if ((iVar4 == 0) || (iVar4 = FUN_0045e490(puVar13[1]), iVar4 == 0)) {
            if (param_1 == 0) goto LAB_0045f500;
            *(int *)(param_1 + 0xac) = iVar3;
            *(undefined4 *)(param_1 + 0xb0) = 0x29;
            *(long *)(param_1 + 0xb8) = lVar6;
            uVar7 = (**(code **)(param_1 + 0x38))(0,param_1);
            uVar10 = uVar7 & 0xffffffff;
            if ((int)uVar7 == 0) {
              return uVar7;
            }
          }
          puVar13 = *(undefined8 **)(lVar6 + 0x128);
          piVar9 = (int *)*puVar13;
          if ((lVar11 != 0) && (piVar9 == (int *)0x0)) {
            if (param_1 == 0) goto LAB_0045f500;
            *(int *)(param_1 + 0xac) = iVar3;
            *(undefined4 *)(param_1 + 0xb0) = 0x2e;
            *(long *)(param_1 + 0xb8) = lVar6;
            uVar10 = (**(code **)(param_1 + 0x38))(0,param_1);
            if ((int)uVar10 == 0) {
              return uVar10;
            }
            puVar13 = *(undefined8 **)(lVar6 + 0x128);
            uVar10 = uVar10 & 0xffffffff;
            lVar11 = 0;
            bVar1 = false;
            piVar9 = (int *)*puVar13;
          }
          if ((piVar9 == (int *)0x0) || (*piVar9 != 1)) {
LAB_0045f348:
            piVar9 = (int *)puVar13[1];
          }
          else {
            if (bVar1) {
LAB_0045f340:
              lVar11 = *(long *)(piVar9 + 2);
              bVar1 = false;
              goto LAB_0045f348;
            }
            iVar4 = FUN_0045ef20(*(undefined8 *)(piVar9 + 2),lVar11);
            if (iVar4 != 0) {
              puVar13 = *(undefined8 **)(lVar6 + 0x128);
              piVar9 = (int *)*puVar13;
              goto LAB_0045f340;
            }
            if (param_1 == 0) goto LAB_0045f500;
            *(int *)(param_1 + 0xac) = iVar3;
            *(undefined4 *)(param_1 + 0xb0) = 0x2e;
            *(long *)(param_1 + 0xb8) = lVar6;
            uVar10 = (**(code **)(param_1 + 0x38))(0,param_1);
            if ((int)uVar10 == 0) {
              return uVar10;
            }
            uVar10 = uVar10 & 0xffffffff;
            bVar1 = false;
            piVar9 = *(int **)(*(long *)(lVar6 + 0x128) + 8);
          }
          if ((lVar12 != 0) && (piVar9 == (int *)0x0)) {
            if (param_1 == 0) goto LAB_0045f500;
            *(int *)(param_1 + 0xac) = iVar3;
            *(undefined4 *)(param_1 + 0xb0) = 0x2e;
            *(long *)(param_1 + 0xb8) = lVar6;
            uVar10 = (**(code **)(param_1 + 0x38))(0,param_1);
            if ((int)uVar10 == 0) {
              return uVar10;
            }
            uVar10 = uVar10 & 0xffffffff;
            lVar12 = 0;
            bVar2 = false;
            piVar9 = *(int **)(*(long *)(lVar6 + 0x128) + 8);
          }
          if ((piVar9 != (int *)0x0) && (*piVar9 == 1)) {
            if (!bVar2) {
              iVar4 = FUN_0045ef20(*(undefined8 *)(piVar9 + 2),lVar12);
              if (iVar4 == 0) {
                if (param_1 != 0) {
                  *(int *)(param_1 + 0xac) = iVar3;
                  *(undefined4 *)(param_1 + 0xb0) = 0x2e;
                  *(long *)(param_1 + 0xb8) = lVar6;
                  uVar5 = (**(code **)(param_1 + 0x38))(0,param_1);
                  uVar10 = (ulong)uVar5;
                  bVar2 = false;
                  if (uVar5 == 0) {
                    return 0;
                  }
                  goto LAB_0045f260;
                }
                goto LAB_0045f500;
              }
              piVar9 = *(int **)(*(long *)(lVar6 + 0x128) + 8);
            }
            lVar12 = *(long *)(piVar9 + 2);
            bVar2 = false;
          }
        }
LAB_0045f260:
        iVar3 = iVar3 + 1;
        iVar4 = FUN_00407950(lVar8);
        if (iVar4 <= iVar3) break;
        lVar6 = FUN_00407970(lVar8,iVar3);
      } while( true );
    }
    uVar5 = (uint)uVar10;
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00404dd0("Assertion failed: x != NULL","external/openssl/crypto/x509v3/v3_asid.c",0x33e);
    }
    puVar13 = *(undefined8 **)(lVar6 + 0x128);
    if (puVar13 == (undefined8 *)0x0) goto LAB_0045f504;
    if (((int *)*puVar13 == (int *)0x0) || (*(int *)*puVar13 != 0)) {
      piVar9 = (int *)puVar13[1];
    }
    else {
      if (param_1 == 0) goto LAB_0045f500;
      *(int *)(param_1 + 0xac) = iVar3;
      *(undefined4 *)(param_1 + 0xb0) = 0x2e;
      *(long *)(param_1 + 0xb8) = lVar6;
      uVar10 = (**(code **)(param_1 + 0x38))(0,param_1);
      uVar5 = (uint)uVar10;
      if (uVar5 == 0) {
        return uVar10;
      }
      uVar10 = uVar10 & 0xffffffff;
      piVar9 = *(int **)(*(long *)(lVar6 + 0x128) + 8);
    }
    if (piVar9 != (int *)0x0) {
      if (*piVar9 == 0) {
        uVar5 = 0;
      }
      if (*piVar9 != 0) {
        return (ulong)uVar5;
      }
      if (param_1 == 0) {
        return (ulong)uVar5;
      }
      *(int *)(param_1 + 0xac) = iVar3;
      *(undefined4 *)(param_1 + 0xb0) = 0x2e;
      *(long *)(param_1 + 0xb8) = lVar6;
                    /* WARNING: Could not recover jumptable at 0x0045f4c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar10 = (**(code **)(param_1 + 0x38))(0,param_1);
      return uVar10;
    }
  }
LAB_0045f504:
  return uVar10;
}


