/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001e319c; name: FUN_001e319c
 */


undefined8 FUN_001e319c(long *param_1,ulong param_2,long param_3)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  char *pcVar5;
  
  lVar1 = *param_1 + 0x1208;
  if ((param_2 & 1) == 0) {
    lVar1 = *param_1 + 0x11c8;
  }
  iVar3 = thunk_FUN_001f8bec("Digest",param_3,6);
  if (iVar3 == 0) {
    return 0x3d;
  }
  pcVar5 = (char *)(param_3 + 6);
  cVar2 = *pcVar5;
  while ((cVar2 != '\0' && (iVar3 = FUN_001e33f4(cVar2), iVar3 != 0))) {
    pcVar5 = pcVar5 + 1;
    cVar2 = *pcVar5;
  }
  uVar4 = FUN_002019c8(pcVar5,lVar1);
  return uVar4;
}


