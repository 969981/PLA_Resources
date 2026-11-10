/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00414210; name: FUN_00414210
 */


undefined8 FUN_00414210(long *param_1,char *param_2)

{
  char *pcVar1;
  int iVar2;
  undefined8 uVar3;
  
  pcVar1 = param_2;
  if (*param_2 == '-') {
    pcVar1 = param_2 + 1;
  }
  if ((*pcVar1 == '0') && ((byte)(pcVar1[1] | 0x20U) == 0x78)) {
    uVar3 = FUN_00413eb0(param_1,pcVar1 + 2);
    iVar2 = (int)uVar3;
  }
  else {
    uVar3 = FUN_00414060(param_1);
    iVar2 = (int)uVar3;
  }
  if (iVar2 != 0) {
    if (*param_2 != '-') {
      return 1;
    }
    uVar3 = 1;
    if (*(int *)(*param_1 + 8) != 0) {
      *(undefined4 *)(*param_1 + 0x10) = 1;
      return uVar3;
    }
  }
  return uVar3;
}


