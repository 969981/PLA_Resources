/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0044ac20; name: FUN_0044ac20
 */


undefined8 FUN_0044ac20(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  char cVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char *pcVar10;
  
  pcVar6 = (char *)FUN_0044b740(param_2,0,0);
  if (pcVar6 == (char *)0x0) {
    return 0;
  }
  if (*pcVar6 == '\0') {
    uVar9 = 1;
    uVar8 = 0x1f8;
    goto LAB_0044ad58;
  }
  pcVar10 = pcVar6 + 1;
  uVar8 = 0x214;
  cVar7 = pcVar6[1];
  pcVar3 = pcVar6 + 2;
  pcVar2 = pcVar6 + 1;
  while (pcVar1 = pcVar3, cVar7 != '/') {
LAB_0044acb4:
    if (cVar7 == '\0') goto LAB_0044acb8;
LAB_0044ad00:
    pcVar3 = pcVar1 + 1;
    pcVar2 = pcVar1;
    cVar7 = *pcVar1;
  }
  iVar4 = FUN_00405430(*pcVar1,2);
  if ((iVar4 == 0) ||
     ((pcVar1[1] != '=' && ((iVar4 = FUN_00405430(pcVar1[1],2), iVar4 == 0 || (pcVar1[2] != '=')))))
     ) {
    cVar7 = *pcVar2;
    goto LAB_0044acb4;
  }
LAB_0044acb8:
  iVar4 = (int)pcVar2 - (int)pcVar10;
  iVar5 = FUN_004042b0(param_1,pcVar10,iVar4);
  if (iVar5 == iVar4) {
    if (*pcVar2 != '\0') {
      iVar4 = FUN_004042b0(param_1,&DAT_0398d5c8,2);
      if (iVar4 != 2) goto LAB_0044ad2c;
      pcVar10 = pcVar1;
      if (*pcVar2 != '\0') goto LAB_0044ad00;
    }
    uVar9 = 1;
  }
  else {
LAB_0044ad2c:
    FUN_004014b0(0xb,0x75,7,"external/openssl/crypto/x509/x_name.c",0x217);
    uVar9 = 0;
    uVar8 = 0x218;
  }
LAB_0044ad58:
  FUN_00400420(pcVar6,"external/openssl/crypto/x509/x_name.c",uVar8);
  return uVar9;
}


