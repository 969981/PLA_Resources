/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002eca30; name: FUN_002eca30
 */


void FUN_002eca30(char *param_1,char *param_2,long *param_3,ulong *param_4)

{
  char *pcVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  size_t sVar5;
  ulong uVar6;
  
  *param_3 = 0;
  *param_4 = 0;
  pcVar1 = strstr(param_1,param_2);
  if (pcVar1 == (char *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    do {
      sVar5 = (long)pcVar1 - (long)param_1;
      pvVar2 = (void *)FUN_002ebd50(sVar5 + 1);
      memcpy(pvVar2,param_1,sVar5);
      *(undefined1 *)((long)pvVar2 + sVar5) = 0;
      uVar4 = *param_4;
      if (uVar4 == uVar6) {
        uVar6 = uVar6 * 2;
        if (uVar6 < 9) {
          uVar6 = 8;
        }
        lVar3 = FUN_002ebdc0(*param_3,uVar6 << 3);
        *param_3 = lVar3;
        uVar4 = *param_4;
      }
      else {
        lVar3 = *param_3;
      }
      *(void **)(lVar3 + uVar4 * 8) = pvVar2;
      *param_4 = uVar4 + 1;
      sVar5 = strlen(param_2);
      param_1 = pcVar1 + sVar5;
      pcVar1 = strstr(param_1,param_2);
    } while (pcVar1 != (char *)0x0);
  }
  sVar5 = strlen(param_1);
  pvVar2 = (void *)FUN_002ebd50(sVar5 + 1);
  memcpy(pvVar2,param_1,sVar5);
  *(undefined1 *)((long)pvVar2 + sVar5) = 0;
  uVar4 = *param_4;
  if (uVar4 == uVar6) {
    uVar6 = uVar6 * 2;
    if (uVar6 < 9) {
      uVar6 = 8;
    }
    lVar3 = FUN_002ebdc0(*param_3,uVar6 << 3);
    *param_3 = lVar3;
    uVar4 = *param_4;
  }
  else {
    lVar3 = *param_3;
  }
  *(void **)(lVar3 + uVar4 * 8) = pvVar2;
  *param_4 = uVar4 + 1;
  return;
}


