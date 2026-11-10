/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0339a2c4; name: FUN_0339a2c4
 */


undefined8 FUN_0339a2c4(long param_1)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined8 uVar7;
  
  lVar1 = param_1 + 0x18;
  uVar7 = 5;
LAB_0339a2fc:
  pbVar5 = *(byte **)(param_1 + 0x38);
  lVar3 = *(long *)(param_1 + 0x40);
  iVar4 = *(int *)(param_1 + 0x48);
  if ((byte *)(lVar3 + iVar4) <= pbVar5) {
    FUN_0339a7b4(lVar1,0x100);
    pbVar5 = *(byte **)(param_1 + 0x38);
    lVar3 = *(long *)(param_1 + 0x40);
    iVar4 = *(int *)(param_1 + 0x48);
    if ((byte *)(lVar3 + iVar4) <= pbVar5) {
      return 5;
    }
  }
  pbVar6 = pbVar5 + 1;
  *(byte **)(param_1 + 0x38) = pbVar6;
  bVar2 = *pbVar5;
  switch(bVar2) {
  case 0:
    goto switchD_0339a350_caseD_0;
  default:
    if ((((byte)((bVar2 & 0xdf) + 0xbf) < 0x1a) || (bVar2 == 0x5f)) || (bVar2 == 0x3a)) {
      FUN_0339a094(param_1);
      uVar7 = 8;
switchD_0339a350_caseD_0:
      return uVar7;
    }
    break;
  case 9:
  case 10:
  case 0xd:
  case 0x20:
    FUN_0339a14c(param_1);
    FUN_0339a8dc(lVar1);
    goto LAB_0339a2fc;
  case 0x22:
    uVar7 = FUN_0339a018(param_1);
    return uVar7;
  case 0x2f:
    return 0xb;
  case 0x3d:
    return 9;
  case 0x3e:
    if ((*(uint *)(param_1 + 0x60) >> 1 & 1) == 0) {
      *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xfffffffe;
      return 6;
    }
    break;
  case 0x3f:
    goto switchD_0339a350_caseD_3f;
  }
  return 0xc;
switchD_0339a350_caseD_3f:
  if ((*(byte *)(param_1 + 0x60) >> 1 & 1) == 0) goto LAB_0339a2fc;
  if ((byte *)(lVar3 + iVar4) <= pbVar6) {
    FUN_0339a7b4(lVar1,0x100);
    pbVar5 = *(byte **)(param_1 + 0x38);
    lVar3 = *(long *)(param_1 + 0x40);
    pbVar6 = pbVar5;
    if ((byte *)(lVar3 + *(int *)(param_1 + 0x48)) <= pbVar5) goto LAB_0339a3a0;
  }
  pbVar5 = pbVar6 + 1;
  *(byte **)(param_1 + 0x38) = pbVar5;
  if (*pbVar6 == 0x3e) {
    *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xfffffffc;
    return 7;
  }
LAB_0339a3a0:
  if ((byte *)(lVar3 + *(int *)(param_1 + 0x34)) < pbVar5) {
    *(byte **)(param_1 + 0x38) = pbVar5 + -1;
  }
  goto LAB_0339a2fc;
}


