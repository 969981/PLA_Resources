/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a017dc; name: FUN_02a017dc
 */


void FUN_02a017dc(long param_1,byte *param_2,long *param_3)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  uint *puVar15;
  undefined1 uVar16;
  long local_1a0;
  long lStack_198;
  long local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined4 local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  undefined8 local_90;
  byte bStack_88;
  undefined2 uStack_87;
  undefined5 uStack_85;
  long local_80;
  undefined1 *puStack_78;
  byte local_70 [16];
  
  *param_2 = 0;
  uVar2 = *(uint *)param_3[2];
  uVar14 = (ulong)uVar2;
  uVar6 = FUN_02971598(*(undefined8 *)(param_1 + 0x38),*param_3,uVar14);
  lVar12 = (&DAT_0428af30)[uVar14 * 6];
  if (lVar12 == 0) {
    plVar10 = &DAT_0428af30;
  }
  else {
    plVar10 = &DAT_0428af30;
    if (*(char *)(lVar12 + 0x1e1) != '\0') {
      plVar10 = &DAT_0428af30 + uVar14 * 6;
    }
  }
  piVar1 = (int *)((long)*(uint **)(*plVar10 + 0x250) + (ulong)**(uint **)(*plVar10 + 0x250));
  if (((0x4c < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
      (uVar11 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0x26], uVar11 != 0)) &&
     (*(char *)((long)piVar1 + uVar11) != '\0')) {
    local_1a0 = *param_3;
    lStack_198 = param_3[2];
    local_190 = param_3[3];
    FUN_02a085c8(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1bc0),&local_a8,&local_1a0);
    if ((char)local_a8 == '\x01') {
      return;
    }
    if ((char)local_a8 == '\x03') {
      FUN_0297fad8(*(undefined8 *)(param_1 + 0x38),*param_3,param_3[3],param_3[2]);
      return;
    }
    if ((char)local_a8 == '\x02') {
      *param_2 = 1;
      return;
    }
  }
  local_b0 = 0xffffffff;
  puVar15 = *(uint **)(param_1 + 0x18);
  uVar3 = *puVar15;
  local_170 = 0;
  uStack_168 = 0;
  local_180 = 0;
  uStack_178 = 0;
  local_190 = 0;
  uStack_188 = 0;
  local_1a0 = 0;
  lStack_198 = 0;
  FUN_02a3e7b8(puVar15,0x7f,6,&local_1a0);
  uVar4 = *puVar15;
  iVar8 = (int)((ulong)uVar3 & 0xffff);
  *(undefined1 *)((long)puVar15 + ((ulong)uVar3 & 0xffff) + 8) = 0;
  *(undefined1 *)((long)puVar15 + (ulong)(iVar8 + 1) + 8) = 0xab;
  *(char *)((long)puVar15 + (ulong)(iVar8 + 2) + 8) = (char)(uVar4 - uVar3) + -3;
  *puVar15 = iVar8 + (uVar4 - uVar3 & 0xff);
  local_b0 = CONCAT22(local_b0._2_2_,(short)uVar3);
  uVar3 = *puVar15;
  local_170 = 0;
  uStack_168 = 0;
  local_180 = 0;
  uStack_178 = 0;
  local_190 = 0;
  uStack_188 = 0;
  local_1a0 = 0;
  lStack_198 = 0;
  FUN_02a3e7b8(puVar15,0x6e,0x19,&local_1a0);
  uVar4 = *puVar15;
  iVar8 = (int)((ulong)uVar3 & 0xffff);
  *(undefined1 *)((long)puVar15 + ((ulong)uVar3 & 0xffff) + 8) = 0;
  *(undefined1 *)((long)puVar15 + (ulong)(iVar8 + 1) + 8) = 0xab;
  *(char *)((long)puVar15 + (ulong)(iVar8 + 2) + 8) = (char)(uVar4 - uVar3) + -3;
  *puVar15 = iVar8 + (uVar4 - uVar3 & 0xff);
  local_b0 = CONCAT22((short)uVar3,(undefined2)local_b0);
  lVar12 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  FUN_02a3fd78(lVar12 + (ulong)*(byte *)(lVar12 + 0x1c8) * 0x40 + 0x18,*param_3,param_3[3],
               *(undefined8 *)(*(long *)(param_1 + 0x10) + 0xa8));
  lVar12 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  cVar5 = FUN_0298de0c(*(undefined8 *)(param_1 + 0x38),param_3[1],*param_3,param_3[2],param_3[3],
                       lVar12 + (ulong)*(byte *)(lVar12 + 0x1c8) * 0x40 + 0x18);
  if (cVar5 != '\0') {
    lVar12 = *(long *)(*(long *)(param_1 + 0x40) + 8);
    *(undefined1 *)(lVar12 + (ulong)*(byte *)(lVar12 + 0x1c8) * 0x40 + 0x21) = 1;
  }
  uVar16 = 0;
  if ((uVar6 < 10) && ((1 << (ulong)(uVar6 & 0x1f) & 0x3d1U) != 0)) {
    uVar16 = 1;
  }
  FUN_02998ff8(&local_1a0);
  local_98 = *param_3;
  local_a8 = param_3[1];
  local_a0 = param_3[2];
  uStack_87 = 0;
  local_90._0_4_ = (undefined4)param_3[3];
  local_90._4_4_ = (uint)((ulong)param_3[3] >> 0x20);
  local_80 = *(long *)(*(long *)(param_1 + 0x10) + 0x128);
  bStack_88 = 0;
  puStack_78 = (undefined1 *)&local_1a0;
  FUN_02a06110(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1b20),local_70,&local_a8);
  if (local_70[0] == 0) {
    local_a8 = *param_3;
    local_a0 = param_3[1];
    local_98 = param_3[2];
    local_80 = param_3[3];
    local_90._0_4_ = CONCAT31(local_90._1_3_,uVar16);
    bStack_88 = (byte)&local_1a0;
    uStack_87 = (undefined2)((ulong)&local_1a0 >> 8);
    uStack_85 = (undefined5)((ulong)&local_1a0 >> 0x18);
    local_90._4_4_ = uVar6;
    FUN_02a033ac(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1be0),local_70,&local_a8);
  }
  local_a0 = param_3[1];
  local_98 = param_3[2];
  local_a8 = *param_3;
  local_90 = &local_b0;
  bStack_88 = local_70[0] ^ 1;
  FUN_02a072a0(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1c00),local_70,&local_a8);
  FUN_02973fa8(*(undefined8 *)(param_1 + 0x38),*(undefined1 *)(*param_3 + 0x7d),uVar14,param_3[1],
               0x29);
  lVar12 = *param_3;
  if (uVar2 != 0) {
    if (*(uint *)(lVar12 + 0x300) == uVar2) {
      lVar7 = 0;
    }
    else if (*(uint *)(lVar12 + 0x31c) == uVar2) {
      lVar7 = 1;
    }
    else if (*(uint *)(lVar12 + 0x338) == uVar2) {
      lVar7 = 2;
    }
    else {
      if (*(uint *)(lVar12 + 0x354) != uVar2) goto LAB_02a01bd4;
      lVar7 = 3;
    }
    lVar9 = *(long *)(param_1 + 0x20);
    lVar12 = *(long *)(*(long *)(*(long *)(*(long *)(lVar9 + 0x20) + 0x10) + 8) +
                       (ulong)*(byte *)(lVar12 + 0x7d) * 8 + 0x120);
    if ((uint)lVar7 < (uint)*(byte *)(lVar12 + 0x368)) {
      lVar13 = lVar12 + lVar7 * 0x1c;
      cVar5 = -1;
      if ((*(byte *)(lVar13 + 0x308) + 1 & 0x100) == 0) {
        cVar5 = *(byte *)(lVar13 + 0x308) + 1;
      }
      *(char *)(lVar13 + 0x308) = cVar5;
      if (*(char *)(lVar13 + 0x30c) != '\0') {
        *(char *)(lVar12 + lVar7 * 0x1c + 0x2fc) = cVar5;
      }
    }
    FUN_02a3e6b8(*(undefined8 *)(lVar9 + 0x18),8);
    lVar12 = *param_3;
  }
LAB_02a01bd4:
  local_a0 = CONCAT71(local_a0._1_7_,1);
  local_98 = 0;
  local_a8 = lVar12;
  FUN_029d6ea4(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x440),local_70,&local_a8);
  *param_2 = local_70[0] ^ 1;
  return;
}


