/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00422d90; name: FUN_00422d90
 */


undefined8 FUN_00422d90(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 local_28;
  
  iVar1 = *param_2;
  if (*param_1 == 0) {
    local_28 = 0;
    if (((*(long *)(param_1 + 10) != 0) && (*(long *)(param_1 + 4) != 0)) &&
       (pcVar6 = *(code **)(*(long *)(param_1 + 4) + 0xa8), pcVar6 != (code *)0x0)) {
      (*pcVar6)(param_1);
      param_1[10] = 0;
      param_1[0xb] = 0;
    }
    if ((param_1[1] != iVar1) || (*(long *)(param_1 + 4) == 0)) {
      piVar2 = (int *)FUN_0043e620(&local_28,iVar1);
      if (piVar2 == (int *)0x0) {
        uVar3 = 0x9e;
        uVar4 = 0x9c;
        uVar5 = 0xd2;
        goto LAB_00422f10;
      }
      *(int **)(param_1 + 4) = piVar2;
      *(undefined8 *)(param_1 + 6) = local_28;
      *param_1 = *piVar2;
      param_1[1] = iVar1;
    }
  }
  else if (*param_1 != iVar1) {
    uVar3 = 0x67;
    uVar4 = 0x65;
    uVar5 = 0x51;
    goto LAB_00422f10;
  }
  if (((*(long *)(param_2 + 4) == 0) ||
      (pcVar6 = *(code **)(*(long *)(param_2 + 4) + 0x80), pcVar6 == (code *)0x0)) ||
     (iVar1 = (*pcVar6)(param_2), iVar1 == 0)) {
    if (((*(long *)(param_1 + 4) != 0) &&
        (pcVar6 = *(code **)(*(long *)(param_1 + 4) + 0x80), pcVar6 != (code *)0x0)) &&
       (iVar1 = (*pcVar6)(param_1), iVar1 != 0)) {
      if ((*(long *)(param_2 + 4) == 0) ||
         (pcVar6 = *(code **)(*(long *)(param_2 + 4) + 0x88), pcVar6 == (code *)0x0)) {
        return 0;
      }
      uVar3 = (*pcVar6)(param_1,param_2);
      return uVar3;
    }
    if (((*param_1 == *param_2) && (*(long *)(param_1 + 4) != 0)) &&
       ((pcVar6 = *(code **)(*(long *)(param_1 + 4) + 0x90), pcVar6 != (code *)0x0 &&
        (uVar3 = (*pcVar6)(param_1,param_2), (int)uVar3 == 1)))) {
      return uVar3;
    }
    uVar3 = 0x67;
    uVar4 = 0x99;
    uVar5 = 0x5d;
  }
  else {
    uVar3 = 0x67;
    uVar5 = 0x56;
    uVar4 = 0x67;
  }
LAB_00422f10:
  FUN_004014b0(6,uVar3,uVar4,"external/openssl/crypto/evp/p_lib.c",uVar5);
  return 0;
}


