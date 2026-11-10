/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f5aae4; name: FUN_02f5aae4
 */


void FUN_02f5aae4(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined *puVar6;
  long *plVar7;
  void *pvVar8;
  void *pvVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  uVar3 = *(uint *)(param_1 + 0x10);
  lVar11 = param_1 + 8;
  lVar5 = tpidr_el0;
  if (uVar3 != 2) {
    uVar4 = *(uint *)(param_1 + 0x14);
    if (uVar4 == 0) {
      *(uint *)(param_1 + 0x14) = uVar3;
      uVar4 = uVar3;
    }
    if ((int)uVar3 < 2) {
      uVar2 = uVar4 & 0x7fffffff;
      if ((int)(uVar4 & 0x7fffffff) <= (int)uVar3) {
        uVar2 = uVar3;
      }
      if ((int)uVar2 < 2) {
        lVar10 = *(long *)(lVar5 + 0x38d490);
        if (lVar10 == 0) {
          lVar10 = FUN_0333d16c(0,1);
          *(long *)(lVar5 + 0x38d490) = lVar10;
        }
        plVar7 = *(long **)(*(long *)(lVar10 + 8) + 0x58);
        pvVar8 = (void *)(**(code **)(*plVar7 + 0x10))(plVar7,0x100,0);
        if (*(long *)(param_1 + 8) == 0) {
          pvVar9 = (void *)0x0;
        }
        else {
          pvVar9 = (void *)(*(long *)(param_1 + 8) + lVar11);
        }
        memcpy(pvVar8,pvVar9,(long)*(int *)(param_1 + 0x10) << 7);
        if ((int)*(uint *)(param_1 + 0x14) < 0) {
          uVar3 = *(uint *)(param_1 + 0x14) & 0x7fffffff;
          if ((int)uVar3 <= (int)*(uint *)(param_1 + 0x10)) {
            uVar3 = *(uint *)(param_1 + 0x10);
          }
          if (*(long *)(param_1 + 8) == 0) {
            lVar10 = 0;
          }
          else {
            lVar10 = *(long *)(param_1 + 8) + lVar11;
          }
          lVar12 = *(long *)(lVar5 + 0x38d490);
          if (lVar12 == 0) {
            lVar12 = FUN_0333d16c(0,1);
            *(long *)(lVar5 + 0x38d490) = lVar12;
          }
          plVar7 = *(long **)(*(long *)(lVar12 + 8) + 0x58);
          (**(code **)(*plVar7 + 0x18))(plVar7,lVar10,(ulong)uVar3 << 7);
        }
        if (pvVar8 == (void *)0x0) {
          lVar10 = 0;
        }
        else {
          lVar10 = (long)pvVar8 - lVar11;
        }
        *(long *)(param_1 + 8) = lVar10;
        *(undefined4 *)(param_1 + 0x14) = 0x80000002;
      }
    }
    *(undefined4 *)(param_1 + 0x10) = 2;
  }
  puVar1 = (undefined8 *)(*(long *)(param_1 + 8) + lVar11);
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[1] = 0x7f7fffee7f7fffee;
  *puVar1 = 0x7f7fffee7f7fffee;
  puVar1[3] = 0xff7fffeeff7fffee;
  puVar1[2] = 0xff7fffeeff7fffee;
  *(undefined2 *)(puVar1 + 0xe) = 0;
  puVar1[5] = 0x7f7fffee7f7fffee;
  puVar1[4] = 0x7f7fffee7f7fffee;
  puVar1[7] = 0xff7fffeeff7fffee;
  puVar1[6] = 0xff7fffeeff7fffee;
  puVar1[9] = 0x7f7fffee7f7fffee;
  puVar1[8] = 0x7f7fffee7f7fffee;
  puVar1[0xb] = 0xff7fffeeff7fffee;
  puVar1[10] = 0xff7fffeeff7fffee;
  lVar10 = *(long *)(param_1 + 8) + lVar11;
  *(undefined8 *)(lVar10 + 0xe0) = 0;
  *(undefined8 *)(lVar10 + 0xe8) = 0;
  *(undefined2 *)(lVar10 + 0xf0) = 0;
  *(undefined8 *)(lVar10 + 0x88) = 0x7f7fffee7f7fffee;
  *(undefined8 *)(lVar10 + 0x80) = 0x7f7fffee7f7fffee;
  *(undefined8 *)(lVar10 + 0x98) = 0xff7fffeeff7fffee;
  *(undefined8 *)(lVar10 + 0x90) = 0xff7fffeeff7fffee;
  *(undefined8 *)(lVar10 + 0xa8) = 0x7f7fffee7f7fffee;
  *(undefined8 *)(lVar10 + 0xa0) = 0x7f7fffee7f7fffee;
  *(undefined8 *)(lVar10 + 0xb8) = 0xff7fffeeff7fffee;
  *(undefined8 *)(lVar10 + 0xb0) = 0xff7fffeeff7fffee;
  *(undefined8 *)(lVar10 + 200) = 0x7f7fffee7f7fffee;
  *(undefined8 *)(lVar10 + 0xc0) = 0x7f7fffee7f7fffee;
  *(undefined8 *)(lVar10 + 0xd8) = 0xff7fffeeff7fffee;
  *(undefined8 *)(lVar10 + 0xd0) = 0xff7fffeeff7fffee;
  uVar3 = *(uint *)(param_1 + 0x10);
  *(undefined1 *)(param_1 + 0x18) = 1;
  if ((int)uVar3 < (int)(*(uint *)(param_1 + 0x14) & 0x7fffffff)) {
    lVar10 = *(long *)(lVar5 + 0x38d490);
    if (lVar10 == 0) {
      lVar10 = FUN_0333d16c(0,1);
      *(long *)(lVar5 + 0x38d490) = lVar10;
    }
    plVar7 = *(long **)(*(long *)(lVar10 + 8) + 0x58);
    pvVar8 = (void *)(**(code **)(*plVar7 + 0x10))(plVar7,(long)(int)uVar3 << 7,0);
    if (*(long *)(param_1 + 8) == 0) {
      pvVar9 = (void *)0x0;
    }
    else {
      pvVar9 = (void *)(*(long *)(param_1 + 8) + lVar11);
    }
    memcpy(pvVar8,pvVar9,(long)*(int *)(param_1 + 0x10) << 7);
    if ((int)*(uint *)(param_1 + 0x14) < 0) {
      uVar4 = *(uint *)(param_1 + 0x14) & 0x7fffffff;
      if ((int)uVar4 <= (int)*(uint *)(param_1 + 0x10)) {
        uVar4 = *(uint *)(param_1 + 0x10);
      }
      lVar10 = *(long *)(param_1 + 8);
      if (lVar10 != 0) {
        lVar10 = lVar10 + lVar11;
      }
      lVar12 = *(long *)(lVar5 + 0x38d490);
      if (lVar12 == 0) {
        lVar12 = FUN_0333d16c(0,1);
        *(long *)(lVar5 + 0x38d490) = lVar12;
      }
      plVar7 = *(long **)(*(long *)(lVar12 + 8) + 0x58);
      (**(code **)(*plVar7 + 0x18))(plVar7,lVar10,(ulong)uVar4 << 7);
    }
    if (pvVar8 == (void *)0x0) {
      lVar11 = 0;
    }
    else {
      lVar11 = (long)pvVar8 - lVar11;
    }
    *(long *)(param_1 + 8) = lVar11;
    *(uint *)(param_1 + 0x14) = uVar3 | 0x80000000;
  }
  puVar6 = PTR_PTR_0434a080;
  *(undefined4 *)(param_1 + 0x50) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x54)) && (*(long *)(param_1 + 0x48) != 0)) {
    (**(code **)(*(long *)puVar6 + 0x18))
              (puVar6,*(long *)(param_1 + 0x48),((ulong)*(uint *)(param_1 + 0x54) & 0x3fffffff) << 4
              );
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0x80000000;
  *(undefined4 *)(param_1 + 0x60) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 100)) && (*(long *)(param_1 + 0x58) != 0)) {
    (**(code **)(*(long *)puVar6 + 0x18))
              (puVar6,*(long *)(param_1 + 0x58),((ulong)*(uint *)(param_1 + 100) & 0x3fffffff) << 5)
    ;
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 100) = 0x80000000;
  *(undefined1 *)(param_1 + 0x20) = 0;
  return;
}


