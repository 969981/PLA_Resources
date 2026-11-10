/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e93cbc; name: FUN_02e93cbc
 */


int FUN_02e93cbc(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  ushort local_70 [2];
  undefined1 local_6c [4];
  char local_68 [4];
  int local_64;
  
  iVar1 = 2;
  if ((param_2 != 0) && (DAT_0440a138 != 0)) {
    lVar5 = 0;
    uVar4 = 0;
    param_1 = param_1 + 8;
    do {
      local_64 = 0;
      iVar1 = FUN_02e9b7a4(param_1,local_68,1,&local_64);
      if (iVar1 != 1) {
        return iVar1;
      }
      if (local_64 != 1) {
        return 0x38;
      }
      *(bool *)(DAT_0440a168 + lVar5) = local_68[0] != '\0';
      local_64 = 0;
      iVar1 = FUN_02e9b7a4(param_1,local_6c,1,&local_64);
      if (iVar1 != 1) {
        return iVar1;
      }
      if (local_64 != 1) {
        return 0x38;
      }
      local_64 = 0;
      iVar1 = FUN_02e9b7a4(param_1,local_70,2,&local_64);
      if (iVar1 != 1) {
        return iVar1;
      }
      if (local_64 != 2) {
        return 0x38;
      }
      lVar2 = (*DAT_0442d138)(0,(ulong)local_70[0] * 0xc);
      if (lVar2 == 0) {
        return 0x34;
      }
      uVar3 = (uint)local_70[0];
      local_64 = 0;
      iVar1 = FUN_02e9b7a4(param_1,lVar2,uVar3 * 0xc,&local_64);
      if (iVar1 != 1) goto LAB_02e940ac;
      if (local_64 != uVar3 * 0xc) {
LAB_02e940a8:
        iVar1 = 0x38;
LAB_02e940ac:
        (*DAT_0442d150)(0,lVar2);
        return iVar1;
      }
      FUN_02eacf68(DAT_0440a168,uVar4 & 0xffffffff,0,local_70[0],lVar2,local_6c[0]);
      (*DAT_0442d150)(0,lVar2);
      local_64 = 0;
      iVar1 = FUN_02e9b7a4(param_1,local_68,1,&local_64);
      if (iVar1 != 1) {
        return iVar1;
      }
      if (local_64 != 1) {
        return 0x38;
      }
      *(bool *)(DAT_0440a168 + lVar5 + 1) = local_68[0] != '\0';
      local_64 = 0;
      iVar1 = FUN_02e9b7a4(param_1,local_6c,1,&local_64);
      if (iVar1 != 1) {
        return iVar1;
      }
      if (local_64 != 1) {
        return 0x38;
      }
      local_64 = 0;
      iVar1 = FUN_02e9b7a4(param_1,local_70,2,&local_64);
      if (iVar1 != 1) {
        return iVar1;
      }
      if (local_64 != 2) {
        return 0x38;
      }
      lVar2 = (*DAT_0442d138)(0,(ulong)local_70[0] * 0xc);
      if (lVar2 == 0) {
        return 0x34;
      }
      uVar3 = (uint)local_70[0];
      local_64 = 0;
      iVar1 = FUN_02e9b7a4(param_1,lVar2,uVar3 * 0xc,&local_64);
      if (iVar1 != 1) goto LAB_02e940ac;
      if (local_64 != uVar3 * 0xc) goto LAB_02e940a8;
      FUN_02eacf68(DAT_0440a168,uVar4 & 0xffffffff,1,local_70[0],lVar2,local_6c[0]);
      (*DAT_0442d150)(0,lVar2);
      local_64 = 0;
      iVar1 = FUN_02e9b7a4(param_1,local_68,1,&local_64);
      if (iVar1 != 1) {
        return iVar1;
      }
      if (local_64 != 1) {
        return 0x38;
      }
      *(bool *)(DAT_0440a168 + lVar5 + 2) = local_68[0] != '\0';
      local_64 = 0;
      iVar1 = FUN_02e9b7a4(param_1,local_6c,1,&local_64);
      if (iVar1 != 1) {
        return iVar1;
      }
      if (local_64 != 1) {
        return 0x38;
      }
      local_64 = 0;
      iVar1 = FUN_02e9b7a4(param_1,local_70,2,&local_64);
      if (iVar1 != 1) {
        return iVar1;
      }
      if (local_64 != 2) {
        return 0x38;
      }
      lVar2 = (*DAT_0442d138)(0,(ulong)local_70[0] * 0xc);
      if (lVar2 == 0) {
        return 0x34;
      }
      uVar3 = (uint)local_70[0];
      local_64 = 0;
      iVar1 = FUN_02e9b7a4(param_1,lVar2,uVar3 * 0xc,&local_64);
      if (iVar1 != 1) goto LAB_02e940ac;
      if (local_64 != uVar3 * 0xc) goto LAB_02e940a8;
      FUN_02eacf68(DAT_0440a168,uVar4 & 0xffffffff,2,local_70[0],lVar2,local_6c[0]);
      (*DAT_0442d150)(0,lVar2);
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 3;
    } while (uVar4 != 2);
    iVar1 = 1;
  }
  return iVar1;
}


