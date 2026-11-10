/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00da38d4; name: FUN_00da38d4
 */


undefined8 FUN_00da38d4(long param_1,int param_2,int param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  
  if ((((param_2 < 0) || (iVar3 = *(int *)(param_1 + 0x78), iVar3 <= param_2)) ||
      (lVar4 = *(long *)(*(long *)(param_1 + 200) + (long)param_2 * 0x70 + 0x48), lVar4 == 0)) ||
     (*(char *)(lVar4 + 0x1e1) == '\0')) {
    return 0;
  }
  if (param_3 == 0) {
    uVar1 = FUN_00da3974(param_1,param_2);
    if ((uVar1 & 1) != 0) {
      return 1;
    }
    iVar3 = *(int *)(param_1 + 0x78);
  }
  else {
    if (param_3 == 1) goto LAB_00da3934;
    if (param_3 != 2) {
      return 0;
    }
  }
  param_2 = iVar3 + param_2;
LAB_00da3934:
  uVar2 = FUN_00da3974(param_1,param_2);
  return uVar2;
}


