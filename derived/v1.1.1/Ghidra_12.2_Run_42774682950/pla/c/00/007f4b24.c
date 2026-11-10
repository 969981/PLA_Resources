/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007f4b24; name: FUN_007f4b24
 */


void FUN_007f4b24(undefined8 param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *plVar3;
  ushort uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined1 *puVar9;
  ulong uVar10;
  void *__s;
  undefined4 local_50 [4];
  undefined4 local_38 [2];
  
  if (param_3 == 0) {
    local_50[0] = 0x10407;
    goto LAB_007f5184;
  }
  *(undefined2 *)((long)param_2 + 0x5a) = *(undefined2 *)(param_3 + 8);
  puVar1 = PTR_DAT_043773c0;
  uVar4 = *(ushort *)(*(long *)PTR_DAT_043773c0 + 0x50);
  uVar10 = (ulong)uVar4;
  *(ushort *)((long)param_2 + 0x114e) = uVar4;
  uVar2 = FUN_007e336c();
  plVar3 = (long *)FUN_0081a750(uVar10 << 3,uVar2);
  if ((plVar3 != (long *)0x0) && (uVar4 != 0)) {
    uVar5 = uVar10 & 3;
    if (uVar10 - 1 < 3) {
      lVar6 = 0;
    }
    else {
      lVar6 = 0;
      plVar7 = plVar3 + 2;
      do {
        lVar6 = lVar6 + 4;
        plVar7[-2] = 0;
        plVar7[-1] = 0;
        *plVar7 = 0;
        plVar7[1] = 0;
        plVar7 = plVar7 + 4;
      } while (uVar10 - uVar5 != lVar6);
    }
    if ((uVar4 & 3) != 0) {
      plVar7 = plVar3 + lVar6;
      do {
        uVar5 = uVar5 - 1;
        *plVar7 = 0;
        plVar7 = plVar7 + 1;
      } while (uVar5 != 0);
    }
  }
  uVar10 = (ulong)*(ushort *)((long)param_2 + 0x114e);
  param_2[0x11] = (long)plVar3;
  if (*(ushort *)((long)param_2 + 0x114e) != 0) {
    uVar5 = 0;
    lVar6 = *plVar3;
    while( true ) {
      if (lVar6 == 0) {
        uVar2 = (**(code **)(*param_2 + 0x230))(param_2);
        *(undefined8 *)(param_2[0x11] + uVar5 * 8) = uVar2;
        lVar6 = *(long *)(param_2[0x11] + uVar5 * 8);
        *(undefined2 *)(lVar6 + 8) = 0xff00;
        *(undefined1 *)(lVar6 + 10) = 0;
        FUN_007f0d58(lVar6 + 0x10);
        uVar10 = (ulong)*(ushort *)((long)param_2 + 0x114e);
      }
      uVar5 = uVar5 + 1;
      if (uVar10 <= uVar5) break;
      lVar6 = *(long *)(param_2[0x11] + uVar5 * 8);
    }
  }
  uVar2 = FUN_007e336c();
  plVar3 = (long *)FUN_0081a750(uVar10 << 3,uVar2);
  if ((plVar3 != (long *)0x0) && ((int)uVar10 != 0)) {
    uVar5 = uVar10 & 3;
    if (uVar10 - 1 < 3) {
      lVar6 = 0;
    }
    else {
      lVar6 = 0;
      plVar7 = plVar3 + 2;
      do {
        lVar6 = lVar6 + 4;
        plVar7[-2] = 0;
        plVar7[-1] = 0;
        *plVar7 = 0;
        plVar7[1] = 0;
        plVar7 = plVar7 + 4;
      } while (uVar10 - uVar5 != lVar6);
    }
    if (uVar5 != 0) {
      plVar7 = plVar3 + lVar6;
      do {
        uVar5 = uVar5 - 1;
        *plVar7 = 0;
        plVar7 = plVar7 + 1;
      } while (uVar5 != 0);
    }
  }
  uVar4 = *(ushort *)((long)param_2 + 0x114e);
  param_2[0x12] = (long)plVar3;
  if (uVar4 != 0) {
    uVar10 = 0;
    lVar6 = *plVar3;
    while( true ) {
      if (lVar6 == 0) {
        uVar2 = (**(code **)(*param_2 + 0x230))(param_2);
        *(undefined8 *)(param_2[0x12] + uVar10 * 8) = uVar2;
        lVar6 = *(long *)(param_2[0x12] + uVar10 * 8);
        *(undefined2 *)(lVar6 + 8) = 0xff00;
        *(undefined1 *)(lVar6 + 10) = 0;
        FUN_007f0d58(lVar6 + 0x10);
        uVar4 = *(ushort *)((long)param_2 + 0x114e);
      }
      uVar10 = uVar10 + 1;
      if (uVar4 <= uVar10) break;
      lVar6 = *(long *)(param_2[0x12] + uVar10 * 8);
    }
  }
  if (param_2[0x23] == 0) {
    lVar6 = (**(code **)(*param_2 + 0x1f0))(param_2,&DAT_039bc59f);
    param_2[0x23] = lVar6;
    if (param_2[0x24] != 0) goto LAB_007f4d38;
LAB_007f4d70:
    lVar6 = (**(code **)(*param_2 + 0x1f0))(param_2,&DAT_03930d4e);
    param_2[0x24] = lVar6;
    if (param_2[0x25] != 0) goto LAB_007f4d40;
LAB_007f4d94:
    lVar6 = (**(code **)(*param_2 + 0x1f0))(param_2,&DAT_0398664a);
    param_2[0x25] = lVar6;
    lVar6 = param_2[0x4e];
  }
  else {
    if (param_2[0x24] == 0) goto LAB_007f4d70;
LAB_007f4d38:
    if (param_2[0x25] == 0) goto LAB_007f4d94;
LAB_007f4d40:
    lVar6 = param_2[0x4e];
  }
  if ((lVar6 == 0) && (uVar10 = (**(code **)(*param_2 + 0x178))(param_2), (uVar10 & 1) != 0)) {
    lVar6 = (**(code **)(*param_2 + 0x1f0))(param_2,&DAT_038fbedb);
    param_2[0x4e] = lVar6;
  }
  if (param_2[0x4f] == 0) {
    lVar6 = (**(code **)(*param_2 + 0x1f0))(param_2,&DAT_038e7639);
    param_2[0x4f] = lVar6;
    if (param_2[0x26] != 0) goto LAB_007f4df8;
LAB_007f4eb0:
    uVar10 = (**(code **)(*param_2 + 0xe8))(param_2);
    uVar5 = uVar10 & 0xffffffff;
    uVar2 = FUN_007e336c();
    lVar6 = FUN_0081a750(uVar5,uVar2);
    if (((int)uVar10 != 0) && (lVar6 != 0)) {
      uVar10 = uVar10 & 3;
      if (uVar5 - 1 < 3) {
        lVar8 = 0;
      }
      else {
        lVar8 = 0;
        do {
          *(undefined4 *)(lVar6 + lVar8) = 0;
          lVar8 = lVar8 + 4;
        } while (uVar5 - uVar10 != lVar8);
      }
      if (uVar10 != 0) {
        puVar9 = (undefined1 *)(lVar6 + lVar8);
        do {
          uVar10 = uVar10 - 1;
          *puVar9 = 0;
          puVar9 = puVar9 + 1;
        } while (uVar10 != 0);
      }
    }
    param_2[0x26] = lVar6;
    if (param_2[0x27] != 0) goto LAB_007f4e00;
LAB_007f4f34:
    lVar6 = (**(code **)(*param_2 + 0x290))(param_2);
    param_2[0x27] = lVar6;
    if (param_2[0x28] != 0) goto LAB_007f4e08;
LAB_007f4f50:
    lVar6 = (**(code **)(*param_2 + 0x260))(param_2);
    param_2[0x28] = lVar6;
    if (param_2[0x29] != 0) goto LAB_007f4e10;
LAB_007f4f6c:
    lVar6 = (**(code **)(*param_2 + 0x270))(param_2);
    param_2[0x29] = lVar6;
    if (param_2[0x2a] != 0) goto LAB_007f4e18;
LAB_007f4f88:
    lVar6 = (**(code **)(*param_2 + 0x2a0))(param_2);
    param_2[0x2a] = lVar6;
    if (param_2[0x2b] != 0) goto LAB_007f4e20;
LAB_007f4fa4:
    lVar6 = (**(code **)(*param_2 + 0x2b0))(param_2);
    param_2[0x2b] = lVar6;
    if (param_2[0x2c] != 0) goto LAB_007f4e28;
LAB_007f4fc0:
    lVar6 = (**(code **)(*param_2 + 0x280))(param_2);
    param_2[0x2c] = lVar6;
    if (param_2[0x2d] != 0) goto LAB_007f4e30;
LAB_007f4fdc:
    lVar6 = (**(code **)(*param_2 + 0x2c0))(param_2);
    param_2[0x2d] = lVar6;
    if (param_2[0x2e] != 0) goto LAB_007f4e38;
LAB_007f4ff8:
    lVar6 = (**(code **)(*param_2 + 0x2d0))(param_2);
    param_2[0x2e] = lVar6;
    if (param_2[0x2f] != 0) goto LAB_007f4e40;
LAB_007f5014:
    lVar6 = (**(code **)(*param_2 + 0x2e0))(param_2);
    param_2[0x2f] = lVar6;
    if (param_2[0x30] != 0) goto LAB_007f4e48;
LAB_007f5030:
    lVar6 = (**(code **)(*param_2 + 0x250))(param_2);
    param_2[0x30] = lVar6;
    if (param_2[0x22c] != 0) goto LAB_007f4e50;
LAB_007f504c:
    lVar6 = (**(code **)(*param_2 + 0x300))(param_2);
    param_2[0x22c] = lVar6;
    if (param_2[0x22b] != 0) goto LAB_007f4e58;
LAB_007f5068:
    lVar6 = (**(code **)(*param_2 + 0x2f0))(param_2);
    param_2[0x22b] = lVar6;
    if (param_2[0x31] != 0) goto LAB_007f4e60;
LAB_007f5084:
    lVar6 = (**(code **)(*param_2 + 0x310))(param_2);
    param_2[0x31] = lVar6;
    if (param_2[0x32] != 0) goto LAB_007f4e68;
LAB_007f50a0:
    lVar6 = (**(code **)(*param_2 + 0x310))(param_2);
    param_2[0x32] = lVar6;
    if (param_2[0x37] != 0) goto LAB_007f4e70;
LAB_007f50bc:
    lVar6 = (**(code **)(*param_2 + 800))(param_2);
    param_2[0x37] = lVar6;
    if (param_2[0x43] != 0) goto LAB_007f4e78;
LAB_007f50d8:
    lVar6 = (**(code **)(*param_2 + 0x240))(param_2);
    param_2[0x43] = lVar6;
    if (param_2[0x22e] != 0) goto LAB_007f4e80;
LAB_007f50f4:
    uVar2 = FUN_007e336c();
    lVar6 = FUN_0081a750(0x20,uVar2);
    if (lVar6 != 0) {
      FUN_007f0ce0(lVar6);
    }
    param_2[0x22e] = lVar6;
    lVar6 = param_2[0x22f];
  }
  else {
    if (param_2[0x26] == 0) goto LAB_007f4eb0;
LAB_007f4df8:
    if (param_2[0x27] == 0) goto LAB_007f4f34;
LAB_007f4e00:
    if (param_2[0x28] == 0) goto LAB_007f4f50;
LAB_007f4e08:
    if (param_2[0x29] == 0) goto LAB_007f4f6c;
LAB_007f4e10:
    if (param_2[0x2a] == 0) goto LAB_007f4f88;
LAB_007f4e18:
    if (param_2[0x2b] == 0) goto LAB_007f4fa4;
LAB_007f4e20:
    if (param_2[0x2c] == 0) goto LAB_007f4fc0;
LAB_007f4e28:
    if (param_2[0x2d] == 0) goto LAB_007f4fdc;
LAB_007f4e30:
    if (param_2[0x2e] == 0) goto LAB_007f4ff8;
LAB_007f4e38:
    if (param_2[0x2f] == 0) goto LAB_007f5014;
LAB_007f4e40:
    if (param_2[0x30] == 0) goto LAB_007f5030;
LAB_007f4e48:
    if (param_2[0x22c] == 0) goto LAB_007f504c;
LAB_007f4e50:
    if (param_2[0x22b] == 0) goto LAB_007f5068;
LAB_007f4e58:
    if (param_2[0x31] == 0) goto LAB_007f5084;
LAB_007f4e60:
    if (param_2[0x32] == 0) goto LAB_007f50a0;
LAB_007f4e68:
    if (param_2[0x37] == 0) goto LAB_007f50bc;
LAB_007f4e70:
    if (param_2[0x43] == 0) goto LAB_007f50d8;
LAB_007f4e78:
    if (param_2[0x22e] == 0) goto LAB_007f50f4;
LAB_007f4e80:
    lVar6 = param_2[0x22f];
  }
  if (lVar6 == 0) {
    uVar2 = FUN_007e336c();
    lVar6 = FUN_0081a750(0x20,uVar2);
    if (lVar6 != 0) {
      FUN_007f0ce0(lVar6);
    }
    param_2[0x22f] = lVar6;
  }
  FUN_008551bc(*(undefined8 *)puVar1);
  *(undefined1 *)(param_2 + 0x46) = 0;
  FUN_007f51b8(param_2);
  __s = (void *)param_2[0x26];
  uVar10 = (**(code **)(*param_2 + 0xe8))(param_2);
  memset(__s,0,uVar10 & 0xffffffff);
  local_50[0] = 0;
LAB_007f5184:
  local_38[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_38);
  FUN_007ee578(param_1,local_50);
  return;
}


