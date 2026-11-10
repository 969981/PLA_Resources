/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02837abc; name: FUN_02837abc
 */


void FUN_02837abc(long *param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (*(char *)((long)param_1 + 0xd9) == '\0') {
    return;
  }
  lVar3 = param_1[0x15];
  *(undefined1 *)(lVar3 + 0x9d) = 0;
  *(undefined1 *)(lVar3 + 0xa4) = 100;
  while (iVar1 = (**(code **)(*(long *)param_1[0x15] + 0x50))(), (char)param_1[0x1b] == '\0') {
LAB_02837b08:
    *(int *)(param_1 + 0x17) = iVar1;
    if (iVar1 != 1) {
      return;
    }
  }
  if (iVar1 != 0) {
    if (iVar1 == 2) {
      (**(code **)(*param_1 + 0xc0))(param_1,1);
      *(undefined4 *)(param_1 + 0x17) = 2;
      return;
    }
    (**(code **)(*param_1 + 0xc0))(param_1,0);
    goto LAB_02837b08;
  }
  switch(*(undefined4 *)((long)param_1 + 0xdc)) {
  case 0:
    lVar3 = *param_1;
    uVar2 = 1;
    break;
  case 1:
    lVar3 = *param_1;
    uVar2 = 0;
    break;
  case 2:
    lVar3 = *param_1;
    uVar2 = 1;
    goto LAB_02837bb0;
  case 3:
    lVar3 = *param_1;
    uVar2 = 0;
LAB_02837bb0:
    (**(code **)(lVar3 + 0xc0))(param_1,uVar2);
    *(undefined4 *)(param_1 + 0x17) = 0;
    *(undefined4 *)((long)param_1 + 0xdc) = 4;
    return;
  default:
    goto switchD_02837b88_default;
  }
  (**(code **)(lVar3 + 0xc0))(param_1,uVar2);
switchD_02837b88_default:
  *(undefined4 *)(param_1 + 0x17) = 0;
  return;
}


