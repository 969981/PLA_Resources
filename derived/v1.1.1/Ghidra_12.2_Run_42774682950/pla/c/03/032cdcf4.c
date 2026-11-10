/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032cdcf4; name: FUN_032cdcf4
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_032cdcf4(long *param_1,undefined8 param_2,char param_3,undefined4 param_4)

{
  ulong uVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  undefined8 *******pppppppuVar6;
  undefined8 *******pppppppuVar7;
  undefined8 *******pppppppuVar8;
  int iVar9;
  int iVar10;
  undefined8 *******pppppppuVar11;
  long *plVar12;
  ulong uVar13;
  undefined8 *******pppppppuVar14;
  undefined8 *******local_58;
  
  plVar12 = (long *)param_1[4];
  cVar2 = '\x02';
  if (param_3 != '\x01') {
    cVar2 = param_3;
  }
  for (; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
    FUN_032cdc50(param_1,plVar12,param_2,param_4);
    lVar4 = param_1[1];
    if (0 < lVar4 * plVar12[3]) {
      uVar13 = plVar12[2];
      uVar1 = uVar13 + lVar4 * plVar12[3];
      do {
        FUN_032d4514(param_2,param_4,cVar2,uVar13,(long)(int)lVar4);
        lVar4 = param_1[1];
        uVar13 = uVar13 + lVar4;
      } while (uVar13 < uVar1);
    }
  }
  if ((param_1[3] != 0) || (*param_1 != 0)) {
    lVar4 = FUN_032cce10();
    param_1[3] = lVar4;
    pppppppuVar6 = (undefined8 *******)param_1[8];
    pppppppuVar14 = (undefined8 *******)*param_1;
    pppppppuVar11 = pppppppuVar14;
    if (pppppppuVar6 < (undefined8 *******)param_1[9]) {
      do {
        pppppppuVar14 = pppppppuVar6;
        *pppppppuVar14 = pppppppuVar11;
        pppppppuVar6 = (undefined8 *******)((long)pppppppuVar14 + param_1[1]);
        pppppppuVar11 = pppppppuVar14;
      } while ((undefined8 *******)((long)pppppppuVar14 + param_1[1]) <
               (undefined8 *******)param_1[9]);
    }
    *param_1 = (long)pppppppuVar14;
    param_1[8] = 0;
    param_1[9] = 0;
    pppppppuVar6 = (undefined8 *******)0x0;
    if (pppppppuVar14 != (undefined8 *******)0x0) {
      iVar3 = 1;
      if (pppppppuVar14 != (undefined8 *******)0x0) goto LAB_032cde2c;
      do {
        local_58 = (undefined8 *******)0x0;
        uVar5 = 0;
        pppppppuVar6 = &local_58;
        while( true ) {
          *pppppppuVar6 = (undefined8 ******)0x0;
          iVar3 = iVar3 << 1;
          pppppppuVar6 = local_58;
          if (uVar5 < 2) goto LAB_032cdf38;
          pppppppuVar14 = local_58;
          if (local_58 == (undefined8 *******)0x0) break;
LAB_032cde2c:
          local_58 = (undefined8 *******)0x0;
          if (iVar3 < 1) {
            do {
                    /* WARNING: Do nothing block with infinite loop */
            } while( true );
          }
          uVar5 = 0;
          pppppppuVar6 = &local_58;
          do {
            iVar9 = 0;
            pppppppuVar11 = pppppppuVar14;
            do {
              pppppppuVar11 = (undefined8 *******)*pppppppuVar11;
              iVar9 = iVar9 + 1;
              if (iVar3 <= iVar9) break;
            } while (pppppppuVar11 != (undefined8 *******)0x0);
            iVar10 = iVar3;
            if (pppppppuVar11 == (undefined8 *******)0x0) {
              pppppppuVar11 = (undefined8 *******)0x0;
LAB_032cded8:
              do {
                pppppppuVar7 = pppppppuVar14;
                *pppppppuVar6 = pppppppuVar7;
                iVar9 = iVar9 + -1;
                pppppppuVar6 = pppppppuVar7;
                pppppppuVar14 = (undefined8 *******)*pppppppuVar7;
              } while (0 < iVar9);
            }
            else {
              pppppppuVar7 = pppppppuVar6;
              do {
                if (pppppppuVar11 < pppppppuVar14) {
                  pppppppuVar8 = (undefined8 *******)*pppppppuVar11;
                  iVar10 = iVar10 + -1;
                  *pppppppuVar7 = pppppppuVar11;
                  pppppppuVar6 = pppppppuVar14;
                  pppppppuVar7 = pppppppuVar11;
                }
                else {
                  pppppppuVar6 = (undefined8 *******)*pppppppuVar14;
                  iVar9 = iVar9 + -1;
                  *pppppppuVar7 = pppppppuVar14;
                  pppppppuVar8 = pppppppuVar11;
                  pppppppuVar7 = pppppppuVar14;
                }
                pppppppuVar11 = pppppppuVar8;
                pppppppuVar14 = pppppppuVar6;
              } while (((pppppppuVar11 != (undefined8 *******)0x0) && (0 < iVar9)) && (0 < iVar10));
              if (0 < iVar9) {
                pppppppuVar6 = pppppppuVar7;
                goto LAB_032cded8;
              }
            }
            uVar5 = uVar5 + 1;
            pppppppuVar6 = pppppppuVar7;
            for (pppppppuVar14 = pppppppuVar11;
                (0 < iVar10 && (pppppppuVar14 != (undefined8 *******)0x0));
                pppppppuVar14 = (undefined8 *******)*pppppppuVar14) {
              iVar10 = iVar10 + -1;
              *pppppppuVar6 = pppppppuVar14;
              pppppppuVar6 = pppppppuVar14;
            }
          } while (pppppppuVar14 != (undefined8 *******)0x0);
        }
      } while( true );
    }
LAB_032cdf38:
    plVar12 = (long *)param_1[3];
    *param_1 = (long)pppppppuVar6;
    for (; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
      FUN_032cdc50(param_1,plVar12,param_2,param_4);
      lVar4 = param_1[1];
      if (0 < lVar4 * plVar12[3]) {
        pppppppuVar11 = (undefined8 *******)plVar12[2];
        pppppppuVar14 = (undefined8 *******)((long)pppppppuVar11 + lVar4 * plVar12[3]);
        do {
          if (pppppppuVar11 == pppppppuVar6) {
            FUN_032d4514(param_2,param_4,cVar2,pppppppuVar11,(long)(int)lVar4);
            pppppppuVar6 = (undefined8 *******)*pppppppuVar6;
          }
          else {
            FUN_032d4514(param_2,param_4,param_3,pppppppuVar11,(long)(int)lVar4);
          }
          lVar4 = param_1[1];
          pppppppuVar11 = (undefined8 *******)((long)pppppppuVar11 + lVar4);
        } while (pppppppuVar11 < pppppppuVar14);
      }
    }
  }
  return 0;
}


