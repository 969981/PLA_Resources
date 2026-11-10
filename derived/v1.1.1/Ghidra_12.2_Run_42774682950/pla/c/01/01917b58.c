/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01917b58; name: FUN_01917b58
 */


void FUN_01917b58(long param_1)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  uVar3 = *(ulong *)(param_1 + 0xb0);
  lVar4 = *(long *)(param_1 + 0x78);
  plVar2 = (long *)(lVar4 + (uVar3 >> 5 & 0x7fffffffffffff8));
  if (*(long *)(param_1 + 0x80) != lVar4) {
    auVar5._8_8_ = *plVar2 + (uVar3 & 0xff) * 0x10;
    auVar5._0_8_ = plVar2;
    goto LAB_01917c64;
  }
  auVar5._8_8_ = 0;
  auVar5._0_8_ = plVar2;
  while (auVar5._8_8_ != 0) {
    while( true ) {
      plVar2 = auVar5._0_8_;
      lVar4 = *auVar5._8_8_;
      if ((lVar4 == 0) || (*(int *)(lVar4 + 0xc) == 0)) {
        auVar5 = FUN_01919bf4(param_1 + 0x70,plVar2);
      }
      else {
        plVar1 = auVar5._8_8_ + 2;
        auVar5._8_8_ = plVar1;
        auVar5._0_8_ = plVar2;
        if ((long)plVar1 - *plVar2 == 0x1000) {
          auVar5._8_8_ = plVar2[1];
          auVar5._0_8_ = plVar2 + 1;
        }
      }
      uVar3 = *(ulong *)(param_1 + 0xb0);
      lVar4 = *(long *)(param_1 + 0x78);
      if (*(long *)(param_1 + 0x80) == lVar4) break;
LAB_01917c64:
      uVar3 = *(long *)(param_1 + 0xb8) + uVar3;
      if (auVar5._8_8_ ==
          *(long *)(lVar4 + (uVar3 >> 5 & 0x7fffffffffffff8)) + (uVar3 & 0xff) * 0x10)
      goto LAB_01917ba0;
    }
  }
LAB_01917ba0:
  uVar3 = *(ulong *)(param_1 + 0x130);
  lVar4 = *(long *)(param_1 + 0xf8);
  plVar2 = (long *)(lVar4 + (uVar3 >> 5 & 0x7fffffffffffff8));
  if (*(long *)(param_1 + 0x100) != lVar4) {
    auVar6._8_8_ = *plVar2 + (uVar3 & 0xff) * 0x10;
    auVar6._0_8_ = plVar2;
    goto LAB_01917cd0;
  }
  auVar6._8_8_ = 0;
  auVar6._0_8_ = plVar2;
  while (auVar6._8_8_ != 0) {
    while( true ) {
      plVar2 = auVar6._0_8_;
      lVar4 = *auVar6._8_8_;
      if ((lVar4 == 0) || (*(int *)(lVar4 + 0xc) == 0)) {
        auVar6 = FUN_01919bf4(param_1 + 0xf0,plVar2);
      }
      else {
        plVar1 = auVar6._8_8_ + 2;
        auVar6._8_8_ = plVar1;
        auVar6._0_8_ = plVar2;
        if ((long)plVar1 - *plVar2 == 0x1000) {
          auVar6._8_8_ = plVar2[1];
          auVar6._0_8_ = plVar2 + 1;
        }
      }
      uVar3 = *(ulong *)(param_1 + 0x130);
      lVar4 = *(long *)(param_1 + 0xf8);
      if (*(long *)(param_1 + 0x100) == lVar4) break;
LAB_01917cd0:
      uVar3 = *(long *)(param_1 + 0x138) + uVar3;
      if (auVar6._8_8_ ==
          *(long *)(lVar4 + (uVar3 >> 5 & 0x7fffffffffffff8)) + (uVar3 & 0xff) * 0x10)
      goto LAB_01917bd8;
    }
  }
LAB_01917bd8:
  uVar3 = *(ulong *)(param_1 + 0x1b0);
  lVar4 = *(long *)(param_1 + 0x178);
  plVar2 = (long *)(lVar4 + (uVar3 >> 5 & 0x7fffffffffffff8));
  if (*(long *)(param_1 + 0x180) != lVar4) {
    auVar7._8_8_ = *plVar2 + (uVar3 & 0xff) * 0x10;
    auVar7._0_8_ = plVar2;
    goto LAB_01917d3c;
  }
  auVar7._8_8_ = 0;
  auVar7._0_8_ = plVar2;
  while (auVar7._8_8_ != 0) {
    while( true ) {
      plVar2 = auVar7._0_8_;
      lVar4 = *auVar7._8_8_;
      if ((lVar4 == 0) || (*(int *)(lVar4 + 0xc) == 0)) {
        auVar7 = FUN_01919bf4(param_1 + 0x170,plVar2);
      }
      else {
        plVar1 = auVar7._8_8_ + 2;
        auVar7._8_8_ = plVar1;
        auVar7._0_8_ = plVar2;
        if ((long)plVar1 - *plVar2 == 0x1000) {
          auVar7._8_8_ = plVar2[1];
          auVar7._0_8_ = plVar2 + 1;
        }
      }
      uVar3 = *(ulong *)(param_1 + 0x1b0);
      lVar4 = *(long *)(param_1 + 0x178);
      if (*(long *)(param_1 + 0x180) == lVar4) break;
LAB_01917d3c:
      uVar3 = *(long *)(param_1 + 0x1b8) + uVar3;
      if (auVar7._8_8_ ==
          *(long *)(lVar4 + (uVar3 >> 5 & 0x7fffffffffffff8)) + (uVar3 & 0xff) * 0x10)
      goto LAB_01917c10;
    }
  }
LAB_01917c10:
  uVar3 = *(ulong *)(param_1 + 0x230);
  lVar4 = *(long *)(param_1 + 0x1f8);
  plVar2 = (long *)(lVar4 + (uVar3 >> 5 & 0x7fffffffffffff8));
  if (*(long *)(param_1 + 0x200) != lVar4) {
    auVar8._8_8_ = *plVar2 + (uVar3 & 0xff) * 0x10;
    auVar8._0_8_ = plVar2;
    goto LAB_01917da8;
  }
  auVar8._8_8_ = 0;
  auVar8._0_8_ = plVar2;
  do {
    if (auVar8._8_8_ == 0) {
      return;
    }
    while( true ) {
      plVar2 = auVar8._0_8_;
      lVar4 = *auVar8._8_8_;
      if ((lVar4 == 0) || (*(int *)(lVar4 + 0xc) == 0)) {
        auVar8 = FUN_01919bf4(param_1 + 0x1f0,plVar2);
      }
      else {
        plVar1 = auVar8._8_8_ + 2;
        auVar8._8_8_ = plVar1;
        auVar8._0_8_ = plVar2;
        if ((long)plVar1 - *plVar2 == 0x1000) {
          auVar8._8_8_ = plVar2[1];
          auVar8._0_8_ = plVar2 + 1;
        }
      }
      uVar3 = *(ulong *)(param_1 + 0x230);
      lVar4 = *(long *)(param_1 + 0x1f8);
      if (*(long *)(param_1 + 0x200) == lVar4) break;
LAB_01917da8:
      uVar3 = *(long *)(param_1 + 0x238) + uVar3;
      if (auVar8._8_8_ ==
          *(long *)(lVar4 + (uVar3 >> 5 & 0x7fffffffffffff8)) + (uVar3 & 0xff) * 0x10) {
        return;
      }
    }
  } while( true );
}


