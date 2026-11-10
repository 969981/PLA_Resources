/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00162370; name: FUN_00162370
 */


void FUN_00162370(undefined8 param_1,uint param_2,double *param_3,double *param_4,double *param_5)

{
  uint uVar1;
  int iVar2;
  double dVar3;
  undefined4 uVar4;
  double dVar5;
  double dVar6;
  double local_50;
  double local_48;
  
  if (param_2 < 0xe) {
    uVar1 = 1 << (ulong)(param_2 & 0x1f);
    if ((uVar1 & 0x2f80) != 0) {
      if (*(int *)(param_3 + 1) == 0x13) {
        local_48 = *param_3;
        iVar2 = *(int *)(param_4 + 1);
      }
      else {
        iVar2 = FUN_00175390(param_3,&local_48,0);
        if (iVar2 == 0) goto LAB_001625a0;
        iVar2 = *(int *)(param_4 + 1);
      }
      if (iVar2 == 0x13) {
        local_50 = *param_4;
      }
      else {
        iVar2 = FUN_00175390(param_4,&local_50,0);
        if (iVar2 == 0) goto LAB_001625a0;
      }
      dVar3 = local_48;
      dVar5 = local_50;
LAB_00162424:
      dVar3 = (double)FUN_00162630(param_1,param_2,dVar3,dVar5);
      uVar4 = 0x13;
      *param_5 = dVar3;
      goto LAB_0016253c;
    }
    if ((uVar1 & 0x30) == 0) goto LAB_00162490;
    if (*(int *)(param_3 + 1) == 3) {
      local_48 = *param_3;
      if (*(int *)(param_4 + 1) != 3) goto LAB_00162464;
LAB_001624d8:
      local_50 = *param_4;
    }
    else {
      iVar2 = FUN_001752d0(param_3,&local_48);
      if (iVar2 == 0) goto LAB_001625a0;
      if (*(int *)(param_4 + 1) == 3) goto LAB_001624d8;
LAB_00162464:
      iVar2 = FUN_001752d0(param_4,&local_50);
      if (iVar2 == 0) {
LAB_001625a0:
        FUN_00173ca0(param_1,param_3,param_4,param_5,param_2 + 6);
        return;
      }
    }
    if (param_2 == 4) {
LAB_001624f0:
      dVar5 = pow(local_48,local_50);
    }
    else if (param_2 == 5) {
      dVar5 = local_48 / local_50;
    }
    else {
      dVar5 = 0.0;
    }
  }
  else {
LAB_00162490:
    if (*(int *)(param_3 + 1) == 3) {
      local_48 = *param_3;
      if (*(int *)(param_4 + 1) == 3) goto LAB_00162514;
LAB_00162558:
      iVar2 = FUN_001752d0(param_4,&local_50);
      dVar3 = local_50;
      if (iVar2 == 0) goto LAB_001625a0;
    }
    else {
      if ((*(int *)(param_3 + 1) == 0x13) && (*(int *)(param_4 + 1) == 0x13)) {
        dVar3 = *param_3;
        dVar5 = *param_4;
        goto LAB_00162424;
      }
      iVar2 = FUN_001752d0(param_3,&local_48);
      if (iVar2 == 0) goto LAB_001625a0;
      if (*(int *)(param_4 + 1) != 3) goto LAB_00162558;
LAB_00162514:
      dVar3 = *param_4;
    }
    dVar5 = 0.0;
    if (param_2 < 0xd) {
      dVar5 = 0.0;
      local_50 = dVar3;
      switch(param_2) {
      case 0:
        dVar5 = local_48 + dVar3;
        break;
      case 1:
        dVar5 = local_48 - dVar3;
        break;
      case 2:
        dVar5 = local_48 * dVar3;
        break;
      case 3:
        dVar6 = fmod(local_48,dVar3);
        dVar5 = dVar3 + dVar6;
        if (0.0 <= dVar3 * dVar6) {
          dVar5 = dVar6;
        }
        break;
      case 4:
        goto LAB_001624f0;
      case 5:
        dVar5 = local_48 / dVar3;
        break;
      case 6:
        dVar5 = (double)(long)(local_48 / dVar3);
        break;
      case 0xc:
        dVar5 = -local_48;
      }
    }
  }
  uVar4 = 3;
  *param_5 = dVar5;
LAB_0016253c:
  *(undefined4 *)(param_5 + 1) = uVar4;
  return;
}


