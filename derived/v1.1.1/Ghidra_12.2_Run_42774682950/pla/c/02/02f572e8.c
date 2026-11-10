/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f572e8; name: FUN_02f572e8
 */


void FUN_02f572e8(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_40;
  undefined1 local_38;
  undefined1 local_30;
  undefined8 local_28;
  
  lVar3 = *(long *)(param_1 + 0x10);
  puVar4 = *(undefined4 **)(lVar3 + 0x110);
  if (puVar4 == (undefined4 *)0x0) {
    return;
  }
  if (*(long *)(param_1 + 8) == 0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  else {
    lVar3 = *(long *)(*(long *)(*(long *)(param_1 + 8) + 0x10) + 0x60);
    local_50 = *(undefined8 *)(lVar3 + 0x30);
    local_48 = *(undefined4 *)(lVar3 + 0x2c);
    local_38 = 0xff;
    local_30 = 0xff;
    local_28 = 0;
    local_40 = 0;
    iVar1 = FUN_02f088a8(param_1,&local_50,*puVar4,puVar4[2]);
    *(int *)(param_1 + 0x28) = iVar1;
    if (iVar1 != 0) goto LAB_02f5735c;
    lVar3 = *(long *)(param_1 + 0x10);
  }
  uVar2 = FUN_02f4a9d4(lVar3);
  *(undefined4 *)(param_1 + 0x28) = uVar2;
LAB_02f5735c:
  FUN_02f5714c(param_1);
  return;
}


