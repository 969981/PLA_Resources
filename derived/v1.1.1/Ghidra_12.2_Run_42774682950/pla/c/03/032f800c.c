/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032f800c; name: FUN_032f800c
 */


long * FUN_032f800c(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  
  plVar9 = (long *)(param_1 + 0x38);
  local_60 = param_2;
  local_58 = param_3;
  lVar2 = FUN_032fc030(plVar9,&local_60);
  if ((lVar2 == 0) ||
     (uVar4 = *(uint *)(lVar2 + 4) |
              ((int)lVar2 - (int)*(undefined8 *)(param_1 + 0x48)) * 0x20000000, (int)uVar4 < 0)) {
    lVar2 = tpidr_el0;
    lVar5 = *(long *)(lVar2 + 0x38d490);
    if (lVar5 == 0) {
      lVar5 = FUN_0333d16c(0,1);
      *(long *)(lVar2 + 0x38d490) = lVar5;
    }
    plVar3 = *(long **)(*(long *)(lVar5 + 8) + 0x58);
    plVar3 = (long *)(**(code **)(*plVar3 + 0x10))(plVar3,0x28,0);
    *(undefined1 *)plVar3 = 0;
    plVar3[1] = 0;
    plVar3[2] = -0x8000000000000000;
    plVar3[3] = 0;
    plVar3[4] = -0x8000000000000000;
    local_70 = plVar3;
    FUN_032f8c70(plVar9,&local_60,&local_70);
    local_70 = (long *)0x0;
    local_68 = -0x8000000000000000;
    iVar1 = FUN_032f8368(param_1,&local_70,param_2,param_3);
    if (iVar1 < 0) {
      lVar5 = FUN_032fc030(plVar9,&local_60);
      if (lVar5 == 0) {
        uVar7 = 0;
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = *(uint *)(lVar5 + 4);
        uVar7 = ((int)lVar5 - (int)*(undefined8 *)(param_1 + 0x48)) * 0x20000000;
      }
      *(undefined8 *)(*plVar9 + (long)(int)(uVar4 | uVar7) * 0x18 + 0x10) = 0;
      plVar9 = (long *)0x0;
      plVar8 = plVar3;
      plVar3 = local_70;
    }
    else {
      FUN_032f87fc(plVar3,&local_70);
      plVar8 = (long *)0x0;
      plVar9 = plVar3;
      plVar3 = local_70;
    }
    local_70 = plVar3;
    if ((int)local_68 != 0) {
      lVar5 = (long)(int)local_68;
      plVar10 = plVar3 + lVar5 * 7 + -7;
      (**(code **)(*plVar10 + 8))(plVar10);
      if (plVar10 != plVar3) {
        plVar10 = plVar3 + lVar5 * 7 + -0xe;
        (**(code **)(*plVar10 + 8))(plVar10);
        if (plVar10 != plVar3) {
          lVar5 = lVar5 * 0x38;
          do {
            (**(code **)(*(long *)((long)plVar3 + lVar5 + -0xa8) + 8))();
            lVar5 = lVar5 + -0x38;
          } while (lVar5 != 0x70);
        }
      }
    }
    lVar5 = local_68;
    uVar6 = (ulong)local_68._4_4_;
    local_68 = (ulong)local_68._4_4_ << 0x20;
    if ((-1 < lVar5) && (local_70 != (long *)0x0)) {
      (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
                (PTR_PTR_0434a080,local_70,(uVar6 & 0x3fffffff) * 0x38);
    }
    if (plVar8 != (long *)0x0) {
      FUN_032f916c(plVar8);
      lVar5 = *(long *)(lVar2 + 0x38d490);
      if (lVar5 == 0) {
        lVar5 = FUN_0333d16c(0,1);
        *(long *)(lVar2 + 0x38d490) = lVar5;
      }
      plVar3 = *(long **)(*(long *)(lVar5 + 8) + 0x58);
      (**(code **)(*plVar3 + 0x18))(plVar3,plVar8,0x28);
    }
  }
  else {
    plVar9 = *(long **)(*plVar9 + (long)(int)uVar4 * 0x18 + 0x10);
  }
  return plVar9;
}


