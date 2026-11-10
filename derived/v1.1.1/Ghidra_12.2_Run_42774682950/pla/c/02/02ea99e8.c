/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ea99e8; name: FUN_02ea99e8
 */


undefined8 FUN_02ea99e8(long param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined8 local_48;
  undefined4 local_34;
  
  if (((*(uint *)(param_1 + 0x48) | 2) != 2) || (*(int *)(param_1 + 0xa8) != 0)) {
    return 1;
  }
  *(undefined4 *)(param_1 + 0x48) = 1;
  local_34 = 0;
  do {
    local_48 = 0;
    iVar1 = FUN_02ea9818(param_1,&local_34,&local_48);
    piVar3 = *(int **)(param_1 + 0xa0);
    if (*(long *)(param_1 + 0x58) == 0) {
      if (piVar3 != (int *)0x0) goto LAB_02ea9ac8;
LAB_02ea9a78:
      *(int **)(param_1 + 0x58) = piVar3;
    }
    else {
      FUN_02e771a8();
      if (piVar3 == (int *)0x0) goto LAB_02ea9a78;
LAB_02ea9ac8:
      *piVar3 = *piVar3 + 1;
      *(int **)(param_1 + 0x58) = piVar3;
    }
    if (iVar1 == 0) {
      return 1;
    }
    iVar2 = FUN_02ea9ae0(param_1,iVar1,local_34,param_2,param_3);
    if (iVar2 == 1) {
      return 1;
    }
    FUN_02edcfc4(DAT_0440a170,*(undefined4 *)(param_1 + 0x6c),iVar1,local_48);
  } while( true );
}


