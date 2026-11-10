/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00481610; name: FUN_00481610
 */


ulong FUN_00481610(undefined8 param_1,long param_2,int param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  char *pcVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_2 + 0x28);
  uVar2 = FUN_00407e60(**(undefined4 **)(param_2 + 0x10));
  if (param_4 == 1) {
    if ((lVar5 == 0) || (*(long *)(lVar5 + 0x40) == 0)) {
      pcVar4 = "%*s<INVALID PRIVATE KEY>\n";
      goto LAB_004817ac;
    }
    iVar1 = FUN_00402590(param_1,"%*s%s Private-Key:\n",param_3,&DAT_03996322,uVar2);
    if (iVar1 < 1) {
      return 0;
    }
    iVar1 = FUN_00402590(param_1,"%*spriv:\n",param_3,&DAT_03996322);
    if (iVar1 < 1) {
      return 0;
    }
    uVar2 = 0x20;
    iVar1 = **(int **)(param_2 + 0x10);
    if (((iVar1 != 0x40a) && (iVar1 != 0x43f)) && (uVar2 = 0x38, iVar1 != 0x40b)) {
      uVar2 = 0x39;
    }
    uVar3 = FUN_0043ff80(param_1,*(undefined8 *)(lVar5 + 0x40),uVar2,param_3 + 4);
    if ((int)uVar3 == 0) {
      return uVar3;
    }
  }
  else {
    if (lVar5 == 0) {
      pcVar4 = "%*s<INVALID PUBLIC KEY>\n";
LAB_004817ac:
      iVar1 = FUN_00402590(param_1,pcVar4,param_3,&DAT_03996322,uVar2);
      return (ulong)(0 < iVar1);
    }
    iVar1 = FUN_00402590(param_1,"%*s%s Public-Key:\n",param_3,&DAT_03996322,uVar2);
    if (iVar1 < 1) {
      return 0;
    }
  }
  iVar1 = FUN_00402590(param_1,"%*spub:\n",param_3,&DAT_03996322);
  if (iVar1 < 1) {
    return 0;
  }
  uVar2 = 0x20;
  iVar1 = **(int **)(param_2 + 0x10);
  if (((iVar1 != 0x40a) && (iVar1 != 0x43f)) && (uVar2 = 0x38, iVar1 != 0x40b)) {
    uVar2 = 0x39;
  }
  iVar1 = FUN_0043ff80(param_1,lVar5,uVar2,param_3 + 4);
  return (ulong)(iVar1 != 0);
}


