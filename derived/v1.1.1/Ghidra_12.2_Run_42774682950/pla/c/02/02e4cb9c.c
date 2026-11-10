/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e4cb9c; name: FUN_02e4cb9c
 */


/* WARNING: Removing unreachable block (ram,0x02e4cde0) */

undefined8
FUN_02e4cb9c(undefined1 param_1 [16],long param_2,long param_3,undefined8 param_4,float *param_5,
            undefined8 param_6,undefined8 param_7,int param_8)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar16;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined4 uStack_1d4;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  long local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  ulong uStack_1a8;
  long *local_1a0;
  ulong local_198;
  long local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c8;
  long local_c0;
  undefined4 local_b0;
  undefined1 local_88;
  
  uVar16 = param_1._8_8_;
  auVar15._0_8_ = param_1._0_8_;
  *(int *)(param_2 + 0x30) = param_1._0_4_;
  FUN_02e4c620(param_2,param_4,0,param_3,param_5);
  auVar14 = NEON_fmov(0x3f800000,4);
  uVar13 = 0;
  iVar5 = *(int *)(param_2 + 0x28);
  while (iVar5 != 0) {
    lVar6 = FUN_02e4ca54(param_2);
    *(undefined1 *)(lVar6 + 0x4a) = 0;
    uVar7 = FUN_02e4cf34(lVar6,param_6);
    if ((uVar7 & 1) == 0) {
      iVar5 = 4;
LAB_02e4cc18:
      if (iVar5 == 5) break;
    }
    else {
      lVar10 = *(long *)(lVar6 + 0x18);
      iVar5 = FUN_02e4bb18(lVar10,param_5);
      if ((iVar5 < 0) || (iVar5 == *(char *)(lVar6 + 0x48))) {
LAB_02e4cd4c:
        if (*(char *)(lVar6 + 0x4b) < param_8) {
          puVar2 = (undefined8 *)(lVar10 + 0x50);
          if (*(char *)(lVar6 + 0x48) != '\0') {
            puVar2 = (undefined8 *)(lVar10 + 0x38);
          }
          if (*(char *)(puVar2 + 2) == '\0') {
            nn::os::LockMutex((MutexType *)&DAT_04409ae0);
            FUN_02e4bd6c(lVar10);
            nn::os::UnlockMutex((MutexType *)&DAT_04409ae0);
            uVar4 = *(uint *)(puVar2 + 1);
            if (uVar4 != 0) goto LAB_02e4cd7c;
            iVar5 = 0;
          }
          else {
            uVar4 = *(uint *)(puVar2 + 1);
            iVar5 = 0;
            if (uVar4 != 0) {
LAB_02e4cd7c:
              uVar7 = (ulong)uVar4;
              puVar9 = (undefined8 *)*puVar2;
              puVar11 = puVar9;
              if (*(char *)(puVar9 + 1) != '\0') goto LAB_02e4cdc8;
              do {
                auVar15._8_8_ = uVar16;
                FUN_02e4c620(auVar15,param_2,*puVar11,lVar6,param_3,param_5);
                puVar9 = (undefined8 *)*puVar2;
                uVar7 = (ulong)*(uint *)(puVar2 + 1);
                puVar12 = puVar11;
                do {
                  puVar11 = puVar12 + 2;
                  if (puVar11 == puVar9 + uVar7 * 2) goto LAB_02e4cc20;
                  if (*(char *)(puVar12 + 3) == '\0') break;
LAB_02e4cdc8:
                  puVar12 = puVar11;
                } while (*(char *)((long)puVar11 + 9) == '\0');
              } while( true );
            }
          }
          goto LAB_02e4cc18;
        }
      }
      else {
        uStack_1d4 = auVar14._12_4_;
        local_e0 = *(undefined8 *)(lVar6 + 0xc);
        local_f0 = 0;
        uStack_e8 = 0;
        local_100 = 0;
        uStack_f8 = 0;
        local_110 = 0;
        uStack_108 = 0;
        local_120 = 0;
        uStack_118 = 0;
        local_b0 = 0;
        local_130 = 0;
        uStack_128 = 0;
        local_88 = 0;
        local_140 = 0;
        uStack_138 = 0;
        local_150 = 0;
        uStack_148 = 0;
        uStack_d0 = CONCAT44(param_5[1] - *(float *)(lVar6 + 0x10),
                             *param_5 - *(float *)(lVar6 + 0xc));
        local_160 = 0;
        uStack_158 = 0;
        local_170 = 0;
        uStack_168 = 0;
        local_180 = 0;
        uStack_178 = 0;
        uStack_d8 = CONCAT44(uStack_1d4,*(float *)(lVar6 + 0x14));
        local_190 = 0;
        local_188 = 0;
        uStack_c8 = (ulong)(uint)(param_5[2] - *(float *)(lVar6 + 0x14));
        local_1a0 = (long *)0x0;
        local_198 = 0;
        local_1d0 = *(undefined4 *)(lVar6 + 0xc);
        uStack_1cc = *(undefined4 *)(lVar6 + 0x10);
        uStack_1c8 = *(undefined4 *)(lVar6 + 0x14);
        uStack_1c4 = uStack_1d4;
        local_1b0 = CONCAT44(param_5[1] - *(float *)(lVar6 + 0x10),
                             *param_5 - *(float *)(lVar6 + 0xc));
        uStack_1a8 = (ulong)(uint)(param_5[2] - *(float *)(lVar6 + 0x14));
        local_c0 = lVar10;
        FUN_02e4d0c0(param_6,&local_1d0,&local_1b0,&local_1a0,1);
        uVar7 = FUN_02e4d1b8(&local_1a0);
        if ((uVar7 & 1) != 0) goto LAB_02e4cd4c;
        lVar3 = param_3;
        if (*(long *)(lVar6 + 0x20) != 0) {
          lVar3 = *(long *)(lVar6 + 0x20) + 0xc;
        }
        uVar7 = FUN_02e4becc(lVar10,lVar3,param_5);
        if ((uVar7 & 1) != 0) {
          FUN_02e4d20c(lVar6,param_7);
          *(undefined4 *)(param_2 + 0x28) = 0;
          uVar13 = 1;
          break;
        }
      }
    }
LAB_02e4cc20:
    iVar5 = *(int *)(param_2 + 0x28);
  }
  iVar5 = *(int *)(param_2 + 0x10);
  if (iVar5 != 0) {
    plVar1 = (long *)(param_2 + 8);
    uVar7 = local_198 >> 0x20;
    local_198 = local_198 & 0xffffffff00000000;
    local_190 = *(long *)*plVar1;
    local_188 = 0;
    local_1a0 = plVar1;
    lVar6 = local_190;
    if (local_190 == 0) {
      if (iVar5 - 1U != 0) {
        uVar8 = 0;
        do {
          local_190 = ((long *)*plVar1)[uVar8 + 1];
          if (local_190 != 0) goto LAB_02e4cf24;
          uVar8 = uVar8 + 1;
        } while (iVar5 - 1U != uVar8);
        local_190 = 0;
LAB_02e4cf24:
        iVar5 = (int)uVar8 + 1;
      }
      local_198 = CONCAT44((int)uVar7,iVar5);
      lVar6 = local_190;
    }
    while (lVar6 != 0) {
      local_190 = lVar6;
      FUN_02e4cb20(&local_1d0,plVar1,&local_1a0);
      local_1a0 = (long *)CONCAT44(uStack_1cc,local_1d0);
      local_198 = CONCAT44(uStack_1c4,uStack_1c8);
      local_190 = local_1c0;
      local_188 = uStack_1b8;
      FUN_02e4eb88(param_2,lVar6);
      lVar6 = local_190;
    }
  }
  return uVar13;
}


