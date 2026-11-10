/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0128af68; name: FUN_0128af68
 */


uint FUN_0128af68(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  local_40 = 0x8ad48bca42a4661b;
  pcStack_38 = "context_menu_00";
  local_30 = 0xf;
  local_28 = (long *)0x0;
  lVar2 = FUN_00d472a0(param_1 + 0x180,&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  if ((((lVar2 == 0) || (3 < *(int *)(lVar2 + 0x500) - 2U)) && (*(char *)(param_1 + 0x6f8) == '\0'))
     && ((*(int *)(param_1 + 0x5ac) == 3 && (*(int *)(param_1 + 6000) == 0)))) {
    if (**(int **)(param_1 + 0x1648) == 1) {
      uVar1 = FUN_0128ac64(param_1);
      uVar1 = uVar1 ^ 1;
      goto LAB_0128b010;
    }
    if (**(int **)(param_1 + 0x1648) != 2) {
      uVar1 = 1;
      goto LAB_0128b010;
    }
  }
  uVar1 = 0;
LAB_0128b010:
  return uVar1 & 1;
}


