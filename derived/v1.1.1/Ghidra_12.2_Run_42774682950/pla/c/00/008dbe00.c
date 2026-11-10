/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008dbe00; name: FUN_008dbe00
 */


bool FUN_008dbe00(ulong *param_1,ulong *param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  ulong *puVar10;
  ulong *puVar11;
  
  switch(((long)param_2 - (long)param_1 >> 2) * -0x5555555555555555) {
  case 0:
  case 1:
    break;
  case 2:
    puVar10 = (ulong *)((long)param_2 + -0xc);
    if (*puVar10 >> 0x20 == 0) {
      return true;
    }
    if ((*puVar10 & 0xff) == 0x1f) {
      return true;
    }
    if ((int)param_1[1] < *(int *)((long)param_2 + -4)) {
      uVar3 = *param_1;
      uVar8 = param_1[1];
      uVar4 = *puVar10;
      *(undefined4 *)(param_1 + 1) = *(undefined4 *)((long)param_2 + -4);
      *param_1 = uVar4;
      *(int *)((long)param_2 + -4) = (int)uVar8;
      *puVar10 = uVar3;
      return true;
    }
    return true;
  case 3:
    FUN_008db910(param_1,(long)param_1 + 0xc,(long)param_2 + -0xc);
    break;
  case 4:
    FUN_008dbae0(param_1,(long)param_1 + 0xc,param_1 + 3,(long)param_2 + -0xc);
    break;
  case 5:
    FUN_008dbc40(param_1,(long)param_1 + 0xc,param_1 + 3,(long)param_1 + 0x24,(long)param_2 + -0xc);
    break;
  default:
    FUN_008db910(param_1,(long)param_1 + 0xc,param_1 + 3);
    if ((ulong *)((long)param_1 + 0x24) != param_2) {
      lVar6 = 0;
      iVar7 = 0;
      puVar10 = (ulong *)((long)param_1 + 0x24);
      puVar11 = param_1 + 3;
      do {
        puVar5 = puVar10;
        uVar8 = *puVar5;
        iVar1 = (int)puVar5[1];
        if ((uVar8 >> 0x20 != 0 && (uVar8 & 0xff) != 0x1f) && (int)puVar11[1] < iVar1) {
          lVar2 = lVar6;
          do {
            lVar9 = lVar2;
            *(undefined8 *)((long)param_1 + lVar9 + 0x24) =
                 *(undefined8 *)((long)param_1 + lVar9 + 0x18);
            *(undefined4 *)((long)param_1 + lVar9 + 0x2c) =
                 *(undefined4 *)((long)param_1 + lVar9 + 0x20);
            if (lVar9 == -0x18) {
              puVar10 = param_1;
              goto LAB_008dbf44;
            }
            lVar2 = lVar9 + -0xc;
          } while (*(int *)((long)param_1 + lVar9 + 0x14) < iVar1);
          puVar10 = (ulong *)((long)param_1 + lVar9 + 0x18);
LAB_008dbf44:
          iVar7 = iVar7 + 1;
          *puVar10 = uVar8;
          *(int *)(puVar10 + 1) = iVar1;
          if (iVar7 == 8) {
            return (ulong *)((long)puVar5 + 0xc) == param_2;
          }
        }
        lVar6 = lVar6 + 0xc;
        puVar10 = (ulong *)((long)puVar5 + 0xc);
        puVar11 = puVar5;
      } while ((ulong *)((long)puVar5 + 0xc) != param_2);
    }
  }
  return true;
}


