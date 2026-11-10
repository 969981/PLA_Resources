/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00562d30; name: FUN_00562d30
 */


undefined8 FUN_00562d30(undefined4 *param_1)

{
  char cVar1;
  char cVar2;
  long lVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  
  FUN_005621a4(param_1,0xffffffff,0);
  if ((*(byte **)(param_1 + 8) == (byte *)0x0) || (0x15 < **(byte **)(param_1 + 8))) {
    lVar3 = FUN_002e2e80(PTR_FUN_04373078,0x28);
    if (lVar3 != 0) {
      FUN_0055da3c(lVar3,2,*param_1);
    }
    FUN_00562088(param_1,lVar3);
  }
  FUN_0056457c(param_1,5);
  pcVar4 = *(char **)(param_1 + 8);
  if (((pcVar4 == (char *)0x0) || (pcVar6 = *(char **)(pcVar4 + 0x10), pcVar6 == (char *)0x0)) ||
     (*pcVar6 != '\x17')) {
    lVar3 = FUN_002e2e80(PTR_FUN_04373078,0x28);
    if (lVar3 != 0) {
      FUN_0055da3c(lVar3,0x17,*param_1);
    }
    FUN_00562088(param_1,lVar3);
    return 1;
  }
  pcVar5 = *(char **)(pcVar6 + 0x10);
  if (pcVar5 == (char *)0x0) {
LAB_00562e70:
    *(char **)(pcVar4 + 0x10) = pcVar5;
    *(char **)(pcVar6 + 0x10) = pcVar4;
    *(char **)(param_1 + 8) = pcVar6;
    return 1;
  }
  cVar1 = *pcVar4;
  cVar2 = *pcVar5;
  if (cVar1 == '\f') {
    if (cVar2 != '\f') {
      if ((cVar2 != '\x14') && (cVar2 != '\x03')) goto LAB_00562e70;
      *(undefined8 *)(pcVar4 + 0x10) = *(undefined8 *)(pcVar5 + 0x10);
      *(char **)(pcVar6 + 0x10) = pcVar4;
      pcVar4 = pcVar5;
    }
  }
  else if ((cVar2 != '\f') || ((cVar1 != '\x14' && (cVar1 != '\x03')))) goto LAB_00562e70;
  *(char **)(param_1 + 8) = pcVar6;
  FUN_0055de34(pcVar4);
  return 1;
}


