/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002090c4; name: FUN_002090c4
 */


undefined8 FUN_002090c4(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 local_38;
  long local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  
  local_30 = 0;
  local_38 = param_1;
  local_28 = param_2;
  uStack_24 = param_3;
  FUN_002110ac(param_1,&LAB_0020c024,&local_38);
  lVar2 = local_30;
  do {
    if (lVar2 == 0) {
      return 0;
    }
    lVar3 = *(long *)(lVar2 + 0x98);
    *(undefined8 *)(lVar2 + 0x98) = 0;
    uVar1 = FUN_00206c04(param_1,*(undefined4 *)(lVar2 + 0xb8),7);
    lVar2 = lVar3;
  } while (-0x385 < (int)uVar1);
  while (lVar3 != 0) {
    lVar2 = *(long *)(lVar3 + 0x98);
    *(undefined8 *)(lVar3 + 0x98) = 0;
    lVar3 = lVar2;
  }
  return uVar1;
}


