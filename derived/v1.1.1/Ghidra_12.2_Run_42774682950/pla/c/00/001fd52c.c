/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001fd52c; name: FUN_001fd52c
 */


int FUN_001fd52c(char *param_1,size_t param_2,undefined8 *param_3,undefined8 *param_4,
                undefined8 *param_5)

{
  char *pcVar1;
  char *pcVar2;
  void *__dest;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  size_t sVar6;
  void *__dest_00;
  void *__dest_01;
  
  if (param_4 == (undefined8 *)0x0) {
    pcVar1 = (char *)0x0;
    if (param_5 == (undefined8 *)0x0) goto LAB_001fd5d4;
LAB_001fd580:
    pcVar2 = strchr(param_1,0x3b);
    if (param_1 + param_2 <= pcVar2) {
      pcVar2 = (char *)0x0;
    }
    if (pcVar1 != (char *)0x0) goto LAB_001fd59c;
LAB_001fd5dc:
    pcVar4 = (char *)0x0;
    if (pcVar2 != (char *)0x0) {
      sVar6 = (long)pcVar2 - (long)param_1;
      goto LAB_001fd5e8;
    }
    pcVar5 = (char *)0x0;
  }
  else {
    pcVar1 = strchr(param_1,0x3a);
    if (param_1 + param_2 <= pcVar1) {
      pcVar1 = (char *)0x0;
    }
    if (param_5 != (undefined8 *)0x0) goto LAB_001fd580;
LAB_001fd5d4:
    pcVar2 = (char *)0x0;
    if (pcVar1 == (char *)0x0) goto LAB_001fd5dc;
LAB_001fd59c:
    pcVar4 = pcVar2;
    if (pcVar1 <= pcVar2 || pcVar2 == (char *)0x0) {
      pcVar4 = pcVar1;
    }
    sVar6 = (long)pcVar4 - (long)param_1;
    pcVar4 = pcVar2;
    if (pcVar2 <= pcVar1) {
      pcVar4 = param_1 + param_2;
    }
    pcVar4 = pcVar4 + ~(ulong)pcVar1;
    if (pcVar2 == (char *)0x0) {
      pcVar5 = (char *)0x0;
      param_2 = sVar6;
    }
    else {
LAB_001fd5e8:
      pcVar5 = pcVar1;
      if (pcVar1 <= pcVar2) {
        pcVar5 = param_1 + param_2;
      }
      pcVar5 = pcVar5 + ~(ulong)pcVar2;
      param_2 = sVar6;
    }
  }
  iVar3 = 0;
  __dest_00 = (void *)0x0;
  if ((param_3 != (undefined8 *)0x0) && (param_2 != 0)) {
    __dest_00 = (void *)FUN_002044c4(param_2 + 1);
    iVar3 = 0x1b;
    if (__dest_00 != (void *)0x0) {
      iVar3 = 0;
    }
  }
  __dest_01 = (void *)0x0;
  if ((((pcVar4 == (char *)0x0) || (param_4 == (undefined8 *)0x0)) || (iVar3 != 0)) ||
     (__dest_01 = (void *)FUN_002044c4(pcVar4 + 1), __dest_01 != (void *)0x0)) {
    if (((pcVar5 == (char *)0x0) || (param_5 == (undefined8 *)0x0)) || (iVar3 != 0)) {
      if (iVar3 != 0) {
        return iVar3;
      }
      __dest = (void *)0x0;
    }
    else {
      __dest = (void *)FUN_002044c4(pcVar5 + 1);
      if (__dest == (void *)0x0) {
        FUN_002044d4(__dest_01);
        goto LAB_001fd674;
      }
    }
    if (__dest_00 != (void *)0x0) {
      memcpy(__dest_00,param_1,param_2);
      *(undefined1 *)((long)__dest_00 + param_2) = 0;
      FUN_002044d4(*param_3);
      *param_3 = __dest_00;
    }
    if (__dest_01 != (void *)0x0) {
      memcpy(__dest_01,pcVar1 + 1,(size_t)pcVar4);
      *(char *)((long)__dest_01 + (long)pcVar4) = '\0';
      FUN_002044d4(*param_4);
      *param_4 = __dest_01;
    }
    if (__dest == (void *)0x0) {
      iVar3 = 0;
    }
    else {
      memcpy(__dest,pcVar2 + 1,(size_t)pcVar5);
      *(char *)((long)__dest + (long)pcVar5) = '\0';
      FUN_002044d4(*param_5);
      iVar3 = 0;
      *param_5 = __dest;
    }
  }
  else {
LAB_001fd674:
    FUN_002044d4(__dest_00);
    iVar3 = 0x1b;
  }
  return iVar3;
}


