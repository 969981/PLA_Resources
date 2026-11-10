/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ba70c0; name: FUN_01ba70c0
 */


bool FUN_01ba70c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  float fVar12;
  
  switch((long)param_2 - (long)param_1 >> 4) {
  case 0:
  case 1:
    break;
  case 2:
    if (*(float *)(param_2 + -1) < *(float *)(param_1 + 1)) {
      uVar8 = *param_1;
      uVar1 = param_1[1];
      uVar2 = param_2[-1];
      *param_1 = param_2[-2];
      param_1[1] = uVar2;
      param_2[-2] = uVar8;
      param_2[-1] = uVar1;
      return true;
    }
    break;
  case 3:
    FUN_01ba6d30(param_1,param_1 + 2,param_2 + -2);
    break;
  case 4:
    FUN_01ba6e20(param_1,param_1 + 2,param_1 + 4,param_2 + -2);
    break;
  case 5:
    FUN_01ba6ef0(param_1,param_1 + 2,param_1 + 4,param_1 + 6,param_2 + -2);
    break;
  default:
    FUN_01ba6d30(param_1,param_1 + 2,param_1 + 4);
    if (param_1 + 6 != param_2) {
      lVar5 = 0;
      iVar6 = 0;
      puVar9 = param_1 + 6;
      puVar11 = param_1 + 4;
      do {
        puVar7 = puVar9;
        fVar12 = *(float *)(puVar7 + 1);
        if (fVar12 < *(float *)(puVar11 + 1)) {
          uVar8 = *puVar7;
          uVar3 = *(undefined4 *)((long)puVar7 + 0xc);
          lVar4 = lVar5;
          do {
            lVar10 = lVar4;
            *(undefined8 *)((long)param_1 + lVar10 + 0x30) =
                 *(undefined8 *)((long)param_1 + lVar10 + 0x20);
            *(undefined8 *)((long)param_1 + lVar10 + 0x38) =
                 *(undefined8 *)((long)param_1 + lVar10 + 0x28);
            if (lVar10 == -0x20) {
              puVar9 = param_1;
              goto LAB_01ba7168;
            }
            lVar4 = lVar10 + -0x10;
          } while (fVar12 < *(float *)((long)param_1 + lVar10 + 0x18));
          puVar9 = (undefined8 *)((long)param_1 + lVar10 + 0x20);
LAB_01ba7168:
          iVar6 = iVar6 + 1;
          *puVar9 = uVar8;
          *(float *)(puVar9 + 1) = fVar12;
          *(undefined4 *)((long)puVar9 + 0xc) = uVar3;
          if (iVar6 == 8) {
            return puVar7 + 2 == param_2;
          }
        }
        lVar5 = lVar5 + 0x10;
        puVar9 = puVar7 + 2;
        puVar11 = puVar7;
      } while (puVar7 + 2 != param_2);
    }
  }
  return true;
}


