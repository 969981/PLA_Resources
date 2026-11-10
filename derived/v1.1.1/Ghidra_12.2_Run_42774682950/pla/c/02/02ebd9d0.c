/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ebd9d0; name: FUN_02ebd9d0
 */


void FUN_02ebd9d0(long param_1,int *param_2,undefined8 param_3,int *param_4,undefined4 *param_5)

{
  long lVar1;
  char local_54 [4];
  
  if (*(char *)(param_1 + 0x10) != '\0') {
    (**(code **)(**(long **)(param_1 + 8) + 0x10))(param_5[1],*(long **)(param_1 + 8),*param_5);
  }
  if (*param_2 == 0) {
    if (*(int *)(param_1 + 0x20) != 0) {
      lVar1 = *(long *)(param_1 + 0x18);
      do {
        *param_4 = *(int *)(lVar1 + 0x28);
        FUN_02ebdae0(lVar1,param_2 + 2,param_3,param_4 + 2,param_5);
        lVar1 = lVar1 + 0x30;
      } while (lVar1 != *(long *)(param_1 + 0x18) + (ulong)*(uint *)(param_1 + 0x20) * 0x30);
    }
  }
  else {
    lVar1 = FUN_02ebbef0(param_1 + 0x18,*param_2,local_54);
    if ((lVar1 != 0) && (local_54[0] != '\0')) {
      *param_4 = *param_2;
      FUN_02ebdae0(lVar1,param_2 + 2,param_3,param_4 + 2,param_5);
      return;
    }
  }
  return;
}


