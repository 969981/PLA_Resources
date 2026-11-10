/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01312ed4; name: FUN_01312ed4
 */


void FUN_01312ed4(undefined1 param_1 [16],undefined4 param_2,long param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  
  if (param_4 == 0) {
    return;
  }
  uVar3 = *(undefined8 *)(*(long *)(param_3 + 0x5c0) + 0x78);
  uVar1 = *(undefined4 *)(*(long *)(param_3 + 0x5c0) + 0x84);
  local_38 = FUN_01312f90();
  uStack_34 = param_2;
  if (param_4 == 1) {
    FUN_0131a904(uVar3,uVar1,&local_38);
  }
  else {
    local_3c = 0;
    iVar2 = FUN_0131b0f4(uVar3,uVar1,&local_3c);
    if (iVar2 != 0) {
      FUN_0131a914(uVar3,uVar1,local_3c,&local_38,param_4);
    }
  }
  FUN_0131300c(param_3);
  FUN_01313234(param_3);
  FUN_0130fa44(param_3);
  *(undefined1 *)(*(long *)(param_3 + 0x5c0) + 0xd0) = 1;
  return;
}


