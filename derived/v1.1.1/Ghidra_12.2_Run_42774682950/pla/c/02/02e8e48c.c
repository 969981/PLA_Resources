/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e8e48c; name: FUN_02e8e48c
 */


undefined8 FUN_02e8e48c(undefined8 *param_1,char *param_2,char *param_3)

{
  long lVar1;
  size_t sVar2;
  size_t sVar3;
  void *__dest;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  size_t __n;
  bool bVar8;
  
  if (*(char *)(param_1 + 1) != '\0') {
    (*DAT_0442d150)(0,*param_1);
  }
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  if (param_2 == (char *)0x0) {
    return 1;
  }
  sVar2 = strlen(param_2);
  if (param_3 == (char *)0x0) {
    uVar7 = 0;
    if ((sVar2 & 0xffffffff) == 0) {
      bVar8 = false;
      __n = 0;
      uVar6 = 0;
      goto LAB_02e8e520;
    }
  }
  else {
    sVar3 = strlen(param_3);
    __n = sVar2 & 0xffffffff;
    uVar6 = sVar3 & 0xffffffff;
    uVar7 = uVar6;
    if (__n <= uVar6) {
LAB_02e8e5bc:
      bVar8 = false;
      goto LAB_02e8e520;
    }
    if (uVar6 != 0) {
      uVar5 = 0;
      do {
        if (param_2[uVar5 + (__n - uVar6)] != param_3[uVar5]) goto LAB_02e8e5bc;
        uVar5 = uVar5 + 1;
      } while ((uVar5 & 0xffffffff) < uVar6);
    }
  }
  __n = sVar2 & 0xffffffff;
  uVar6 = 0;
  bVar8 = true;
LAB_02e8e520:
  lVar1 = uVar6 + ((int)sVar2 + 1);
  __dest = (void *)(*DAT_0442d138)(0,lVar1);
  if (__dest == (void *)0x0) {
    uVar4 = 0x34;
  }
  else {
    memcpy(__dest,param_2,__n);
    if (!bVar8) {
      memcpy((void *)((long)__dest + __n),param_3,uVar7);
    }
    uVar4 = 1;
    *(undefined1 *)((long)__dest + lVar1 + -1) = 0;
    *param_1 = __dest;
    *(undefined1 *)(param_1 + 1) = 1;
  }
  return uVar4;
}


