/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013e1260; name: FUN_013e1260
 */


/* WARNING: Removing unreachable block (ram,0x013e1508) */

bool FUN_013e1260(ulong *param_1,ulong *param_2,undefined8 *param_3)

{
  long lVar1;
  ulong uVar2;
  ulong *puVar3;
  long lVar4;
  ushort uVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  ushort uVar9;
  int iVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong *puVar13;
  
  switch(((long)param_2 - (long)param_1 >> 2) * -0x5555555555555555) {
  case 0:
  case 1:
    break;
  case 2:
    puVar12 = (ulong *)((long)param_2 + -0xc);
    if ((int)*puVar12 < 0x3d5) {
      uVar5 = *(ushort *)(*(long *)*param_3 + (*puVar12 & 0xffffffff) * 0x58 + 0xe8);
    }
    else {
      uVar5 = 0;
    }
    if (((int)*param_1 < 0x3d5) &&
       (uVar5 < *(ushort *)(*(long *)*param_3 + (*param_1 & 0xffffffff) * 0x58 + 0xe8))) {
      uVar2 = *param_1;
      uVar7 = param_1[1];
      uVar11 = *puVar12;
      *(undefined4 *)(param_1 + 1) = *(undefined4 *)((long)param_2 + -4);
      *param_1 = uVar11;
      *(int *)((long)param_2 + -4) = (int)uVar7;
      *puVar12 = uVar2;
      return true;
    }
    break;
  case 3:
    FUN_013e0ae0(param_1,(long)param_1 + 0xc,(long)param_2 + -0xc,param_3);
    break;
  case 4:
    FUN_013e0d80(param_1,(long)param_1 + 0xc,param_1 + 3,(long)param_2 + -0xc,param_3);
    break;
  case 5:
    FUN_013e0fa0(param_1,(long)param_1 + 0xc,param_1 + 3,(long)param_1 + 0x24,(long)param_2 + -0xc,
                 param_3);
    break;
  default:
    FUN_013e0ae0(param_1,(long)param_1 + 0xc,param_1 + 3,param_3);
    if ((ulong *)((long)param_1 + 0x24) != param_2) {
      lVar4 = 0;
      iVar6 = 0;
      puVar12 = (ulong *)((long)param_1 + 0x24);
      puVar13 = param_1 + 3;
      do {
        puVar3 = puVar12;
        uVar7 = *puVar3;
        if ((int)uVar7 < 0x3d5) {
          uVar5 = *(ushort *)(*(long *)*param_3 + (uVar7 & 0xffffffff) * 0x58 + 0xe8);
        }
        else {
          uVar5 = 0;
        }
        if (((int)*puVar13 < 0x3d5) &&
           (uVar5 < *(ushort *)(*(long *)*param_3 + (*puVar13 & 0xffffffff) * 0x58 + 0xe8))) {
          uVar2 = puVar3[1];
          lVar1 = lVar4;
          do {
            lVar8 = lVar1;
            *(undefined8 *)((long)param_1 + lVar8 + 0x24) =
                 *(undefined8 *)((long)param_1 + lVar8 + 0x18);
            *(undefined4 *)((long)param_1 + lVar8 + 0x2c) =
                 *(undefined4 *)((long)param_1 + lVar8 + 0x20);
            if (lVar8 == -0x18) {
              puVar12 = param_1;
              goto LAB_013e13f4;
            }
            uVar11 = *(ulong *)((long)param_1 + lVar8 + 0xc);
            iVar10 = (int)uVar11;
            if ((int)uVar7 < 0x3d5) {
              uVar5 = *(ushort *)(*(long *)*param_3 + (uVar7 & 0xffffffff) * 0x58 + 0xe8);
              if (iVar10 < 0x3d5) goto LAB_013e14a8;
LAB_013e14e8:
              uVar9 = 0;
            }
            else {
              uVar5 = 0;
              if (0x3d4 < iVar10) goto LAB_013e14e8;
LAB_013e14a8:
              uVar9 = *(ushort *)(*(long *)*param_3 + (uVar11 & 0xffffffff) * 0x58 + 0xe8);
            }
            lVar1 = lVar8 + -0xc;
          } while (uVar5 < uVar9);
          puVar12 = (ulong *)((long)param_1 + lVar8 + 0x18);
LAB_013e13f4:
          iVar6 = iVar6 + 1;
          *puVar12 = uVar7;
          *(int *)(puVar12 + 1) = (int)uVar2;
          if (iVar6 == 8) {
            return (ulong *)((long)puVar3 + 0xc) == param_2;
          }
        }
        lVar4 = lVar4 + 0xc;
        puVar12 = (ulong *)((long)puVar3 + 0xc);
        puVar13 = puVar3;
      } while ((ulong *)((long)puVar3 + 0xc) != param_2);
    }
  }
  return true;
}


