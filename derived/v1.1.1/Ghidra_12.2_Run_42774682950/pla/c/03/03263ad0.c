/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03263ad0; name: FUN_03263ad0
 */


void FUN_03263ad0(long param_1)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  
  if (0 < *(int *)(param_1 + 0x118)) {
    uVar5 = 0;
    uVar4 = 0;
    do {
      uVar1 = FUN_03263950(param_1,uVar4);
      if ((uVar1 & 1) == 0) {
        lVar3 = (long)*(int *)(param_1 + 0x118) + -1;
        uVar2 = (uint)lVar3;
        *(uint *)(param_1 + 0x118) = uVar2;
        if (uVar2 != uVar5) {
          *(undefined8 *)(*(long *)(param_1 + 0x110) + (uVar4 & 0xffff) * 8) =
               *(undefined8 *)(*(long *)(param_1 + 0x110) + lVar3 * 8);
        }
      }
      else {
        uVar4 = (ulong)((int)uVar4 + 1);
      }
      uVar5 = (uint)uVar4 & 0xffff;
    } while ((int)uVar5 < *(int *)(param_1 + 0x118));
  }
  return;
}


