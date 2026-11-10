/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0056d544; name: FUN_0056d544
 */


undefined8 FUN_0056d544(long param_1,byte param_2,ulong param_3)

{
  long lVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  byte bVar5;
  byte bVar6;
  undefined8 uVar7;
  void *pvVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  long local_108;
  undefined1 auStack_100 [60];
  int local_c4;
  byte *local_c0;
  char local_b8;
  undefined4 local_b4;
  byte local_b0;
  void *local_a8;
  uint local_a0;
  uint local_98;
  int local_94;
  ulong local_90;
  undefined4 local_58;
  
  FUN_0056a6c4(auStack_100);
  if ((*(byte *)(param_1 + 2) >> 5 & 1) != 0) {
    local_b4 = 2;
  }
  if ((long)param_3 < 1) {
    local_94 = 100000;
  }
  else if (param_3 < 0x1a9) {
    local_94 = 0;
  }
  else {
    local_94 = 0x1000000;
    if (param_3 - 0x1a8 >> 0x1b == 0) {
      local_94 = (int)(param_3 - 0x1a8 >> 3);
    }
  }
  local_58 = 0;
  local_b0 = param_2 & 1;
  local_90 = param_3;
                    /* try { // try from 0056d5d0 to 0056d5d7 has its CatchHandler @ 0056d8b0 */
  local_108 = FUN_00566f04(param_1);
  if (local_108 != 0) {
                    /* try { // try from 0056d5e0 to 0056d5eb has its CatchHandler @ 0056d8ac */
    bVar5 = FUN_0056d8d0(&local_108,0);
                    /* try { // try from 0056d5f0 to 0056d5fb has its CatchHandler @ 0056d8a8 */
    bVar6 = FUN_0056dad0(&local_108,0);
    lVar1 = local_108;
    local_c4 = local_94 << 1;
                    /* try { // try from 0056d610 to 0056d62f has its CatchHandler @ 0056d8b4 */
    uVar7 = FUN_0056e52c(auStack_100,local_108,0,0);
    FUN_0055de34(lVar1);
    if (local_b8 == '\0') {
      local_b0 = 0;
      if ((int)local_98 < local_94) {
        uVar12 = local_98;
        if ((int)local_a0 <= (int)local_98) {
          uVar12 = 8;
          if (local_a0 != 0) {
            uVar12 = local_a0;
          }
          do {
            uVar3 = uVar12;
            uVar12 = uVar3 << 1;
          } while ((int)uVar3 <= (int)local_98);
          pvVar8 = (void *)FUN_002e2e80(PTR_FUN_04373078,
                                        -(ulong)(uVar3 >> 0x1f) & 0xfffffff800000000 |
                                        (ulong)uVar3 << 3);
          if (local_a8 != (void *)0x0) {
            memmove(pvVar8,local_a8,(long)(int)local_98 << 3);
          }
          memset((void *)((long)pvVar8 + (long)(int)local_98 * 8),0,
                 -(ulong)(uVar3 - local_98 >> 0x1f) & 0xfffffff800000000 |
                 (ulong)(uVar3 - local_98) << 3);
          bVar4 = local_a8 != (void *)0x0;
          local_a8 = pvVar8;
          if (bVar4) {
            FUN_002e2ea0(PTR_LAB_04373088);
          }
          uVar12 = local_98;
          local_a0 = uVar3;
        }
        local_98 = uVar12 + 1;
        if ((int)uVar12 < 0) {
          uVar12 = 0;
        }
        else {
                    /* try { // try from 0056d6f0 to 0056d71f has its CatchHandler @ 0056d8a4 */
          FUN_00552b94((void *)((long)local_a8 + (long)(int)uVar12 * 8),0);
        }
      }
      else {
        uVar12 = 0;
        local_b8 = '\x01';
      }
      uVar7 = FUN_0056a968(auStack_100,uVar7,uVar12);
      bVar4 = (param_2 & 1) == 0;
      bVar2 = bVar6;
      if (bVar4) {
        bVar2 = bVar5;
      }
      *local_c0 = bVar2 & 1;
      if (bVar4) {
        bVar5 = bVar6;
      }
      local_c0[2] = param_2 & 1;
      *(int *)(local_c0 + 8) = (int)uVar7;
      local_c0[1] = bVar5 & 1;
      if ((bVar2 & 1) == 0) {
        if ((local_b8 == '\0') && ((int)local_98 < local_94)) {
          if ((int)local_a0 <= (int)local_98) {
            uVar12 = 8;
            if (local_a0 != 0) {
              uVar12 = local_a0;
            }
            do {
              uVar3 = uVar12;
              uVar12 = uVar3 << 1;
            } while ((int)uVar3 <= (int)local_98);
            pvVar8 = (void *)FUN_002e2e80(PTR_FUN_04373078,
                                          -(ulong)(uVar3 >> 0x1f) & 0xfffffff800000000 |
                                          (ulong)uVar3 << 3);
            if (local_a8 != (void *)0x0) {
              memmove(pvVar8,local_a8,(long)(int)local_98 << 3);
            }
            memset((void *)((long)pvVar8 + (long)(int)local_98 * 8),0,
                   -(ulong)(uVar3 - local_98 >> 0x1f) & 0xfffffff800000000 |
                   (ulong)(uVar3 - local_98) << 3);
            bVar4 = local_a8 != (void *)0x0;
            local_a8 = pvVar8;
            if (bVar4) {
              FUN_002e2ea0(PTR_LAB_04373088);
            }
            local_a0 = uVar3;
          }
          uVar11 = (ulong)local_98;
          uVar12 = local_98 + 1;
          if ((int)local_98 < 0) goto LAB_0056d82c;
          lVar1 = (long)(int)local_98;
          local_98 = local_98 + 1;
                    /* try { // try from 0056d804 to 0056d853 has its CatchHandler @ 0056d8a0 */
          FUN_00552ac4((void *)((long)local_a8 + lVar1 * 8),0,0xff,0,0);
          uVar10 = uVar11 << 0x21;
        }
        else {
          local_b8 = '\x01';
          uVar12 = local_98;
LAB_0056d82c:
          local_98 = uVar12;
          uVar10 = 0;
          uVar11 = 0;
        }
        uVar9 = FUN_0056acfc(auStack_100,uVar10 | uVar11,1);
        uVar7 = FUN_0056a968(auStack_100,uVar9,uVar7);
      }
      *(int *)(local_c0 + 0xc) = (int)uVar7;
                    /* try { // try from 0056d860 to 0056d86b has its CatchHandler @ 0056d8b4 */
      uVar7 = FUN_0056dcd4(auStack_100,param_1);
      goto LAB_0056d870;
    }
  }
  uVar7 = 0;
LAB_0056d870:
  FUN_0056a8b0(auStack_100);
  return uVar7;
}


