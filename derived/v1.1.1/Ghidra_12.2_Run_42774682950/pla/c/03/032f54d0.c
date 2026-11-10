/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032f54d0; name: FUN_032f54d0
 */


long FUN_032f54d0(long *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (param_3 < (int)param_2) {
    return 0;
  }
  iVar1 = param_3 + (int)param_2;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 1;
  }
  iVar1 = iVar1 >> 1;
  uVar2 = FUN_032f54d0(param_1,param_2,iVar1 + -1);
  uVar3 = FUN_032f54d0(param_1,iVar1 + 1,param_3);
  lVar4 = *(long *)(*param_1 + (long)iVar1 * 8);
  *(undefined8 *)(lVar4 + 0x18) = uVar2;
  *(undefined8 *)(lVar4 + 0x10) = uVar3;
  return lVar4;
}


