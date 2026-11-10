/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029d6ea4; name: FUN_029d6ea4
 */


void FUN_029d6ea4(long param_1,undefined1 *param_2,long *param_3)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  undefined1 uVar9;
  undefined2 uVar10;
  long *plVar11;
  uint *puVar12;
  char cVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  uint uVar17;
  uint uVar18;
  long lVar19;
  long lVar20;
  undefined1 auStack_88 [8];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  
  *param_2 = 0;
  lVar19 = *param_3;
  bVar1 = *(byte *)(lVar19 + 0x7d);
  uVar16 = (ulong)bVar1;
  lVar20 = *(long *)(*(long *)(param_1 + 0x10) + 200);
  if ((uVar16 < 0x1e) && (*(char *)(lVar20 + uVar16 + 0xf4) != '\0')) {
    return;
  }
  if (*(short *)(lVar19 + 0x74) != 0) {
    return;
  }
  uVar8 = FUN_029d74c0(param_1,lVar19);
  if ((uVar8 & 1) != 0) {
    return;
  }
  if ((*(byte *)(lVar19 + 0x2b0) | 1) == 0x2d) {
    return;
  }
  plVar11 = (long *)param_3[2];
  if (plVar11 == (long *)0x0) {
    uVar10 = 0;
    uVar9 = 0x1f;
  }
  else {
    uVar9 = *(undefined1 *)(*plVar11 + 0x7d);
    uVar10 = (undefined2)plVar11[1];
  }
  FUN_02a3e6b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x46,*(undefined1 *)(lVar19 + 0x7d)
               ,uVar9,uVar10);
  FUN_029d7850(param_1,lVar19,param_3[2]);
  FUN_029d79c8(param_1,lVar20,uVar16);
  if (((char)param_3[1] != '\0') &&
     (uVar8 = FUN_02c6d8ec(*(undefined8 *)(*(long *)(lVar19 + 0x60) + 0x98)), (uVar8 & 1) == 0)) {
    FUN_02a3fa08(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x9d,0,
                 *(undefined1 *)(lVar19 + 0x7d),0xffff0000);
  }
  uVar4 = local_80;
  bVar2 = *(byte *)(lVar19 + 0x2b1);
  lVar20 = *(long *)(param_1 + 8);
  uVar15 = (uint)bVar1;
  uVar17 = (uint)bVar2;
  if ((bVar1 == 0x1f) || (bVar2 == 0x1f)) {
LAB_029d70d0:
    bVar3 = uVar17 == 0x1f || uVar17 == uVar15;
  }
  else {
    uVar18 = *(uint *)(lVar20 + 0x110);
    if (bVar1 < 6) {
      lVar14 = 0;
joined_r0x029d6fe8:
      if (2 < uVar18) goto LAB_029d703c;
LAB_029d6fec:
      cVar13 = (&PTR_DAT_04277620)[(int)uVar18][lVar14];
      if (bVar2 < 6) goto LAB_029d7060;
LAB_029d7048:
      if (0xb < uVar17) {
        if (0x11 < uVar17) {
          if (uVar17 < 0x18) {
            lVar14 = 3;
          }
          else {
            lVar14 = (ulong)(uVar17 < 0x1e) << 2;
          }
          goto joined_r0x029d70a8;
        }
        lVar14 = 1;
        goto joined_r0x029d7068;
      }
      lVar14 = 2;
joined_r0x029d70a8:
      if (2 < uVar18) goto LAB_029d70bc;
LAB_029d706c:
      if (cVar13 != (&PTR_DAT_04277620)[(int)uVar18][lVar14]) goto LAB_029d70d0;
    }
    else {
      if (bVar1 < 0xc) {
        lVar14 = 2;
      }
      else {
        if (bVar1 < 0x12) {
          lVar14 = 1;
          goto joined_r0x029d6fe8;
        }
        if (bVar1 < 0x18) {
          lVar14 = 3;
        }
        else {
          lVar14 = (ulong)(bVar1 < 0x1e) << 2;
        }
      }
      if (uVar18 < 3) goto LAB_029d6fec;
LAB_029d703c:
      cVar13 = '\x02';
      if (5 < uVar17) goto LAB_029d7048;
LAB_029d7060:
      lVar14 = 0;
joined_r0x029d7068:
      if (uVar18 < 3) goto LAB_029d706c;
LAB_029d70bc:
      if (cVar13 != '\x02') goto LAB_029d70d0;
    }
    bVar3 = true;
  }
  if ((*(byte *)(*(long *)(lVar20 + 0x58) + 0x1041) >> 2 & 1) != 0) {
    bVar1 = *(byte *)(lVar19 + 0x7d);
    if (bVar1 < 6) {
      cVar13 = '\0';
    }
    else if (bVar1 < 0xc) {
      cVar13 = '\x02';
    }
    else if (bVar1 < 0x12) {
      cVar13 = '\x01';
    }
    else if (bVar1 < 0x18) {
      cVar13 = '\x03';
    }
    else {
      cVar13 = (bVar1 < 0x1e) << 2;
    }
    if (*(char *)(lVar20 + 0x130) != cVar13) {
      local_58 = 0;
      local_80 = CONCAT71(0x10000,bVar1);
      uVar5 = local_80;
      local_80._6_2_ = SUB82(uVar4,6);
      local_80._0_6_ = (uint6)(uint5)uVar5;
      local_68 = 0;
      uStack_60 = 0;
      local_78 = 0;
      uStack_70 = 0;
      lVar20 = *(long *)(*(long *)(param_1 + 0x60) + 0xc80);
      if ((*(byte *)(*(long *)(*(long *)(*(long *)(lVar20 + 0x10) + 8) + (ulong)bVar1 * 8 + 0x120) +
                    0x87) >> 5 & 1) == 0) {
        FUN_029e3c38(lVar20,&local_80);
      }
    }
  }
  FUN_02a3e6b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x77,uVar15,0);
  local_80 = lVar19;
  FUN_029d8ef4(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x500),auStack_88,&local_80);
  FUN_0298b728(*(undefined8 *)(param_1 + 0x38),uVar16);
  lVar20 = *(long *)(param_1 + 0x20);
  lVar14 = *(long *)(lVar20 + 0x20);
  FUN_02952038(*(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x10) + 8) + uVar16 * 8 + 0x120));
  FUN_029537f8(*(undefined8 *)(*(long *)(lVar14 + 0x10) + 0xa8),uVar16);
  FUN_02a3e6b8(*(undefined8 *)(lVar20 + 0x18),0x28,uVar16);
  bVar1 = *(byte *)(lVar19 + 0x7d);
  cVar13 = '\0';
  if (5 < bVar1) {
    if (bVar1 < 0xc) {
      cVar13 = '\x02';
    }
    else if (bVar1 < 0x12) {
      cVar13 = '\x01';
    }
    else if (bVar1 < 0x18) {
      cVar13 = '\x03';
    }
    else {
      cVar13 = (bVar1 < 0x1e) << 2;
    }
  }
  if (cVar13 == *(char *)(*(long *)(param_1 + 8) + 0x130)) {
    iVar6 = FUN_029506a8(lVar19,0xf);
    iVar7 = FUN_029d7c64(param_1);
    FUN_029484c0(*(undefined8 *)(param_1 + 8),lVar19,iVar6 + 0x1e <= iVar7);
  }
  uVar18 = (uint)bVar2;
  if (!(bool)(uVar17 == 0x1f | bVar3)) {
    if (uVar17 < 6) {
      lVar19 = 0;
    }
    else if (uVar17 < 0xc) {
      lVar19 = 2;
    }
    else if (uVar18 < 0x12) {
      lVar19 = 1;
    }
    else if (uVar18 < 0x18) {
      lVar19 = 3;
    }
    else {
      lVar19 = (ulong)(uVar18 < 0x1e) << 2;
    }
    lVar20 = *(long *)(param_1 + 0x20);
    lVar14 = *(long *)(*(long *)(*(long *)(*(long *)(lVar20 + 0x20) + 0x10) + 8) + (ulong)bVar2 * 8
                      + 0x120);
    if ((lVar14 != 0) && (*(char *)(lVar14 + 0x2b2) != -1)) {
      *(char *)(lVar14 + 0x2b2) = *(char *)(lVar14 + 0x2b2) + '\x01';
    }
    FUN_02a3e6b8(*(undefined8 *)(lVar20 + 0x18),0x36,uVar18,uVar16);
    FUN_02a3e6b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x2c,1,lVar19);
  }
  if (uVar18 != 0x1f) {
    lVar19 = *(long *)(param_1 + 8);
    bVar1 = *(byte *)(*(long *)(*(long *)(*(long *)(param_1 + 0x10) + 8) + uVar16 * 8 + 0x120) +
                     0x7d);
    if (bVar1 < 6) {
      cVar13 = '\0';
    }
    else if (bVar1 < 0xc) {
      cVar13 = '\x02';
    }
    else if (bVar1 < 0x12) {
      cVar13 = '\x01';
    }
    else if (bVar1 < 0x18) {
      cVar13 = '\x03';
    }
    else {
      cVar13 = (bVar1 < 0x1e) << 2;
    }
    if ((*(char *)(lVar19 + 0x130) == cVar13) && (puVar12 = *(uint **)(lVar19 + 0x58), *puVar12 < 2)
       ) {
      if (uVar18 < 6) {
        lVar20 = 0;
        puVar12[0x4bf] = 0;
      }
      else if (uVar17 < 0xc) {
        lVar20 = 2;
        puVar12[0x4bf] = 2;
      }
      else if (uVar17 < 0x12) {
        lVar20 = 1;
        puVar12[0x4bf] = 1;
      }
      else if (uVar17 < 0x18) {
        lVar20 = 3;
        puVar12[0x4bf] = 3;
      }
      else {
        lVar20 = (ulong)(uVar18 < 0x1e) << 2;
        puVar12[0x4bf] = (uint)(uVar18 < 0x1e) << 2;
      }
      bVar1 = (&DAT_03a7eb48)[lVar20];
      if (uVar18 < bVar1) {
        uVar18 = 0;
      }
      else {
        uVar18 = uVar17 - bVar1 & 0xff;
        if (bVar1 + 6 <= uVar17) {
          uVar18 = 0;
        }
      }
      *(uint *)(*(long *)(lVar19 + 0x58) + 0x1300) = uVar18;
    }
  }
  FUN_0298b9c0(*(undefined8 *)(param_1 + 0x38),uVar15);
  *param_2 = 1;
  return;
}


