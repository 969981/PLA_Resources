/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029f563c; name: FUN_029f563c
 */


void FUN_029f563c(long param_1,undefined1 *param_2,char *param_3)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  char *pcVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  undefined2 local_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined6 uStack_70;
  undefined2 local_6a;
  undefined6 uStack_68;
  
  *param_2 = 0;
  uStack_68 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_6a = 0;
  local_88 = 0;
  local_80 = 0;
  bVar2 = param_3[1];
  uVar7 = (ulong)bVar2;
  if (bVar2 < 2) {
LAB_029f56c0:
    local_8c = CONCAT11(local_8c._1_1_,(char)uVar7);
LAB_029f56c4:
    lVar6 = 1;
  }
  else {
    if (bVar2 == 5) {
      uVar7 = 0;
      local_8c = (ushort)local_8c._1_1_ << 8;
      goto LAB_029f56c4;
    }
    if (bVar2 == 4) {
      uVar7 = 1;
      goto LAB_029f56c0;
    }
    if (bVar2 != 3) goto LAB_029f57ec;
    uVar7 = 0;
    local_8c = 0x100;
    lVar6 = 2;
  }
  lVar11 = 0;
  while( true ) {
    uVar12 = uVar7 * 0x260 | 8;
    uVar10 = 0;
    bVar5 = false;
    do {
      uVar1 = ((uint)(uVar10 >> 3) & 0x1fffffff) + 1;
      if (((((uVar1 & 0xff) < (uint)(byte)param_3[2]) &&
           ((1 << (ulong)((uint)uVar10 & 7) & (uint)(byte)param_3[(ulong)(byte)uVar1 + 2]) != 0)) &&
          ((uint)uVar7 < 2)) && ((int)(uint)uVar10 < 0x13)) {
        lVar8 = *(long *)(param_1 + 0x20);
        lVar9 = *(long *)(*(long *)(*(long *)(lVar8 + 0x10) + 0x48) + uVar12);
        if ((lVar9 != 0) && (*(int *)(lVar9 + 0x1c) != 0)) {
          *(ulong *)(lVar9 + 0x10) = *(ulong *)(lVar9 + 0x10) & 0xfffffffffffffff8;
          *(undefined8 *)(lVar9 + 0x18) = 0;
          FUN_02a3e6b8(*(undefined8 *)(lVar8 + 0x18),0x48,uVar7,uVar10 & 0xffffffff);
          lVar8 = *(long *)(param_1 + 0x20);
          FUN_02a35db0(*(undefined8 *)(*(long *)(lVar8 + 0x20) + 0x18),uVar7,uVar10 & 0xffffffff);
          FUN_02a3e6b8(*(undefined8 *)(lVar8 + 0x18),0x62,uVar7,uVar10 & 0xffffffff);
          bVar5 = true;
          *(undefined1 *)((long)&local_88 + uVar10 + uVar7 * 0x13) = 1;
        }
      }
      uVar10 = uVar10 + 1;
      uVar12 = uVar12 + 0x20;
    } while (uVar10 != 0x13);
    if (bVar5) {
      *param_2 = 1;
    }
    if (lVar11 + 1 == lVar6) break;
    uVar7 = (ulong)*(byte *)((long)&local_8c + lVar11 + 1);
    lVar11 = lVar11 + 1;
  }
LAB_029f57ec:
  if (((param_3[6] != '\0') && (uVar7 = FUN_029f5504(&local_88), (uVar7 & 1) != 0)) &&
     (*param_3 != '\x1f')) {
    FUN_02a3e6b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x99,*param_3,0);
  }
  uVar7 = 0;
  pcVar4 = (char *)&local_80;
  cVar3 = (char)local_88;
  while( true ) {
    if (cVar3 != '\0') {
      FUN_02a3fa08(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x9c,0x271,uVar7 & 0xffffffff,
                   0xffff0000);
    }
    if (pcVar4[-7] != '\0') {
      FUN_02a3fa08(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x9c,0x275,uVar7 & 0xffffffff,
                   0xffff0000);
    }
    if (pcVar4[-6] != '\0') {
      FUN_02a3fa08(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x9c,0x27d,uVar7 & 0xffffffff,
                   0xffff0000);
    }
    if (pcVar4[-5] != '\0') {
      FUN_02a3fa08(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x9c,0x281,uVar7 & 0xffffffff,
                   0xffff0000);
    }
    if (pcVar4[-4] != '\0') {
      FUN_02a3fa08(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x9c,0x285,uVar7 & 0xffffffff,
                   0xffff0000);
    }
    if (pcVar4[-3] != '\0') {
      FUN_02a3fa08(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x9c,0x289,uVar7 & 0xffffffff,
                   0xffff0000);
    }
    if (pcVar4[-2] != '\0') {
      FUN_02a3fa08(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x9c,0x28d,uVar7 & 0xffffffff,
                   0xffff0000);
    }
    if (pcVar4[-1] != '\0') {
      FUN_02a3fa08(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x9c,0x291,uVar7 & 0xffffffff,
                   0xffff0000);
    }
    if (*pcVar4 != '\0') {
      FUN_02a3fa08(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x9c,0x295,uVar7 & 0xffffffff,
                   0xffff0000);
    }
    if (pcVar4[3] != '\0') {
      FUN_02a3fa08(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x9c,0x29d,uVar7 & 0xffffffff,
                   0xffff0000);
    }
    if (pcVar4[4] != '\0') {
      FUN_02a3fa08(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x9c,0x2a1,uVar7 & 0xffffffff,
                   0xffff0000);
    }
    if (pcVar4[5] != '\0') {
      FUN_02a3fa08(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x9c,0x2a5,uVar7 & 0xffffffff,
                   0xffff0000);
    }
    if (pcVar4[6] != '\0') {
      FUN_02a3fa08(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x9c,0x2cb,uVar7 & 0xffffffff,
                   0xffff0000);
    }
    if (pcVar4[9] != '\0') {
      FUN_02a3fa08(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x9c,0x279,uVar7 & 0xffffffff,
                   0xffff0000);
    }
    uVar7 = uVar7 + 1;
    if (uVar7 == 2) break;
    cVar3 = pcVar4[0xb];
    pcVar4 = pcVar4 + 0x13;
  }
  if (((param_3[6] != '\0') && (uVar7 = FUN_029f5504(&local_88), (uVar7 & 1) != 0)) &&
     (*param_3 != '\x1f')) {
    FUN_02a3e6b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x9a);
  }
  return;
}


