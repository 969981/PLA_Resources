/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0033f438; name: FUN_0033f438
 */


undefined1  [16] FUN_0033f438(long param_1,long *param_2,byte *param_3)

{
  byte bVar1;
  bool bVar2;
  long *plVar3;
  undefined1 auVar4 [16];
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  byte *local_48;
  
  if (*param_2 == 0) {
LAB_0033f4f0:
    bVar2 = true;
    lVar6 = param_2[1];
    puVar5 = PTR_LAB_04373088;
joined_r0x0033f4f8:
    PTR_LAB_04373088 = puVar5;
    if (lVar6 != 0) {
      if (*(long *)(param_1 + 0x58) != 0) {
        plVar12 = *(long **)(param_1 + 0x50);
        if (plVar12 != (long *)0x0) {
          bVar1 = *(byte *)(plVar12 + 2);
          plVar3 = (long *)*plVar12;
          while( true ) {
            if ((bVar1 & 1) != 0) {
              FUN_002e2ea0(puVar5,plVar12[4]);
            }
            FUN_002e2ea0(puVar5,plVar12);
            if (plVar3 == (long *)0x0) break;
            bVar1 = *(byte *)(plVar3 + 2);
            plVar12 = plVar3;
            plVar3 = (long *)*plVar3;
          }
        }
        uVar8 = *(ulong *)(param_1 + 0x48);
        *(undefined8 *)(param_1 + 0x50) = 0;
        if (uVar8 != 0) {
          uVar7 = uVar8 & 3;
          if (uVar8 - 1 < 3) {
            lVar6 = 0;
          }
          else {
            lVar6 = 0;
            do {
              lVar9 = lVar6 * 8;
              lVar6 = lVar6 + 4;
              *(undefined8 *)(*(long *)(param_1 + 0x40) + lVar9) = 0;
              *(undefined8 *)(*(long *)(param_1 + 0x40) + lVar9 + 8) = 0;
              *(undefined8 *)(*(long *)(param_1 + 0x40) + lVar9 + 0x10) = 0;
              *(undefined8 *)(*(long *)(param_1 + 0x40) + lVar9 + 0x18) = 0;
            } while (uVar8 - uVar7 != lVar6);
          }
          if (uVar7 != 0) {
            lVar6 = lVar6 << 3;
            do {
              *(undefined8 *)(*(long *)(param_1 + 0x40) + lVar6) = 0;
              uVar7 = uVar7 - 1;
              lVar6 = lVar6 + 8;
            } while (uVar7 != 0);
          }
        }
        *(undefined8 *)(param_1 + 0x58) = 0;
      }
      puVar5 = PTR_LAB_04373088;
      if (*(long *)(param_1 + 0x30) != 0) {
        plVar12 = *(long **)(param_1 + 0x28);
        if (plVar12 != (long *)0x0) {
          bVar1 = *(byte *)(plVar12 + 2);
          plVar3 = (long *)*plVar12;
          while( true ) {
            if ((bVar1 & 1) != 0) {
              FUN_002e2ea0(puVar5,plVar12[4]);
            }
            FUN_002e2ea0(puVar5,plVar12);
            if (plVar3 == (long *)0x0) break;
            bVar1 = *(byte *)(plVar3 + 2);
            plVar12 = plVar3;
            plVar3 = (long *)*plVar3;
          }
        }
        uVar8 = *(ulong *)(param_1 + 0x20);
        *(undefined8 *)(param_1 + 0x28) = 0;
        if (uVar8 != 0) {
          uVar7 = uVar8 & 3;
          if (uVar8 - 1 < 3) {
            lVar6 = 0;
          }
          else {
            lVar6 = 0;
            do {
              lVar9 = lVar6 * 8;
              lVar6 = lVar6 + 4;
              *(undefined8 *)(*(long *)(param_1 + 0x18) + lVar9) = 0;
              *(undefined8 *)(*(long *)(param_1 + 0x18) + lVar9 + 8) = 0;
              *(undefined8 *)(*(long *)(param_1 + 0x18) + lVar9 + 0x10) = 0;
              *(undefined8 *)(*(long *)(param_1 + 0x18) + lVar9 + 0x18) = 0;
            } while (uVar8 - uVar7 != lVar6);
          }
          if (uVar7 != 0) {
            lVar6 = lVar6 << 3;
            do {
              *(undefined8 *)(*(long *)(param_1 + 0x18) + lVar6) = 0;
              uVar7 = uVar7 - 1;
              lVar6 = lVar6 + 8;
            } while (uVar7 != 0);
          }
        }
        *(undefined8 *)(param_1 + 0x30) = 0;
      }
    }
    local_48 = *(byte **)(param_3 + 0x10);
    if ((*param_3 & 1) == 0) {
      local_48 = param_3 + 1;
    }
                    /* try { // try from 0033f684 to 0033f68f has its CatchHandler @ 0033f7dc */
    lVar6 = FUN_00364a2c(param_1 + 0x130,&local_48);
    if (lVar6 == 0) {
      uVar8 = 0;
      uVar10 = 0;
      lVar6 = param_2[3];
joined_r0x0033f6b0:
      if (lVar6 != 0) {
                    /* try { // try from 0033f6cc to 0033f6d3 has its CatchHandler @ 0033f7d0 */
        auVar13 = FUN_0033f438(*(undefined8 *)(lVar6 + 0x20),lVar6,param_3);
        uVar10 = auVar13._8_8_;
        uVar8 = auVar13._0_8_ >> 0x20;
        if (auVar13._0_4_ != 0) goto joined_r0x0033f734;
      }
                    /* try { // try from 0033f6e4 to 0033f6ef has its CatchHandler @ 0033f7dc */
      uVar7 = FUN_0033f7f4(param_2,param_3);
      if ((uVar7 & 1) == 0) {
        auVar4._8_8_ = 0;
        auVar4._0_8_ = uVar10;
        auVar13 = auVar4 << 0x40;
      }
      else {
        local_48 = param_3 + 1;
        if ((*param_3 & 1) != 0) {
          local_48 = *(byte **)(param_3 + 0x10);
        }
                    /* try { // try from 0033f70c to 0033f717 has its CatchHandler @ 0033f7c4 */
        lVar6 = FUN_00364a2c(param_1 + 0x130,&local_48);
        if (lVar6 == 0) {
          uVar8 = 0;
          uVar11 = 0;
        }
        else {
          uVar8 = *(ulong *)(lVar6 + 0x18);
          uVar11 = *(undefined8 *)(lVar6 + 0x20);
        }
        auVar13._8_8_ = uVar11;
        auVar13._0_8_ = uVar8;
        uVar8 = uVar8 >> 0x20;
      }
    }
    else {
      uVar7 = *(ulong *)*(undefined1 (*) [16])(lVar6 + 0x18);
      uVar10 = *(ulong *)(lVar6 + 0x20);
      auVar13 = *(undefined1 (*) [16])(lVar6 + 0x18);
      uVar8 = uVar7 >> 0x20;
      if ((int)uVar7 == 0) {
        lVar6 = param_2[3];
        goto joined_r0x0033f6b0;
      }
    }
joined_r0x0033f734:
    if (bVar2) goto LAB_0033f798;
  }
  else {
    std::mutex::lock();
    if ((*(long *)(param_1 + 0x58) != 0) || (*(long *)(param_1 + 0x30) != 0)) {
LAB_0033f478:
      std::mutex::unlock();
      if (*param_2 == 0) goto LAB_0033f4f0;
      std::mutex::lock();
      bVar2 = false;
      lVar6 = param_2[1];
      puVar5 = PTR_LAB_04373088;
      goto joined_r0x0033f4f8;
    }
    local_48 = *(byte **)(param_3 + 0x10);
    if ((*param_3 & 1) == 0) {
      local_48 = param_3 + 1;
    }
                    /* try { // try from 0033f754 to 0033f75b has its CatchHandler @ 0033f7bc */
    lVar6 = FUN_00364a2c(param_1 + 0x130,&local_48);
    if ((lVar6 == 0) || (uVar8 = *(ulong *)(lVar6 + 0x18), (int)uVar8 == 0)) goto LAB_0033f478;
    auVar13._8_8_ = *(undefined8 *)(lVar6 + 0x20);
    auVar13._0_8_ = uVar8;
    uVar8 = uVar8 >> 0x20;
  }
  std::mutex::unlock();
LAB_0033f798:
  auVar14._8_8_ = auVar13._8_8_;
  auVar14._0_8_ = auVar13._0_8_ & 0xffffffff | uVar8 << 0x20;
  return auVar14;
}


