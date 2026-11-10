/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029d8ef4; name: FUN_029d8ef4
 */


void FUN_029d8ef4(long param_1,undefined8 param_2,long *param_3)

{
  bool bVar1;
  byte bVar2;
  short sVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long local_40;
  undefined2 local_38;
  undefined1 auStack_28 [8];
  
  plVar5 = &local_40;
  FUN_0298bc58(*(undefined8 *)(param_1 + 0x38),*param_3);
  local_40 = *param_3;
  local_38 = 0x101;
  FUN_029e0ab8(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x9a0),auStack_28,&local_40);
  lVar6 = *param_3;
  sVar3 = FUN_029506a8(lVar6,0x11);
  if (sVar3 == 0x7f) {
LAB_029d8f9c:
    bVar1 = true;
  }
  else {
    bVar2 = FUN_029679e0(*(undefined8 *)(param_1 + 0x38),*(undefined1 *)(lVar6 + 0x7d),&local_40);
    if (bVar2 != 0) {
      uVar4 = (ulong)bVar2;
      do {
        if (*(int *)plVar5 == 0x7f) goto LAB_029d8f9c;
        uVar4 = uVar4 - 1;
        plVar5 = (long *)((long)plVar5 + 4);
      } while (uVar4 != 0);
    }
    bVar1 = false;
  }
  FUN_029d9004(param_1,*param_3);
  FUN_029d90e8(param_1,*param_3);
  FUN_029d9404(param_1,*param_3);
  lVar6 = *param_3;
  uVar4 = FUN_029cddec(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  if (((uVar4 & 1) == 0) && (bVar1)) {
    local_40 = lVar6;
    FUN_029ea38c(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1360),auStack_28,&local_40);
  }
  return;
}


