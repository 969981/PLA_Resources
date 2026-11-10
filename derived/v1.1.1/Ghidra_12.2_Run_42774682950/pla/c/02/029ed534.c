/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029ed534; name: FUN_029ed534
 */


void FUN_029ed534(long param_1)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  undefined1 uVar4;
  undefined **local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined7 uStack_48;
  undefined1 local_41;
  undefined7 uStack_40;
  undefined1 *local_38;
  undefined1 auStack_28 [8];
  
  cVar1 = **(char **)(*(long *)(param_1 + 0x10) + 200);
  local_60 = &PTR_LAB_04277240;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_41 = 0;
  uStack_40 = 0;
  FUN_029ed648(param_1,&local_60);
  FUN_029ed774(param_1,&local_60);
  local_38 = (undefined1 *)&local_60;
  FUN_029d07c4(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x80),auStack_28,&local_38);
  FUN_029797ec(*(undefined8 *)(param_1 + 0x38));
  if (**(char **)(*(long *)(param_1 + 0x40) + 0x28) != '\x01') {
    FUN_029d3abc(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x2e0),auStack_28,&local_38);
    uVar2 = FUN_029cddec(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
    if ((uVar2 & 1) == 0) {
      if (cVar1 == **(char **)(*(long *)(param_1 + 0x10) + 200)) {
        return;
      }
      if (*(int *)(*(long *)(*(long *)(param_1 + 0x10) + 0x28) + 0x1cc) == 0) {
        FUN_02a3c458(*(undefined8 *)(param_1 + 0x20));
      }
      else {
        FUN_02a3c5d0();
      }
      FUN_0299dd64(*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(*(long *)(param_1 + 0x10) + 0xa8)
                  );
      lVar3 = *(long *)(param_1 + 0x40);
      uVar4 = 2;
    }
    else {
      lVar3 = *(long *)(param_1 + 0x40);
      uVar4 = 4;
    }
    **(undefined1 **)(lVar3 + 0x28) = uVar4;
  }
  return;
}


