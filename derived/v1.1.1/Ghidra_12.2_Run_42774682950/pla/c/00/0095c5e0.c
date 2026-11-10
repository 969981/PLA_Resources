/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0095c5e0; name: FUN_0095c5e0
 */


void FUN_0095c5e0(ulong param_1,ulong param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
LAB_0095c61c:
  uVar6 = param_2 - 0x60;
  uVar4 = param_1;
LAB_0095c628:
  param_1 = uVar4;
  uVar4 = param_2 - param_1;
  switch(((long)uVar4 >> 5) * -0x5555555555555555) {
  case 0:
  case 1:
    goto switchD_0095c738_caseD_0;
  case 2:
    uVar4 = FUN_0095ca3c(param_3,uVar6,param_1);
    if ((uVar4 & 1) == 0) {
      return;
    }
    FUN_0095cb70(param_1,uVar6);
    return;
  case 3:
    FUN_0095ce10(param_1,param_1 + 0x60,uVar6,param_3);
    return;
  case 4:
    FUN_0095cf00(param_1,param_1 + 0x60,param_1 + 0xc0,uVar6,param_3);
    return;
  case 5:
    FUN_0095cfc0(param_1,param_1 + 0x60,param_1 + 0xc0,param_1 + 0x120,uVar6,param_3);
    return;
  default:
    if ((long)uVar4 < 0x2a0) {
      FUN_0095d0c0(param_1,param_2,param_3);
      return;
    }
    uVar7 = param_1 + (uVar4 / 0xc0) * 0x60;
    if ((long)uVar4 < 0x176a1) {
      iVar1 = FUN_0095ce10(param_1,uVar7,uVar6,param_3);
    }
    else {
      lVar5 = (uVar4 / 0x180) * 0x60;
      iVar1 = FUN_0095cfc0(param_1,param_1 + lVar5,uVar7,uVar7 + lVar5,uVar6,param_3);
    }
    uVar4 = FUN_0095ca3c(param_3,param_1,uVar7);
    if ((uVar4 & 1) == 0) break;
    uVar8 = uVar6;
    goto LAB_0095c898;
  }
  uVar4 = param_2 - 0xc0;
  while (uVar8 = uVar4, param_1 != uVar8) {
    uVar3 = FUN_0095ca3c(param_3,uVar8,uVar7);
    uVar4 = uVar8 - 0x60;
    if ((uVar3 & 1) != 0) goto code_r0x0095c70c;
  }
  uVar7 = param_1 + 0x60;
  uVar4 = FUN_0095ca3c(param_3,param_1,uVar6);
  if ((uVar4 & 1) == 0) {
    if (uVar7 == uVar6) {
      return;
    }
    uVar7 = param_1 + 0xc0;
    while( true ) {
      uVar4 = FUN_0095ca3c(param_3,param_1,uVar7 - 0x60);
      if ((uVar4 & 1) != 0) break;
      uVar7 = uVar7 + 0x60;
      if (param_2 == uVar7) {
        return;
      }
    }
    FUN_0095cb70(uVar7 - 0x60,uVar6);
  }
  if (uVar7 == uVar6) {
    return;
  }
  uVar8 = uVar6;
  while( true ) {
    do {
      uVar4 = uVar7;
      uVar3 = FUN_0095ca3c(param_3,param_1,uVar4);
      uVar7 = uVar4 + 0x60;
    } while ((uVar3 & 1) == 0);
    do {
      uVar8 = uVar8 - 0x60;
      uVar3 = FUN_0095ca3c(param_3,param_1,uVar8);
    } while ((uVar3 & 1) != 0);
    if (uVar8 <= uVar4) break;
    FUN_0095cb70(uVar4,uVar8);
  }
  goto LAB_0095c628;
code_r0x0095c70c:
  FUN_0095cb70(param_1,uVar8);
  iVar1 = iVar1 + 1;
LAB_0095c898:
  uVar3 = param_1 + 0x60;
  uVar4 = uVar3;
  if (uVar3 < uVar8) {
    while( true ) {
      uVar3 = uVar4 - 0x60;
      do {
        uVar4 = uVar3;
        uVar3 = uVar4 + 0x60;
        uVar2 = FUN_0095ca3c(param_3,uVar3,uVar7);
      } while ((uVar2 & 1) != 0);
      uVar4 = uVar4 + 0xc0;
      do {
        uVar8 = uVar8 - 0x60;
        uVar2 = FUN_0095ca3c(param_3,uVar8,uVar7);
      } while ((uVar2 & 1) == 0);
      if (uVar8 < uVar3) break;
      FUN_0095cb70(uVar3,uVar8);
      iVar1 = iVar1 + 1;
      uVar2 = uVar8;
      if (uVar7 != uVar3) {
        uVar2 = uVar7;
      }
      uVar7 = uVar2;
    }
  }
  if ((uVar3 != uVar7) && (uVar4 = FUN_0095ca3c(param_3,uVar7,uVar3), (uVar4 & 1) != 0)) {
    FUN_0095cb70(uVar3,uVar7);
    iVar1 = iVar1 + 1;
  }
  if (iVar1 == 0) {
    uVar7 = FUN_0095d410(param_1,uVar3,param_3);
    uVar4 = FUN_0095d410(uVar3 + 0x60,param_2,param_3);
    if ((uVar4 & 1) != 0) goto LAB_0095ca24;
    uVar4 = uVar3 + 0x60;
    if ((uVar7 & 1) != 0) goto LAB_0095c628;
  }
  if (((long)(param_2 - uVar3) >> 5) * -0x5555555555555555 <=
      ((long)(uVar3 - param_1) >> 5) * -0x5555555555555555) {
    FUN_0095c5e0(uVar3 + 0x60,param_2,param_3);
    param_2 = uVar3;
    goto LAB_0095c61c;
  }
  FUN_0095c5e0(param_1,uVar3,param_3);
  uVar4 = uVar3 + 0x60;
  goto LAB_0095c628;
LAB_0095ca24:
  param_2 = uVar3;
  if ((uVar7 & 1) != 0) {
switchD_0095c738_caseD_0:
    return;
  }
  goto LAB_0095c61c;
}


