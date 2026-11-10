/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00203404; name: FUN_00203404
 */


void FUN_00203404(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  byte *pbVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  ulong auStack_2e8 [8];
  long alStack_2a8 [5];
  ulong auStack_280 [66];
  ulong local_70;
  ulong local_68 [7];
  
  memcpy(&local_70,(void *)(param_1 + 8),0x40);
  lVar4 = 0;
  pbVar5 = (byte *)(param_2 + 3);
  do {
    *(ulong *)((long)auStack_280 + lVar4 + 0x10) =
         (ulong)pbVar5[-3] << 0x18 | (ulong)pbVar5[-2] << 0x10 | (ulong)pbVar5[-1] << 8 |
         (ulong)*pbVar5;
    lVar4 = lVar4 + 8;
    pbVar5 = pbVar5 + 4;
  } while (lVar4 != 0x80);
  lVar4 = 0x80;
  uVar6 = auStack_280[2];
  do {
    lVar2 = lVar4 + 8;
    uVar7 = *(ulong *)((long)auStack_280 + lVar4);
    lVar3 = uVar6 + *(long *)((long)alStack_2a8 + lVar4);
    uVar6 = *(ulong *)((long)auStack_2e8 + lVar4);
    *(ulong *)((long)auStack_280 + lVar4 + 0x10) =
         lVar3 + (((ulong)(uint)((int)uVar7 << 0xd) | uVar7 >> 0x13 & 0x1fff) ^
                  (uVar7 & 0xffffffff) >> 10 ^
                 ((ulong)(uint)((int)uVar7 << 0xf) | uVar7 >> 0x11 & 0x7fff)) +
         (((ulong)(uint)((int)uVar6 << 0xe) | uVar6 >> 0x12 & 0x3fff) ^ (uVar6 & 0xffffffff) >> 3 ^
         ((ulong)(uint)((int)uVar6 << 0x19) | uVar6 >> 7 & 0x1ffffff));
    lVar4 = lVar2;
  } while (lVar2 != 0x200);
  lVar4 = 0;
  do {
    uVar10 = local_68[4];
    uVar7 = local_68[5];
    uVar6 = local_68[1];
    local_68[1] = local_68[0];
    local_68[4] = local_68[3];
    local_68[0] = local_70;
    plVar1 = (long *)((long)&DAT_039c7bf8 + lVar4);
    iVar9 = (int)local_68[4];
    lVar2 = lVar4 + 0x10;
    lVar4 = lVar4 + 8;
    iVar8 = (int)local_68[0];
    lVar2 = *plVar1 + local_68[6] + *(long *)((long)auStack_280 + lVar2) +
            (((ulong)(uint)(iVar9 << 0x1a) | local_68[4] >> 6 & 0x3ffffff) ^
             ((ulong)(uint)(iVar9 << 0x15) | local_68[4] >> 0xb & 0x1fffff) ^
            ((ulong)(uint)(iVar9 << 7) | local_68[4] >> 0x19 & 0x7f)) +
            (uVar10 & local_68[4] | uVar7 & (local_68[4] ^ 0xffffffffffffffff));
    local_68[3] = lVar2 + local_68[2];
    local_70 = lVar2 + ((local_68[1] | local_68[0]) & uVar6 | local_68[1] & local_68[0]) +
               (((ulong)(uint)(iVar8 << 0x1e) | local_68[0] >> 2 & 0x3fffffff) ^
                ((ulong)(uint)(iVar8 << 0x13) | local_68[0] >> 0xd & 0x7ffff) ^
               ((ulong)(uint)(iVar8 << 10) | local_68[0] >> 0x16 & 0x3ff));
    local_68[5] = uVar10;
    local_68[2] = uVar6;
    local_68[6] = uVar7;
  } while (lVar4 != 0x200);
  lVar4 = 0;
  *(ulong *)(param_1 + 8) = local_70 + *(long *)(param_1 + 8);
  do {
    *(long *)(param_1 + 0x10 + lVar4) =
         *(long *)((long)local_68 + lVar4) + *(long *)(param_1 + 0x10 + lVar4);
    lVar4 = lVar4 + 8;
  } while (lVar4 != 0x38);
  return;
}


