/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001fd860; name: FUN_001fd860
 */


int FUN_001fd860(long param_1,char *param_2,undefined1 *param_3)

{
  int iVar1;
  long local_38;
  
  *param_2 = '\0';
  FUN_002044d4(*(undefined8 *)(param_1 + 0x1e8));
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  FUN_002044d4(*(undefined8 *)(param_1 + 0x1d0));
  memset((void *)(param_1 + 0xf0),0,0x578);
  *(undefined8 *)(param_1 + 0xf8) = 0xffffffffffffffff;
  iVar1 = FUN_001fd95c(param_1,&local_38,param_2);
  if (iVar1 == 0) {
    if (*(long *)(local_38 + 0x4c0) + *(long *)(local_38 + 0x4e0) != 0) {
      iVar1 = 0;
      *param_3 = 1;
      goto LAB_001fd920;
    }
    if (*param_2 != '\0') {
      iVar1 = 0;
      goto LAB_001fd920;
    }
    iVar1 = FUN_001fd744(local_38,param_3);
  }
  if (iVar1 == 0x59) {
    return 0x59;
  }
  if ((iVar1 != 0) && (local_38 != 0)) {
    FUN_001fcddc(param_1,local_38,1);
    return iVar1;
  }
LAB_001fd920:
  if (*(long *)(param_1 + 0x10) == 0) {
    FUN_001e7638(param_1);
  }
  return iVar1;
}


