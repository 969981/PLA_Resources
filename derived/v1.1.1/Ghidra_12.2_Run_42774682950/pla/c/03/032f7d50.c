/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032f7d50; name: FUN_032f7d50
 */


long * FUN_032f7d50(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *local_58;
  undefined8 local_50;
  long *local_48;
  
  plVar9 = (long *)(param_1 + 0x18);
  local_58 = param_2;
  lVar2 = FUN_032fbe00(plVar9,&local_58);
  if ((lVar2 == 0) ||
     (uVar5 = (ulong)*(uint *)(lVar2 + 4) | (lVar2 - *(long *)(param_1 + 0x28)) * 0x20000000,
     (int)uVar5 < 0)) {
    lVar2 = tpidr_el0;
    lVar6 = *(long *)(lVar2 + 0x38d490);
    if (lVar6 == 0) {
      lVar6 = FUN_0333d16c(0,1);
      *(long *)(lVar2 + 0x38d490) = lVar6;
    }
    plVar3 = *(long **)(*(long *)(lVar6 + 8) + 0x58);
    plVar3 = (long *)(**(code **)(*plVar3 + 0x10))(plVar3,0x28,0);
    *(undefined1 *)plVar3 = 0;
    plVar3[1] = 0;
    plVar3[2] = -0x8000000000000000;
    plVar3[3] = 0;
    plVar3[4] = -0x8000000000000000;
    local_58 = param_2;
    local_48 = plVar3;
    FUN_032f82c0(plVar9,&local_58,&local_48);
    local_58 = (long *)0x0;
    local_50 = -0x8000000000000000;
    iVar1 = FUN_032f8368(param_1,&local_58,param_2,param_2);
    if (iVar1 < 0) {
      local_48 = param_2;
      lVar6 = FUN_032fbe00(plVar9,&local_48);
      if (lVar6 == 0) {
        uVar7 = 0;
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = *(uint *)(lVar6 + 4);
        uVar7 = ((int)lVar6 - (int)*(undefined8 *)(param_1 + 0x28)) * 0x20000000;
      }
      *(undefined8 *)(*plVar9 + ((long)((ulong)(uVar4 | uVar7) << 0x20) >> 0x1c) + 8) = 0;
      plVar9 = (long *)0x0;
      plVar8 = plVar3;
      plVar3 = local_58;
    }
    else {
      FUN_032f87fc(plVar3,&local_58);
      plVar8 = (long *)0x0;
      plVar9 = plVar3;
      plVar3 = local_58;
    }
    local_58 = plVar3;
    if ((int)local_50 != 0) {
      lVar6 = (long)(int)local_50;
      plVar10 = plVar3 + lVar6 * 7 + -7;
      (**(code **)(*plVar10 + 8))(plVar10);
      if (plVar10 != plVar3) {
        plVar10 = plVar3 + lVar6 * 7 + -0xe;
        (**(code **)(*plVar10 + 8))(plVar10);
        if (plVar10 != plVar3) {
          lVar6 = lVar6 * 0x38;
          do {
            (**(code **)(*(long *)((long)plVar3 + lVar6 + -0xa8) + 8))();
            lVar6 = lVar6 + -0x38;
          } while (lVar6 != 0x70);
        }
      }
    }
    lVar6 = local_50;
    uVar5 = (ulong)local_50._4_4_;
    local_50 = (ulong)local_50._4_4_ << 0x20;
    if ((-1 < lVar6) && (local_58 != (long *)0x0)) {
      (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
                (PTR_PTR_0434a080,local_58,(uVar5 & 0x3fffffff) * 0x38);
    }
    if (plVar8 != (long *)0x0) {
      FUN_032f916c(plVar8);
      lVar6 = *(long *)(lVar2 + 0x38d490);
      if (lVar6 == 0) {
        lVar6 = FUN_0333d16c(0,1);
        *(long *)(lVar2 + 0x38d490) = lVar6;
      }
      plVar3 = *(long **)(*(long *)(lVar6 + 8) + 0x58);
      (**(code **)(*plVar3 + 0x18))(plVar3,plVar8,0x28);
    }
  }
  else {
    plVar9 = *(long **)(*plVar9 + ((long)(uVar5 << 0x20) >> 0x1c) + 8);
  }
  return plVar9;
}


