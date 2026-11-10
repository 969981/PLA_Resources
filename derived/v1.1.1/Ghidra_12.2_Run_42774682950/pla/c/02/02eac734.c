/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eac734; name: FUN_02eac734
 */


undefined8 FUN_02eac734(char *param_1)

{
  size_t sVar1;
  char *__dest;
  size_t sVar2;
  int iVar3;
  size_t __n;
  
  if (param_1 != (char *)0x0) {
    sVar1 = strlen(param_1);
    iVar3 = (int)sVar1;
    __dest = (char *)(*DAT_0442d138)(0,iVar3 + 2);
    if (__dest == (char *)0x0) {
      DAT_0440a448 = __dest;
      return 0x34;
    }
    __n = (ulong)(iVar3 + 1) - 1;
    DAT_0440a448 = __dest;
    sVar2 = strlen(param_1);
    if (sVar2 + 1 <= __n) {
      __n = sVar2 + 1;
    }
    strncpy(__dest,param_1,__n);
    __dest[__n] = '\0';
    if (DAT_0440a448[iVar3 - 1] != '/') {
      DAT_0440a448[sVar1 & 0xffffffff] = '/';
      DAT_0440a448[iVar3 + 1] = '\0';
    }
  }
  FUN_02eac818(0,1,&PTR_LAB_042a91e8);
  FUN_02eac8d4(DAT_0440a450);
  return 1;
}


