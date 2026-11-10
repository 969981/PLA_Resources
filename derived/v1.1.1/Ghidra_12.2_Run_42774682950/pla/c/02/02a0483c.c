/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a0483c; name: FUN_02a0483c
 */


void FUN_02a0483c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined2 local_28;
  char local_18 [8];
  
  iVar1 = *(int *)*param_3;
  if (iVar1 == 0xa4) {
    local_38 = param_3[1];
    FUN_029ec038(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1480),local_18,&local_38);
    if (local_18[0] == '\0') {
      return;
    }
  }
  else {
    if (iVar1 == 0x11d) {
      local_38 = param_3[1];
      uStack_30 = param_3[2];
      local_28 = 1;
      FUN_029f6fc4(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x820),local_18,&local_38);
      return;
    }
    uVar2 = FUN_0298a554(*(undefined8 *)(param_1 + 0x38),(int *)*param_3,param_3[1],param_3[2],
                         &local_38);
    if ((uVar2 & 1) == 0) {
      if ((char)local_38 == '\0') {
        return;
      }
      lVar3 = *(long *)(*(long *)(param_1 + 0x40) + 8);
      if (*(char *)(lVar3 + (ulong)*(byte *)(lVar3 + 0x1c8) * 0x40 + 0x43) == '\0') {
        FUN_02a3fa08(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x9c,0x237,0xffff0000);
        return;
      }
      return;
    }
  }
  lVar3 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  *(undefined1 *)(lVar3 + (ulong)*(byte *)(lVar3 + 0x1c8) * 0x40 + 0x21) = 1;
  return;
}


