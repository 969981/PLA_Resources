/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03339cf4; name: FUN_03339cf4
 */


undefined8 FUN_03339cf4(long *param_1,int param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  iVar1 = *(int *)(*param_1 + (long)param_2 * 0x18 + 8);
  lVar2 = (long)iVar1;
  if (iVar1 != -1) {
    lVar3 = param_1[3];
    iVar1 = *(int *)(*(long *)(*param_1 + (long)*(int *)(lVar3 + lVar2 * 0x14 + 4) * 0x18) + 0x10);
    while( true ) {
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = *(int *)(lVar3 + lVar2 * 0x14 + 0xc);
      lVar2 = (long)iVar1;
      if (iVar1 == -1) break;
      lVar3 = param_1[3];
      iVar1 = *(int *)(*(long *)(*param_1 + (long)*(int *)(lVar3 + lVar2 * 0x14 + 4) * 0x18) + 0x10)
      ;
    }
  }
  return 1;
}


