/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001e12cc; name: FUN_001e12cc
 */


long FUN_001e12cc(long *param_1,undefined8 param_2,undefined4 param_3)

{
  size_t sVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_140 [8];
  char acStack_138 [264];
  
  lVar3 = *param_1;
  FUN_001e15a0(param_2,param_3,acStack_138);
  sVar1 = strlen(acStack_138);
  lVar2 = FUN_001e0c94(*(undefined8 *)(lVar3 + 200),acStack_138,sVar1 + 1);
  if (lVar2 == 0) {
    if ((*(byte *)(lVar3 + 0xf68) >> 2 & 1) == 0) {
      return 0;
    }
    FUN_001e15a0(&DAT_038e4910,param_3,acStack_138);
    sVar1 = strlen(acStack_138);
    lVar2 = FUN_001e0c94(*(undefined8 *)(lVar3 + 200),acStack_138,sVar1 + 1);
    if (lVar2 == 0) {
      return 0;
    }
  }
  if (*(long *)(lVar3 + 0xc08) == -1) {
    return lVar2;
  }
  FUN_002053bc(auStack_140);
  FUN_001f3934(lVar3,"Hostname in DNS cache was stale, zapped\n");
  FUN_001e0bf0(*(undefined8 *)(lVar3 + 200),acStack_138,sVar1 + 1);
  return 0;
}


