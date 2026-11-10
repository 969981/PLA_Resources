/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0339a458; name: FUN_0339a458
 */


undefined8 FUN_0339a458(long param_1)

{
  long lVar1;
  byte bVar2;
  char cVar3;
  undefined8 uVar4;
  byte *pbVar5;
  byte *pbVar6;
  ulong uVar7;
  
  pbVar6 = *(byte **)(param_1 + 0x38);
  lVar1 = param_1 + 0x18;
  if ((byte *)(*(long *)(param_1 + 0x40) + (long)*(int *)(param_1 + 0x48)) <= pbVar6) {
    FUN_0339a7b4(lVar1,0x100);
    pbVar6 = *(byte **)(param_1 + 0x38);
    if ((byte *)(*(long *)(param_1 + 0x40) + (long)*(int *)(param_1 + 0x48)) <= pbVar6) {
      return 5;
    }
  }
  pbVar5 = pbVar6 + 1;
  *(byte **)(param_1 + 0x38) = pbVar5;
  uVar7 = (ulong)*pbVar6;
  if (0x3c < *pbVar6) {
LAB_0339a558:
    FUN_0339a200(param_1);
    return 2;
  }
  if ((1L << (uVar7 & 0x3f) & 0x100002600U) != 0) {
    FUN_0339a14c(param_1);
    return 3;
  }
  if (uVar7 == 0) {
    return 5;
  }
  if (uVar7 != 0x3c) goto LAB_0339a558;
  bVar2 = *pbVar5;
  if (bVar2 == 0) {
    FUN_0339a7b4(lVar1,0x100);
    pbVar5 = *(byte **)(param_1 + 0x38);
    bVar2 = *pbVar5;
  }
  if (bVar2 != 0x3f) {
    cVar3 = FUN_0339aa58(lVar1,&DAT_0390f065);
    if (cVar3 == '\0') {
      *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 1;
      return 0;
    }
    uVar4 = FUN_03399f70(param_1);
    return uVar4;
  }
  if ((byte *)(*(long *)(param_1 + 0x40) + (long)*(int *)(param_1 + 0x48)) <= pbVar5) {
    FUN_0339a7b4(lVar1,0x100);
    pbVar5 = *(byte **)(param_1 + 0x38);
    if ((byte *)(*(long *)(param_1 + 0x40) + (long)*(int *)(param_1 + 0x48)) <= pbVar5)
    goto LAB_0339a53c;
  }
  *(byte **)(param_1 + 0x38) = pbVar5 + 1;
LAB_0339a53c:
  *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 3;
  return 1;
}


