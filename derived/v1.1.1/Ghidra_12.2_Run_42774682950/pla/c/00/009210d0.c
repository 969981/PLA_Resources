/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009210d0; name: FUN_009210d0
 */


bool FUN_009210d0(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  
  switch((long)param_2 - (long)param_1 >> 3) {
  case 0:
  case 1:
    break;
  case 2:
    if (*(int *)((long)param_1 + 4) < *(int *)((long)param_2 + -4)) {
      uVar5 = *param_1;
      *param_1 = param_2[-1];
      param_2[-1] = uVar5;
      return true;
    }
    break;
  case 3:
    FUN_00920dc0(param_1,param_1 + 1,param_2 + -1);
    break;
  case 4:
    FUN_00920e80(param_1,param_1 + 1,param_1 + 2,param_2 + -1);
    break;
  case 5:
    FUN_00920f30(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1);
    break;
  default:
    FUN_00920dc0(param_1,param_1 + 1,param_1 + 2);
    if (param_1 + 3 != param_2) {
      lVar2 = 0;
      iVar3 = 0;
      puVar6 = param_1 + 3;
      puVar8 = param_1 + 2;
      do {
        puVar4 = puVar6;
        if (*(int *)((long)puVar8 + 4) < *(int *)((long)puVar4 + 4)) {
          uVar5 = *puVar4;
          lVar1 = lVar2;
          do {
            lVar7 = lVar1;
            *(undefined8 *)((long)param_1 + lVar7 + 0x18) =
                 *(undefined8 *)((long)param_1 + lVar7 + 0x10);
            if (lVar7 == -0x10) {
              puVar6 = param_1;
              goto LAB_0092116c;
            }
            lVar1 = lVar7 + -8;
          } while (*(int *)((long)param_1 + lVar7 + 0xc) < (int)((ulong)uVar5 >> 0x20));
          puVar6 = (undefined8 *)((long)param_1 + lVar7 + 0x10);
LAB_0092116c:
          iVar3 = iVar3 + 1;
          *puVar6 = uVar5;
          if (iVar3 == 8) {
            return puVar4 + 1 == param_2;
          }
        }
        lVar2 = lVar2 + 8;
        puVar6 = puVar4 + 1;
        puVar8 = puVar4;
      } while (puVar4 + 1 != param_2);
    }
  }
  return true;
}


