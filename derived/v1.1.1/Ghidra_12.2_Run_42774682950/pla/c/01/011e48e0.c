/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011e48e0; name: FUN_011e48e0
 */


bool FUN_011e48e0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  undefined4 local_44;
  
  switch((long)param_2 - (long)param_1 >> 2) {
  case 0:
  case 1:
    break;
  case 2:
    param_2 = param_2 + -1;
    uVar3 = FUN_011e4478(param_2,param_1);
    if ((uVar3 & 1) != 0) {
      uVar1 = *param_1;
      *param_1 = *param_2;
      *param_2 = uVar1;
      return true;
    }
    break;
  case 3:
    FUN_011e4580(param_1,param_1 + 1,param_2 + -1);
    break;
  case 4:
    FUN_011e4660(param_1,param_1 + 1,param_1 + 2,param_2 + -1);
    break;
  case 5:
    FUN_011e4720(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1);
    break;
  default:
    FUN_011e4580(param_1,param_1 + 1,param_1 + 2);
    if (param_1 + 3 != param_2) {
      lVar7 = 0;
      iVar8 = 0;
      puVar4 = param_1 + 3;
      puVar6 = param_1 + 2;
      do {
        puVar5 = puVar4;
        uVar3 = FUN_011e4478(puVar5,puVar6);
        if ((uVar3 & 1) != 0) {
          local_44 = *puVar5;
          lVar2 = lVar7;
          do {
            lVar9 = lVar2;
            *(undefined4 *)((long)param_1 + lVar9 + 0xc) =
                 *(undefined4 *)((long)param_1 + lVar9 + 8);
            if (lVar9 == -8) {
              puVar4 = param_1;
              goto LAB_011e4988;
            }
            uVar3 = FUN_011e4478(&local_44,(long)param_1 + lVar9 + 4);
            lVar2 = lVar9 + -4;
          } while ((uVar3 & 1) != 0);
          puVar4 = (undefined4 *)((long)param_1 + lVar9 + 8);
LAB_011e4988:
          iVar8 = iVar8 + 1;
          *puVar4 = local_44;
          if (iVar8 == 8) {
            return puVar5 + 1 == param_2;
          }
        }
        lVar7 = lVar7 + 4;
        puVar4 = puVar5 + 1;
        puVar6 = puVar5;
      } while (puVar5 + 1 != param_2);
    }
  }
  return true;
}


