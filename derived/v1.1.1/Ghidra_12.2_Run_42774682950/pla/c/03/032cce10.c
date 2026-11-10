/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032cce10; name: FUN_032cce10
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_032cce10(undefined8 *******param_1)

{
  undefined8 *******pppppppuVar1;
  int iVar2;
  uint uVar3;
  undefined8 *******pppppppuVar4;
  undefined8 *******pppppppuVar5;
  int iVar6;
  int iVar7;
  undefined8 *******pppppppuVar8;
  undefined8 *******local_8;
  
  if (param_1 == (undefined8 *******)0x0) {
    return;
  }
  iVar2 = 1;
  if (param_1 != (undefined8 *******)0x0) goto LAB_032cce48;
  do {
    local_8 = (undefined8 *******)0x0;
    uVar3 = 0;
    pppppppuVar1 = &local_8;
    while( true ) {
      *pppppppuVar1 = (undefined8 ******)0x0;
      iVar2 = iVar2 << 1;
      if (uVar3 < 2) {
        return;
      }
      param_1 = local_8;
      if (local_8 == (undefined8 *******)0x0) break;
LAB_032cce48:
      local_8 = (undefined8 *******)0x0;
      if (iVar2 < 1) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      uVar3 = 0;
      pppppppuVar1 = &local_8;
      do {
        iVar6 = 0;
        pppppppuVar8 = param_1;
        do {
          pppppppuVar8 = (undefined8 *******)*pppppppuVar8;
          iVar6 = iVar6 + 1;
          if (iVar2 <= iVar6) break;
        } while (pppppppuVar8 != (undefined8 *******)0x0);
        iVar7 = iVar2;
        if (pppppppuVar8 == (undefined8 *******)0x0) {
          pppppppuVar8 = (undefined8 *******)0x0;
LAB_032ccf0c:
          do {
            pppppppuVar4 = param_1;
            *pppppppuVar1 = pppppppuVar4;
            iVar6 = iVar6 + -1;
            param_1 = (undefined8 *******)*pppppppuVar4;
            pppppppuVar1 = pppppppuVar4;
          } while (0 < iVar6);
        }
        else {
          pppppppuVar4 = pppppppuVar1;
          do {
            if (pppppppuVar8[1] < param_1[1]) {
              pppppppuVar5 = (undefined8 *******)*pppppppuVar8;
              iVar7 = iVar7 + -1;
              *pppppppuVar4 = pppppppuVar8;
              pppppppuVar1 = param_1;
              pppppppuVar4 = pppppppuVar8;
            }
            else {
              pppppppuVar1 = (undefined8 *******)*param_1;
              iVar6 = iVar6 + -1;
              *pppppppuVar4 = param_1;
              pppppppuVar5 = pppppppuVar8;
              pppppppuVar4 = param_1;
            }
            pppppppuVar8 = pppppppuVar5;
            param_1 = pppppppuVar1;
          } while (((pppppppuVar8 != (undefined8 *******)0x0) && (0 < iVar6)) && (0 < iVar7));
          if (0 < iVar6) {
            pppppppuVar1 = pppppppuVar4;
            goto LAB_032ccf0c;
          }
        }
        uVar3 = uVar3 + 1;
        pppppppuVar1 = pppppppuVar4;
        for (param_1 = pppppppuVar8; (0 < iVar7 && (param_1 != (undefined8 *******)0x0));
            param_1 = (undefined8 *******)*param_1) {
          iVar7 = iVar7 + -1;
          *pppppppuVar1 = param_1;
          pppppppuVar1 = param_1;
        }
      } while (param_1 != (undefined8 *******)0x0);
    }
  } while( true );
}


