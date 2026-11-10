/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0014d4e0; name: FUN_0014d4e0
 */


void FUN_0014d4e0(long param_1,ulong *param_2)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = param_2[1];
  uVar1 = (int)param_2 + 0x10;
  if (((((uVar1 & 0xf) == 0) || (uVar3 == 0xb)) && (*(ulong **)(param_1 + 0x18) <= param_2)) &&
     ((uVar3 & 3) == 1)) {
    uVar4 = uVar3 & 0xfffffffffffffff8;
    puVar2 = (ulong *)((long)param_2 + uVar4);
    if ((puVar2[1] & 1) == 0) {
      if ((*(ulong **)(param_1 + 0x20) == param_2) || (*(ulong **)(param_1 + 0x28) == param_2)) {
        return;
      }
      if (uVar4 < 0x20) {
        if (uVar4 == 8) {
          return;
        }
      }
      else if ((((((uint)uVar3 >> 3 & 1) == 0) && ((uVar1 & 0xf) == 0)) &&
               ((*puVar2 == uVar4 && ((uVar3 & 1) != 0)))) &&
              (((((puVar2[1] & 3) != 1 || (*(ulong **)(param_1 + 0x28) == puVar2)) &&
                (*(ulong **)(param_2[2] + 0x18) == param_2)) &&
               (*(ulong **)(param_2[3] + 0x10) == param_2)))) {
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


