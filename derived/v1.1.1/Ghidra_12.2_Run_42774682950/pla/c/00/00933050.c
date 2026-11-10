/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00933050; name: FUN_00933050
 */


bool FUN_00933050(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 local_68;
  undefined8 local_58;
  
  switch((long)param_2 - (long)param_1 >> 3) {
  case 0:
  case 1:
    break;
  case 2:
    local_58 = param_2[-1];
    local_68 = *param_1;
    uVar2 = (*(code *)*param_3)(param_3 + 4,&local_58,&local_68);
    if ((uVar2 & 1) != 0) {
      uVar8 = *param_1;
      *param_1 = param_2[-1];
      param_2[-1] = uVar8;
      return true;
    }
    break;
  case 3:
    FUN_00932b70(param_1,param_1 + 1,param_2 + -1,param_3);
    break;
  case 4:
    FUN_00932cc0(param_1,param_1 + 1,param_1 + 2,param_2 + -1,param_3);
    break;
  case 5:
    FUN_00932de0(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1,param_3);
    break;
  default:
    FUN_00932b70(param_1,param_1 + 1,param_1 + 2,param_3);
    if (param_1 + 3 != param_2) {
      lVar6 = 0;
      iVar7 = 0;
      puVar3 = param_1 + 3;
      puVar5 = param_1 + 2;
      do {
        puVar4 = puVar3;
        local_68 = *puVar5;
        local_58 = *puVar4;
        uVar2 = (*(code *)*param_3)(param_3 + 4,&local_58,&local_68);
        if ((uVar2 & 1) != 0) {
          uVar8 = *puVar4;
          lVar1 = lVar6;
          do {
            lVar9 = lVar1;
            *(undefined8 *)((long)param_1 + lVar9 + 0x18) =
                 *(undefined8 *)((long)param_1 + lVar9 + 0x10);
            if (lVar9 == -0x10) {
              puVar3 = param_1;
              goto LAB_00933120;
            }
            local_68 = *(undefined8 *)((long)param_1 + lVar9 + 8);
            local_58 = uVar8;
            uVar2 = (*(code *)*param_3)(param_3 + 4,&local_58,&local_68);
            lVar1 = lVar9 + -8;
          } while ((uVar2 & 1) != 0);
          puVar3 = (undefined8 *)((long)param_1 + lVar9 + 0x10);
LAB_00933120:
          iVar7 = iVar7 + 1;
          *puVar3 = uVar8;
          if (iVar7 == 8) {
            return puVar4 + 1 == param_2;
          }
        }
        lVar6 = lVar6 + 8;
        puVar3 = puVar4 + 1;
        puVar5 = puVar4;
      } while (puVar4 + 1 != param_2);
    }
  }
  return true;
}


