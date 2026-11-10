/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008b319c; name: FUN_008b319c
 */


void FUN_008b319c(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined1 local_14c [4];
  undefined1 auStack_148 [8];
  undefined8 local_140 [30];
  uint local_50;
  undefined8 local_48;
  
  local_48 = 0x501000101;
  uVar1 = FUN_00923c00(**(undefined8 **)(param_1 + 0x70));
  FUN_009346d8(auStack_148,uVar1,&local_48);
  if (local_50 != 0) {
    puVar3 = local_140;
    lVar4 = (ulong)local_50 << 3;
    do {
      uVar1 = *puVar3;
      uVar2 = FUN_008b3950(param_1,uVar1);
      if ((uVar2 & 1) != 0) {
        local_14c[0] = FUN_00931f0c(uVar1);
        FUN_008b39b8(param_1 + 0x88,local_14c);
      }
      puVar3 = puVar3 + 1;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
  FUN_0093245c(auStack_148);
  return;
}


