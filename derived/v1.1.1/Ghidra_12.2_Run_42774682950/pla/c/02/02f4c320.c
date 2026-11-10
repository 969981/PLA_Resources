/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f4c320; name: FUN_02f4c320
 */


bool FUN_02f4c320(long param_1,long *param_2)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  undefined **local_68;
  int local_60;
  long local_58;
  undefined4 local_50;
  undefined **local_48;
  undefined4 local_40;
  long local_38;
  int local_30;
  char local_28 [4];
  undefined1 auStack_24 [4];
  
  local_38 = *param_2;
  local_40 = (undefined4)param_2[1];
  local_48 = &PTR_FUN_042af078;
  local_30 = 0;
  uVar3 = (*(code *)PTR_FUN_042af078)(&local_48,auStack_24,4,&local_68);
  if (((((uVar3 & 1) == 0) ||
       (uVar3 = (*(code *)*local_48)(&local_48,param_1 + 0x20,4,&local_68), (uVar3 & 1) == 0)) ||
      (uVar3 = (*(code *)*local_48)(&local_48,param_1 + 0x24,4,&local_68), (uVar3 & 1) == 0)) ||
     ((uVar3 = (*(code *)*local_48)(&local_48,local_28,1,&local_68), (uVar3 & 1) == 0 ||
      (uVar3 = (*(code *)*local_48)(&local_48,param_1 + 0x2a,2,&local_68), (uVar3 & 1) == 0)))) {
    bVar1 = false;
  }
  else {
    *(bool *)(param_1 + 0x28) = local_28[0] != '\0';
    local_68 = &PTR_LAB_042a8f98;
    local_60 = (int)param_2[1] - local_30;
    local_58 = *param_2 + (long)local_30;
    local_50 = 0;
    iVar2 = FUN_02f4e858(param_1,&local_68);
    bVar1 = iVar2 == 1;
  }
  return bVar1;
}


