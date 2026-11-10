/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032cd9dc; name: FUN_032cd9dc
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_032cd9dc(long *param_1,code *param_2,undefined4 param_3,undefined8 param_4)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  undefined8 *******pppppppuVar4;
  undefined8 *******pppppppuVar5;
  undefined8 *******pppppppuVar6;
  int iVar7;
  int iVar8;
  undefined8 *******pppppppuVar9;
  undefined8 *******pppppppuVar10;
  long *plVar11;
  undefined8 *******local_58;
  
  FUN_032cd944(param_1,param_1[4],param_2,param_3,param_4);
  if ((param_1[3] != 0) || (*param_1 != 0)) {
    lVar1 = FUN_032cce10();
    param_1[3] = lVar1;
    pppppppuVar4 = (undefined8 *******)param_1[8];
    pppppppuVar10 = (undefined8 *******)*param_1;
    pppppppuVar9 = pppppppuVar10;
    if (pppppppuVar4 < (undefined8 *******)param_1[9]) {
      do {
        pppppppuVar10 = pppppppuVar4;
        *pppppppuVar10 = pppppppuVar9;
        pppppppuVar4 = (undefined8 *******)((long)pppppppuVar10 + param_1[1]);
        pppppppuVar9 = pppppppuVar10;
      } while ((undefined8 *******)((long)pppppppuVar10 + param_1[1]) <
               (undefined8 *******)param_1[9]);
    }
    *param_1 = (long)pppppppuVar10;
    param_1[8] = 0;
    param_1[9] = 0;
    pppppppuVar4 = (undefined8 *******)0x0;
    if (pppppppuVar10 != (undefined8 *******)0x0) {
      iVar2 = 1;
      if (pppppppuVar10 != (undefined8 *******)0x0) goto LAB_032cdaa4;
      do {
        local_58 = (undefined8 *******)0x0;
        uVar3 = 0;
        pppppppuVar4 = &local_58;
        while( true ) {
          *pppppppuVar4 = (undefined8 ******)0x0;
          iVar2 = iVar2 << 1;
          pppppppuVar4 = local_58;
          if (uVar3 < 2) goto LAB_032cdbb0;
          pppppppuVar10 = local_58;
          if (local_58 == (undefined8 *******)0x0) break;
LAB_032cdaa4:
          local_58 = (undefined8 *******)0x0;
          if (iVar2 < 1) {
            do {
                    /* WARNING: Do nothing block with infinite loop */
            } while( true );
          }
          uVar3 = 0;
          pppppppuVar4 = &local_58;
          do {
            iVar7 = 0;
            pppppppuVar9 = pppppppuVar10;
            do {
              pppppppuVar9 = (undefined8 *******)*pppppppuVar9;
              iVar7 = iVar7 + 1;
              if (iVar2 <= iVar7) break;
            } while (pppppppuVar9 != (undefined8 *******)0x0);
            iVar8 = iVar2;
            if (pppppppuVar9 == (undefined8 *******)0x0) {
              pppppppuVar9 = (undefined8 *******)0x0;
LAB_032cdb50:
              do {
                pppppppuVar5 = pppppppuVar10;
                *pppppppuVar4 = pppppppuVar5;
                iVar7 = iVar7 + -1;
                pppppppuVar4 = pppppppuVar5;
                pppppppuVar10 = (undefined8 *******)*pppppppuVar5;
              } while (0 < iVar7);
            }
            else {
              pppppppuVar5 = pppppppuVar4;
              do {
                if (pppppppuVar9 < pppppppuVar10) {
                  pppppppuVar6 = (undefined8 *******)*pppppppuVar9;
                  iVar8 = iVar8 + -1;
                  *pppppppuVar5 = pppppppuVar9;
                  pppppppuVar4 = pppppppuVar10;
                  pppppppuVar5 = pppppppuVar9;
                }
                else {
                  pppppppuVar4 = (undefined8 *******)*pppppppuVar10;
                  iVar7 = iVar7 + -1;
                  *pppppppuVar5 = pppppppuVar10;
                  pppppppuVar6 = pppppppuVar9;
                  pppppppuVar5 = pppppppuVar10;
                }
                pppppppuVar9 = pppppppuVar6;
                pppppppuVar10 = pppppppuVar4;
              } while (((pppppppuVar9 != (undefined8 *******)0x0) && (0 < iVar7)) && (0 < iVar8));
              if (0 < iVar7) {
                pppppppuVar4 = pppppppuVar5;
                goto LAB_032cdb50;
              }
            }
            uVar3 = uVar3 + 1;
            pppppppuVar4 = pppppppuVar5;
            for (pppppppuVar10 = pppppppuVar9;
                (0 < iVar8 && (pppppppuVar10 != (undefined8 *******)0x0));
                pppppppuVar10 = (undefined8 *******)*pppppppuVar10) {
              iVar8 = iVar8 + -1;
              *pppppppuVar4 = pppppppuVar10;
              pppppppuVar4 = pppppppuVar10;
            }
          } while (pppppppuVar10 != (undefined8 *******)0x0);
        }
      } while( true );
    }
LAB_032cdbb0:
    plVar11 = (long *)param_1[3];
    *param_1 = (long)pppppppuVar4;
    if (plVar11 != (long *)0x0) {
      lVar1 = param_1[1];
      do {
        if (0 < plVar11[3] * lVar1) {
          pppppppuVar9 = (undefined8 *******)plVar11[2];
          pppppppuVar10 = (undefined8 *******)((long)pppppppuVar9 + plVar11[3] * lVar1);
          do {
            if (pppppppuVar9 == pppppppuVar4) {
              (*param_2)(pppppppuVar9,lVar1,0,param_3,param_4);
              pppppppuVar4 = (undefined8 *******)*pppppppuVar4;
            }
            else {
              (*param_2)(pppppppuVar9,lVar1,1,param_3,param_4);
            }
            lVar1 = param_1[1];
            pppppppuVar9 = (undefined8 *******)((long)pppppppuVar9 + lVar1);
          } while (pppppppuVar9 < pppppppuVar10);
        }
        plVar11 = (long *)*plVar11;
      } while (plVar11 != (long *)0x0);
    }
  }
  return;
}


