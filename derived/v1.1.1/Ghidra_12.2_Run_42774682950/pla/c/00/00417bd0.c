/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00417bd0; name: FUN_00417bd0
 */


long FUN_00417bd0(long param_1,char *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  char *local_38;
  long lStack_30;
  
  if (param_3 == 0) {
    return 0;
  }
  if (param_1 == 0) {
    lVar2 = FUN_00418000(param_3);
    return lVar2;
  }
  if (param_2 != (char *)0x0) {
    local_38 = param_2;
    lStack_30 = param_3;
    lVar2 = FUN_00405c90(*(undefined8 *)(param_1 + 0x10),&local_38);
    if (lVar2 != 0) {
      return *(long *)(lVar2 + 0x10);
    }
    iVar1 = strcmp(param_2,"ENV");
    if ((iVar1 == 0) && (lVar2 = FUN_00418000(param_3), lVar2 != 0)) {
      return lVar2;
    }
  }
  local_38 = "default";
  lStack_30 = param_3;
  lVar3 = FUN_00405c90(*(undefined8 *)(param_1 + 0x10),&local_38);
  lVar2 = 0;
  if (lVar3 != 0) {
    lVar2 = *(long *)(lVar3 + 0x10);
  }
  return lVar2;
}


