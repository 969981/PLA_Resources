/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02780590; name: FUN_02780590
 */


void FUN_02780590(long param_1,char *param_2)

{
  long lVar1;
  char *pcVar2;
  int iVar3;
  char *__s1;
  char *__s2;
  long lVar4;
  long lVar5;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  FUN_02780180(param_1,param_1 + 0x18,(char *)(param_1 + 0x30));
  if ((char *)(param_1 + 0x48) != param_2) {
    lVar4 = 0;
    pcVar2 = (char *)(param_1 + 0x48);
    __s2 = (char *)(param_1 + 0x30);
    do {
      __s1 = pcVar2;
      iVar3 = strcmp(__s1,__s2);
      if (iVar3 < 0) {
        local_58 = *(undefined8 *)__s1;
        local_50 = *(undefined8 *)(__s1 + 8);
        local_48 = *(undefined8 *)(__s1 + 0x10);
        lVar5 = lVar4;
        do {
          lVar1 = param_1 + lVar5;
          *(undefined8 *)(lVar1 + 0x48) = *(undefined8 *)(lVar1 + 0x30);
          *(undefined8 *)(lVar1 + 0x50) = *(undefined8 *)(lVar1 + 0x38);
          *(undefined8 *)(lVar1 + 0x58) = *(undefined8 *)(lVar1 + 0x40);
          if (lVar5 == -0x30) break;
          iVar3 = strcmp((char *)&local_58,(char *)(lVar1 + 0x18));
          lVar5 = lVar5 + -0x18;
        } while (iVar3 < 0);
        *(undefined8 *)(lVar1 + 0x38) = local_50;
        *(undefined8 *)(lVar1 + 0x40) = local_48;
        *(undefined8 *)(lVar1 + 0x30) = local_58;
      }
      lVar4 = lVar4 + 0x18;
      pcVar2 = __s1 + 0x18;
      __s2 = __s1;
    } while (__s1 + 0x18 != param_2);
  }
  return;
}


