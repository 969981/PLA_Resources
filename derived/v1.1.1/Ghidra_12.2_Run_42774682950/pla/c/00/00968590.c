/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00968590; name: FUN_00968590
 */


bool FUN_00968590(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  
  switch(((long)param_2 - (long)param_1 >> 2) * -0x5555555555555555) {
  case 0:
  case 1:
    break;
  case 2:
    if (*(uint *)((long)param_2 + -4) < *(uint *)(param_1 + 1)) {
      uVar8 = *param_1;
      uVar1 = *(undefined4 *)(param_1 + 1);
      uVar4 = *(undefined8 *)((long)param_2 + -0xc);
      *(undefined4 *)(param_1 + 1) = *(undefined4 *)((long)param_2 + -4);
      *param_1 = uVar4;
      *(undefined4 *)((long)param_2 + -4) = uVar1;
      *(undefined8 *)((long)param_2 + -0xc) = uVar8;
      return true;
    }
    break;
  case 3:
    FUN_009680f0(param_1,(long)param_1 + 0xc,(long)param_2 + -0xc);
    break;
  case 4:
    FUN_00968250(param_1,(long)param_1 + 0xc,param_1 + 3,(long)param_2 + -0xc);
    break;
  case 5:
    FUN_00968360(param_1,(long)param_1 + 0xc,param_1 + 3,(long)param_1 + 0x24,(long)param_2 + -0xc);
    break;
  default:
    FUN_009680f0(param_1,(long)param_1 + 0xc,param_1 + 3);
    if ((undefined8 *)((long)param_1 + 0x24) != param_2) {
      lVar5 = 0;
      iVar6 = 0;
      puVar9 = (undefined8 *)((long)param_1 + 0x24);
      puVar11 = param_1 + 3;
      do {
        puVar7 = puVar9;
        uVar2 = *(uint *)(puVar7 + 1);
        if (uVar2 < *(uint *)(puVar11 + 1)) {
          uVar8 = *puVar7;
          lVar3 = lVar5;
          do {
            lVar10 = lVar3;
            *(undefined8 *)((long)param_1 + lVar10 + 0x24) =
                 *(undefined8 *)((long)param_1 + lVar10 + 0x18);
            *(undefined4 *)((long)param_1 + lVar10 + 0x2c) =
                 *(undefined4 *)((long)param_1 + lVar10 + 0x20);
            if (lVar10 == -0x18) {
              puVar9 = param_1;
              goto LAB_0096865c;
            }
            lVar3 = lVar10 + -0xc;
          } while (uVar2 < *(uint *)((long)param_1 + lVar10 + 0x14));
          puVar9 = (undefined8 *)((long)param_1 + lVar10 + 0x18);
LAB_0096865c:
          iVar6 = iVar6 + 1;
          *puVar9 = uVar8;
          *(uint *)(puVar9 + 1) = uVar2;
          if (iVar6 == 8) {
            return (undefined8 *)((long)puVar7 + 0xc) == param_2;
          }
        }
        lVar5 = lVar5 + 0xc;
        puVar9 = (undefined8 *)((long)puVar7 + 0xc);
        puVar11 = puVar7;
      } while ((undefined8 *)((long)puVar7 + 0xc) != param_2);
    }
  }
  return true;
}


