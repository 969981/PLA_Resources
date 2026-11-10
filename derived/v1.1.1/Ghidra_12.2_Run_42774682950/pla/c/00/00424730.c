/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00424730; name: FUN_00424730
 */


int FUN_00424730(void *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (**(code **)(*(long *)(param_3 + 0x78) + 0x10))();
  if (iVar1 < 1) {
    iVar3 = iVar1;
  }
  else {
    iVar2 = FUN_0040c070(*(undefined8 *)(param_3 + 8));
    iVar3 = iVar2 + 0xe;
    if (-1 < iVar2 + 7) {
      iVar3 = iVar2 + 7;
    }
    iVar3 = iVar3 >> 3;
    iVar2 = iVar3 - iVar1;
    if (0 < iVar2) {
      memmove((void *)((long)param_1 + (long)iVar2),param_1,(long)iVar1);
      memset(param_1,0,(long)iVar2);
    }
  }
  return iVar3;
}


