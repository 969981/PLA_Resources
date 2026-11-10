/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0045d1d0; name: FUN_0045d1d0
 */


/* WARNING: Removing unreachable block (ram,0x0045d270) */

int FUN_0045d1d0(long param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined1 *puVar13;
  int *piVar14;
  
  if (((*(long *)(param_1 + 0x98) == 0) || (iVar1 = FUN_00407950(), iVar1 == 0)) ||
     (*(long *)(param_1 + 0x38) == 0)) {
    *(undefined4 *)(param_1 + 0xb0) = 1;
    return 0;
  }
  lVar11 = *(long *)(param_1 + 0x98);
  if ((lVar11 == 0) || (iVar1 = FUN_00407950(lVar11), iVar1 < 1)) {
                    /* WARNING: Subroutine does not return */
    FUN_00404dd0("Assertion failed: chain != NULL && sk_X509_num(chain) > 0",
                 "external/openssl/crypto/x509v3/v3_addr.c",0x4a1);
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00404dd0("Assertion failed: ctx != NULL || ext != NULL",
                 "external/openssl/crypto/x509v3/v3_addr.c",0x4a2);
  }
  if ((param_1 != 0) && (*(long *)(param_1 + 0x38) == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00404dd0("Assertion failed: ctx == NULL || ctx->verify_cb != NULL",
                 "external/openssl/crypto/x509v3/v3_addr.c",0x4a3);
  }
  lVar7 = FUN_00407970(lVar11,0);
  lVar6 = *(long *)(lVar7 + 0x120);
  if (lVar6 == 0) {
    iVar1 = 1;
    lVar6 = 0;
    goto LAB_0045d704;
  }
  iVar1 = FUN_0045bed0(lVar6);
  if (iVar1 == 0) {
    if (param_1 != 0) {
      *(undefined4 *)(param_1 + 0xac) = 0;
      *(undefined4 *)(param_1 + 0xb0) = 0x29;
      *(long *)(param_1 + 0xb8) = lVar7;
      iVar1 = (**(code **)(param_1 + 0x38))(0,param_1);
      if (iVar1 == 0) {
        lVar6 = 0;
        goto LAB_0045d704;
      }
      goto LAB_0045d288;
    }
  }
  else {
    iVar1 = 1;
LAB_0045d288:
    FUN_00406ef0(lVar6,&LAB_0045c1e0);
    lVar6 = FUN_00406f10(lVar6);
    if (lVar6 != 0) {
      iVar5 = 1;
      iVar2 = FUN_00407950(lVar11);
      if (1 < iVar2) {
LAB_0045d2e0:
        lVar7 = FUN_00407970(lVar11,iVar5);
        iVar2 = FUN_0045bed0(*(undefined8 *)(lVar7 + 0x120));
        if (iVar2 == 0) {
          if (param_1 == 0) goto LAB_0045d6b8;
          *(int *)(param_1 + 0xac) = iVar5;
          *(undefined4 *)(param_1 + 0xb0) = 0x29;
          *(long *)(param_1 + 0xb8) = lVar7;
          iVar1 = (**(code **)(param_1 + 0x38))(0,param_1);
          if (iVar1 == 0) goto LAB_0045d704;
        }
        if (*(long *)(lVar7 + 0x120) == 0) {
          iVar2 = FUN_00407950(lVar6);
          if (0 < iVar2) {
            iVar2 = 0;
            do {
              lVar9 = FUN_00407970(lVar6,iVar2);
              if (**(int **)(lVar9 + 8) != 0) goto LAB_0045d578;
              iVar2 = iVar2 + 1;
              iVar4 = FUN_00407950(lVar6);
            } while (iVar2 < iVar4);
          }
        }
        else {
          FUN_00406ef0(*(long *)(lVar7 + 0x120),&LAB_0045c1e0);
          iVar2 = FUN_00407950(lVar6);
          if (0 < iVar2) {
            iVar2 = 0;
            if (param_1 == 0) {
              do {
                puVar8 = (undefined8 *)FUN_00407970(lVar6,iVar2);
                uVar3 = FUN_00407710(*(undefined8 *)(lVar7 + 0x120),puVar8);
                lVar9 = FUN_00407970(*(undefined8 *)(lVar7 + 0x120),uVar3);
                if (lVar9 == 0) {
                  if (*(int *)puVar8[1] == 1) goto LAB_0045d578;
                }
                else if (**(int **)(lVar9 + 8) == 1) {
                  if (*(int *)puVar8[1] != 0) {
                    uVar10 = *(undefined8 *)(*(int **)(lVar9 + 8) + 2);
                    uVar12 = *(undefined8 *)((int *)puVar8[1] + 2);
                    piVar14 = (int *)*puVar8;
                    if (((piVar14 == (int *)0x0) ||
                        (puVar13 = *(undefined1 **)(piVar14 + 2), puVar13 == (undefined1 *)0x0)) ||
                       (*piVar14 < 2)) {
                      iVar4 = FUN_0045d090(uVar10,uVar12,0);
                    }
                    else {
                      iVar4 = 0x10;
                      if (CONCAT11(*puVar13,puVar13[1]) != 2) {
                        iVar4 = (uint)(CONCAT11(*puVar13,puVar13[1]) == 1) << 2;
                      }
                      iVar4 = FUN_0045d090(uVar10,uVar12,iVar4);
                    }
                    if (iVar4 == 0) goto LAB_0045d6b8;
                  }
                  FUN_004079a0(lVar6,iVar2,lVar9);
                }
                iVar2 = iVar2 + 1;
                iVar4 = FUN_00407950(lVar6);
              } while (iVar2 < iVar4);
            }
            else {
              do {
                puVar8 = (undefined8 *)FUN_00407970(lVar6,iVar2);
                uVar3 = FUN_00407710(*(undefined8 *)(lVar7 + 0x120),puVar8);
                lVar9 = FUN_00407970(*(undefined8 *)(lVar7 + 0x120),uVar3);
                if (lVar9 == 0) {
                  if (*(int *)puVar8[1] == 1) goto LAB_0045d578;
                }
                else if (**(int **)(lVar9 + 8) == 1) {
                  if (*(int *)puVar8[1] != 0) {
                    uVar10 = *(undefined8 *)(*(int **)(lVar9 + 8) + 2);
                    uVar12 = *(undefined8 *)((int *)puVar8[1] + 2);
                    piVar14 = (int *)*puVar8;
                    if (((piVar14 == (int *)0x0) ||
                        (puVar13 = *(undefined1 **)(piVar14 + 2), puVar13 == (undefined1 *)0x0)) ||
                       (*piVar14 < 2)) {
                      uVar10 = FUN_0045d090(uVar10,uVar12,0);
                      iVar4 = (int)uVar10;
                    }
                    else {
                      iVar4 = 0x10;
                      if (CONCAT11(*puVar13,puVar13[1]) != 2) {
                        iVar4 = (uint)(CONCAT11(*puVar13,puVar13[1]) == 1) << 2;
                      }
                      uVar10 = FUN_0045d090(uVar10,uVar12,iVar4);
                      iVar4 = (int)uVar10;
                    }
                    if (iVar4 == 0) {
                      *(int *)(param_1 + 0xac) = iVar5;
                      *(undefined4 *)(param_1 + 0xb0) = 0x2e;
                      *(long *)(param_1 + 0xb8) = lVar7;
                      iVar1 = (**(code **)(param_1 + 0x38))(uVar10,param_1);
                      if (iVar1 != 0) goto LAB_0045d360;
                      goto LAB_0045d704;
                    }
                  }
                  FUN_004079a0(lVar6,iVar2,lVar9);
                }
LAB_0045d360:
                iVar2 = iVar2 + 1;
                iVar4 = FUN_00407950(lVar6);
              } while (iVar2 < iVar4);
            }
          }
        }
        goto LAB_0045d2cc;
      }
LAB_0045d5f8:
      if ((*(long *)(lVar7 + 0x120) != 0) && (iVar2 = FUN_00407950(), 0 < iVar2)) {
        iVar2 = 0;
        if (param_1 == 0) {
          do {
            lVar11 = FUN_00407970(*(undefined8 *)(lVar7 + 0x120),iVar2);
            if ((**(int **)(lVar11 + 8) == 0) && (iVar5 = FUN_00407710(lVar6,lVar11), -1 < iVar5))
            goto LAB_0045d6b8;
            iVar2 = iVar2 + 1;
            iVar5 = FUN_00407950(*(undefined8 *)(lVar7 + 0x120));
          } while (iVar2 < iVar5);
        }
        else {
          iVar2 = 0;
          do {
            lVar11 = FUN_00407970(*(undefined8 *)(lVar7 + 0x120),iVar2);
            if ((**(int **)(lVar11 + 8) == 0) && (iVar4 = FUN_00407710(lVar6,lVar11), -1 < iVar4)) {
              *(int *)(param_1 + 0xac) = iVar5;
              *(undefined4 *)(param_1 + 0xb0) = 0x2e;
              *(long *)(param_1 + 0xb8) = lVar7;
              iVar1 = (**(code **)(param_1 + 0x38))(0,param_1);
              if (iVar1 == 0) break;
            }
            iVar2 = iVar2 + 1;
            iVar4 = FUN_00407950(*(undefined8 *)(lVar7 + 0x120));
          } while (iVar2 < iVar4);
        }
      }
      goto LAB_0045d704;
    }
    FUN_004014b0(0x22,0xa6,0x41,"external/openssl/crypto/x509v3/v3_addr.c",0x4bc);
    if (param_1 != 0) {
      iVar1 = 0;
      *(undefined4 *)(param_1 + 0xb0) = 0x11;
      lVar6 = 0;
      goto LAB_0045d704;
    }
  }
  iVar1 = 0;
  lVar6 = 0;
LAB_0045d704:
  FUN_00407010(lVar6);
  return iVar1;
LAB_0045d578:
  if (param_1 == 0) goto LAB_0045d6b8;
  *(int *)(param_1 + 0xac) = iVar5;
  *(undefined4 *)(param_1 + 0xb0) = 0x2e;
  *(long *)(param_1 + 0xb8) = lVar7;
  iVar1 = (**(code **)(param_1 + 0x38))(0,param_1);
  if (iVar1 == 0) goto LAB_0045d704;
LAB_0045d2cc:
  iVar5 = iVar5 + 1;
  iVar2 = FUN_00407950(lVar11);
  if (iVar2 <= iVar5) goto LAB_0045d5f8;
  goto LAB_0045d2e0;
LAB_0045d6b8:
  iVar1 = 0;
  goto LAB_0045d704;
}


