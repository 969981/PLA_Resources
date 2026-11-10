/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00405120; name: FUN_00405120
 */


long FUN_00405120(long param_1,char *param_2,ulong param_3)

{
  char *pcVar1;
  long lVar2;
  size_t sVar3;
  undefined1 *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = 0;
  if (param_3 != 0) {
    do {
      if (*(char *)(param_1 + uVar6) == '\0') {
        puVar4 = (undefined1 *)(param_1 + uVar6);
        if (1 < param_3 - uVar6) {
          uVar5 = 0;
          uVar7 = ~uVar6 + param_3;
          goto LAB_00405168;
        }
        uVar5 = 0;
        goto LAB_004051ac;
      }
      uVar6 = uVar6 + 1;
    } while (param_3 != uVar6);
  }
  uVar7 = 0;
  goto LAB_004051b0;
  while( true ) {
    lVar2 = param_1 + uVar5;
    uVar5 = uVar5 + 1;
    *(char *)(lVar2 + uVar6) = *pcVar1;
    if (uVar7 == uVar5) break;
LAB_00405168:
    pcVar1 = param_2 + uVar5;
    if (*pcVar1 == '\0') {
      param_2 = param_2 + uVar5;
      puVar4 = puVar4 + uVar5;
      goto LAB_004051ac;
    }
  }
  param_2 = param_2 + uVar5;
  if (param_3 - uVar6 != uVar5) {
    puVar4 = puVar4 + uVar5;
    uVar5 = uVar7;
LAB_004051ac:
    *puVar4 = 0;
    uVar7 = uVar5;
  }
LAB_004051b0:
  sVar3 = strlen(param_2);
  return uVar7 + uVar6 + sVar3;
}


