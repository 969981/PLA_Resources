/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ee4a38; name: FUN_02ee4a38
 */


void FUN_02ee4a38(long param_1,char *param_2)

{
  long lVar1;
  long local_50;
  char local_44 [4];
  
  if (*param_2 == -1) {
    if (*(long *)(param_2 + 8) == 0) {
      if (*(char *)(param_1 + 0xc) != '\0') {
        *(undefined1 *)(param_1 + 0xc) = 0;
      }
      FUN_02ee4bb0(param_1);
      return;
    }
    local_50 = *(long *)(param_1 + 0x10);
    if (*(int *)(param_1 + 0x18) != 0) {
      do {
        lVar1 = local_50;
        FUN_02ee4d0c(local_50,param_2 + 8);
        if ((*(char *)(lVar1 + 0xc) == '\0') && (*(int *)(lVar1 + 0x18) == 0)) {
          if (*(long *)(lVar1 + 0x10) != 0) {
            *(undefined4 *)(lVar1 + 0x18) = 0;
            (*DAT_0442d150)(0);
            *(undefined8 *)(lVar1 + 0x10) = 0;
            *(undefined4 *)(lVar1 + 0x1c) = 0;
          }
          local_50 = FUN_02ee4d70((long *)(param_1 + 0x10),&local_50);
        }
        else {
          local_50 = local_50 + 0x28;
        }
      } while (local_50 != *(long *)(param_1 + 0x10) + (ulong)*(uint *)(param_1 + 0x18) * 0x28);
    }
  }
  else {
    lVar1 = FUN_02eb1a90(param_1 + 0x10,*param_2,local_44);
    if ((((lVar1 != 0) && (local_44[0] != '\0')) &&
        (FUN_02ee4d0c(lVar1,param_2 + 8), *(char *)(lVar1 + 0xc) == '\0')) &&
       (*(int *)(lVar1 + 0x18) == 0)) {
      if (*(long *)(lVar1 + 0x10) != 0) {
        *(undefined4 *)(lVar1 + 0x18) = 0;
        (*DAT_0442d150)(0);
        *(undefined8 *)(lVar1 + 0x10) = 0;
        *(undefined4 *)(lVar1 + 0x1c) = 0;
      }
      FUN_02ee4e0c(param_1 + 0x10,*param_2);
    }
  }
  return;
}


