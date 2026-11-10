/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008d6a90; name: FUN_008d6a90
 */


bool FUN_008d6a90(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  
  switch((long)param_2 - (long)param_1 >> 3) {
  case 0:
  case 1:
    break;
  case 2:
    uVar5 = *param_1;
    if ((int)((ulong)uVar5 >> 0x20) < (int)((ulong)param_2[-1] >> 0x20)) {
      *param_1 = param_2[-1];
      param_2[-1] = uVar5;
      return true;
    }
    break;
  case 3:
    FUN_008d67a0(param_1,param_1 + 1,param_2 + -1);
    break;
  case 4:
    FUN_008d6850(param_1,param_1 + 1,param_1 + 2,param_2 + -1);
    break;
  case 5:
    FUN_008d6900(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1);
    break;
  default:
    FUN_008d67a0(param_1,param_1 + 1,param_1 + 2);
    if (param_1 + 3 != param_2) {
      iVar3 = 0;
      lVar4 = 0x18;
      puVar7 = param_1 + 3;
      puVar10 = param_1 + 2;
      do {
        puVar2 = puVar7;
        uVar5 = *puVar2;
        uVar8 = *puVar10;
        iVar6 = (int)((ulong)uVar5 >> 0x20);
        if ((int)((ulong)uVar8 >> 0x20) < iVar6) {
          lVar9 = lVar4;
          do {
            lVar1 = lVar9 + -8;
            *(undefined8 *)((long)param_1 + lVar9) = uVar8;
            if (lVar1 == 0) {
              puVar7 = param_1;
              goto LAB_008d6b2c;
            }
            uVar8 = *(undefined8 *)((long)param_1 + lVar9 + -0x10);
            lVar9 = lVar1;
          } while ((int)((ulong)uVar8 >> 0x20) < iVar6);
          puVar7 = (undefined8 *)((long)param_1 + lVar1);
LAB_008d6b2c:
          iVar3 = iVar3 + 1;
          *puVar7 = uVar5;
          if (iVar3 == 8) {
            return puVar2 + 1 == param_2;
          }
        }
        lVar4 = lVar4 + 8;
        puVar7 = puVar2 + 1;
        puVar10 = puVar2;
      } while (puVar2 + 1 != param_2);
    }
  }
  return true;
}


