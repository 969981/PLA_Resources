/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003fe170; name: FUN_003fe170
 */


void FUN_003fe170(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                 undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  
  if (param_4 == 0) {
    lVar5 = 0;
    if (param_5 != 0) goto LAB_003fe1b0;
LAB_003fe290:
    if (lVar5 != -2) goto LAB_003fe1c0;
LAB_003fe2a0:
    lVar5 = *(long *)(param_5 + 0x18);
    if (lVar5 == 0) {
      lVar10 = 0;
      lVar12 = *(long *)(param_5 + 0x20);
      if (lVar12 != 0) goto LAB_003fe2b4;
      lVar7 = 0;
    }
    else {
      lVar10 = *(long *)(lVar5 + 0x28);
      lVar12 = *(long *)(param_5 + 0x20);
      lVar7 = 0;
      if (lVar12 != 0) {
LAB_003fe2b4:
        lVar7 = *(long *)(lVar12 + 0x28);
      }
    }
    if (lVar10 - lVar7 == 1) {
      uVar1 = (**(code **)(param_1 + 8))(*(undefined8 *)(lVar5 + 8),param_6);
      uVar2 = (**(code **)(param_1 + 0x20))
                        (*(undefined8 *)(*(long *)(param_5 + 0x18) + 0x10),param_6);
      lVar5 = *(long *)(*(long *)(param_5 + 0x18) + 0x18);
      if (lVar5 != 0) {
        FUN_002ef5d0(lVar5);
      }
      lVar10 = FUN_002ebd50(0x30);
      FUN_002ef5c0(lVar10,1);
      *(undefined8 *)(lVar10 + 8) = param_2;
      *(undefined8 *)(lVar10 + 0x10) = param_3;
      uVar3 = FUN_003fda50(param_4);
      *(undefined8 *)(lVar10 + 0x18) = uVar3;
      uVar3 = FUN_003fda50(lVar5);
      *(undefined8 *)(lVar10 + 0x20) = uVar3;
      if (param_4 == 0) {
        lVar12 = 0;
        if (lVar5 != 0) goto LAB_003fe340;
LAB_003fe5dc:
        if (0 < lVar12) goto LAB_003fe34c;
LAB_003fe5e8:
        if (lVar5 == 0) goto LAB_003fe624;
        lVar5 = *(long *)(lVar5 + 0x28);
      }
      else {
        lVar12 = *(long *)(param_4 + 0x28);
        if (lVar5 == 0) goto LAB_003fe5dc;
LAB_003fe340:
        if (lVar12 <= *(long *)(lVar5 + 0x28)) goto LAB_003fe5e8;
LAB_003fe34c:
        if (param_4 == 0) {
LAB_003fe624:
          lVar5 = 0;
        }
        else {
          lVar5 = *(long *)(param_4 + 0x28);
        }
      }
      *(long *)(lVar10 + 0x28) = lVar5 + 1;
      uVar3 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_5 + 8),param_6);
      uVar4 = (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_5 + 0x10),param_6);
      lVar12 = *(long *)(*(long *)(param_5 + 0x18) + 0x20);
      if (lVar12 != 0) {
        FUN_002ef5d0(lVar12);
      }
      lVar7 = *(long *)(param_5 + 0x20);
      if (lVar7 != 0) {
        FUN_002ef5d0(lVar7);
      }
      lVar5 = FUN_002ebd50(0x30);
      FUN_002ef5c0(lVar5,1);
      *(undefined8 *)(lVar5 + 8) = uVar3;
      *(undefined8 *)(lVar5 + 0x10) = uVar4;
      uVar3 = FUN_003fda50(lVar12);
      *(undefined8 *)(lVar5 + 0x18) = uVar3;
      uVar3 = FUN_003fda50(lVar7);
      *(undefined8 *)(lVar5 + 0x20) = uVar3;
      if (lVar12 == 0) {
        lVar9 = 0;
        if (lVar7 != 0) goto LAB_003fe6b8;
LAB_003fe6d8:
        if (0 < lVar9) goto LAB_003fe6c4;
LAB_003fe6e4:
        if (lVar7 == 0) goto LAB_003fe714;
        lVar12 = *(long *)(lVar7 + 0x28);
      }
      else {
        lVar9 = *(long *)(lVar12 + 0x28);
        if (lVar7 == 0) goto LAB_003fe6d8;
LAB_003fe6b8:
        if (lVar9 <= *(long *)(lVar7 + 0x28)) goto LAB_003fe6e4;
LAB_003fe6c4:
        if (lVar12 == 0) {
LAB_003fe714:
          lVar12 = 0;
        }
        else {
          lVar12 = *(long *)(lVar12 + 0x28);
        }
      }
      *(long *)(lVar5 + 0x28) = lVar12 + 1;
    }
    else {
      uVar1 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_5 + 8),param_6);
      uVar2 = (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_5 + 0x10),param_6);
      lVar5 = *(long *)(param_5 + 0x18);
      if (lVar5 != 0) {
        FUN_002ef5d0(lVar5);
      }
      lVar10 = FUN_002ebd50(0x30);
      FUN_002ef5c0(lVar10,1);
      *(undefined8 *)(lVar10 + 8) = param_2;
      *(undefined8 *)(lVar10 + 0x10) = param_3;
      uVar3 = FUN_003fda50(param_4);
      *(undefined8 *)(lVar10 + 0x18) = uVar3;
      uVar3 = FUN_003fda50(lVar5);
      *(undefined8 *)(lVar10 + 0x20) = uVar3;
      if (param_4 == 0) {
        lVar12 = 0;
        if (lVar5 != 0) goto LAB_003fe41c;
LAB_003fe5fc:
        if (0 < lVar12) goto LAB_003fe428;
LAB_003fe608:
        if (lVar5 == 0) goto LAB_003fe6f0;
        *(long *)(lVar10 + 0x28) = *(long *)(lVar5 + 0x28) + 1;
        lVar5 = *(long *)(param_5 + 0x20);
      }
      else {
        lVar12 = *(long *)(param_4 + 0x28);
        if (lVar5 == 0) goto LAB_003fe5fc;
LAB_003fe41c:
        if (lVar12 <= *(long *)(lVar5 + 0x28)) goto LAB_003fe608;
LAB_003fe428:
        if (param_4 == 0) {
LAB_003fe6f0:
          *(undefined8 *)(lVar10 + 0x28) = 1;
          lVar5 = *(long *)(param_5 + 0x20);
        }
        else {
          *(long *)(lVar10 + 0x28) = *(long *)(param_4 + 0x28) + 1;
          lVar5 = *(long *)(param_5 + 0x20);
        }
      }
      if (lVar5 != 0) {
        FUN_002ef5d0(lVar5);
      }
    }
    lVar12 = FUN_002ebd50(0x30);
    FUN_002ef5c0(lVar12,1);
    *(undefined8 *)(lVar12 + 8) = uVar1;
    *(undefined8 *)(lVar12 + 0x10) = uVar2;
    uVar1 = FUN_003fda50(lVar10);
    *(undefined8 *)(lVar12 + 0x18) = uVar1;
    uVar1 = FUN_003fda50(lVar5);
    *(undefined8 *)(lVar12 + 0x20) = uVar1;
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = *(long *)(lVar5 + 0x28);
    }
    lVar7 = *(long *)(lVar10 + 0x28);
    if (*(long *)(lVar10 + 0x28) <= lVar5) {
      lVar7 = lVar5;
    }
    *(long *)(lVar12 + 0x28) = lVar7 + 1;
  }
  else {
    lVar5 = *(long *)(param_4 + 0x28);
    if (param_5 == 0) goto LAB_003fe290;
LAB_003fe1b0:
    lVar5 = lVar5 - *(long *)(param_5 + 0x28);
    if (lVar5 == -2) goto LAB_003fe2a0;
LAB_003fe1c0:
    if (lVar5 != 2) {
      lVar12 = FUN_002ebd50(0x30);
      FUN_002ef5c0(lVar12,1);
      *(undefined8 *)(lVar12 + 8) = param_2;
      *(undefined8 *)(lVar12 + 0x10) = param_3;
      uVar1 = FUN_003fda50(param_4);
      *(undefined8 *)(lVar12 + 0x18) = uVar1;
      uVar1 = FUN_003fda50(param_5);
      *(undefined8 *)(lVar12 + 0x20) = uVar1;
      if (param_4 == 0) {
        lVar5 = 0;
        if (param_5 != 0) goto LAB_003fe394;
LAB_003fe538:
        if (0 < lVar5) goto LAB_003fe3a0;
LAB_003fe544:
        if (param_5 == 0) goto LAB_003fe550;
        lVar5 = *(long *)(param_5 + 0x28);
      }
      else {
        lVar5 = *(long *)(param_4 + 0x28);
        if (param_5 == 0) goto LAB_003fe538;
LAB_003fe394:
        if (lVar5 <= *(long *)(param_5 + 0x28)) goto LAB_003fe544;
LAB_003fe3a0:
        if (param_4 == 0) {
LAB_003fe550:
          lVar5 = 0;
        }
        else {
          lVar5 = *(long *)(param_4 + 0x28);
        }
      }
      *(long *)(lVar12 + 0x28) = lVar5 + 1;
      goto LAB_003fe8a4;
    }
    lVar5 = 0;
    if (*(long *)(param_4 + 0x18) != 0) {
      lVar5 = *(long *)(*(long *)(param_4 + 0x18) + 0x28);
    }
    lVar10 = *(long *)(param_4 + 0x20);
    if (lVar10 == 0) {
      pcVar6 = *(code **)(param_1 + 8);
      if (lVar5 != -1) goto LAB_003fe1f0;
LAB_003fe458:
      uVar1 = (*pcVar6)(*(undefined8 *)(lVar10 + 8),param_6);
      uVar2 = (**(code **)(param_1 + 0x20))
                        (*(undefined8 *)(*(long *)(param_4 + 0x20) + 0x10),param_6);
      uVar3 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_4 + 8),param_6);
      uVar4 = (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_4 + 0x10),param_6);
      lVar5 = *(long *)(param_4 + 0x18);
      if (lVar5 != 0) {
        FUN_002ef5d0(lVar5);
      }
      lVar10 = *(long *)(*(long *)(param_4 + 0x20) + 0x18);
      if (lVar10 != 0) {
        FUN_002ef5d0(lVar10);
      }
      lVar7 = FUN_002ebd50(0x30);
      FUN_002ef5c0(lVar7,1);
      *(undefined8 *)(lVar7 + 8) = uVar3;
      *(undefined8 *)(lVar7 + 0x10) = uVar4;
      uVar3 = FUN_003fda50(lVar5);
      *(undefined8 *)(lVar7 + 0x18) = uVar3;
      uVar3 = FUN_003fda50(lVar10);
      *(undefined8 *)(lVar7 + 0x20) = uVar3;
      if (lVar5 == 0) {
        lVar12 = 0;
        if (lVar10 != 0) goto LAB_003fe508;
LAB_003fe788:
        if (0 < lVar12) goto LAB_003fe514;
LAB_003fe794:
        if (lVar10 == 0) goto LAB_003fe7a0;
        lVar5 = *(long *)(lVar10 + 0x28);
      }
      else {
        lVar12 = *(long *)(lVar5 + 0x28);
        if (lVar10 == 0) goto LAB_003fe788;
LAB_003fe508:
        if (lVar12 <= *(long *)(lVar10 + 0x28)) goto LAB_003fe794;
LAB_003fe514:
        if (lVar5 == 0) {
LAB_003fe7a0:
          lVar5 = 0;
        }
        else {
          lVar5 = *(long *)(lVar5 + 0x28);
        }
      }
      *(long *)(lVar7 + 0x28) = lVar5 + 1;
      lVar5 = *(long *)(*(long *)(param_4 + 0x20) + 0x20);
      if (lVar5 != 0) {
        FUN_002ef5d0(lVar5);
      }
      lVar10 = FUN_002ebd50(0x30);
      FUN_002ef5c0(lVar10,1);
      *(undefined8 *)(lVar10 + 8) = param_2;
      *(undefined8 *)(lVar10 + 0x10) = param_3;
      uVar3 = FUN_003fda50(lVar5);
      *(undefined8 *)(lVar10 + 0x18) = uVar3;
      uVar3 = FUN_003fda50(param_5);
      *(undefined8 *)(lVar10 + 0x20) = uVar3;
      if (lVar5 == 0) {
        lVar12 = 0;
        if (param_5 != 0) goto LAB_003fe800;
LAB_003fe824:
        if (0 < lVar12) goto LAB_003fe80c;
LAB_003fe830:
        if (param_5 == 0) goto LAB_003fe83c;
        lVar5 = *(long *)(param_5 + 0x28);
      }
      else {
        lVar12 = *(long *)(lVar5 + 0x28);
        if (param_5 == 0) goto LAB_003fe824;
LAB_003fe800:
        if (lVar12 <= *(long *)(param_5 + 0x28)) goto LAB_003fe830;
LAB_003fe80c:
        if (lVar5 == 0) {
LAB_003fe83c:
          lVar5 = 0;
        }
        else {
          lVar5 = *(long *)(lVar5 + 0x28);
        }
      }
      *(long *)(lVar10 + 0x28) = lVar5 + 1;
      lVar12 = FUN_002ebd50(0x30);
      FUN_002ef5c0(lVar12,1);
      *(undefined8 *)(lVar12 + 8) = uVar1;
      *(undefined8 *)(lVar12 + 0x10) = uVar2;
      uVar1 = FUN_003fda50(lVar7);
      *(undefined8 *)(lVar12 + 0x18) = uVar1;
      uVar1 = FUN_003fda50(lVar10);
      *(undefined8 *)(lVar12 + 0x20) = uVar1;
      uVar8 = *(ulong *)(lVar7 + 0x28);
      if (lVar10 == 0) {
        uVar11 = 0;
      }
      else {
LAB_003fe880:
        uVar11 = *(ulong *)(lVar10 + 0x28);
      }
      if ((long)uVar8 <= (long)uVar11) {
        uVar8 = uVar11;
      }
    }
    else {
      pcVar6 = *(code **)(param_1 + 8);
      if (lVar5 - *(long *)(lVar10 + 0x28) == -1) goto LAB_003fe458;
LAB_003fe1f0:
      uVar1 = (*pcVar6)(*(undefined8 *)(param_4 + 8),param_6);
      uVar2 = (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_4 + 0x10),param_6);
      lVar5 = *(long *)(param_4 + 0x18);
      if (lVar5 != 0) {
        FUN_002ef5d0(lVar5);
      }
      lVar12 = *(long *)(param_4 + 0x20);
      if (lVar12 != 0) {
        FUN_002ef5d0(lVar12);
      }
      lVar10 = FUN_002ebd50(0x30);
      FUN_002ef5c0(lVar10,1);
      *(undefined8 *)(lVar10 + 8) = param_2;
      *(undefined8 *)(lVar10 + 0x10) = param_3;
      uVar3 = FUN_003fda50(lVar12);
      *(undefined8 *)(lVar10 + 0x18) = uVar3;
      uVar3 = FUN_003fda50(param_5);
      *(undefined8 *)(lVar10 + 0x20) = uVar3;
      if (lVar12 == 0) {
        lVar7 = 0;
        if (param_5 != 0) goto LAB_003fe270;
LAB_003fe568:
        if (0 < lVar7) goto LAB_003fe27c;
LAB_003fe574:
        if (param_5 == 0) goto LAB_003fe580;
        lVar12 = *(long *)(param_5 + 0x28);
      }
      else {
        lVar7 = *(long *)(lVar12 + 0x28);
        if (param_5 == 0) goto LAB_003fe568;
LAB_003fe270:
        if (lVar7 <= *(long *)(param_5 + 0x28)) goto LAB_003fe574;
LAB_003fe27c:
        if (lVar12 == 0) {
LAB_003fe580:
          lVar12 = 0;
        }
        else {
          lVar12 = *(long *)(lVar12 + 0x28);
        }
      }
      *(long *)(lVar10 + 0x28) = lVar12 + 1;
      lVar12 = FUN_002ebd50(0x30);
      FUN_002ef5c0(lVar12,1);
      *(undefined8 *)(lVar12 + 8) = uVar1;
      *(undefined8 *)(lVar12 + 0x10) = uVar2;
      uVar1 = FUN_003fda50(lVar5);
      *(undefined8 *)(lVar12 + 0x18) = uVar1;
      uVar1 = FUN_003fda50(lVar10);
      *(undefined8 *)(lVar12 + 0x20) = uVar1;
      if (lVar5 != 0) {
        uVar8 = *(ulong *)(lVar5 + 0x28);
        goto LAB_003fe880;
      }
      uVar8 = *(ulong *)(lVar10 + 0x28) &
              ((long)*(ulong *)(lVar10 + 0x28) >> 0x3f ^ 0xffffffffffffffffU);
    }
    *(ulong *)(lVar12 + 0x28) = uVar8 + 1;
    param_5 = param_4;
  }
  FUN_003fddd0(param_1,param_5,param_6);
LAB_003fe8a4:
  FUN_003fda50(lVar12);
  return;
}


