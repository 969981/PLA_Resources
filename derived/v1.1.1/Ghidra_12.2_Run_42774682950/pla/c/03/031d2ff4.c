/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031d2ff4; name: FUN_031d2ff4
 */


bool FUN_031d2ff4(long param_1,undefined4 *param_2,int *param_3,int *param_4)

{
  char cVar1;
  long lVar2;
  undefined4 local_40 [2];
  int local_38 [2];
  int local_28 [2];
  
  lVar2 = *(long *)(param_1 + 0x20);
  local_40[0] = *param_2;
  cVar1 = FUN_0318fe6c(lVar2,local_40,local_28,local_38);
  if (cVar1 == '\0') {
    local_38[0] = -1;
    *param_3 = -1;
  }
  else {
    *param_3 = local_28[0] - *(int *)(lVar2 + 0x20);
    local_38[0] = local_38[0] - *(int *)(lVar2 + 0x20);
  }
  *param_4 = local_38[0];
  return cVar1 != '\0';
}


