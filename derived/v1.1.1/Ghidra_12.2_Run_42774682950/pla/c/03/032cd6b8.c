/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032cd6b8; name: FUN_032cd6b8
 */


/* WARNING: Type propagation algorithm not settling */

int FUN_032cd6b8(undefined8 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *******pppppppuVar3;
  undefined8 *******pppppppuVar4;
  int iVar5;
  undefined8 *******pppppppuVar6;
  uint uVar7;
  undefined8 *******pppppppuVar8;
  undefined8 *******pppppppuVar9;
  undefined8 *******pppppppuVar10;
  int iVar11;
  long lVar12;
  undefined8 *******local_28;
  undefined8 *******local_18;
  
  iVar5 = 0;
  if (param_1[3] != 0) {
    uVar1 = FUN_032cce10();
    param_1[3] = uVar1;
    pppppppuVar8 = (undefined8 *******)param_1[8];
    pppppppuVar3 = (undefined8 *******)*param_1;
    pppppppuVar4 = pppppppuVar3;
    if (pppppppuVar8 < (undefined8 *******)param_1[9]) {
      do {
        pppppppuVar3 = pppppppuVar8;
        *pppppppuVar3 = pppppppuVar4;
        pppppppuVar4 = pppppppuVar3;
        pppppppuVar8 = (undefined8 *******)((long)pppppppuVar3 + param_1[1]);
      } while ((undefined8 *******)((long)pppppppuVar3 + param_1[1]) <
               (undefined8 *******)param_1[9]);
    }
    *param_1 = pppppppuVar3;
    param_1[8] = 0;
    param_1[9] = 0;
    pppppppuVar4 = (undefined8 *******)0x0;
    if (pppppppuVar3 != (undefined8 *******)0x0) {
      iVar5 = 1;
      if (pppppppuVar3 != (undefined8 *******)0x0) goto LAB_032cd754;
      do {
        local_18 = (undefined8 *******)0x0;
        uVar7 = 0;
        pppppppuVar4 = &local_18;
        while( true ) {
          *pppppppuVar4 = (undefined8 ******)0x0;
          iVar5 = iVar5 << 1;
          pppppppuVar4 = local_18;
          if (uVar7 < 2) goto LAB_032cd860;
          pppppppuVar3 = local_18;
          if (local_18 == (undefined8 *******)0x0) break;
LAB_032cd754:
          local_18 = (undefined8 *******)0x0;
          if (iVar5 < 1) {
            do {
                    /* WARNING: Do nothing block with infinite loop */
            } while( true );
          }
          uVar7 = 0;
          pppppppuVar4 = &local_18;
          do {
            iVar11 = 0;
            pppppppuVar8 = pppppppuVar3;
            do {
              pppppppuVar8 = (undefined8 *******)*pppppppuVar8;
              iVar11 = iVar11 + 1;
              if (iVar5 <= iVar11) break;
            } while (pppppppuVar8 != (undefined8 *******)0x0);
            iVar2 = iVar5;
            if (pppppppuVar8 == (undefined8 *******)0x0) {
              pppppppuVar8 = (undefined8 *******)0x0;
LAB_032cd810:
              do {
                pppppppuVar9 = pppppppuVar3;
                *pppppppuVar4 = pppppppuVar9;
                iVar11 = iVar11 + -1;
                pppppppuVar3 = (undefined8 *******)*pppppppuVar9;
                pppppppuVar4 = pppppppuVar9;
              } while (0 < iVar11);
            }
            else {
              pppppppuVar9 = pppppppuVar4;
              do {
                if (pppppppuVar8 < pppppppuVar3) {
                  pppppppuVar10 = (undefined8 *******)*pppppppuVar8;
                  iVar2 = iVar2 + -1;
                  *pppppppuVar9 = pppppppuVar8;
                  pppppppuVar4 = pppppppuVar3;
                  pppppppuVar9 = pppppppuVar8;
                }
                else {
                  pppppppuVar4 = (undefined8 *******)*pppppppuVar3;
                  iVar11 = iVar11 + -1;
                  *pppppppuVar9 = pppppppuVar3;
                  pppppppuVar10 = pppppppuVar8;
                  pppppppuVar9 = pppppppuVar3;
                }
                pppppppuVar8 = pppppppuVar10;
                pppppppuVar3 = pppppppuVar4;
              } while (((pppppppuVar8 != (undefined8 *******)0x0) && (0 < iVar11)) && (0 < iVar2));
              if (0 < iVar11) {
                pppppppuVar4 = pppppppuVar9;
                goto LAB_032cd810;
              }
            }
            uVar7 = uVar7 + 1;
            pppppppuVar4 = pppppppuVar9;
            for (pppppppuVar3 = pppppppuVar8;
                (0 < iVar2 && (pppppppuVar3 != (undefined8 *******)0x0));
                pppppppuVar3 = (undefined8 *******)*pppppppuVar3) {
              iVar2 = iVar2 + -1;
              *pppppppuVar4 = pppppppuVar3;
              pppppppuVar4 = pppppppuVar3;
            }
          } while (pppppppuVar3 != (undefined8 *******)0x0);
        }
      } while( true );
    }
LAB_032cd860:
    local_18 = (undefined8 *******)param_1[3];
    iVar5 = 0;
    *param_1 = pppppppuVar4;
    local_28 = pppppppuVar4;
    if (local_18 != (undefined8 *******)0x0) {
      pppppppuVar3 = &local_28;
      pppppppuVar8 = local_18;
      pppppppuVar9 = &local_18;
LAB_032cd8a8:
      do {
        pppppppuVar6 = pppppppuVar8;
        pppppppuVar10 = (undefined8 *******)pppppppuVar6[2];
        lVar12 = param_1[1] * (long)pppppppuVar6[3];
        pppppppuVar8 = (undefined8 *******)((long)pppppppuVar10 + lVar12);
        if (pppppppuVar10 == pppppppuVar4 && 0 < lVar12) {
          do {
            pppppppuVar4 = (undefined8 *******)*pppppppuVar4;
            pppppppuVar10 = (undefined8 *******)((long)pppppppuVar10 + param_1[1]);
            if (pppppppuVar8 <= pppppppuVar10) break;
          } while (pppppppuVar10 == pppppppuVar4);
        }
        if (pppppppuVar10 != pppppppuVar8) {
          pppppppuVar9 = pppppppuVar3;
          if ((pppppppuVar4 != (undefined8 *******)0x0) && (pppppppuVar4 < pppppppuVar8)) {
            do {
              pppppppuVar4 = (undefined8 *******)*pppppppuVar4;
            } while ((pppppppuVar4 != (undefined8 *******)0x0 && pppppppuVar4 <= pppppppuVar8) &&
                     (pppppppuVar4 == (undefined8 *******)0x0 || pppppppuVar8 != pppppppuVar4));
          }
          do {
            pppppppuVar3 = pppppppuVar9;
            pppppppuVar9 = (undefined8 *******)*pppppppuVar3;
          } while ((undefined8 *******)*pppppppuVar3 != pppppppuVar4);
          pppppppuVar8 = (undefined8 *******)*pppppppuVar6;
          pppppppuVar9 = pppppppuVar6;
          if ((undefined8 *******)*pppppppuVar6 == (undefined8 *******)0x0) break;
          goto LAB_032cd8a8;
        }
        *pppppppuVar9 = *pppppppuVar6;
        *pppppppuVar6 = (undefined8 ******)param_1[4];
        param_1[4] = pppppppuVar6;
        pppppppuVar8 = (undefined8 *******)*pppppppuVar9;
        iVar5 = iVar5 + 1;
        *pppppppuVar3 = pppppppuVar4;
      } while (pppppppuVar8 != (undefined8 *******)0x0);
    }
    *param_1 = local_28;
    param_1[2] = 0;
    param_1[3] = local_18;
  }
  return iVar5;
}


