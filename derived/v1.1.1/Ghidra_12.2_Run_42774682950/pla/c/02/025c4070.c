/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025c4070; name: FUN_025c4070
 */


void FUN_025c4070(long param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  int *piVar3;
  
  if ((*(char *)(param_1 + 0x208) == '\0') &&
     (piVar3 = (int *)FUN_01e4b314(param_2,param_3), piVar3 != (int *)0x0)) {
    iVar2 = *piVar3;
    if (iVar2 == 0x11) {
      FUN_025c411c(param_1,piVar3);
      iVar2 = *piVar3;
    }
    if (iVar2 == 0xd) {
      puVar1 = (undefined8 *)(*param_3 + 8);
      if (*(int *)(*param_2 + 0x20) != 0) {
        puVar1 = (undefined8 *)(*param_3 + 0x10);
      }
      FUN_025c43a8(param_1,*puVar1,piVar3);
      return;
    }
  }
  return;
}


