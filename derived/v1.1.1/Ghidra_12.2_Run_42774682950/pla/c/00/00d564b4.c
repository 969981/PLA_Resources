/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d564b4; name: FUN_00d564b4
 */


undefined8 FUN_00d564b4(long *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  
  iVar2 = (int)param_1[0xdb];
  iVar6 = iVar2;
  if (iVar2 == 2) {
    iVar6 = 0;
  }
  lVar8 = FUN_00d2ee28(param_1 + 0x30,&DAT_043ab7d8 + (long)iVar6 * 0x28);
  lVar8 = *(long *)(lVar8 + 0x8b0);
  piVar1 = (int *)(lVar8 + 0x20);
  if (*(int *)(lVar8 + 0x28) != 0) {
    piVar1 = (int *)(lVar8 + 0x24);
  }
  uVar4 = *(int *)(lVar8 + 0x14) + *piVar1 * *(int *)(lVar8 + 0x10);
  uVar5 = (**(code **)(*param_1 + 0x180))(param_1,(int)param_1[0xdd]);
  iVar6 = (**(code **)(*param_1 + 0x180))(param_1,(int)param_1[0xdd]);
  if (((iVar6 == 0) && ((int)param_1[0xdd] == iVar2)) &&
     (uVar4 == *(ushort *)((long)param_1 + 0x6ec))) {
    uVar10 = 0;
LAB_00d565e8:
    FUN_00d55928(param_1,uVar10,1);
    return 1;
  }
  uVar7 = (**(code **)(*param_1 + 0x1a0))
                    (param_1,(int)param_1[0xdd],*(ushort *)((long)param_1 + 0x6ec),iVar2,uVar4);
  switch(uVar7) {
  case 0:
    FUN_00d5dbe8(param_1,(int)param_1[0xdd],*(undefined2 *)((long)param_1 + 0x6ec),uVar5);
    FUN_00d5e078(param_1,iVar2,uVar4,param_1 + 0xe0);
    lVar8 = param_1[0x88];
    break;
  case 1:
    FUN_00d5e078(param_1,iVar2,uVar4,param_1 + 0xe0);
    FUN_00d5dc3c(param_1,(int)param_1[0xdd],*(undefined2 *)((long)param_1 + 0x6ec),uVar5);
    lVar8 = param_1[0x88];
    break;
  case 2:
    lVar8 = param_1[0x88];
    if (lVar8 == 0) {
      return 0;
    }
    cVar3 = *(char *)(lVar8 + 0x62);
    goto joined_r0x00d566ac;
  case 3:
    uVar9 = FUN_00d56844(param_1);
    if ((uVar9 & 1) != 0) {
      uVar10 = 1;
      goto LAB_00d565e8;
    }
    lVar8 = param_1[0x88];
    if (lVar8 == 0) {
      return 0;
    }
    cVar3 = *(char *)(lVar8 + 0x62);
joined_r0x00d566ac:
    if (cVar3 != '\0') {
      return 0;
    }
    *(undefined1 *)(lVar8 + 0x60) = 1;
    if (*(char *)(lVar8 + 0x61) != '\0') {
      FUN_0283351c(*(undefined8 *)(lVar8 + 0x58),0);
    }
    FUN_02831808(*(undefined8 *)(lVar8 + 0x58),0);
    return 0;
  case 4:
    (**(code **)(*param_1 + 0x1b0))
              (param_1,(int)param_1[0xdd],*(undefined2 *)((long)param_1 + 0x6ec),iVar2,uVar4);
  default:
    goto LAB_00d565bc;
  }
  if (lVar8 != 0) {
    if (*(char *)(lVar8 + 0x62) != '\0') {
      return 1;
    }
    *(undefined1 *)(lVar8 + 0x60) = 1;
    if (*(char *)(lVar8 + 0x61) != '\0') {
      FUN_0283351c(*(undefined8 *)(lVar8 + 0x58),0);
    }
    FUN_02831808(*(undefined8 *)(lVar8 + 0x58),0);
  }
LAB_00d565bc:
  return 1;
}


