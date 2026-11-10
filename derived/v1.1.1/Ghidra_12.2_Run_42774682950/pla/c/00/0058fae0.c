/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0058fae0; name: FUN_0058fae0
 */


void FUN_0058fae0(char *param_1,undefined8 *param_2)

{
  long lVar1;
  size_t sVar2;
  void *__dest;
  undefined8 uVar3;
  char *__s;
  size_t sVar4;
  char *param0;
  size_t *local_28;
  
  if (param_2 != (undefined8 *)0x0) {
    lVar1 = FUN_00401770();
    if ((param_1 != (char *)0x0) && (lVar1 == 0)) {
      sVar2 = strlen(param_1);
      __dest = (void *)FUN_002ebd50(sVar2 + 1);
      *param_2 = __dest;
      sVar2 = strlen(param_1);
      memcpy(__dest,param_1,sVar2 + 1);
      return;
    }
    FUN_00443d70();
    uVar3 = FUN_00403d80();
    FUN_004459b0();
    local_28 = (size_t *)0x0;
    FUN_00404920(uVar3,0x73,0,&local_28);
    if (local_28 == (size_t *)0x0) {
      __s = (char *)0x0;
      FUN_00404cd0(uVar3);
    }
    else {
      __s = (char *)FUN_002ebd50(*local_28 + 1);
      memcpy(__s,(void *)local_28[1],*local_28);
      __s[*local_28] = '\0';
      FUN_00404cd0(uVar3);
    }
    if ((param_1 != (char *)0x0) && (__s != (char *)0x0)) {
      sVar2 = strlen(param_1);
      sVar4 = strlen(__s);
      sVar2 = sVar2 + sVar4 + 3;
      param0 = (char *)FUN_002ebd50(sVar2);
      *param_2 = param0;
      snprintf(param0,sVar2,"%s, %s",param_1,__s);
      free(__s);
    }
  }
  return;
}


