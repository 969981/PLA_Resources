/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032e721c; name: FUN_032e721c
 */


undefined8 FUN_032e721c(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  undefined1 auVar2 [16];
  int iVar3;
  ulong uVar4;
  bool bVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong *puVar8;
  undefined8 uVar9;
  undefined1 local_c8 [16];
  ulong local_b8;
  undefined1 auStack_b0 [128];
  undefined1 *local_28;
  
  iVar3 = FUN_032c42d0(param_2,auStack_b0,0x80,0x80);
  uVar9 = 0x80040200;
  if (-1 < iVar3) {
    local_28 = auStack_b0;
    local_c8 = FUN_032e0ab0(&local_28,&DAT_0434b498);
    puVar8 = local_c8._8_8_;
    if (puVar8 == (ulong *)0x0) {
      uVar7 = 0;
      local_b8 = 0;
      auVar2 = ZEXT816(0);
    }
    else {
      puVar6 = puVar8;
      do {
        uVar7 = *puVar6;
        if (((uint)uVar7 >> 2 & 1) != 0) {
          uVar7 = puVar6[(uVar7 >> 1 & 1) + (uVar7 & 1) + 2];
          if ((uVar7 & 1) == 0) goto LAB_032e72a8;
          FUN_032e0c28(uVar7 & 0xfffffffffffffffe);
          bVar5 = false;
          goto LAB_032e72ac;
        }
        puVar6 = (ulong *)puVar6[1];
      } while (puVar6 != (ulong *)0x0);
      uVar7 = 0;
LAB_032e72a8:
      bVar5 = true;
LAB_032e72ac:
      local_b8 = 0;
      if ((*puVar8 & 1) == 0) {
        puVar8 = (ulong *)puVar8[1];
        bVar1 = (byte)*puVar8;
        while ((bVar1 & 1) == 0) {
          puVar8 = (ulong *)puVar8[1];
          bVar1 = (byte)*puVar8;
        }
      }
      auVar2 = ZEXT816(0);
      if ((puVar8[2] & 0x1f) == 3) {
        if (!bVar5) {
          FUN_032e0c28(uVar7 & 0xfffffffffffffffe);
          if ((local_b8 & 1) != 0) {
            FUN_032e0c40(local_b8 & 0xfffffffffffffffe);
          }
        }
        local_b8 = uVar7;
        auVar2 = local_c8;
      }
    }
    local_c8 = auVar2;
    uVar4 = FUN_0331fa60(param_1,local_c8);
    if ((local_b8 & 1) != 0) {
      FUN_032e0c40(local_b8 & 0xfffffffffffffffe);
    }
    if ((uVar7 & 1) != 0) {
      FUN_032e0c40(uVar7 & 0xfffffffffffffffe);
    }
    uVar9 = 0;
    if ((uVar4 & 1) == 0) {
      uVar9 = 0x80040200;
    }
  }
  return uVar9;
}


