/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0020c094; name: FUN_0020c094
 */


undefined8
FUN_0020c094(long param_1,int *param_2,int *param_3,char param_4,undefined4 param_5,long param_6,
            undefined4 param_7)

{
  int iVar1;
  undefined8 uVar2;
  
  if (0x7fffffffU - param_6 < (ulong)(long)*param_2) {
    uVar2 = FUN_00205c6c(param_1,*(undefined4 *)(param_1 + 0x93c),3,0);
    return uVar2;
  }
  iVar1 = *param_2 + (int)param_6;
  *param_2 = iVar1;
  if (param_4 == '\0') {
    if (*param_3 <= iVar1) {
      iVar1 = *param_3;
    }
    uVar2 = FUN_002058c4(param_7,iVar1);
    if (((int)uVar2 != 0) && (uVar2 = FUN_0020b5e8(param_1,0,param_5,iVar1), (int)uVar2 == 0)) {
      *param_3 = *param_3 - iVar1;
      *param_2 = *param_2 - iVar1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


