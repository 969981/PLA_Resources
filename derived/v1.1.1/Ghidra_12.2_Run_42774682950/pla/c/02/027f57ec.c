/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027f57ec; name: FUN_027f57ec
 */


void FUN_027f57ec(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  local_40 = &DAT_753f74378b49da9c;
  pcStack_38 = "View_Top";
  local_30 = 8;
  local_28 = (long *)0x0;
  lVar1 = FUN_027f4740(*(undefined8 *)(param_1 + 0x4c8),&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  uVar2 = *(undefined8 *)(lVar1 + 0x68);
  if ((param_2 & 1) == 0) {
    lVar3 = FUN_00d4290c(uVar2);
    if (lVar3 == 0 || lVar3 != lVar1) {
      return;
    }
    uVar2 = *(undefined8 *)(lVar1 + 0x68);
    lVar1 = 0;
  }
  FUN_00d469b4(uVar2,lVar1,0);
  return;
}


