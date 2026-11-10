/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0085e200; name: FUN_0085e200
 */


void FUN_0085e200(ushort *param_1,ulong param_2)

{
  ushort uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
  *param_1 = (ushort)param_2;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[0xc] = 0xffff;
  param_1[0xd] = 0xffff;
  param_1[0xe] = 0xffff;
  param_1[0xf] = 0xffff;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  uVar2 = FUN_007e336c();
  uVar6 = param_2 & 0xffff;
  lVar3 = FUN_0081a750(uVar6 << 3,uVar2);
  if (lVar3 == 0) {
    uVar6 = (ulong)*param_1;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
  }
  else {
    if ((param_2 & 0xffff) != 0) {
      param_2 = param_2 & 3;
      if (uVar6 - 1 < 3) {
        lVar5 = 0;
      }
      else {
        lVar5 = 0;
        puVar4 = (undefined8 *)(lVar3 + 0x10);
        do {
          lVar5 = lVar5 + 4;
          puVar4[-2] = 0;
          puVar4[-1] = 0;
          *puVar4 = 0;
          puVar4[1] = 0;
          puVar4 = puVar4 + 4;
        } while (uVar6 - param_2 != lVar5);
      }
      if (param_2 != 0) {
        puVar4 = (undefined8 *)(lVar3 + lVar5 * 8);
        do {
          param_2 = param_2 - 1;
          *puVar4 = 0;
          puVar4 = puVar4 + 1;
        } while (param_2 != 0);
      }
    }
    *(long *)(param_1 + 4) = lVar3;
    if (*param_1 == 0) {
      uVar6 = 0;
    }
    else {
      uVar7 = 0;
      do {
        uVar2 = FUN_007e336c();
        puVar4 = (undefined8 *)FUN_0081a750(0x60,uVar2);
        if (puVar4 != (undefined8 *)0x0) {
          *puVar4 = 0xffffffffffffffff;
          puVar4[1] = 0;
          *(undefined4 *)(puVar4 + 2) = 0;
          FUN_007e3400(puVar4 + 3);
          FUN_007e3400(puVar4 + 7);
          *(undefined2 *)(puVar4 + 0xb) = 0;
        }
        *(undefined8 **)(*(long *)(param_1 + 4) + uVar7 * 8) = puVar4;
        uVar6 = (ulong)*param_1;
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar6);
    }
  }
  uVar2 = FUN_007e336c();
  lVar3 = FUN_0081a750(uVar6 << 3,uVar2);
  if (lVar3 == 0) {
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    puVar4 = *(undefined8 **)(param_1 + 4);
    *(undefined1 *)(param_1 + 8) = 0;
    param_1[0xc] = 0xffff;
    param_1[0xd] = 0xffff;
    param_1[0xe] = 0xffff;
    param_1[0xf] = 0xffff;
  }
  else {
    if ((int)uVar6 != 0) {
      uVar7 = uVar6 & 3;
      if (uVar6 - 1 < 3) {
        lVar5 = 0;
      }
      else {
        lVar5 = 0;
        puVar4 = (undefined8 *)(lVar3 + 0x10);
        do {
          lVar5 = lVar5 + 4;
          puVar4[-2] = 0;
          puVar4[-1] = 0;
          *puVar4 = 0;
          puVar4[1] = 0;
          puVar4 = puVar4 + 4;
        } while (uVar6 - uVar7 != lVar5);
      }
      if (uVar7 != 0) {
        puVar4 = (undefined8 *)(lVar3 + lVar5 * 8);
        do {
          uVar7 = uVar7 - 1;
          *puVar4 = 0;
          puVar4 = puVar4 + 1;
        } while (uVar7 != 0);
      }
    }
    *(long *)(param_1 + 0x14) = lVar3;
    uVar1 = *param_1;
    uVar6 = (ulong)uVar1;
    if (uVar6 != 0) {
      uVar7 = uVar6 & 3;
      if (uVar6 - 1 < 3) {
        lVar5 = 0;
      }
      else {
        lVar5 = 0;
        puVar4 = (undefined8 *)(lVar3 + 0x10);
        do {
          lVar5 = lVar5 + 4;
          puVar4[-2] = 0xffffffffffffffff;
          puVar4[-1] = 0xffffffffffffffff;
          *puVar4 = 0xffffffffffffffff;
          puVar4[1] = 0xffffffffffffffff;
          puVar4 = puVar4 + 4;
        } while (uVar6 - uVar7 != lVar5);
      }
      if ((uVar1 & 3) != 0) {
        puVar4 = (undefined8 *)(lVar3 + lVar5 * 8);
        do {
          uVar7 = uVar7 - 1;
          *puVar4 = 0xffffffffffffffff;
          puVar4 = puVar4 + 1;
        } while (uVar7 != 0);
      }
    }
    puVar4 = *(undefined8 **)(param_1 + 4);
    *(undefined1 *)(param_1 + 8) = 0;
    param_1[0xc] = 0xffff;
    param_1[0xd] = 0xffff;
    param_1[0xe] = 0xffff;
    param_1[0xf] = 0xffff;
  }
  if (puVar4 != (undefined8 *)0x0) {
    uVar6 = (ulong)*param_1;
    if (*param_1 != 0) {
      uVar7 = 0;
      puVar4 = (undefined8 *)*puVar4;
      while( true ) {
        if (puVar4 != (undefined8 *)0x0) {
          *puVar4 = 0xffffffffffffffff;
          puVar4[1] = 0;
          *(undefined4 *)(puVar4 + 2) = 0;
          FUN_007e4488(puVar4 + 3);
          FUN_007e4488(puVar4 + 7);
          *(undefined2 *)(puVar4 + 0xb) = 0;
          uVar6 = (ulong)*param_1;
        }
        uVar7 = uVar7 + 1;
        if (uVar6 <= uVar7) break;
        puVar4 = *(undefined8 **)(*(long *)(param_1 + 4) + uVar7 * 8);
      }
      lVar3 = *(long *)(param_1 + 0x14);
    }
  }
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  if (lVar3 != 0) {
    uVar1 = *param_1;
    uVar6 = (ulong)uVar1;
    if (uVar6 != 0) {
      uVar7 = uVar6 & 3;
      if (uVar6 - 1 < 3) {
        lVar5 = 0;
      }
      else {
        lVar5 = 0;
        puVar4 = (undefined8 *)(lVar3 + 0x10);
        do {
          lVar5 = lVar5 + 4;
          puVar4[-2] = 0xffffffffffffffff;
          puVar4[-1] = 0xffffffffffffffff;
          *puVar4 = 0xffffffffffffffff;
          puVar4[1] = 0xffffffffffffffff;
          puVar4 = puVar4 + 4;
        } while (uVar6 - uVar7 != lVar5);
      }
      if ((uVar1 & 3) != 0) {
        puVar4 = (undefined8 *)(lVar3 + lVar5 * 8);
        do {
          uVar7 = uVar7 - 1;
          *puVar4 = 0xffffffffffffffff;
          puVar4 = puVar4 + 1;
        } while (uVar7 != 0);
      }
    }
  }
  return;
}


