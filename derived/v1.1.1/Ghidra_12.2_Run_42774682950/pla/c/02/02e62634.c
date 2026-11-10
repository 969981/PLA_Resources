/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e62634; name: FUN_02e62634
 */


void FUN_02e62634(long param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x20);
  plVar1 = (long *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar4;
  uVar2 = *(uint *)(param_2 + 0x40);
  if (uVar2 != 0xffffffff) {
    lVar3 = FUN_02f59e40(0xb,(ulong)(uVar2 + 1) << 5,0x10);
    *plVar1 = lVar3;
    if (lVar3 == 0) {
      return;
    }
    *(uint *)(param_1 + 0x44) = uVar2 + 1;
  }
  FUN_02e62368(plVar1,(ulong)uVar2);
  memcpy((void *)*plVar1,*(void **)(param_2 + 0x38),(ulong)uVar2 << 5);
  return;
}


