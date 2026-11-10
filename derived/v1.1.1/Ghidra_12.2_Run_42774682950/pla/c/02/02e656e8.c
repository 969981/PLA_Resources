/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e656e8; name: FUN_02e656e8
 */


undefined8 FUN_02e656e8(undefined8 *param_1,char *param_2,undefined8 *param_3,undefined4 param_4)

{
  undefined8 uVar1;
  byte bVar2;
  size_t __n;
  char *__dest;
  size_t sVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  bVar2 = *(byte *)((long)param_1 + 0x34);
  *(undefined4 *)(param_1 + 6) = param_4;
  *(byte *)((long)param_1 + 0x34) = bVar2 | 1;
  if (param_3 == (undefined8 *)0x0) {
    *(byte *)((long)param_1 + 0x34) = bVar2 & 0xfd | 1;
  }
  else {
    *(byte *)((long)param_1 + 0x34) = bVar2 | 3;
    param_1[1] = *param_3;
    uVar4 = param_3[1];
    uVar1 = param_3[2];
    uVar5 = param_3[3];
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_3 + 4);
    param_1[3] = uVar1;
    param_1[4] = uVar5;
    param_1[2] = uVar4;
  }
  __n = strlen(param_2);
  __dest = (char *)(*DAT_0442d138)(7,__n + 1);
  *param_1 = __dest;
  if (__dest == (char *)0x0) {
    uVar4 = 2;
  }
  else {
    sVar3 = strlen(param_2);
    if (sVar3 + 1 <= __n) {
      __n = sVar3 + 1;
    }
    strncpy(__dest,param_2,__n);
    uVar4 = 1;
    __dest[__n] = '\0';
  }
  return uVar4;
}


