/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029e1fac; name: FUN_029e1fac
 */


void FUN_029e1fac(long param_1,undefined8 param_2,byte *param_3)

{
  undefined4 uVar1;
  undefined1 uVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  byte *pbVar9;
  byte local_c8 [8];
  undefined1 auStack_c0 [16];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined7 uStack_98;
  undefined1 local_91;
  undefined6 uStack_90;
  undefined1 uStack_8a;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  bVar4 = *param_3;
  uVar1 = *(undefined4 *)(*(long *)(param_1 + 8) + 0x110);
  lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 8);
  uVar2 = *(undefined1 *)(*(long *)(*(long *)(param_1 + 8) + 0x58) + 0x55);
  if (bVar4 < 6) {
    uVar6 = 0;
  }
  else if (bVar4 < 0xc) {
    uVar6 = 2;
  }
  else if (bVar4 < 0x12) {
    uVar6 = 1;
  }
  else {
    uVar5 = 3;
    if (0x17 < bVar4) {
      uVar5 = (uint)(bVar4 < 0x1e) << 2;
    }
    uVar6 = (ulong)uVar5;
  }
  uVar5 = (uint)*(byte *)(lVar7 + uVar6 * 0x38 + 0x38);
  if (uVar5 != 0) {
    uVar8 = 0;
    do {
      if (*(byte *)(*(long *)(lVar7 + uVar6 * 0x38 + (ulong)(uVar8 & 0xff) * 8 + 8) + 0x7d) == bVar4
         ) {
        cVar3 = FUN_0294753c();
        if (cVar3 != '\x06') goto LAB_029e208c;
        break;
      }
      uVar8 = uVar8 + 1;
    } while (uVar5 != uVar8);
  }
  cVar3 = '\x06';
LAB_029e208c:
  local_b0._0_5_ = CONCAT14(cVar3,9);
  bVar4 = FUN_0299d334(&local_b0,uVar1,uVar2,*(undefined8 *)(*(long *)(param_1 + 0x10) + 8),local_c8
                      );
  if (bVar4 != 0) {
    uVar6 = (ulong)bVar4;
    pbVar9 = local_c8;
    do {
      bVar4 = *pbVar9;
      lVar7 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 8) + (ulong)bVar4 * 8 + 0x120);
      if ((*(byte *)(lVar7 + 0x387) >> 3 & 1) == 0) {
        uVar8 = 0;
      }
      else {
        local_a8._0_5_ = CONCAT14((*(ulong *)(lVar7 + 0x1b0) & 7) != 0,3);
        local_b0 = lVar7;
        FUN_029f83f8(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1840),auStack_c0,&local_b0);
        uVar5 = *(byte *)(lVar7 + 0x390) + 0xff;
        uVar8 = 1;
        if ((uVar5 >> 8 != 0) && ((uVar5 & 0xff) < 0x1e)) {
          local_a8 = CONCAT62(local_a8._2_6_,0x100);
          local_b0 = lVar7;
          FUN_029e0ab8(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x9a0),auStack_c0,&local_b0);
          uVar8 = 1;
        }
      }
      uVar5 = FUN_029701e4(*(undefined8 *)(param_1 + 0x38),lVar7,1);
      if ((*(byte *)(lVar7 + 0x198) & 7) == 0) {
        uVar8 = uVar8 | uVar5;
      }
      else {
        uStack_90 = 0;
        uVar8 = 1;
        local_a0 = 0;
        uStack_98 = 0;
        local_91 = 0;
        local_70 = 0;
        uStack_68 = 0;
        local_80 = 0;
        uStack_78 = 0;
        local_b0 = CONCAT71(local_b0._1_7_,*(byte *)(lVar7 + 0x7d));
        local_b0 = CONCAT44(0x21,(undefined4)local_b0);
        local_a8 = (ulong)*(byte *)(lVar7 + 0x7d);
        uStack_8a = 1;
        local_88 = 0x1000000;
        FUN_029da128(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb40),auStack_c0,&local_b0);
      }
      if ((*(byte *)(lVar7 + 0x1a8) & 7) == 0) {
        if ((uVar8 & 1) != 0) goto LAB_029e2124;
      }
      else {
        uStack_90 = 0;
        local_a0 = 0;
        uStack_98 = 0;
        local_91 = 0;
        local_70 = 0;
        uStack_68 = 0;
        local_80 = 0;
        uStack_78 = 0;
        local_b0 = CONCAT71(local_b0._1_7_,*(byte *)(lVar7 + 0x7d));
        local_b0 = CONCAT44(0x23,(undefined4)local_b0);
        local_a8 = (ulong)*(byte *)(lVar7 + 0x7d);
        uStack_8a = 1;
        local_88 = 0x1000000;
        FUN_029da128(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb40),auStack_c0,&local_b0);
LAB_029e2124:
        FUN_02a3fa08(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x9d,0x15a,(ulong)bVar4,
                     0xffff0000);
      }
      uVar6 = uVar6 - 1;
      pbVar9 = pbVar9 + 1;
    } while (uVar6 != 0);
  }
  return;
}


