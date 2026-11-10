/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f3e474; name: FUN_02f3e474
 */


int FUN_02f3e474(long param_1,long param_2,undefined4 param_3,long *param_4)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  int *piVar5;
  undefined4 local_54;
  int *local_50;
  ulong local_48;
  long local_38;
  
  local_48 = 0;
  *param_4 = 0;
  local_50 = (int *)0x0;
  lVar3 = *(long *)(*(long *)(param_2 + 0x108) + 0x18);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar3 + 0x78);
  }
  FUN_02f42d68(uVar2,param_3,&local_50);
  if ((int)local_48 == 0) {
    iVar4 = 3;
  }
  else {
    if (*local_50 == 0) {
      iVar4 = 2;
      goto LAB_02f3e504;
    }
    iVar4 = 1;
    piVar5 = local_50;
    do {
      local_54 = 0;
      iVar1 = FUN_02f4f0f4(param_2,*(long *)(param_1 + 8) -
                                   *(long *)(*(long *)(param_1 + 0x10) + 0x68),*piVar5,&local_54,0,0
                           ,&local_38);
      if ((iVar1 == 1) && ((iVar4 == 1 || (local_38 < *param_4)))) {
        iVar4 = 0;
        *param_4 = local_38;
      }
      piVar5 = piVar5 + 1;
    } while (piVar5 != local_50 + (local_48 & 0xffffffff));
  }
  if (local_50 == (int *)0x0) {
    return iVar4;
  }
LAB_02f3e504:
  local_48 = local_48 & 0xffffffff00000000;
  (*DAT_0442d150)(0);
  return iVar4;
}


