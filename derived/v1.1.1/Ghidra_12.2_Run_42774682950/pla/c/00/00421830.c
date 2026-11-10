/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00421830; name: FUN_00421830
 */


void FUN_00421830(long *param_1,char *param_2,int param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  lVar4 = *(long *)(param_2 + 0x20);
  if ((*param_2 != '\0') && (*param_1 == 0)) {
    return;
  }
  if ((lVar4 == 0) || (pcVar6 = *(code **)(lVar4 + 0x18), pcVar6 == (code *)0x0)) {
    pcVar6 = (code *)0x0;
  }
  switch(*param_2) {
  case '\0':
    if (*(long *)(param_2 + 0x10) != 0) {
      FUN_00421a90(param_1);
      return;
    }
  case '\x05':
    FUN_00421b50(param_1,param_2,param_3);
    return;
  case '\x01':
  case '\x06':
    iVar1 = FUN_0041fc30(param_1,0xffffffff,param_2);
    if (iVar1 != 0) {
      return;
    }
    if ((pcVar6 != (code *)0x0) && (iVar1 = (*pcVar6)(2,param_1,param_2,0), iVar1 == 2)) {
      return;
    }
    FUN_0041fda0(param_1,param_2);
    if (0 < *(long *)(param_2 + 0x18)) {
      lVar5 = *(long *)(param_2 + 0x10) + *(long *)(param_2 + 0x18) * 0x28;
      lVar4 = 0;
      do {
        lVar5 = lVar5 + -0x28;
        lVar2 = FUN_0041ff70(param_1,lVar5,0);
        if (lVar2 != 0) {
          uVar3 = FUN_0041ff60(param_1,lVar2);
          FUN_00421a90(uVar3,lVar2);
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 < *(long *)(param_2 + 0x18));
    }
    if (pcVar6 != (code *)0x0) {
      (*pcVar6)(3,param_1,param_2,0);
    }
    if (param_3 != 0) {
      return;
    }
    lVar4 = *param_1;
    uVar3 = 0x73;
    break;
  case '\x02':
    if ((pcVar6 != (code *)0x0) && (iVar1 = (*pcVar6)(2,param_1,param_2,0), iVar1 == 2)) {
      return;
    }
    iVar1 = FUN_0041fc00(param_1,param_2);
    if ((-1 < iVar1) && ((long)iVar1 < *(long *)(param_2 + 0x18))) {
      lVar4 = *(long *)(param_2 + 0x10) + (long)iVar1 * 0x28;
      uVar3 = FUN_0041ff60(param_1,lVar4);
      FUN_00421a90(uVar3,lVar4);
    }
    if (pcVar6 != (code *)0x0) {
      (*pcVar6)(3,param_1,param_2,0);
    }
    if (param_3 != 0) {
      return;
    }
    lVar4 = *param_1;
    uVar3 = 0x4b;
    break;
  default:
    goto switchD_00421890_caseD_3;
  case '\x04':
    if (lVar4 == 0) {
      return;
    }
    if (*(code **)(lVar4 + 0x10) == (code *)0x0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00421a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar4 + 0x10))(param_1,param_2);
    return;
  }
  FUN_00400420(lVar4,"external/openssl/crypto/asn1/tasn_fre.c",uVar3);
  *param_1 = 0;
switchD_00421890_caseD_3:
  return;
}


