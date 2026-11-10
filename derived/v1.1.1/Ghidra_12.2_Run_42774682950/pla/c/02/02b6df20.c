/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b6df20; name: FUN_02b6df20
 */


bool FUN_02b6df20(byte *param_1,byte *param_2)

{
  uint uVar1;
  short sVar2;
  byte *pbVar3;
  bool bVar4;
  long lVar5;
  int iVar6;
  byte *pbVar7;
  undefined8 uVar8;
  byte *pbVar9;
  long lVar10;
  
  switch((long)param_2 - (long)param_1 >> 3) {
  case 0:
  case 1:
    break;
  case 2:
    if (param_2[-8] == *param_1) {
      if (*(short *)(param_2 + -2) == *(short *)(param_1 + 6)) {
        if (*(short *)(param_2 + -6) < *(short *)(param_1 + 2)) {
LAB_02b6e124:
          uVar8 = *(undefined8 *)param_1;
          *(undefined8 *)param_1 = *(undefined8 *)(param_2 + -8);
          *(undefined8 *)(param_2 + -8) = uVar8;
          return true;
        }
      }
      else if (*(short *)(param_2 + -2) < *(short *)(param_1 + 6)) goto LAB_02b6e124;
    }
    else if (param_2[-8] < *param_1) goto LAB_02b6e124;
    break;
  case 3:
    FUN_02b6da90(param_1,param_1 + 8,param_2 + -8);
    break;
  case 4:
    FUN_02b6dc20(param_1,param_1 + 8,param_1 + 0x10,param_2 + -8);
    break;
  case 5:
    FUN_02b6dd70(param_1,param_1 + 8,param_1 + 0x10,param_1 + 0x18,param_2 + -8);
    break;
  default:
    FUN_02b6da90(param_1,param_1 + 8,param_1 + 0x10);
    if (param_1 + 0x18 != param_2) {
      lVar5 = 0;
      iVar6 = 0;
      pbVar3 = param_1 + 0x18;
      pbVar9 = param_1 + 0x10;
      do {
        pbVar7 = pbVar3;
        if (*pbVar7 == *pbVar9) {
          if (*(short *)(pbVar7 + 6) == *(short *)(pbVar9 + 6)) {
            if (*(short *)(pbVar7 + 2) < *(short *)(pbVar9 + 2)) {
LAB_02b6e050:
              uVar8 = *(undefined8 *)pbVar7;
              *(undefined8 *)pbVar7 = *(undefined8 *)pbVar9;
              if (pbVar9 != param_1) {
                lVar10 = lVar5;
                do {
                  uVar1 = (uint)uVar8 & 0xff;
                  if (param_1[lVar10 + 8] == uVar1) {
                    sVar2 = (short)((ulong)uVar8 >> 0x30);
                    if (*(short *)(param_1 + lVar10 + 0xe) == sVar2) {
                      if ((int)*(short *)(param_1 + lVar10 + 10) <= (int)(uint)uVar8 >> 0x10) {
LAB_02b6e0c0:
                        pbVar9 = param_1 + lVar10 + 0x10;
                        goto LAB_02b6dfdc;
                      }
                    }
                    else if (*(short *)(param_1 + lVar10 + 0xe) <= sVar2) goto LAB_02b6e0c0;
                  }
                  else if (param_1[lVar10 + 8] <= uVar1) goto LAB_02b6e0c0;
                  bVar4 = lVar10 != -8;
                  *(undefined8 *)(param_1 + lVar10 + 0x10) = *(undefined8 *)(param_1 + lVar10 + 8);
                  lVar10 = lVar10 + -8;
                } while (bVar4);
                pbVar9 = param_1;
              }
LAB_02b6dfdc:
              iVar6 = iVar6 + 1;
              *(undefined8 *)pbVar9 = uVar8;
              if (iVar6 == 8) {
                return pbVar7 + 8 == param_2;
              }
            }
          }
          else if (*(short *)(pbVar7 + 6) < *(short *)(pbVar9 + 6)) goto LAB_02b6e050;
        }
        else if (*pbVar7 < *pbVar9) goto LAB_02b6e050;
        lVar5 = lVar5 + 8;
        pbVar3 = pbVar7 + 8;
        pbVar9 = pbVar7;
      } while (pbVar7 + 8 != param_2);
    }
  }
  return true;
}


