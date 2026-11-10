/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ebd7ac; name: FUN_02ebd7ac
 */


void FUN_02ebd7ac(long param_1,long *param_2,undefined8 param_3,long *param_4,undefined4 *param_5,
                 uint param_6)

{
  long lVar1;
  char local_54 [4];
  
  if (((param_6 & 1) != 0) && (*(char *)(param_1 + 0x10) != '\0')) {
    (**(code **)(**(long **)(param_1 + 8) + 0x10))(param_5[1],*(long **)(param_1 + 8),*param_5);
  }
  if (*param_2 == 0) {
    if (*(int *)(param_1 + 0x20) != 0) {
      lVar1 = *(long *)(param_1 + 0x18);
      do {
        *param_4 = *(long *)(lVar1 + 0x28);
        FUN_02ebd8c0(lVar1,param_2 + 1,param_3,param_4 + 1,param_5);
        lVar1 = lVar1 + 0x30;
      } while (lVar1 != *(long *)(param_1 + 0x18) + (ulong)*(uint *)(param_1 + 0x20) * 0x30);
    }
  }
  else {
    lVar1 = FUN_02ebbd18(param_1 + 0x18,*param_2,local_54);
    if ((lVar1 != 0) && (local_54[0] != '\0')) {
      *param_4 = *param_2;
      FUN_02ebd8c0(lVar1,param_2 + 1,param_3,param_4 + 1,param_5);
      return;
    }
  }
  return;
}


