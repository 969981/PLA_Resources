/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0041ca90; name: FUN_0041ca90
 */


int FUN_0041ca90(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  
  iVar1 = *param_1;
  if (0x1a8 < iVar1) {
    switch(iVar1) {
    case 0x28a:
    case 0x28d:
      goto switchD_0041caec_caseD_28a;
    case 0x28b:
    case 0x28e:
      return 0x1a9;
    case 0x28c:
    case 0x28f:
      return 0x1ad;
    case 0x290:
    case 0x291:
    case 0x292:
    case 0x293:
      return 0x1e;
    default:
      if (iVar1 == 0x1a9) {
        return 0x1a9;
      }
      if (iVar1 == 0x1ad) {
        return 0x1ad;
      }
      goto LAB_0041cba0;
    }
  }
  iVar4 = 0x25;
  if (iVar1 < 0x61) {
    if (iVar1 < 0x25) {
      if (iVar1 == 5) {
        return 5;
      }
      if (iVar1 == 0x1e) {
        return 0x1e;
      }
    }
    else {
      if (iVar1 == 0x25) {
        return 0x25;
      }
      if (iVar1 == 0x3d) {
        return 0x1e;
      }
    }
LAB_0041cba0:
    uVar2 = FUN_00407cb0(iVar1);
    lVar3 = FUN_00408ec0();
    iVar4 = 0;
    if (lVar3 != 0) {
      iVar4 = iVar1;
    }
    FUN_00409be0(uVar2);
    return iVar4;
  }
  if (iVar1 < 0xa6) {
    if (iVar1 == 0x61) {
      return 5;
    }
    if (iVar1 != 0x62) goto LAB_0041cba0;
  }
  else {
    if (iVar1 == 0xa6) {
      return 0x25;
    }
    if (iVar1 != 0x1a5) goto LAB_0041cba0;
switchD_0041caec_caseD_28a:
    iVar4 = 0x1a5;
  }
  return iVar4;
}


