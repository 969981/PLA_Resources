/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ec01f8; name: FUN_02ec01f8
 */


void FUN_02ec01f8(long param_1,char *param_2)

{
  long lVar1;
  char local_24 [4];
  
  if ((*param_2 == -1) && (*(long *)(param_2 + 8) == 0)) {
    if (*(char *)(param_1 + 0x10) != '\0') {
      *(undefined1 *)(param_1 + 0x10) = 0;
    }
  }
  else {
    lVar1 = FUN_02ebc084(param_1 + 0x18,*param_2,local_24);
    if ((((lVar1 != 0) && (local_24[0] != '\0')) &&
        (FUN_02ec02f8(lVar1,param_2 + 8), *(char *)(lVar1 + 0x10) == '\0')) &&
       (*(int *)(lVar1 + 0x20) == 0)) {
      if (*(long *)(lVar1 + 0x18) != 0) {
        *(undefined4 *)(lVar1 + 0x20) = 0;
        (*DAT_0442d150)(0);
        *(undefined8 *)(lVar1 + 0x18) = 0;
        *(undefined4 *)(lVar1 + 0x24) = 0;
      }
      FUN_02ec0364(param_1 + 0x18,*param_2);
      return;
    }
  }
  return;
}


