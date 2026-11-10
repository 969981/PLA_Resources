/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011d8088; name: FUN_011d8088
 */


/* WARNING: Removing unreachable block (ram,0x011d81a0) */
/* WARNING: Removing unreachable block (ram,0x011d81a4) */
/* WARNING: Removing unreachable block (ram,0x011d81ac) */
/* WARNING: Removing unreachable block (ram,0x011d81b4) */
/* WARNING: Removing unreachable block (ram,0x011d8358) */
/* WARNING: Removing unreachable block (ram,0x011d838c) */
/* WARNING: Removing unreachable block (ram,0x011d81e0) */
/* WARNING: Removing unreachable block (ram,0x011d81e4) */
/* WARNING: Removing unreachable block (ram,0x011d81ec) */
/* WARNING: Removing unreachable block (ram,0x011d81f4) */
/* WARNING: Removing unreachable block (ram,0x011d8328) */

void FUN_011d8088(long *param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 local_1e8;
  long local_1e0;
  long local_1d8;
  undefined1 *local_1d0;
  undefined1 *local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined1 *local_1b0;
  undefined1 *local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined1 *local_190;
  undefined1 *local_188;
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
  undefined8 local_120;
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
  undefined1 *local_b0;
  undefined1 *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  
  if (*(int *)((long)param_1 + 0x3c) == 1) {
    puVar6 = &DAT_041f87a8;
  }
  else {
    puVar6 = &DAT_041f8460;
    switch(*(int *)((long)param_1 + 0x3c)) {
    case 0:
      break;
    default:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    case 2:
      puVar6 = &DAT_041f8af0;
      break;
    case 3:
      puVar6 = &DAT_041f8e38;
      break;
    case 4:
      puVar6 = &DAT_041f9180;
      break;
    case 5:
      puVar6 = &DAT_041f94c8;
    }
  }
  local_170 = puVar6[0x5a];
  local_168 = puVar6[0x5b];
  local_160 = puVar6[0x5c];
  local_150 = puVar6[0x5d];
  local_148 = puVar6[0x5e];
  local_140 = puVar6[0x5f];
  local_130 = puVar6[0x60];
  local_128 = puVar6[0x61];
  local_120 = puVar6[0x62];
  local_110 = puVar6[99];
  local_108 = puVar6[100];
  local_100 = puVar6[0x65];
  local_f0 = puVar6[0x66];
  local_e8 = puVar6[0x67];
  local_e0 = puVar6[0x68];
  local_1e0 = *param_1;
  if (local_1e0 == 0) {
    local_1d8 = param_1[1];
  }
  else {
    piVar1 = (int *)(local_1e0 + 0x50);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    local_1d8 = param_1[1];
  }
  if (local_1d8 != 0) {
    piVar1 = (int *)(local_1d8 + 0x50);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
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
  local_1d0 = &DAT_cbf29ce484222645;
  local_1c8 = &DAT_03996322;
  local_1c0 = 0;
  local_1a0 = 0;
  local_180 = 0;
  local_1b0 = &DAT_cbf29ce484222645;
  local_1a8 = &DAT_03996322;
  local_190 = &DAT_cbf29ce484222645;
  local_188 = &DAT_03996322;
  local_b0 = &DAT_cbf29ce484222645;
  local_a8 = &DAT_cbf29ce484222645;
  local_a0 = &DAT_cbf29ce484222645;
  local_98 = &DAT_cbf29ce484222645;
  local_90 = &DAT_03996322;
  local_88 = 0;
  if (param_1[4] != 0) {
    FUN_0143ac78(param_1[4],&local_1e8);
    lVar7 = param_1[4];
    uVar4 = FUN_029506a8(*(undefined8 *)(param_2 + 0x70),0xd);
    uVar5 = FUN_029506a8(*(undefined8 *)(param_2 + 0x70),0xe);
    FUN_0143b1ec((float)uVar4,lVar7,uVar5);
    FUN_0143ba18(param_1[4],1);
    FUN_0143bd08(param_1[4],0);
  }
  *(undefined1 *)((long)param_1 + 0x42) = 1;
  FUN_011cc710(&local_1e8);
  return;
}


