/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006e345c; name: FUN_006e345c
 */


undefined8 FUN_006e345c(int *param_1,undefined8 param_2,long param_3)

{
  size_t sVar1;
  long lVar2;
  byte *pbVar3;
  long lVar4;
  byte bVar5;
  undefined *puVar6;
  int iVar7;
  size_t __n;
  ulong uVar8;
  byte *pbVar9;
  byte *__s1;
  undefined8 uVar10;
  byte *pbVar11;
  long *local_b0;
  long lStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  long *local_90;
  long lStack_88;
  undefined8 local_80;
  long local_70;
  long *local_60;
  long lStack_58;
  undefined8 local_50;
  
  FUN_006e26f4();
  if (*param_1 == 2) {
    if ((char)param_1[1] != '\0') {
      lStack_a8 = *(long *)(param_3 + 0x20);
                    /* try { // try from 006e34c4 to 006e34cb has its CatchHandler @ 006e37f4 */
      FUN_00634138(&local_b0,*(undefined8 *)(lStack_a8 + 0x18));
      puVar6 = PTR_LAB_04373088;
      local_50 = local_a0;
      lStack_58 = lStack_a8;
      local_60 = local_b0;
joined_r0x006e34e0:
      if (local_60 == (long *)0x0) {
        return 1;
      }
      do {
        FUN_006e2a64(param_1);
        pbVar9 = (byte *)local_60[1];
        pbVar11 = *(byte **)(param_1 + 2);
        pbVar3 = *(byte **)(param_1 + 4);
        if ((*pbVar9 & 1) == 0) {
          pbVar9 = pbVar9 + 1;
          if (pbVar11 == pbVar3) goto LAB_006e34f0;
LAB_006e3530:
          __n = strlen((char *)pbVar9);
          if (__n == 0xffffffffffffffff) {
            do {
              uVar8 = (ulong)(*pbVar11 >> 1);
              if ((*pbVar11 & 1) != 0) {
                uVar8 = *(ulong *)(pbVar11 + 8);
              }
              if (uVar8 == 0xffffffffffffffff) {
                    /* try { // try from 006e37e4 to 006e37eb has its CatchHandler @ 006e37ec */
                    /* WARNING: Subroutine does not return */
                std::__basic_string_common<true>::__throw_out_of_range();
              }
              pbVar11 = pbVar11 + 0x20;
            } while (pbVar3 != pbVar11);
          }
          else if (__n == 0) {
            do {
              uVar8 = (ulong)(*pbVar11 >> 1);
              if ((*pbVar11 & 1) != 0) {
                uVar8 = *(ulong *)(pbVar11 + 8);
              }
              if (uVar8 == 0) goto LAB_006e34f0;
              pbVar11 = pbVar11 + 0x20;
            } while (pbVar3 != pbVar11);
          }
          else {
            do {
              bVar5 = *pbVar11;
              sVar1 = (ulong)(bVar5 >> 1);
              if ((bVar5 & 1) != 0) {
                sVar1 = *(size_t *)(pbVar11 + 8);
              }
              if (__n == sVar1) {
                __s1 = *(byte **)(pbVar11 + 0x10);
                if ((bVar5 & 1) == 0) {
                  __s1 = pbVar11 + 1;
                }
                iVar7 = memcmp(__s1,pbVar9,__n);
                if (iVar7 == 0) goto LAB_006e34f0;
              }
              pbVar11 = pbVar11 + 0x20;
            } while (pbVar3 != pbVar11);
          }
        }
        else {
          pbVar9 = *(byte **)(pbVar9 + 0x10);
          if (pbVar11 != pbVar3) goto LAB_006e3530;
LAB_006e34f0:
          if (pbVar3 != pbVar11) goto LAB_006e34f8;
        }
        local_80 = local_50;
        lStack_88 = lStack_58;
        local_90 = local_60;
        pbVar9 = (byte *)local_60[1];
        local_a0 = local_50;
        lStack_a8 = lStack_58;
        local_b0 = local_60;
                    /* try { // try from 006e3620 to 006e3633 has its CatchHandler @ 006e3800 */
        FUN_00633efc(&local_90);
        FUN_00633cac(*(undefined8 *)(param_3 + 0x20),&local_b0);
        if ((pbVar9 != (byte *)0x0) && (*(long *)(param_3 + 0x10) == 0)) {
          FUN_002ded3c(pbVar9 + 0x18);
          if ((*pbVar9 & 1) != 0) {
            FUN_002e2ea0(puVar6,*(undefined8 *)(pbVar9 + 0x10));
          }
          FUN_002e2ea0(puVar6,pbVar9);
        }
        local_50 = local_80;
        lStack_58 = lStack_88;
        local_60 = local_90;
        if (local_90 == (long *)0x0) {
          return 1;
        }
      } while( true );
    }
    FUN_006e2a64(param_1);
    if (*(long *)(param_1 + 10) != *(long *)(param_1 + 0xc)) {
      lStack_a8 = 0;
      local_a0 = FUN_00612290();
      uStack_98 = 0;
      local_b0 = &lStack_a8;
      FUN_006e2a64(param_1);
      lVar2 = *(long *)(param_1 + 10);
      lVar4 = *(long *)(param_1 + 0xc);
      do {
        if (lVar2 == lVar4) {
          FUN_006e3810(param_3,&local_b0);
          uVar10 = 1;
LAB_006e37d4:
          FUN_006e3f68(&local_b0,lStack_a8);
          return uVar10;
        }
        uVar8 = FUN_006e3a8c(&local_b0,lVar2);
        if ((uVar8 & 1) == 0) {
          uVar10 = 0;
          goto LAB_006e37d4;
        }
        lVar2 = lVar2 + 0x20;
      } while( true );
    }
    lStack_a8 = *(long *)(param_3 + 0x20);
                    /* try { // try from 006e3704 to 006e370b has its CatchHandler @ 006e37f0 */
    FUN_00634138(&local_b0,*(undefined8 *)(lStack_a8 + 0x18));
    puVar6 = PTR_LAB_04373088;
    local_60 = local_b0;
    while (local_60 != (long *)0x0) {
      pbVar9 = (byte *)local_60[1];
                    /* try { // try from 006e3770 to 006e3783 has its CatchHandler @ 006e37f8 */
      local_70 = lStack_a8;
      lStack_58 = lStack_a8;
      FUN_00633efc(&local_60);
      FUN_00633cac(*(undefined8 *)(param_3 + 0x20),&local_b0);
      if ((pbVar9 != (byte *)0x0) && (*(long *)(param_3 + 0x10) == 0)) {
        FUN_002ded3c(pbVar9 + 0x18);
        if ((*pbVar9 & 1) != 0) {
          FUN_002e2ea0(puVar6,*(undefined8 *)(pbVar9 + 0x10));
        }
        FUN_002e2ea0(puVar6,pbVar9);
      }
      lStack_a8 = lStack_58;
    }
  }
  return 1;
LAB_006e34f8:
                    /* try { // try from 006e34f8 to 006e34ff has its CatchHandler @ 006e37fc */
  FUN_00633efc(&local_60);
  goto joined_r0x006e34e0;
}


