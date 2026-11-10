/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0027d350; name: FUN_0027d350
 */


undefined8 FUN_0027d350(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long local_48;
  
  local_48 = *(long *)(*(long *)(param_3 + 0x238) + 0x48);
  if (local_48 != -1) {
    iVar1 = *(int *)(param_4 + 0xf4);
    lVar3 = *(long *)(*(long *)(param_3 + 0x238) + 0x60);
    if (*(int *)(param_4 + 0xf8) != -1) {
      FUN_008782ac(param_2,*(int *)(param_4 + 0xf8),0,&local_48,lVar3 + 0x28);
    }
    if (iVar1 != -1) {
      FUN_008782ac(param_2,iVar1,4,&local_48,lVar3 + 0x28);
    }
  }
  local_48 = *(long *)(*(long *)(param_3 + 0x238) + 0x50);
  if (local_48 != -1) {
    iVar1 = *(int *)(param_4 + 0xfc);
    lVar3 = *(long *)(*(long *)(param_3 + 0x238) + 0x68);
    if (*(int *)(param_4 + 0x100) != -1) {
      FUN_008782ac(param_2,*(int *)(param_4 + 0x100),0,&local_48,lVar3 + 0x28);
    }
    if (iVar1 != -1) {
      FUN_008782ac(param_2,iVar1,4,&local_48,lVar3 + 0x28);
    }
  }
  local_48 = *(long *)(*(long *)(param_3 + 0x238) + 0x58);
  if (local_48 != -1) {
    iVar1 = *(int *)(param_4 + 0x104);
    lVar3 = *(long *)(*(long *)(param_3 + 0x238) + 0x70);
    if (*(int *)(param_4 + 0x108) != -1) {
      FUN_008782ac(param_2,*(int *)(param_4 + 0x108),0,&local_48,lVar3 + 0x28);
    }
    if (iVar1 != -1) {
      FUN_008782ac(param_2,iVar1,4,&local_48,lVar3 + 0x28);
    }
  }
  plVar2 = (long *)(param_5 + 0x18);
  if (*plVar2 != -1) {
    iVar1 = *(int *)(param_4 + 0x10c);
    if (*(int *)(param_4 + 0x110) != -1) {
      FUN_008782ac(param_2,*(int *)(param_4 + 0x110),0,plVar2,*(long *)(param_1 + 0x10) + 0x28);
    }
    if (iVar1 != -1) {
      FUN_008782ac(param_2,iVar1,4,plVar2,*(long *)(param_1 + 0x10) + 0x28);
    }
  }
  plVar2 = (long *)(param_5 + 0x20);
  if (*plVar2 != -1) {
    iVar1 = *(int *)(param_4 + 0x114);
    if (*(int *)(param_4 + 0x118) != -1) {
      FUN_008782ac(param_2,*(int *)(param_4 + 0x118),0,plVar2,*(long *)(param_1 + 0x10) + 0x28);
    }
    if (iVar1 != -1) {
      FUN_008782ac(param_2,iVar1,4,plVar2,*(long *)(param_1 + 0x10) + 0x28);
    }
  }
  return 1;
}


