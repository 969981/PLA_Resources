/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01120c70; name: FUN_01120c70
 */


bool FUN_01120c70(uint *param_1,uint *param_2,long *param_3)

{
  uint uVar1;
  ulong uVar2;
  uint *puVar3;
  uint *puVar4;
  long lVar5;
  long lVar6;
  uint *puVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  
  switch((long)param_2 - (long)param_1 >> 2) {
  case 0:
  case 1:
    break;
  case 2:
    lVar8 = *param_3;
    uVar2 = FUN_0111ea04((short)param_2[-1],(short)*param_1);
    if ((uVar2 & 1) == 0) {
      *(undefined1 *)(lVar8 + 0x53a) = 1;
      return true;
    }
    uVar1 = *param_1;
    *param_1 = param_2[-1];
    param_2[-1] = uVar1;
    return true;
  case 3:
    FUN_01120830(param_1,param_1 + 1,param_2 + -1,param_3);
    break;
  case 4:
    FUN_01120960(param_1,param_1 + 1,param_1 + 2,param_2 + -1,param_3);
    break;
  case 5:
    FUN_01120a50(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1,param_3);
    break;
  default:
    FUN_01120830(param_1,param_1 + 1,param_1 + 2,param_3);
    if (param_1 + 3 == param_2) {
      return true;
    }
    lVar8 = 0;
    iVar9 = 0;
    puVar4 = param_1 + 3;
    puVar7 = param_1 + 2;
    do {
      puVar3 = puVar4;
      lVar5 = *param_3;
      uVar2 = FUN_0111ea04((short)*puVar3,(short)*puVar7);
      if ((uVar2 & 1) == 0) {
        *(undefined1 *)(lVar5 + 0x53a) = 1;
      }
      else {
        uVar1 = *puVar3;
        lVar5 = lVar8;
        do {
          lVar10 = lVar5;
          *(undefined4 *)((long)param_1 + lVar10 + 0xc) =
               *(undefined4 *)((long)param_1 + lVar10 + 8);
          if (lVar10 == -8) {
            puVar4 = param_1;
            goto LAB_01120d90;
          }
          lVar6 = *param_3;
          uVar2 = FUN_0111ea04(uVar1 & 0xffff,*(undefined2 *)((long)param_1 + lVar10 + 4));
          lVar5 = lVar10 + -4;
        } while ((uVar2 & 1) != 0);
        *(undefined1 *)(lVar6 + 0x53a) = 1;
        puVar4 = (uint *)((long)param_1 + lVar10 + 8);
LAB_01120d90:
        iVar9 = iVar9 + 1;
        *puVar4 = uVar1;
        if (iVar9 == 8) {
          return puVar3 + 1 == param_2;
        }
      }
      lVar8 = lVar8 + 4;
      puVar4 = puVar3 + 1;
      puVar7 = puVar3;
    } while (puVar3 + 1 != param_2);
  }
  return true;
}


