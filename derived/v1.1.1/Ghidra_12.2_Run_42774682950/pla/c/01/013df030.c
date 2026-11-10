/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013df030; name: FUN_013df030
 */


bool FUN_013df030(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  int iVar7;
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
    FUN_013deb90(param_1,(long)param_1 + 0xc,(long)param_2 + -0xc);
    break;
  case 4:
    FUN_013decf0(param_1,(long)param_1 + 0xc,param_1 + 3,(long)param_2 + -0xc);
    break;
  case 5:
    FUN_013dee00(param_1,(long)param_1 + 0xc,param_1 + 3,(long)param_1 + 0x24,(long)param_2 + -0xc);
    break;
  default:
    FUN_013deb90(param_1,(long)param_1 + 0xc,param_1 + 3);
    if ((undefined8 *)((long)param_1 + 0x24) != param_2) {
      lVar6 = 0;
      iVar7 = 0;
      puVar9 = (undefined8 *)((long)param_1 + 0x24);
      puVar11 = param_1 + 3;
      do {
        puVar5 = puVar9;
        uVar2 = *(uint *)(puVar5 + 1);
        if (uVar2 < *(uint *)(puVar11 + 1)) {
          uVar8 = *puVar5;
          lVar3 = lVar6;
          do {
            lVar10 = lVar3;
            *(undefined8 *)((long)param_1 + lVar10 + 0x24) =
                 *(undefined8 *)((long)param_1 + lVar10 + 0x18);
            *(undefined4 *)((long)param_1 + lVar10 + 0x2c) =
                 *(undefined4 *)((long)param_1 + lVar10 + 0x20);
            if (lVar10 == -0x18) {
              puVar9 = param_1;
              goto LAB_013df0fc;
            }
            lVar3 = lVar10 + -0xc;
          } while (uVar2 < *(uint *)((long)param_1 + lVar10 + 0x14));
          puVar9 = (undefined8 *)((long)param_1 + lVar10 + 0x18);
LAB_013df0fc:
          iVar7 = iVar7 + 1;
          *puVar9 = uVar8;
          *(uint *)(puVar9 + 1) = uVar2;
          if (iVar7 == 8) {
            return (undefined8 *)((long)puVar5 + 0xc) == param_2;
          }
        }
        lVar6 = lVar6 + 0xc;
        puVar9 = (undefined8 *)((long)puVar5 + 0xc);
        puVar11 = puVar5;
      } while ((undefined8 *)((long)puVar5 + 0xc) != param_2);
    }
  }
  return true;
}


