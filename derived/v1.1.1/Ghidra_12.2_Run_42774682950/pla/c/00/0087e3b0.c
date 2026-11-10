/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0087e3b0; name: FUN_0087e3b0
 */


long FUN_0087e3b0(ushort *param_1)

{
  short sVar1;
  long *plVar2;
  ulong uVar3;
  int iVar4;
  long *plVar5;
  int iVar6;
  
  uVar3 = (ulong)*param_1;
  if (uVar3 == 0) {
    iVar4 = -1;
LAB_0087e40c:
    return (ulong)param_1[1] * 8 + (long)(iVar4 + 1) * 4;
  }
  plVar5 = (long *)(*(long *)(param_1 + 4) + 0x10);
  iVar4 = -1;
  sVar1 = *(short *)(*(long *)(param_1 + 4) + 2);
  iVar6 = (int)sVar1;
  if (sVar1 < 0) goto LAB_0087e3f4;
  do {
    if (iVar6 <= iVar4) {
      iVar6 = iVar4;
    }
    iVar4 = 0xf;
    plVar2 = plVar5;
    if (*plVar5 == 0) {
      iVar4 = iVar6;
    }
    while( true ) {
      uVar3 = uVar3 - 1;
      if (uVar3 == 0) goto LAB_0087e40c;
      plVar5 = plVar2 + 5;
      iVar6 = (int)*(short *)((long)plVar2 + 0x1a);
      if (-1 < iVar6) break;
LAB_0087e3f4:
      iVar4 = 0xf;
      plVar2 = plVar5;
    }
  } while( true );
}


