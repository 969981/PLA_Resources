/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e454ec; name: FUN_02e454ec
 */


undefined8 FUN_02e454ec(long param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_70 [32];
  long *local_50;
  uint local_48;
  long *local_40;
  long *plStack_38;
  
  uVar2 = *(uint *)(param_1 + 0x38);
  if (uVar2 == 0) {
    uVar5 = 0xf;
    goto LAB_02e455ac;
  }
  uVar3 = 0;
  if (uVar2 != 0) {
    uVar3 = (uint)param_2 / uVar2;
  }
  plVar1 = (long *)(param_1 + 0x30);
  local_48 = (uint)param_2 - uVar3 * uVar2;
  local_40 = *(long **)(*plVar1 + (ulong)local_48 * 8);
  plStack_38 = (long *)0x0;
  if (local_40 == (long *)0x0) {
LAB_02e45558:
    if (local_40 == (long *)0x0) {
      uVar5 = 0xf;
      goto LAB_02e455ac;
    }
  }
  else if (*local_40 != param_2) {
    do {
      plStack_38 = local_40;
      local_40 = (long *)plStack_38[8];
      if (local_40 == (long *)0x0) {
        uVar5 = 0xf;
        goto LAB_02e455ac;
      }
    } while (*local_40 != param_2);
    goto LAB_02e45558;
  }
  plVar4 = local_40;
  lVar6 = local_40[7];
  local_50 = plVar1;
  FUN_02e48b54(local_40,param_1 + 0x60);
  FUN_02e455f0(auStack_70,plVar1,&local_50);
  FUN_02e481dc(plVar4);
  FUN_02e46eb0(param_1 + 0x58,plVar4);
  if (*(int *)(lVar6 + 0x48) == 0) {
    FUN_02e45218(param_1,lVar6);
  }
  uVar5 = 1;
LAB_02e455ac:
  *(undefined1 *)(param_1 + 0x7c) = 1;
  return uVar5;
}


