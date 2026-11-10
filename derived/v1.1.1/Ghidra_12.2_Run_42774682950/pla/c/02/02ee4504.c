/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ee4504; name: FUN_02ee4504
 */


void FUN_02ee4504(long param_1,int *param_2)

{
  long lVar1;
  long local_48;
  char local_34 [4];
  
  if (*param_2 == 0) {
    if ((((char)param_2[2] == -1) && ((char)param_2[4] == -1)) && (*(long *)(param_2 + 6) == 0)) {
      if (*(char *)(param_1 + 0xc) != '\0') {
        *(undefined1 *)(param_1 + 0xc) = 0;
      }
      FUN_02ee4658(param_1);
      return;
    }
    local_48 = *(long *)(param_1 + 0x10);
    if (*(int *)(param_1 + 0x18) != 0) {
      do {
        lVar1 = local_48;
        FUN_02ee47bc(local_48,param_2 + 2);
        if ((*(char *)(lVar1 + 0xc) == '\0') && (*(int *)(lVar1 + 0x18) == 0)) {
          FUN_02ee4908(lVar1);
          local_48 = FUN_02ee4958((long *)(param_1 + 0x10),&local_48);
        }
        else {
          local_48 = local_48 + 0x28;
        }
      } while (local_48 != *(long *)(param_1 + 0x10) + (ulong)*(uint *)(param_1 + 0x18) * 0x28);
    }
  }
  else {
    lVar1 = FUN_02eb18a8(param_1 + 0x10,*param_2,local_34);
    if ((((lVar1 != 0) && (local_34[0] != '\0')) &&
        (FUN_02ee47bc(lVar1,param_2 + 2), *(char *)(lVar1 + 0xc) == '\0')) &&
       (*(int *)(lVar1 + 0x18) == 0)) {
      FUN_02ee4908(lVar1);
      FUN_02ee49e4(param_1 + 0x10,*param_2);
    }
  }
  return;
}


