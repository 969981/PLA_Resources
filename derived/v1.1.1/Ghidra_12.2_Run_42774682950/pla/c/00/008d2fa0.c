/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008d2fa0; name: FUN_008d2fa0
 */


bool FUN_008d2fa0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  
  switch((long)param_2 - (long)param_1 >> 3) {
  case 0:
  case 1:
    break;
  case 2:
    uVar7 = param_2[-1];
    if (((int)uVar7 != 0) &&
       (uVar9 = *param_1, (int)((ulong)uVar9 >> 0x20) < (int)((ulong)uVar7 >> 0x20))) {
      *param_1 = uVar7;
      param_2[-1] = uVar9;
      return true;
    }
    break;
  case 3:
    FUN_008d2c60(param_1,param_1 + 1,param_2 + -1);
    break;
  case 4:
    FUN_008d2d30(param_1,param_1 + 1,param_1 + 2,param_2 + -1);
    break;
  case 5:
    FUN_008d2df0(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1);
    break;
  default:
    FUN_008d2c60(param_1,param_1 + 1,param_1 + 2);
    puVar1 = param_1 + 3;
    if (puVar1 != param_2) {
      iVar4 = 0;
      lVar5 = 0x18;
      uVar7 = *puVar1;
      iVar6 = (int)uVar7;
      puVar8 = param_1 + 2;
      do {
        if (iVar6 != 0) {
          uVar9 = *puVar8;
          iVar6 = (int)((ulong)uVar7 >> 0x20);
          if ((int)((ulong)uVar9 >> 0x20) < iVar6) {
            lVar10 = lVar5;
            do {
              lVar3 = lVar10 + -8;
              *(undefined8 *)((long)param_1 + lVar10) = uVar9;
              if (lVar3 == 0) {
                puVar8 = param_1;
                goto LAB_008d3048;
              }
              uVar9 = *(undefined8 *)((long)param_1 + lVar10 + -0x10);
              lVar10 = lVar3;
            } while ((int)((ulong)uVar9 >> 0x20) < iVar6);
            puVar8 = (undefined8 *)((long)param_1 + lVar3);
LAB_008d3048:
            iVar4 = iVar4 + 1;
            *puVar8 = uVar7;
            if (iVar4 == 8) {
              return puVar1 + 1 == param_2;
            }
          }
        }
        puVar2 = puVar1 + 1;
        lVar5 = lVar5 + 8;
        if (puVar2 == param_2) {
          return true;
        }
        uVar7 = *puVar2;
        iVar6 = (int)uVar7;
        puVar8 = puVar1;
        puVar1 = puVar2;
      } while( true );
    }
  }
  return true;
}


