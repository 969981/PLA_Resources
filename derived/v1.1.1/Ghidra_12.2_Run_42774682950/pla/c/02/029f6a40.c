/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029f6a40; name: FUN_029f6a40
 */


void FUN_029f6a40(long param_1,undefined4 *param_2,byte *param_3)

{
  char cVar1;
  undefined1 uVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulong uVar6;
  ulong uVar7;
  char *pcVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong *puVar16;
  undefined8 *puVar17;
  ulong local_f0;
  ulong local_e8;
  byte *local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined6 uStack_a0;
  undefined2 local_9a;
  undefined2 uStack_98;
  undefined2 uStack_96;
  undefined2 uStack_94;
  byte local_90 [24];
  undefined4 local_78;
  undefined4 local_68 [2];
  
  *param_2 = 7;
  lVar9 = *(long *)(*(long *)(param_1 + 0x10) + 8);
  bVar3 = *param_3;
  lVar11 = lVar9 + 0x120;
  uVar10 = *(ulong *)(lVar11 + (ulong)bVar3 * 8);
  uVar15 = *(ulong *)(lVar11 + (ulong)param_3[1] * 8);
  if (param_3[9] == 0) {
    lVar11 = 0x7d;
    if ((*(byte *)(uVar15 + 0x87) & 0x40) != 0) {
      lVar11 = 0x28e;
    }
    uVar15 = *(ulong *)(lVar9 + (ulong)*(byte *)(uVar15 + lVar11) * 8 + 0x120);
  }
  pcVar8 = *(char **)(*(long *)(param_1 + 0x10) + 0xa8);
  if ((((((*pcVar8 == '\0') || (pcVar8[2] != bVar3)) &&
        ((pcVar8[3] == '\0' || (pcVar8[5] != bVar3)))) &&
       ((pcVar8[6] == '\0' || (pcVar8[8] != bVar3)))) &&
      ((pcVar8[9] == '\0' || (pcVar8[0xb] != bVar3)))) &&
     (((pcVar8[0xc] == '\0' || (pcVar8[0xe] != bVar3)) &&
      ((pcVar8[0xf] == '\0' || (pcVar8[0x11] != bVar3)))))) {
    if (bVar3 < 6) {
      lVar11 = 0;
    }
    else if (bVar3 < 0xc) {
      lVar11 = 2;
    }
    else if (bVar3 < 0x12) {
      lVar11 = 1;
    }
    else if (bVar3 < 0x18) {
      lVar11 = 3;
    }
    else {
      lVar11 = (ulong)(bVar3 < 0x1e) << 2;
    }
    bVar3 = FUN_0294da60(*(undefined4 *)(*(long *)(param_1 + 8) + 0x110),
                         *(undefined1 *)(*(long *)(*(long *)(param_1 + 8) + 0x58) + 0x55),lVar11);
    if (bVar3 != 0) {
      uVar13 = 0;
      do {
        uVar6 = FUN_0294753c(*(undefined8 *)(param_1 + 8),lVar11,uVar13);
        puVar17 = *(undefined8 **)(*(long *)(param_1 + 0x10) + 8);
        FUN_02947b84(*puVar17,uVar6 & 0xffffffff,&local_f0,local_90);
        uVar7 = local_f0 & 0xff;
        if ((((uVar7 != 5) && (local_90[0] < *(byte *)(puVar17 + uVar7 * 7 + 7))) &&
            (puVar17[uVar7 * 7 + (ulong)local_90[0] + 1] != 0)) &&
           ((*(char *)(*(long *)(*(long *)(param_1 + 0x10) + 0xa8) +
                       (uVar6 & 0xff) + (uVar6 & 0xff) * 2 + 2) != '\x1f' &&
            (lVar9 = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x88) + 0x14c8),
            lVar9 != 0)))) {
          cVar1 = *(char *)(puVar17[uVar7 * 7 + (ulong)local_90[0] + 1] + 0x7d);
          do {
            if (((*(char *)(lVar9 + 0x3b) == cVar1) && (*(char *)(lVar9 + 0x30) == '\x04')) &&
               ((*(uint *)(lVar9 + 0x3c) >> 0x1b & 1) == 0)) {
              *(uint *)(lVar9 + 0x3c) = *(uint *)(lVar9 + 0x3c) | 0x8000000;
            }
            lVar9 = *(long *)(lVar9 + 0x18);
          } while (lVar9 != 0);
          for (lVar9 = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x88) + 0x14c8
                                ); lVar9 != 0; lVar9 = *(long *)(lVar9 + 0x18)) {
            if (((*(char *)(lVar9 + 0x3b) == cVar1) && (*(char *)(lVar9 + 0x30) == '\x05')) &&
               ((*(uint *)(lVar9 + 0x3c) >> 0x1b & 1) == 0)) {
              *(uint *)(lVar9 + 0x3c) = *(uint *)(lVar9 + 0x3c) | 0x8000000;
            }
          }
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 != bVar3);
    }
    uVar12 = *(undefined8 *)(param_1 + 0x20);
    uVar14 = *(undefined8 *)(param_1 + 0x38);
    uVar2 = *(undefined1 *)(uVar10 + 0x7d);
    uVar4 = FUN_029506a8(uVar10,0x10);
    FUN_02a3cc80(uVar12,uVar2,uVar4);
    bVar3 = FUN_029679e0(uVar14,uVar2,&local_f0);
    if (bVar3 != 0) {
      uVar6 = (ulong)bVar3;
      puVar16 = &local_f0;
      do {
        FUN_02a3cc80(uVar12,uVar2,*(undefined4 *)puVar16);
        uVar6 = uVar6 - 1;
        puVar16 = (ulong *)((long)puVar16 + 4);
      } while (uVar6 != 0);
    }
    FUN_02a3e6b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x5d,
                 *(undefined1 *)(uVar10 + 0x7d));
  }
  lVar9 = *(long *)(param_1 + 0x20);
  bVar3 = *(byte *)(uVar10 + 0x7d);
  uVar4 = *(undefined4 *)(param_3 + 4);
  uVar5 = FUN_029506a8(uVar10,0xc);
  lVar11 = *(long *)(lVar9 + 0x20);
  uVar6 = FUN_02a17630(*(undefined8 *)(lVar11 + 0x18),
                       *(undefined8 *)
                        (*(long *)(*(long *)(lVar11 + 0x10) + 8) + (ulong)bVar3 * 8 + 0x120),uVar4,
                       uVar5);
  if ((uVar6 & 1) != 0) {
    FUN_02a3e6b8(*(undefined8 *)(lVar9 + 0x18),0x56,(ulong)bVar3,uVar4,uVar5);
  }
  FUN_02967e64(*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_3 + 4),
               *(undefined4 *)(param_3 + 4),0,0,uVar10,local_90);
  uStack_98 = 0;
  uStack_96 = 0;
  uStack_94 = 0;
  local_f0 = 0;
  uStack_a0 = 0;
  local_9a = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  local_e0 = (byte *)0x0;
  if (uVar15 != 0) {
    uStack_96 = 0x101;
    local_f0 = uVar15;
  }
  local_a8 = 0;
  local_b8 = 0;
  local_c0 = 0;
  FUN_02968b58(*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_3 + 4),
               *(undefined4 *)(param_3 + 4),local_78,uVar10,&local_f0,local_90);
  local_d8 = CONCAT71(local_d8._1_7_,param_3[8]);
  local_f0 = uVar10;
  local_e8 = uVar15;
  local_e0 = local_90;
  FUN_029d8c00(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x4e0),local_68,&local_f0);
  *param_2 = local_68[0];
  return;
}


