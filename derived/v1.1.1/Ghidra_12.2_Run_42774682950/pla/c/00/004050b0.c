/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004050b0; name: FUN_004050b0
 */


long FUN_004050b0(undefined1 *param_1,char *param_2,ulong param_3)

{
  bool bVar1;
  size_t sVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_3 < 2) {
    uVar3 = 0;
    uVar4 = uVar3;
    if (param_3 == 0) goto LAB_0040510c;
  }
  else {
    uVar3 = 0;
    uVar4 = param_3 - 1;
    do {
      if (param_2[uVar3] == '\0') {
        param_2 = param_2 + uVar3;
        param_1 = param_1 + uVar3;
        goto LAB_00405108;
      }
      param_1[uVar3] = param_2[uVar3];
      uVar3 = uVar3 + 1;
    } while (uVar4 != uVar3);
    param_2 = param_2 + uVar3;
    param_1 = param_1 + uVar3;
    bVar1 = param_3 == uVar3;
    uVar3 = uVar4;
    if (bVar1) goto LAB_0040510c;
  }
LAB_00405108:
  *param_1 = 0;
  uVar4 = uVar3;
LAB_0040510c:
  sVar2 = strlen(param_2);
  return sVar2 + uVar4;
}


