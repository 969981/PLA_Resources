/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032c41a8; name: FUN_032c41a8
 */


undefined4 FUN_032c41a8(undefined8 *param_1,undefined8 *param_2)

{
  size_t __n;
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  void *__s1;
  void *__s2;
  undefined4 uVar4;
  ulong uVar5;
  ulong uVar6;
  
  __s1 = (void *)*param_1;
  __s2 = (void *)*param_2;
  if (__s1 == __s2) {
    bVar2 = param_1[1] == param_2[1];
    uVar4 = 1;
    if ((ulong)param_1[1] < (ulong)param_2[1]) {
      uVar4 = 0xffffffff;
    }
  }
  else {
    uVar5 = param_1[1] - (long)__s1;
    uVar6 = param_2[1] - (long)__s2;
    __n = uVar5;
    if (uVar6 <= uVar5) {
      __n = uVar6;
    }
    iVar3 = memcmp(__s1,__s2,__n);
    uVar4 = 1;
    if (iVar3 < 0) {
      uVar4 = 0xffffffff;
    }
    if (iVar3 != 0) {
      return uVar4;
    }
    bVar2 = uVar5 == uVar6;
    uVar4 = 1;
    if (uVar5 < uVar6) {
      uVar4 = 0xffffffff;
    }
  }
  uVar1 = 0;
  if (!bVar2) {
    uVar1 = uVar4;
  }
  return uVar1;
}


