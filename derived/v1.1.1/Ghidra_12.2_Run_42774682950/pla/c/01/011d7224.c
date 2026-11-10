/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011d7224; name: FUN_011d7224
 */


/* WARNING: Removing unreachable block (ram,0x011d73c4) */
/* WARNING: Removing unreachable block (ram,0x011d73c8) */
/* WARNING: Removing unreachable block (ram,0x011d73d0) */
/* WARNING: Removing unreachable block (ram,0x011d73d8) */
/* WARNING: Removing unreachable block (ram,0x011d75d4) */
/* WARNING: Removing unreachable block (ram,0x011d75e8) */
/* WARNING: Removing unreachable block (ram,0x011d7404) */
/* WARNING: Removing unreachable block (ram,0x011d7408) */
/* WARNING: Removing unreachable block (ram,0x011d7410) */
/* WARNING: Removing unreachable block (ram,0x011d7418) */
/* WARNING: Removing unreachable block (ram,0x011d75c4) */

void FUN_011d7224(long *param_1,long param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  long lVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined4 uVar34;
  undefined8 local_1e8;
  long local_1e0;
  long local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 *puStack_d0;
  undefined1 *local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  
  if (*(int *)((long)param_1 + 0x3c) == 1) {
    puVar7 = &DAT_041f87a8;
  }
  else {
    puVar7 = &DAT_041f8460;
    switch(*(int *)((long)param_1 + 0x3c)) {
    case 0:
      break;
    default:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    case 2:
      puVar7 = &DAT_041f8af0;
      break;
    case 3:
      puVar7 = &DAT_041f8e38;
      break;
    case 4:
      puVar7 = &DAT_041f9180;
      break;
    case 5:
      puVar7 = &DAT_041f94c8;
    }
  }
  uVar8 = puVar7[0x36];
  uVar9 = puVar7[0x37];
  uVar10 = puVar7[0x38];
  uVar11 = puVar7[0x39];
  uVar12 = puVar7[0x3a];
  uVar13 = puVar7[0x3b];
  uVar14 = puVar7[0x3c];
  uVar15 = puVar7[0x3d];
  uVar2 = puVar7[0x3e];
  uVar3 = puVar7[0x3f];
  uVar16 = puVar7[0x43];
  uVar17 = puVar7[0x44];
  uVar18 = puVar7[0x45];
  uVar19 = puVar7[0x46];
  uVar20 = puVar7[0x47];
  uVar21 = puVar7[0x48];
  uVar22 = puVar7[0x49];
  uVar23 = puVar7[0x4b];
  uVar24 = puVar7[0x4d];
  uVar25 = puVar7[0x4f];
  uVar28 = puVar7[0x40];
  uVar27 = puVar7[0x41];
  uVar33 = puVar7[0x42];
  uVar29 = puVar7[0x4a];
  uVar30 = puVar7[0x4c];
  uVar31 = puVar7[0x4e];
  uVar32 = puVar7[0x50];
  uVar6 = FUN_029506a8(*(undefined8 *)(param_2 + 0x70),0xd);
  *(undefined4 *)(param_1 + 7) = uVar6;
  local_1e0 = *param_1;
  if (local_1e0 == 0) {
    local_1d8 = param_1[1];
  }
  else {
    piVar1 = (int *)(local_1e0 + 0x50);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    local_1d8 = param_1[1];
  }
  if (local_1d8 != 0) {
    piVar1 = (int *)(local_1d8 + 0x50);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  uStack_80 = 0;
  local_b8 = 0;
  uStack_c0 = 0;
  local_c8 = &DAT_03996322;
  puStack_d0 = &DAT_cbf29ce484222645;
  local_d8 = 0;
  local_f8 = 0;
  local_118 = 0;
  local_138 = 0;
  local_158 = 0;
  local_178 = 0;
  local_198 = 0;
  local_1b8 = 0;
  local_1e8 = 0;
  local_b0 = 0x8d1b0bc59a3b8d5f;
  local_a8 = 0x8d1b0ac59a3b8bac;
  local_a0 = 0x8d1b0ac59a3b8bac;
  local_1d0 = uVar3;
  local_1c8 = uVar28;
  local_1c0 = uVar27;
  local_1b0 = uVar11;
  local_1a8 = uVar12;
  local_1a0 = uVar13;
  local_190 = uVar14;
  local_188 = uVar15;
  local_180 = uVar2;
  local_170 = uVar33;
  local_168 = uVar16;
  local_160 = uVar17;
  local_150 = uVar18;
  local_148 = uVar19;
  local_140 = uVar20;
  local_130 = uVar21;
  local_128 = uVar22;
  uStack_120 = uVar29;
  local_110 = uVar23;
  local_108 = uVar30;
  local_100 = uVar24;
  local_f0 = uVar31;
  local_e8 = uVar25;
  local_e0 = uVar32;
  local_98 = uVar8;
  local_90 = uVar9;
  local_88 = uVar10;
  if (param_1[3] != 0) {
    FUN_0143ac78(param_1[3],&local_1e8);
    lVar26 = param_1[3];
    uVar34 = NEON_ucvtf((int)param_1[7]);
    uVar6 = FUN_029506a8(*(undefined8 *)(param_2 + 0x70),0xe);
    FUN_0143b1ec(uVar34,lVar26,uVar6);
    FUN_0143ba18(param_1[3],1);
    FUN_0143bd08(param_1[3],*(int *)((long)param_1 + 0x3c) == 0);
  }
  *(undefined1 *)((long)param_1 + 0x41) = 1;
  FUN_011cc710(&local_1e8);
  return;
}


