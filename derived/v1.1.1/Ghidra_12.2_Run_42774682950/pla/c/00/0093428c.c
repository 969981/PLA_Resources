/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0093428c; name: FUN_0093428c
 */


long FUN_0093428c(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  undefined1 *apuStack_1c0 [13];
  undefined **local_158;
  long local_150 [30];
  ulong local_60;
  undefined1 local_54 [4];
  long local_48;
  
  lVar1 = FUN_00934074(param_1,0);
  if (lVar1 == 0) {
    local_54[0] = 0x1f;
  }
  else {
    local_54[0] = *(undefined1 *)(*(long *)(lVar1 + 0x70) + 0x7d);
  }
  apuStack_1c0[0] = local_54;
  local_158 = &PTR_FUN_041c2158;
  local_150[0] = 0;
  local_150[1] = 0;
  local_150[2] = 0;
  local_150[3] = 0;
  local_150[4] = 0;
  local_150[5] = 0;
  local_150[6] = 0;
  local_150[7] = 0;
  local_150[8] = 0;
  local_150[9] = 0;
  local_150[10] = 0;
  local_150[0xb] = 0;
  local_150[0xc] = 0;
  local_150[0xd] = 0;
  local_150[0xe] = 0;
  local_150[0xf] = 0;
  local_150[0x10] = 0;
  local_150[0x11] = 0;
  local_150[0x12] = 0;
  local_150[0x13] = 0;
  local_150[0x14] = 0;
  local_150[0x15] = 0;
  local_150[0x16] = 0;
  local_150[0x17] = 0;
  local_150[0x18] = 0;
  local_150[0x19] = 0;
  local_150[0x1a] = 0;
  local_150[0x1b] = 0;
  local_150[0x1c] = 0;
  local_150[0x1d] = 0;
  local_60 = 0;
  if (*(int *)(param_1 + 0x1a0) != 0) {
    uVar4 = 0;
    do {
      plVar5 = (long *)(param_1 + uVar4 * 8 + 0xb0);
      local_48 = *plVar5;
      uVar2 = FUN_00935a9c(apuStack_1c0,&local_48);
      if ((uVar2 & 1) != 0) {
        lVar1 = *plVar5;
        uVar2 = local_60 & 0xffffffff;
        if ((uint)local_60 == 0) {
          uVar2 = 0;
        }
        else {
          plVar5 = local_150;
          uVar3 = uVar2;
          do {
            if (*plVar5 == lVar1) goto LAB_009343c4;
            uVar3 = uVar3 - 1;
            plVar5 = plVar5 + 1;
          } while (uVar3 != 0);
          if (0x1d < (uint)local_60) goto LAB_009343c4;
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 + 1);
        local_150[uVar2] = lVar1;
      }
LAB_009343c4:
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_1 + 0x1a0));
  }
  FUN_00935abc(apuStack_1c0);
  lVar1 = 0;
  if ((uint)local_60 != 0) {
    lVar1 = local_150[0];
  }
  return lVar1;
}


