/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00466d40; name: FUN_00466d40
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00466d40(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  int local_28;
  int local_24;
  
  uVar2 = _DAT_03889d60;
  *(undefined8 *)(param_1 + 0xb8) = _UNK_03889d68;
  *(undefined8 *)(param_1 + 0xb0) = uVar2;
  uVar2 = FUN_00407f40(*(undefined8 *)(param_1 + 0x88));
  iVar1 = FUN_00465cd0(uVar2,&local_28,&local_24);
  if (iVar1 == 0 || local_24 == 0) {
    return;
  }
  *(int *)(param_1 + 0xb4) = local_24;
  if (local_28 == 0) {
    lVar3 = FUN_0043e620(0);
    if (lVar3 == 0) {
      return;
    }
    if (*(code **)(lVar3 + 0xd8) == (code *)0x0) {
      return;
    }
    iVar1 = (**(code **)(lVar3 + 0xd8))
                      ((undefined8 *)(param_1 + 0xb0),(undefined8 *)(param_1 + 0x88),param_1 + 0x98)
    ;
    if (iVar1 == 0) {
      return;
    }
    uVar4 = *(uint *)(param_1 + 0xbc) | 1;
  }
  else {
    *(uint *)(param_1 + 0xbc) = *(uint *)(param_1 + 0xbc) | 1;
    *(int *)(param_1 + 0xb0) = local_28;
    FUN_00407d80();
    lVar3 = FUN_00446540();
    if (lVar3 == 0) {
      return;
    }
    iVar1 = FUN_0041ccc0();
    *(int *)(param_1 + 0xb8) = iVar1 << 2;
    if ((2 < local_28 - 0x2a0U) && (local_28 != 0x40)) {
      return;
    }
    uVar4 = *(uint *)(param_1 + 0xbc) | 2;
  }
  *(uint *)(param_1 + 0xbc) = uVar4;
  return;
}


