/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029cfd50; name: FUN_029cfd50
 */


void FUN_029cfd50(long param_1,long param_2,uint param_3,ulong *param_4,uint param_5,long param_6)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  ulong uVar6;
  uint uVar7;
  char *pcVar8;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  if ((param_5 & 1) == 0) {
    if (param_6 == 0) {
      return;
    }
    FUN_02a3a6c4(*(undefined8 *)(param_1 + 0x20),param_6);
    return;
  }
  if (param_3 == 0x30) {
    pcVar8 = *(char **)(*(long *)(*(long *)(param_1 + 0x20) + 0x10) + 0xa8);
    uVar7 = (uint)*(byte *)(param_2 + 0x7d);
    if ((*pcVar8 == '\0') || ((byte)pcVar8[2] != uVar7)) {
      if ((pcVar8[3] != '\0') && ((byte)pcVar8[5] == uVar7)) {
        uVar4 = 1;
        goto LAB_029cffa8;
      }
      if ((pcVar8[6] != '\0') && ((byte)pcVar8[8] == uVar7)) {
        uVar4 = 2;
        goto LAB_029cffa8;
      }
      if ((pcVar8[9] != '\0') && ((byte)pcVar8[0xb] == uVar7)) {
        uVar4 = 3;
        goto LAB_029cffa8;
      }
      if ((pcVar8[0xc] != '\0') && ((byte)pcVar8[0xe] == uVar7)) {
        uVar4 = 4;
        goto LAB_029cffa8;
      }
      if ((pcVar8[0xf] != '\0') && ((byte)pcVar8[0x11] == uVar7)) {
        uVar4 = 5;
        goto LAB_029cffa8;
      }
    }
    else {
      uVar4 = 0;
LAB_029cffa8:
      FUN_02a3e6b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x8a,uVar4,0x9b);
      uVar7 = (uint)*(byte *)(param_2 + 0x7d);
    }
    local_38 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_50 = 0;
    local_58 = CONCAT44(uVar7,0x82040c);
    uVar6 = *param_4;
    switch((uint)uVar6 & 7) {
    case 1:
    case 2:
    case 3:
switchD_029cff84_caseD_1:
      uVar5 = (undefined4)(uVar6 >> 0xe);
      break;
    case 4:
switchD_029cff84_caseD_4:
      uVar5 = (undefined4)(uVar6 >> 0x14);
      break;
    default:
switchD_029cff84_default:
      uVar5 = 0;
    }
    local_58._0_4_ = CONCAT22(0x102,(undefined2)local_58);
    local_50 = CONCAT44(local_50._4_4_,uVar5) & 0xffffffff0000ffff;
LAB_029d001c:
    FUN_02a3a6c4(*(undefined8 *)(param_1 + 0x20),&local_58);
    return;
  }
  lVar3 = param_1;
  if (param_3 == 0x31) {
    pcVar8 = *(char **)(*(long *)(*(long *)(param_1 + 0x20) + 0x10) + 0xa8);
    cVar1 = *(char *)(param_2 + 0x7d);
    if ((*pcVar8 == '\0') || (pcVar8[2] != cVar1)) {
      if ((pcVar8[3] == '\0') || (pcVar8[5] != cVar1)) {
        if ((pcVar8[6] == '\0') || (pcVar8[8] != cVar1)) {
          if ((pcVar8[9] == '\0') || (pcVar8[0xb] != cVar1)) {
            if ((pcVar8[0xc] == '\0') || (pcVar8[0xe] != cVar1)) {
              if ((pcVar8[0xf] == '\0') || (pcVar8[0x11] != cVar1)) goto LAB_029cff08;
              uVar4 = 5;
            }
            else {
              uVar4 = 4;
            }
          }
          else {
            uVar4 = 3;
          }
        }
        else {
          uVar4 = 2;
        }
      }
      else {
        uVar4 = 1;
      }
    }
    else {
      uVar4 = 0;
    }
    lVar3 = FUN_02a3e6b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x8a,uVar4,0x99);
  }
LAB_029cff08:
  local_38 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  local_50 = 0;
  iVar2 = FUN_029d02d0(lVar3,param_3,param_4);
  if (iVar2 < 0) goto LAB_029d001c;
  local_58._0_4_ = CONCAT22(0x82,(short)iVar2);
  local_58 = (ulong)CONCAT14(*(undefined1 *)(param_2 + 0x7d),(undefined4)local_58);
  if ((0x2f < param_3) || ((1L << ((ulong)param_3 & 0x3f) & 0x800000008400U) == 0))
  goto LAB_029d001c;
  uVar6 = *param_4;
  switch((uint)uVar6 & 7) {
  case 1:
  case 2:
  case 3:
    goto switchD_029cff84_caseD_1;
  case 4:
    goto switchD_029cff84_caseD_4;
  default:
    goto switchD_029cff84_default;
  }
}


