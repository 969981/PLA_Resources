/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029fd5d8; name: FUN_029fd5d8
 */


void FUN_029fd5d8(long param_1,undefined1 *param_2,long *param_3)

{
  undefined8 uVar1;
  long lVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  undefined1 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  uint *puVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  undefined8 *puVar14;
  int iVar15;
  byte bVar16;
  undefined1 local_108;
  char local_107;
  char local_106;
  undefined1 local_105;
  undefined1 local_104;
  undefined8 local_100;
  undefined8 *puStack_f8;
  long local_f0;
  undefined1 local_e8;
  byte local_e0;
  undefined4 uStack_df;
  undefined3 uStack_db;
  undefined2 local_d8;
  undefined2 uStack_d6;
  undefined1 uStack_d4;
  undefined1 uStack_d3;
  undefined2 uStack_d2;
  undefined5 local_d0;
  undefined4 uStack_cb;
  byte bStack_c7;
  char local_c6;
  undefined2 uStack_c5;
  undefined1 local_c3;
  undefined5 local_c0;
  undefined3 uStack_bb;
  undefined5 uStack_b8;
  undefined1 local_b3;
  undefined5 local_b0;
  undefined3 uStack_ab;
  undefined5 uStack_a8;
  undefined1 local_a3;
  undefined5 local_a0;
  undefined3 uStack_9b;
  undefined5 uStack_98;
  undefined1 local_93;
  undefined5 uStack_90;
  undefined3 local_8b;
  undefined5 uStack_88;
  undefined1 local_83;
  undefined1 local_80 [8];
  undefined8 *local_78;
  byte *pbStack_70;
  
  *param_2 = 0;
  lVar7 = *param_3;
  local_e0 = (byte)lVar7;
  uStack_df = (undefined4)((ulong)lVar7 >> 8);
  uStack_db = (undefined3)((ulong)lVar7 >> 0x28);
  local_d8 = (undefined2)param_3[1];
  uStack_d6 = (undefined2)((ulong)param_3[1] >> 0x10);
  local_d0 = SUB85(&local_108,0);
  uStack_cb._0_3_ = (uint3)((ulong)&local_108 >> 0x28);
  FUN_029ff220(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1320),&local_100,&local_e0);
  cVar3 = (byte)local_100;
  cVar4 = local_100._2_1_;
  if (local_100._1_1_ != '\0') {
    bVar16 = *(byte *)(*param_3 + 0x7d);
    if (bVar16 < 6) {
      lVar7 = 0;
    }
    else if (bVar16 < 0xc) {
      lVar7 = 2;
    }
    else if (bVar16 < 0x12) {
      lVar7 = 1;
    }
    else if (bVar16 < 0x18) {
      lVar7 = 3;
    }
    else {
      lVar7 = (ulong)(bVar16 < 0x1e) << 2;
    }
    FUN_02947fd0(*(undefined8 *)(param_1 + 8),lVar7,(short)param_3[1]);
  }
  if (cVar3 == '\0') {
    if (((cVar4 != '\0') && (**(int **)(*(long *)(param_1 + 8) + 0x58) == 0)) &&
       (lVar7 = *(long *)(param_1 + 0x10), *(short *)(lVar7 + 0x230) == 0)) {
      *(short *)(lVar7 + 0x230) = (short)param_3[1];
      *(undefined1 *)(lVar7 + 0x232) = 1;
    }
    goto LAB_029fd8b8;
  }
  if (cVar3 == '\x01') {
    lVar7 = *param_3;
    uStack_d4 = 1;
    uStack_d3 = 0;
    uStack_d2 = 0;
    local_d8 = 1;
    local_e0 = (byte)lVar7;
    uStack_df = (undefined4)((ulong)lVar7 >> 8);
    uStack_db = (undefined3)((ulong)lVar7 >> 0x28);
    local_100 = local_100 & 0xffffffffffffff00;
    FUN_029db498(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x620),&local_100,&local_e0);
    if ((byte)local_100 != '\0') {
      **(undefined1 **)(*(long *)(param_1 + 0x40) + 0x28) = 5;
    }
    goto LAB_029fd8b8;
  }
  if (cVar3 != '\x02') goto LAB_029fd8b8;
  bVar16 = *(byte *)(*param_3 + 0x7d);
  if (bVar16 < 6) {
    iVar15 = 0;
  }
  else if (bVar16 < 0xc) {
    iVar15 = 2;
  }
  else if (bVar16 < 0x12) {
    iVar15 = 1;
  }
  else if (bVar16 < 0x18) {
    iVar15 = 3;
  }
  else {
    iVar15 = (uint)(bVar16 < 0x1e) << 2;
  }
  puVar10 = *(uint **)(*(long *)(param_1 + 8) + 0x58);
  if (*puVar10 < 2) {
    uVar6 = 0;
    if ((local_107 != '\x06') && (*(char *)((long)puVar10 + 0x106f) == '\0' && iVar15 == 0)) {
      puVar14 = *(undefined8 **)(*(long *)(param_1 + 0x10) + 8);
      FUN_02947b84(*puVar14,local_107,&local_e0,&local_100);
      uVar8 = (ulong)local_e0;
      if (uVar8 != 5) {
        if (((byte)local_100 < *(byte *)(puVar14 + uVar8 * 7 + 7)) &&
           (lVar7 = puVar14[uVar8 * 7 + (local_100 & 0xff) + 1], lVar7 != 0)) {
          uVar1 = *(undefined8 *)(param_1 + 8);
          local_e0 = 0x78;
          uStack_df = 0x42770;
          uStack_db = 0;
          local_d8 = (undefined2)uVar1;
          uStack_d6 = (undefined2)((ulong)uVar1 >> 0x10);
          uStack_d4 = (undefined1)((ulong)uVar1 >> 0x20);
          uStack_d3 = (undefined1)((ulong)uVar1 >> 0x28);
          uStack_d2 = (undefined2)((ulong)uVar1 >> 0x30);
          local_d0 = (undefined5)*(undefined8 *)(param_1 + 0x10);
          uStack_cb._0_3_ = (uint3)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x28);
          uStack_cb = (uint)(uint3)uStack_cb;
          bStack_c7 = 0;
          local_c6 = '\x01';
          FUN_0299d494(&local_e0);
          if (local_c6 == '\0') {
            lVar9 = CONCAT35((uint3)uStack_cb,local_d0);
            uVar8 = (ulong)uStack_cb._3_1_;
            bVar16 = bStack_c7 + 1;
            bStack_c7 = bVar16;
            if (uVar8 < 5) {
              lVar2 = CONCAT26(uStack_d2,
                               CONCAT15(uStack_d3,CONCAT14(uStack_d4,CONCAT22(uStack_d6,local_d8))))
              ;
              do {
                bVar5 = FUN_0294da60(*(undefined4 *)(lVar2 + 0x110),
                                     *(undefined1 *)(*(long *)(lVar2 + 0x58) + 0x55),
                                     uVar8 & 0xffffffff);
                if (bVar16 < bVar5) {
                  lVar11 = *(long *)(lVar9 + 8);
joined_r0x029fd988:
                  if (((*(byte *)(lVar11 + uVar8 * 0x38 + 0x38) <= bVar16) ||
                      (lVar12 = *(long *)(lVar11 + uVar8 * 0x38 + (ulong)bVar16 * 8 + 8),
                      lVar12 == 0)) || (*(short *)(lVar12 + 0x74) == 0)) goto LAB_029fd98c;
                  uVar13 = (uint)uVar8;
                  uStack_cb = CONCAT13((char)uVar8,(uint3)uStack_cb);
                  bStack_c7 = bVar16;
joined_r0x029fd9cc:
                  uVar6 = (undefined1)uVar8;
                  bVar16 = bVar16 + 1;
                  if ((uVar13 & 0xff) < 5) {
                    uVar8 = uVar8 & 0xff;
                    do {
                      bVar5 = FUN_0294da60(*(undefined4 *)(lVar2 + 0x110),
                                           *(undefined1 *)(*(long *)(lVar2 + 0x58) + 0x55),
                                           uVar8 & 0xffffffff);
                      if (bVar16 < bVar5) {
                        lVar11 = *(long *)(lVar9 + 8);
                        do {
                          if (((bVar16 < *(byte *)(lVar11 + uVar8 * 0x38 + 0x38)) &&
                              (lVar12 = *(long *)(lVar11 + uVar8 * 0x38 + (ulong)bVar16 * 8 + 8),
                              lVar12 != 0)) && (*(short *)(lVar12 + 0x74) != 0)) {
                            uVar13 = (uint)uVar8;
                            goto joined_r0x029fd9cc;
                          }
                          bVar16 = bVar16 + 1;
                        } while (bVar16 < bVar5);
                      }
                      uVar8 = uVar8 + 1;
                      bVar16 = 0;
                    } while (uVar8 != 5);
                    break;
                  }
                  goto LAB_029fda6c;
                }
LAB_029fd944:
                uVar8 = uVar8 + 1;
                bVar16 = 0;
              } while (uVar8 != 5);
              bVar16 = 0;
              uVar6 = 5;
LAB_029fda6c:
              uStack_cb = CONCAT13(uVar6,(uint3)uStack_cb);
              bStack_c7 = bVar16;
            }
            local_c6 = '\x01';
          }
          lVar9 = *(long *)(param_1 + 0x20);
          *(undefined1 *)(*(long *)(*(long *)(*(long *)(lVar9 + 0x20) + 0x10) + 0x1a8) + 9) = 1;
          FUN_02a3e6b8(*(undefined8 *)(lVar9 + 0x18),0x29,1);
          local_d8 = 0;
          uStack_d6 = 0;
          uStack_d4 = 0;
          local_e0 = 0;
          uStack_df = 0;
          uStack_db = 0;
          uStack_d3 = 1;
          local_d0 = 0;
          uStack_cb = 0;
          bStack_c7 = 0;
          local_c6 = 0;
          uStack_c5 = 0;
          local_c3 = 1;
          local_c0 = 0;
          uStack_bb = 0;
          uStack_b8 = 0;
          local_b3 = 1;
          local_b0 = 0;
          uStack_ab = 0;
          uStack_a8 = 0;
          local_a3 = 1;
          local_a0 = 0;
          uStack_9b = 0;
          uStack_98 = 0;
          local_93 = 1;
          uStack_88 = 0;
          uStack_90 = 0;
          local_8b = 0;
          local_83 = 1;
          local_100 = *(ulong *)(param_1 + 8);
          local_e8 = 1;
          puStack_f8 = puVar14 + 1;
          local_f0 = lVar7;
          FUN_029d3fd8(&local_e0,&local_100);
          local_80[0] = 0;
          local_78 = puVar14 + 1;
          pbStack_70 = &local_e0;
          FUN_029e966c(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x680),local_80,&local_78);
          uVar6 = local_80[0];
          goto LAB_029fd84c;
        }
      }
      goto LAB_029fd848;
    }
  }
  else {
LAB_029fd848:
    uVar6 = 0;
  }
LAB_029fd84c:
  *param_2 = uVar6;
  if (local_106 != '\0') {
    FUN_02a3e6b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x86,local_107,local_105);
  }
  FUN_02947b84(**(undefined8 **)(*(long *)(param_1 + 0x10) + 8),local_107,&local_e0,&local_100);
  **(undefined1 **)(param_1 + 0x58) = local_108;
  *(char *)(*(long *)(param_1 + 0x58) + 1) = local_107;
  *(undefined1 *)(*(long *)(param_1 + 0x58) + 8) = local_104;
  *(int *)(*(long *)(param_1 + 0x58) + 4) = iVar15;
LAB_029fd8b8:
  lVar7 = *(long *)(param_1 + 0x20);
  lVar9 = *param_3;
  *(undefined1 *)
   (*(long *)(*(long *)(*(long *)(*(long *)(lVar7 + 0x20) + 0x10) + 8) +
              (ulong)*(byte *)(lVar9 + 0x7d) * 8 + 0x120) + 0x391) = 0;
  FUN_02a3e6b8(*(undefined8 *)(lVar7 + 0x18),0x33,*(undefined1 *)(lVar9 + 0x7d),5,0);
  return;
LAB_029fd98c:
  bVar16 = bVar16 + 1;
  if (bVar5 <= bVar16) goto LAB_029fd944;
  goto joined_r0x029fd988;
}


