/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002840c0; name: FUN_002840c0
 */


void FUN_002840c0(long param_1,undefined8 param_2,long param_3,uint param_4,undefined8 param_5,
                 long param_6)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  
  if (((*(char *)(*(long *)(param_3 + 0xa0) + 0x752) == '\x02') &&
      (*(char *)(param_1 + 0x35) == '\0')) && (*(char *)(param_1 + 0x34) != '\0')) {
    uVar1 = *(undefined4 *)(*(long *)(param_3 + 0x78) + 0x174);
    lVar3 = *(long *)(*(long *)(param_3 + 0x238) + 0x358);
    if ((*(long *)(param_6 + 0x28) != 0) && (iVar2 = *(int *)(lVar3 + 8), iVar2 != -1)) {
      FUN_00878324(param_2,iVar2,5,*(long *)(param_6 + 0x28),0x140);
    }
    FUN_0027d6ac(*(undefined8 *)(param_3 + 0x98),param_2,param_3,lVar3,uVar1,param_4 & 1,param_5,1);
  }
  if (*(char *)(param_1 + 0x33) == '\0') {
    return;
  }
  FUN_0027daa0(*(undefined8 *)(param_3 + 0x98),param_2,param_3,param_5,param_6);
  return;
}


