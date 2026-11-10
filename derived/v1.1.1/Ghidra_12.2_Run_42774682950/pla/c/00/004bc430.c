/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004bc430; name: FUN_004bc430
 */


undefined8 FUN_004bc430(char *param_1,ulong *param_2)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  
  uVar1 = DAT_0439e9e0;
  if ((param_1 != (char *)0x0) && (DAT_0439e9e0 != 0)) {
    uVar3 = 0;
    puVar4 = DAT_0439e9d8;
    do {
      iVar2 = strcmp((char *)*puVar4,param_1);
      if (iVar2 == 0) {
        *param_2 = uVar3;
        return 1;
      }
      uVar3 = uVar3 + 1;
      puVar4 = puVar4 + 3;
    } while (uVar3 < uVar1);
  }
  return 0;
}


