/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005a8620; name: FUN_005a8620
 */


long FUN_005a8620(ulong param_1,uint param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  plVar1 = (long *)(param_1 & 0xfffffffffffffffc);
  if (*plVar1 == 0) {
    lVar4 = (long)plVar1 + 9;
    uVar5 = (ulong)*(byte *)(plVar1 + 1);
    lVar3 = plVar1[4];
  }
  else {
    uVar5 = plVar1[1];
    lVar4 = plVar1[2];
    lVar3 = plVar1[4];
  }
  if (lVar3 == 0) {
    uVar2 = (ulong)*(byte *)(plVar1 + 5);
  }
  else {
    uVar2 = plVar1[5];
  }
  lVar3 = uVar5 + 0x20;
  if ((uVar5 < 5) || (*(int *)(lVar4 + uVar5 + -4) != 0x6e69622d)) {
    return lVar3 + uVar2;
  }
  if ((param_2 & 1) == 0) {
    return lVar3 + (ulong)(byte)(&DAT_03a34ba1)[uVar2 % 3] + (uVar2 / 3) * 4;
  }
  return lVar3 + uVar2 + 1;
}


