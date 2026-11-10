/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011dfdd8; name: FUN_011dfdd8
 */


void FUN_011dfdd8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  uVar3 = *(undefined8 *)(param_1 + 0x4c8);
  local_40 = &DAT_e2c06acab97c29c2;
  pcStack_38 = "CommonOptionBar";
  local_30 = 0xf;
  local_28 = (long *)0x0;
  lVar1 = FUN_0118c80c(uVar3,&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  lVar2 = FUN_011dfe74(uVar3,"View_Top");
  if ((*(long *)(lVar2 + 0x440) != 0) && (*(long *)(lVar1 + 0x440) != 0)) {
    FUN_02831644();
  }
  FUN_011e86d0(lVar2);
  return;
}


