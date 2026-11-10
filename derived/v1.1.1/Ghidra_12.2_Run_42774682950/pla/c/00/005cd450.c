/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005cd450; name: FUN_005cd450
 */


bool FUN_005cd450(char *param_1,char *param_2)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  char *__s1;
  char *__s2;
  
  bVar4 = (*param_1 != '\0') != (*param_2 != '\0');
  if ((bVar4) || (*param_1 == '\0')) {
    return bVar4;
  }
  if (*param_2 == '\0') {
                    /* WARNING: Subroutine does not return */
    __assert_fail("false && \"this->engaged_\"","external/com_google_absl\\absl/types/optional.h",
                  0x1ac,"operator()");
  }
  bVar2 = param_2[8];
  bVar3 = param_1[8];
  uVar6 = (ulong)(bVar3 >> 1);
  __n = uVar6;
  if ((bVar3 & 1) != 0) {
    __n = *(size_t *)(param_1 + 0x10);
  }
  sVar1 = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    sVar1 = *(size_t *)(param_2 + 0x10);
  }
  if (__n != sVar1) {
    return true;
  }
  __s1 = *(char **)(param_1 + 0x18);
  if ((bVar3 & 1) == 0) {
    __s1 = param_1 + 9;
  }
  __s2 = *(char **)(param_2 + 0x18);
  if ((bVar2 & 1) == 0) {
    __s2 = param_2 + 9;
  }
  if ((bVar3 & 1) == 0) {
    if (__n != 0) {
      param_1 = param_1 + 9;
      do {
        if (*param_1 != *__s2) {
          return true;
        }
        uVar6 = uVar6 - 1;
        param_1 = param_1 + 1;
        __s2 = __s2 + 1;
      } while (uVar6 != 0);
      return false;
    }
  }
  else if (__n != 0) {
    iVar5 = memcmp(__s1,__s2,__n);
    return iVar5 != 0;
  }
  return false;
}


