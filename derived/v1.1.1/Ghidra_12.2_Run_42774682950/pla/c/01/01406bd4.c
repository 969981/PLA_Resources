/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01406bd4; name: FUN_01406bd4
 */


void FUN_01406bd4(long param_1,uint param_2,undefined1 *param_3,undefined1 *param_4)

{
  ulong uVar1;
  undefined2 *puVar2;
  undefined4 local_30;
  undefined2 local_2c;
  ulong local_28;
  
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  if (param_2 < *(uint *)(param_1 + 0x528)) {
    if (0x6d < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_013dd720();
    }
    puVar2 = (undefined2 *)(param_1 + (ulong)param_2 * 0xc);
    local_2c = *puVar2;
    local_30 = *(undefined4 *)(param_1 + 0x52c);
    local_28 = *(ulong *)(puVar2 + 2) & 0x1010101ffffffff;
  }
  *param_3 = 0;
  *param_4 = 0;
  uVar1 = FUN_013db750(&local_30);
  if ((uVar1 & 1) == 0) {
    uVar1 = FUN_013db760(&local_30);
    if ((uVar1 & 1) == 0) {
      uVar1 = FUN_013db758(&local_30);
      if ((uVar1 & 1) == 0) {
        uVar1 = FUN_013db768(&local_30);
        if ((uVar1 & 1) == 0) {
          return;
        }
        *param_3 = 1;
      }
      *param_4 = 1;
    }
    else {
      *param_3 = 1;
    }
  }
  return;
}


