/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005c58d0; name: FUN_005c58d0
 */


void FUN_005c58d0(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long *__s;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  
  *param_1 = (long)(PTR_DAT_04375048 + 0x10);
  puVar1 = PTR_LAB_04373088;
  uVar3 = param_1[3];
  if ((uVar3 & 1) == 0) {
    __s = param_1 + 4;
  }
  else {
    __s = (long *)param_1[4];
    if (__s == (long *)0x0) {
      lVar2 = 0;
      goto LAB_005c5998;
    }
  }
  if (uVar3 >> 1 != 0) {
    uVar4 = uVar3 >> 1;
    plVar5 = __s + uVar4 * 4 + -2;
    lVar2 = uVar4 - 1;
    if ((*(byte *)(__s + uVar4 * 4 + -4) & 1) != 0) goto LAB_005c5950;
    while (plVar6 = plVar5, lVar2 != 0) {
      while( true ) {
        plVar5 = plVar6 + -4;
        lVar2 = lVar2 + -1;
        if ((*(byte *)(plVar6 + -6) & 1) == 0) break;
LAB_005c5950:
        FUN_002e2ea0(puVar1,*plVar5);
        plVar6 = plVar5;
        if (lVar2 == 0) goto LAB_005c5960;
      }
    }
  }
LAB_005c5960:
  memset(__s,0xab,(uVar3 >> 1) << 5);
  if ((*(byte *)(param_1 + 3) & 1) == 0) {
    return;
  }
  lVar2 = param_1[4];
LAB_005c5998:
  FUN_002e2ea0(PTR_LAB_04373088,lVar2);
  return;
}


