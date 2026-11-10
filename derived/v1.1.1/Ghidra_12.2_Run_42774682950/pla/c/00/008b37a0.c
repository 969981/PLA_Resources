/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008b37a0; name: FUN_008b37a0
 */


void FUN_008b37a0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 auStack_130 [8];
  undefined8 local_128;
  undefined8 local_120;
  undefined8 auStack_118 [28];
  uint local_38;
  undefined8 local_28;
  
  local_28 = 0x502000101;
  uVar1 = FUN_00923c00(**(undefined8 **)(param_1 + 0x70));
  FUN_009346d8(auStack_130,uVar1,&local_28);
  if (((local_38 != 0) && (FUN_00927644(local_128), local_38 != 1)) &&
     (FUN_00927644(local_120), local_38 != 2)) {
    lVar2 = (ulong)local_38 * 8 + -0x10;
    puVar3 = auStack_118;
    do {
      FUN_00927644(*puVar3);
      lVar2 = lVar2 + -8;
      puVar3 = puVar3 + 1;
    } while (lVar2 != 0);
  }
  FUN_0093245c(auStack_130);
  return;
}


