/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0040e1b0; name: FUN_0040e1b0
 */


void FUN_0040e1b0(long param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x34) != 0) {
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + -1;
      return;
    }
    uVar3 = *(int *)(param_1 + 0x28) - 1;
    *(uint *)(param_1 + 0x28) = uVar3;
    uVar2 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar3 * 4);
    uVar3 = *(uint *)(param_1 + 0x30);
    iVar4 = uVar3 - uVar2;
    if (uVar2 <= uVar3 && iVar4 != 0) {
      iVar1 = *(int *)(param_1 + 0x18);
      *(int *)(param_1 + 0x18) = iVar1 - iVar4;
      if (iVar4 != 0) {
        uVar5 = iVar1 - 1U & 0xf;
        iVar4 = uVar2 - uVar3;
        while( true ) {
          if (uVar5 == 0) {
            *(undefined8 *)(param_1 + 8) = *(undefined8 *)(*(long *)(param_1 + 8) + 0x180);
            uVar5 = 0xf;
          }
          else {
            uVar5 = uVar5 - 1;
          }
          if (iVar4 == -1) break;
          iVar4 = iVar4 + 1;
        }
      }
    }
    *(uint *)(param_1 + 0x30) = uVar2;
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  return;
}


