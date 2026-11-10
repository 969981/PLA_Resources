/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0050d058; name: FUN_0050d058
 */


void FUN_0050d058(ulong *param_1)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *__s;
  ulong uVar3;
  long lVar4;
  
  if ((*param_1 & 1) == 0) {
    __s = param_1 + 1;
  }
  else {
    __s = (ulong *)param_1[1];
    if (__s == (ulong *)0x0) {
      uVar3 = 0;
      goto LAB_0050d0e8;
    }
  }
  uVar3 = *param_1 >> 1;
  puVar2 = __s + uVar3 * 0x12 + -1;
  lVar4 = uVar3 + 1;
  while (lVar4 = lVar4 + -1, lVar4 != 0) {
    uVar1 = *puVar2;
    puVar2 = puVar2 + -0x12;
                    /* try { // try from 0050d0a4 to 0050d0a7 has its CatchHandler @ 0050d100 */
    FUN_002e4a10(uVar1);
  }
  memset(__s,0xab,uVar3 * 0x90);
  if ((*param_1 & 1) == 0) {
    return;
  }
  uVar3 = param_1[1];
LAB_0050d0e8:
  FUN_002e2ea0(PTR_LAB_04373088,uVar3);
  return;
}


