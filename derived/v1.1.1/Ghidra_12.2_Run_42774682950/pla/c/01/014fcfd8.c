/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014fcfd8; name: FUN_014fcfd8
 */


void FUN_014fcfd8(long param_1,int param_2,byte param_3)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 local_60;
  char *pcStack_58;
  undefined8 local_50;
  long *local_48;
  
  local_48 = (long *)0x0;
  local_60 = 0xf4f2119844d295f9;
  pcStack_58 = "poke_waza_list";
  local_50 = 0xe;
  uVar3 = FUN_00d2ee28(param_1 + 0x180,&local_60);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  bVar1 = param_3 ^ 1;
  iVar2 = FUN_0281efbc(uVar3,0);
  if (iVar2 != -1) {
    if (param_2 == 0) {
      FUN_014fcd28(param_1,0,iVar2,param_3 & 1);
    }
    else {
      plVar4 = (long *)FUN_014fd1fc(param_1,iVar2);
      if (plVar4 != (long *)0x0) {
        if (*(byte *)((long)plVar4 + 0xa2) != (bVar1 & 1)) {
          *(byte *)((long)plVar4 + 0xa2) = bVar1 & 1;
          (**(code **)(*plVar4 + 0x98))();
        }
      }
    }
  }
  iVar2 = FUN_0281efbc(uVar3,1);
  if (iVar2 != -1) {
    if (param_2 == 1) {
      FUN_014fcd28(param_1,1,iVar2,param_3 & 1);
    }
    else {
      plVar4 = (long *)FUN_014fd1fc(param_1,iVar2);
      if (plVar4 != (long *)0x0) {
        if (*(byte *)((long)plVar4 + 0xa2) != (bVar1 & 1)) {
          *(byte *)((long)plVar4 + 0xa2) = bVar1 & 1;
          (**(code **)(*plVar4 + 0x98))();
        }
      }
    }
  }
  iVar2 = FUN_0281efbc(uVar3,2);
  if (iVar2 != -1) {
    if (param_2 == 2) {
      FUN_014fcd28(param_1,2,iVar2,param_3 & 1);
    }
    else {
      plVar4 = (long *)FUN_014fd1fc(param_1,iVar2);
      if (plVar4 != (long *)0x0) {
        if (*(byte *)((long)plVar4 + 0xa2) != (bVar1 & 1)) {
          *(byte *)((long)plVar4 + 0xa2) = bVar1 & 1;
          (**(code **)(*plVar4 + 0x98))();
        }
      }
    }
  }
  iVar2 = FUN_0281efbc(uVar3,3);
  if (iVar2 != -1) {
    if (param_2 == 3) {
      FUN_014fcd28(param_1,3,iVar2,param_3 & 1);
    }
    else {
      plVar4 = (long *)FUN_014fd1fc(param_1,iVar2);
      if (plVar4 != (long *)0x0) {
        if (*(byte *)((long)plVar4 + 0xa2) != (bVar1 & 1)) {
          *(byte *)((long)plVar4 + 0xa2) = bVar1 & 1;
          (**(code **)(*plVar4 + 0x98))();
        }
      }
    }
  }
  return;
}


