/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02788894; name: FUN_02788894
 */


void FUN_02788894(char *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_027884b0();
  if (iVar1 != 0) {
    iVar3 = 0;
    iVar2 = iVar1;
    do {
      iVar2 = FUN_02788704(param_1,iVar2,iVar3);
      if (*param_1 != '\0') {
        if (*(int *)(param_1 + 0x14) == param_3) {
          return;
        }
        *param_1 = '\0';
      }
      iVar3 = iVar3 + 1;
    } while (iVar1 != iVar3);
  }
  *param_1 = '\0';
  return;
}


