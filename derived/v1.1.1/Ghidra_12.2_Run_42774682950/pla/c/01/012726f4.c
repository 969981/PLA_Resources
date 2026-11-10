/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012726f4; name: FUN_012726f4
 */


void FUN_012726f4(long param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  cVar1 = *(char *)(param_1 + 0x904);
  if (cVar1 == '\0') {
    iVar2 = *(int *)(param_1 + 0xa98);
    iVar3 = *(int *)(param_1 + 0xa28);
joined_r0x0127275c:
    if (iVar2 != param_2) goto LAB_01272714;
  }
  else {
    if (cVar1 == '\x01') {
      iVar2 = *(int *)(param_1 + 0xa9c);
      iVar3 = *(int *)(param_1 + 0xa2c);
      goto joined_r0x0127275c;
    }
    if (cVar1 == '\x02') {
      iVar2 = *(int *)(param_1 + 0xaa0);
      iVar3 = *(int *)(param_1 + 0xa30);
      goto joined_r0x0127275c;
    }
    iVar2 = 0;
    iVar3 = 0;
    if (param_2 != 0) goto LAB_01272714;
  }
  if (iVar3 == param_2) {
    FUN_0126c24c(param_1 + 0x928,1);
    return;
  }
LAB_01272714:
  if ((iVar2 != param_2) && (iVar2 == iVar3)) {
    FUN_0126c24c(param_1 + 0x928,2);
    return;
  }
  if ((iVar3 == param_2) && (iVar2 != iVar3)) {
    FUN_0126c24c(param_1 + 0x928,3);
    return;
  }
  FUN_0126c24c(param_1 + 0x928,4);
  return;
}


