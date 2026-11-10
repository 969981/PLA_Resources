/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013de4b0; name: FUN_013de4b0
 */


bool FUN_013de4b0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong extraout_x10;
  int iVar8;
  ulong unaff_x22;
  ulong unaff_x23;
  ulong unaff_x24;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  
  switch(((long)param_2 - (long)param_1 >> 2) * -0x5555555555555555) {
  case 0:
  case 1:
    break;
  case 2:
    puVar12 = (undefined8 *)((long)param_2 + -0xc);
    uVar6 = FUN_013dde4c(param_3,*puVar12,*(undefined4 *)((long)param_2 + -4),*param_1,
                         *(undefined4 *)(param_1 + 1));
    if ((uVar6 & 1) != 0) {
      uVar10 = *param_1;
      uVar2 = *(undefined4 *)(param_1 + 1);
      uVar7 = *puVar12;
      *(undefined4 *)(param_1 + 1) = *(undefined4 *)((long)param_2 + -4);
      *param_1 = uVar7;
      *(undefined4 *)((long)param_2 + -4) = uVar2;
      *puVar12 = uVar10;
      return true;
    }
    break;
  case 3:
    FUN_013ddea0(param_1,(long)param_1 + 0xc,(long)param_2 + -0xc,param_3);
    break;
  case 4:
    FUN_013de070(param_1,(long)param_1 + 0xc,param_1 + 3,(long)param_2 + -0xc,param_3);
    break;
  case 5:
    FUN_013de1c0(param_1,(long)param_1 + 0xc,param_1 + 3,(long)param_1 + 0x24,(long)param_2 + -0xc,
                 param_3);
    break;
  default:
    FUN_013ddea0(param_1,(long)param_1 + 0xc,param_1 + 3,param_3);
    if ((undefined8 *)((long)param_1 + 0x24) != param_2) {
      lVar9 = 0;
      iVar8 = 0;
      uVar6 = extraout_x10;
      puVar12 = param_1 + 3;
      puVar11 = (undefined8 *)((long)param_1 + 0x24);
      do {
        uVar6 = uVar6 & 0xffffffff00000000 | (ulong)*(uint *)(puVar11 + 1);
        unaff_x24 = unaff_x24 & 0xffffffff00000000 | (ulong)*(uint *)(puVar12 + 1);
        uVar5 = FUN_013dde4c(param_3,*puVar11,uVar6,*puVar12,unaff_x24);
        if ((uVar5 & 1) != 0) {
          uVar10 = *puVar11;
          uVar3 = *(uint *)(puVar11 + 1);
          lVar4 = lVar9;
          do {
            lVar13 = lVar4;
            *(undefined8 *)((long)param_1 + lVar13 + 0x24) =
                 *(undefined8 *)((long)param_1 + lVar13 + 0x18);
            *(undefined4 *)((long)param_1 + lVar13 + 0x2c) =
                 *(undefined4 *)((long)param_1 + lVar13 + 0x20);
            if (lVar13 == -0x18) {
              puVar12 = param_1;
              goto LAB_013de658;
            }
            unaff_x23 = unaff_x23 & 0xffffffff00000000 | (ulong)uVar3;
            unaff_x22 = unaff_x22 & 0xffffffff00000000 |
                        (ulong)*(uint *)((long)param_1 + lVar13 + 0x14);
            uVar5 = FUN_013dde4c(param_3,uVar10,unaff_x23,
                                 *(undefined8 *)((long)param_1 + lVar13 + 0xc),unaff_x22);
            lVar4 = lVar13 + -0xc;
          } while ((uVar5 & 1) != 0);
          puVar12 = (undefined8 *)((long)param_1 + lVar13 + 0x18);
LAB_013de658:
          *puVar12 = uVar10;
          iVar8 = iVar8 + 1;
          *(uint *)(puVar12 + 1) = uVar3;
          if (iVar8 == 8) {
            return (undefined8 *)((long)puVar11 + 0xc) == param_2;
          }
        }
        puVar1 = (undefined8 *)((long)puVar11 + 0xc);
        lVar9 = lVar9 + 0xc;
        puVar12 = puVar11;
        puVar11 = puVar1;
      } while (puVar1 != param_2);
    }
  }
  return true;
}


