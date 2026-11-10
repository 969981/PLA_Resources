/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c58444; name: FUN_02c58444
 */


int FUN_02c58444(long *param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  uint uVar6;
  
  if ((char)param_1[0x11] == '\0') {
    iVar5 = 0;
  }
  else {
    uVar6 = 0;
    iVar5 = 0;
    uVar1 = param_3;
    if (param_2 == 0) {
      do {
        if ((((param_3 & 1) == 0) &&
            (lVar3 = (**(code **)(*param_1 + 0x58))(param_1,uVar6), lVar3 != 0)) &&
           (iVar2 = FUN_02c6849c(*(undefined8 *)(lVar3 + 0x98)), iVar2 != 0)) {
          iVar5 = iVar5 + 1;
        }
        uVar6 = uVar6 + 1;
        param_3 = param_3 >> 1 & 0x7f;
      } while (uVar6 < *(byte *)(param_1 + 0x11));
    }
    else {
      do {
        if ((((uVar1 & 1) != 0) ||
            (lVar3 = (**(code **)(*param_1 + 0x58))(param_1,uVar6), lVar3 == 0)) ||
           (iVar2 = FUN_02c6849c(*(undefined8 *)(lVar3 + 0x98)), iVar2 == 0))
        goto switchD_02c58544_default;
        switch(param_2) {
        case 1:
          uVar4 = FUN_02c6cf3c(*(undefined8 *)(lVar3 + 0x98));
          if (((uVar4 & 1) == 0) &&
             ((*(ushort *)(*(long *)(*(long *)(lVar3 + 0x98) + 0x10) + 4) >> 2 & 1) == 0)) {
            uVar1 = 0;
            if (*(long *)(*(long *)(lVar3 + 0x98) + 8) != 0) {
              iVar2 = FUN_02c66b3c();
              uVar1 = (uint)(iVar2 == 0);
            }
            uVar1 = uVar1 ^ 1;
            break;
          }
          goto switchD_02c58544_default;
        case 2:
          uVar1 = FUN_02c6cf3c(*(undefined8 *)(lVar3 + 0x98));
          uVar1 = (uint)((*(byte *)(*(long *)(*(long *)(lVar3 + 0x98) + 0x10) + 4) & 4) == 0) &
                  (uVar1 ^ 0xffffffff);
          break;
        case 3:
          uVar1 = FUN_02c6cf3c(*(undefined8 *)(lVar3 + 0x98));
          uVar1 = uVar1 & (*(byte *)(*(long *)(*(long *)(lVar3 + 0x98) + 0x10) + 4) & 4) == 0;
          break;
        case 4:
          FUN_02c6cf3c(*(undefined8 *)(lVar3 + 0x98));
          uVar1 = *(ushort *)(*(long *)(*(long *)(lVar3 + 0x98) + 0x10) + 4) >> 2 & 1;
          break;
        case 5:
          uVar1 = FUN_02c6cf3c(*(undefined8 *)(lVar3 + 0x98));
          uVar1 = (uVar1 | *(byte *)(*(long *)(*(long *)(lVar3 + 0x98) + 0x10) + 4) >> 2) & 1;
          break;
        default:
          goto switchD_02c58544_default;
        }
        iVar5 = iVar5 + uVar1;
switchD_02c58544_default:
        uVar6 = uVar6 + 1;
        uVar1 = param_3 >> 1;
        param_3 = uVar1 & 0x7f;
      } while (uVar6 < *(byte *)(param_1 + 0x11));
    }
  }
  return iVar5;
}


