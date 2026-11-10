/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0276d52c; name: FUN_0276d52c
 */


bool FUN_0276d52c(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined2 uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_bc0;
  undefined8 uStack_bb8;
  undefined8 local_bb0;
  long lStack_ba8;
  undefined8 local_ba0;
  undefined8 local_b98;
  undefined8 uStack_b90;
  undefined8 local_b88;
  undefined8 local_b80;
  undefined8 uStack_b78;
  undefined8 local_b70;
  undefined8 local_b68;
  undefined8 uStack_b60;
  undefined8 local_b58;
  undefined8 local_b50;
  undefined8 uStack_b48;
  char local_b40 [8];
  undefined1 auStack_b38 [8];
  int local_b30;
  undefined4 local_b2c;
  char acStack_b28 [2808];
  
  FUN_02788894(local_b40,*(undefined8 *)*param_1,*(undefined4 *)param_1[1]);
  if (local_b40[0] == '\0') {
    return true;
  }
  if (1 < local_b30 - 2U) {
    if (local_b30 == 1) {
      lVar4 = param_1[1];
      if (*(int *)(lVar4 + 0x94) == 0) {
        iVar3 = strcmp((char *)(lVar4 + 100),acStack_b28);
        return iVar3 != 0;
      }
      uVar5 = *(undefined8 *)*param_1;
      uVar2 = *(undefined2 *)(lVar4 + 0x60);
      uVar1 = *(undefined4 *)(lVar4 + 0x5c);
    }
    else {
      lVar4 = FUN_02786a0c(auStack_b38);
      if (lVar4 != 0) {
        return true;
      }
      lVar4 = param_1[1];
      if (*(int *)(lVar4 + 0x94) == 0) {
        local_b58 = *(undefined8 *)(lVar4 + 100);
        local_b50 = *(undefined8 *)(lVar4 + 0x6c);
        uStack_b48 = *(undefined8 *)(lVar4 + 0x74);
        local_b70 = *(undefined8 *)(lVar4 + 0x7c);
        local_b68 = *(undefined8 *)(lVar4 + 0x84);
        uStack_b60 = *(undefined8 *)(lVar4 + 0x8c);
        FUN_02789038(*(undefined8 *)*param_1,local_b2c,&local_b58,&local_b70);
        return false;
      }
      local_b88 = *(undefined8 *)(lVar4 + 100);
      local_b80 = *(undefined8 *)(lVar4 + 0x6c);
      uStack_b78 = *(undefined8 *)(lVar4 + 0x74);
      local_ba0 = *(undefined8 *)(lVar4 + 0x7c);
      local_b98 = *(undefined8 *)(lVar4 + 0x84);
      uStack_b90 = *(undefined8 *)(lVar4 + 0x8c);
      FUN_02789038(*(undefined8 *)*param_1,local_b2c,&local_b88,&local_ba0);
      lVar4 = param_1[1];
      uVar5 = *(undefined8 *)*param_1;
      uVar2 = *(undefined2 *)(lVar4 + 0x60);
      uVar1 = *(undefined4 *)(lVar4 + 0x5c);
    }
    local_bb0 = 0;
    uStack_bb8 = 0;
    local_bc0 = 0;
    lStack_ba8 = (ulong)CONCAT42(uVar1,uVar2) << 0x10;
    FUN_02c30490(&local_bc0,lVar4 + 0x40);
    FUN_0278942c(uVar5,local_b2c,&local_bc0);
  }
  return true;
}


