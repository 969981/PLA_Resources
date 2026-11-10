/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004c3240; name: FUN_004c3240
 */


void FUN_004c3240(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (*(long *)(param_1 + 0x10) == param_2) {
    if (*(long *)(param_1 + 0x20) == 0) {
      lVar1 = *(long *)(param_1 + 0x18);
    }
    else {
      lVar1 = FUN_00404cc0();
    }
    if (lVar1 == param_3) {
      return;
    }
  }
  if ((param_2 != 0) && (param_2 == param_3)) {
    FUN_00403ff0(param_2);
  }
  lVar1 = *(long *)(param_1 + 0x20);
  if (*(long *)(param_1 + 0x10) == param_2) {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  else {
    if (lVar1 == 0) {
      lVar1 = *(long *)(param_1 + 0x18);
    }
    else {
      lVar1 = FUN_00404cc0(lVar1);
    }
    if (lVar1 == param_3) {
      lVar1 = *(long *)(param_1 + 0x10);
      if (*(long *)(param_1 + 0x20) == 0) {
        lVar2 = *(long *)(param_1 + 0x18);
      }
      else {
        lVar2 = FUN_00404cc0();
      }
      if (lVar1 != lVar2) {
        FUN_00404cd0(*(undefined8 *)(param_1 + 0x10));
        *(long *)(param_1 + 0x10) = param_2;
        return;
      }
    }
    FUN_00404cd0(*(undefined8 *)(param_1 + 0x10));
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    lVar1 = *(long *)(param_1 + 0x20);
    *(long *)(param_1 + 0x10) = param_2;
  }
  if (lVar1 != 0) {
    uVar3 = FUN_00404c40(uVar3);
    *(undefined8 *)(param_1 + 0x18) = uVar3;
  }
  FUN_00404cd0();
  *(long *)(param_1 + 0x18) = param_3;
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar3 = FUN_00404be0(*(long *)(param_1 + 0x20),param_3);
    *(undefined8 *)(param_1 + 0x18) = uVar3;
  }
  return;
}


