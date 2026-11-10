/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032d69d4; name: FUN_032d69d4
 */


void FUN_032d69d4(undefined8 *param_1,long param_2,long *param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long local_50;
  long lStack_48;
  long local_40;
  long local_38;
  
  lVar2 = FUN_032e239c(*(undefined8 *)(param_2 + 8));
  uVar3 = FUN_032e239c(*(undefined8 *)(param_2 + 8));
  iVar1 = FUN_032c4be0(uVar3,0x3a);
  local_38 = lVar2 + (iVar1 + 1);
  local_50 = *param_3;
  lStack_48 = param_3[1];
  local_40 = lVar2;
  if ((iVar1 != -1) && (uVar4 = FUN_032c422c(&local_50,&local_40), (uVar4 & 1) != 0)) {
    local_50 = local_50 + ((int)local_38 - (int)local_40);
  }
  if (0 < *(int *)(param_2 + 0x10)) {
    uVar4 = 0;
    do {
      uVar5 = FUN_032c4c80(local_50,lStack_48 - local_50,
                           *(undefined8 *)(*(long *)(param_2 + 0x18) + uVar4 * 8));
      if ((uVar5 & 1) != 0) {
        FUN_032d6ab8(param_1,param_2,uVar4 & 0xffffffff);
        return;
      }
      uVar4 = uVar4 + 1;
    } while ((long)uVar4 < (long)*(int *)(param_2 + 0x10));
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  return;
}


