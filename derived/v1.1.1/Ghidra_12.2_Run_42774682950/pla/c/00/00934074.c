/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00934074; name: FUN_00934074
 */


undefined8 FUN_00934074(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  code *pcVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long *plVar7;
  code *local_1e0;
  code *local_1d8;
  undefined1 *local_1d0;
  undefined1 *local_1c8;
  undefined1 *apuStack_1c0 [13];
  undefined **local_158;
  long local_150 [30];
  ulong local_60;
  undefined1 local_54 [4];
  long local_48;
  
  puVar6 = *(undefined8 **)(*(long *)(*(long *)(*(long *)(param_1 + 0x68) + 0x98) + 0x370) + 8);
  FUN_02947b84(*puVar6,param_2,&local_158,&local_1e0);
  uVar2 = (ulong)local_158 & 0xff;
  if (uVar2 == 5) {
    return 0;
  }
  if (*(byte *)(puVar6 + uVar2 * 7 + 7) <= (byte)local_1e0) {
    return 0;
  }
  if (puVar6[uVar2 * 7 + ((ulong)local_1e0 & 0xff) + 1] == 0) {
    return 0;
  }
  local_54[0] = *(undefined1 *)(puVar6[uVar2 * 7 + ((ulong)local_1e0 & 0xff) + 1] + 0x7d);
  local_1e0 = FUN_00935a9c;
  local_1d8 = FUN_00935abc;
  local_1d0 = &LAB_00935ac0;
  apuStack_1c0[0] = local_54;
  local_1c8 = &LAB_00935acc;
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
  pcVar4 = FUN_00935abc;
  if (*(int *)(param_1 + 0x1a0) != 0) {
    uVar2 = 0;
    do {
      plVar7 = (long *)(param_1 + uVar2 * 8 + 0xb0);
      local_48 = *plVar7;
      uVar1 = (*local_1e0)(apuStack_1c0,&local_48);
      if ((uVar1 & 1) != 0) {
        lVar3 = *plVar7;
        uVar1 = local_60 & 0xffffffff;
        if ((uint)local_60 == 0) {
          uVar1 = 0;
        }
        else {
          plVar7 = local_150;
          uVar5 = uVar1;
          do {
            if (*plVar7 == lVar3) goto LAB_009341f4;
            uVar5 = uVar5 - 1;
            plVar7 = plVar7 + 1;
          } while (uVar5 != 0);
          if (0x1d < (uint)local_60) goto LAB_009341f4;
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 + 1);
        local_150[uVar1] = lVar3;
      }
LAB_009341f4:
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x1a0));
    pcVar4 = local_1d8;
    if (local_1d8 == (code *)0x0) goto LAB_0093424c;
  }
  local_1d0 = (undefined1 *)0x0;
  local_1c8 = (undefined1 *)0x0;
  local_1e0 = (code *)0x0;
  local_1d8 = (code *)0x0;
  (*pcVar4)(apuStack_1c0);
LAB_0093424c:
  lVar3 = 0;
  if ((uint)local_60 != 0) {
    lVar3 = local_150[0];
  }
  return lVar3;
}


