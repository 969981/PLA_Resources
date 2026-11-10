/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0041f8b0; name: FUN_0041f8b0
 */


int FUN_0041f8b0(undefined8 param_1,long *param_2,long param_3,int param_4,undefined4 param_5)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int local_44;
  
  local_44 = (int)*(undefined8 *)(param_3 + 8);
  iVar4 = FUN_0041fa10(param_1,0,&local_44,param_3);
  uVar1 = local_44 + 3;
  bVar3 = (1 << (ulong)(uVar1 & 0x1f) & 0x180001U) == 0;
  iVar5 = 0;
  if (iVar4 != -1) {
    if (iVar4 == -2) {
      iVar4 = 0;
      iVar5 = 2;
    }
    iVar2 = local_44;
    if (param_4 != -1) {
      iVar2 = param_4;
    }
    if (param_2 != (long *)0x0) {
      if (uVar1 >= 0x15 || bVar3) {
        FUN_00409f20(param_2,iVar5,iVar4,iVar2,param_5);
      }
      FUN_0041fa10(param_1,*param_2,&local_44,param_3);
      if (iVar5 == 0) {
        *param_2 = *param_2 + (long)iVar4;
      }
      else {
        FUN_0040a0c0(param_2);
      }
    }
    if (uVar1 < 0x15 && !bVar3) {
      iVar5 = iVar4;
    }
    else {
      iVar5 = FUN_0040a0e0(iVar5,iVar4,iVar2);
    }
  }
  return iVar5;
}


