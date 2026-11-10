/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0030d400; name: FUN_0030d400
 */


long FUN_0030d400(long *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  lVar2 = *param_1;
  if (lVar2 == param_1[1]) {
    return 0;
  }
  lVar4 = 0;
  uVar5 = 0;
  lVar3 = (param_1[1] - lVar2) + 0x18;
  iVar1 = *(int *)(lVar2 + 4);
  if (iVar1 != 4) goto LAB_0030d474;
LAB_0030d43c:
  iVar1 = FUN_0030d4a4(*(undefined8 *)(lVar2 + 8));
  lVar3 = lVar3 + iVar1;
  do {
    lVar3 = lVar3 + 0x18;
    do {
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 0x10;
      if ((ulong)(param_1[1] - *param_1 >> 4) <= uVar5) {
        return lVar3;
      }
      lVar2 = *param_1 + lVar4;
      iVar1 = *(int *)(lVar2 + 4);
      if (iVar1 == 4) goto LAB_0030d43c;
LAB_0030d474:
    } while (iVar1 != 3);
    lVar2 = FUN_0032d050(*(undefined8 *)(lVar2 + 8));
    lVar3 = lVar3 + lVar2;
  } while( true );
}


