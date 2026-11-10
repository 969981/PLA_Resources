/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014fbc10; name: FUN_014fbc10
 */


void FUN_014fbc10(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  
  local_50 = 0x3e15d4fcf512bfb7;
  pcStack_48 = "waza_custom_list";
  local_40 = 0x10;
  local_38 = (long *)0x0;
  uVar2 = FUN_00d2ee28(param_1 + 0x180,&local_50);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  if (*(int *)(*(long *)(param_1 + 0x630) + 0xb0) != 0) {
    lVar4 = 0;
    uVar3 = 0;
    do {
      iVar1 = FUN_0281efbc(uVar2,uVar3 & 0xffffffff);
      if (iVar1 != -1) {
        FUN_014fc014(param_1,*(undefined4 *)(*(long *)(*(long *)(param_1 + 0x630) + 0xa8) + lVar4),
                     iVar1,uVar3 == *(uint *)(param_1 + 0x654));
      }
      uVar3 = uVar3 + 1;
      lVar4 = lVar4 + 8;
    } while (uVar3 < *(uint *)(*(long *)(param_1 + 0x630) + 0xb0));
  }
  return;
}


