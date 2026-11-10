/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0303f4d4; name: FUN_0303f4d4
 */


void FUN_0303f4d4(long param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  
  iVar2 = *(int *)(param_1 + 0x24);
  if (-1 < iVar2) {
    plVar4 = *(long **)(param_1 + 0x18);
    uVar5 = 0;
    plVar8 = plVar4;
    do {
      if (*plVar8 != -1) break;
      uVar5 = uVar5 + 1;
      plVar8 = plVar8 + 2;
    } while ((long)iVar2 + 1U != uVar5);
    if ((int)uVar5 <= iVar2) {
      uVar5 = uVar5 & 0xffffffff;
      lVar9 = tpidr_el0;
      do {
        lVar6 = *(long *)((long)plVar4 + ((long)(uVar5 << 0x20) >> 0x1c) + 8);
        if (lVar6 != 0) {
          if (*(long *)(lVar6 + 8) != 0) {
            lVar7 = (**(code **)(DAT_0442d3b0 +
                                 (ulong)*(byte *)(*(long *)(lVar6 + 8) + 0x18) * 0x200 + 0x48))();
            FUN_03040ae0(lVar7,lVar6,&LAB_03040688,0);
            FUN_03040ce8(lVar7 + 8,lVar6,&LAB_03040850,0);
            *(undefined8 *)(lVar6 + 8) = 0;
            *(undefined1 *)(lVar6 + 0x28) = 0;
          }
          *(undefined4 *)(lVar6 + 0x18) = 0;
          if ((-1 < *(int *)(lVar6 + 0x1c)) && (*(long *)(lVar6 + 0x10) != 0)) {
            (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
                      (PTR_PTR_0434a080,*(long *)(lVar6 + 0x10),*(int *)(lVar6 + 0x1c) << 2);
          }
          *(undefined8 *)(lVar6 + 0x10) = 0;
          *(undefined4 *)(lVar6 + 0x1c) = 0x80000000;
          lVar7 = *(long *)(lVar9 + 0x38d490);
          if (lVar7 == 0) {
            lVar7 = FUN_0333d16c(0,1);
            *(long *)(lVar9 + 0x38d490) = lVar7;
          }
          plVar8 = *(long **)(*(long *)(lVar7 + 8) + 0x58);
          (**(code **)(*plVar8 + 0x18))(plVar8,lVar6,0x30);
          iVar2 = *(int *)(param_1 + 0x24);
        }
        lVar3 = (long)(int)uVar5;
        lVar7 = lVar3 + -1;
        lVar6 = lVar3 << 0x20;
        lVar3 = lVar3 * 0x10;
        do {
          lVar6 = lVar6 + 0x100000000;
          lVar3 = lVar3 + 0x10;
          lVar7 = lVar7 + 1;
          if (iVar2 <= lVar7) break;
        } while (*(long *)(*(long *)(param_1 + 0x18) + lVar3) == -1);
        uVar5 = lVar6 >> 0x20;
        if (iVar2 < (int)((ulong)lVar6 >> 0x20)) break;
        plVar4 = *(long **)(param_1 + 0x18);
      } while( true );
    }
  }
  puVar1 = PTR_PTR_0434a080;
  if (*(int *)(param_1 + 0x30) != 0) {
    plVar8 = *(long **)(param_1 + 0x28);
    lVar9 = (long)*(int *)(param_1 + 0x30) << 3;
    lVar6 = tpidr_el0;
    lVar7 = *plVar8;
    while( true ) {
      if (lVar7 != 0) {
        if (*(long *)(lVar7 + 8) != 0) {
          lVar3 = (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(*(long *)(lVar7 + 8) + 0x18) * 0x200
                              + 0x48))();
          FUN_03040ae0(lVar3,lVar7,&LAB_03040688,0);
          FUN_03040ce8(lVar3 + 8,lVar7,&LAB_03040850,0);
          *(undefined8 *)(lVar7 + 8) = 0;
          *(undefined1 *)(lVar7 + 0x28) = 0;
        }
        *(undefined4 *)(lVar7 + 0x18) = 0;
        if ((-1 < *(int *)(lVar7 + 0x1c)) && (*(long *)(lVar7 + 0x10) != 0)) {
          (**(code **)(*(long *)puVar1 + 0x18))
                    (puVar1,*(long *)(lVar7 + 0x10),*(int *)(lVar7 + 0x1c) << 2);
        }
        *(undefined8 *)(lVar7 + 0x10) = 0;
        *(undefined4 *)(lVar7 + 0x1c) = 0x80000000;
        lVar3 = *(long *)(lVar6 + 0x38d490);
        if (lVar3 == 0) {
          lVar3 = FUN_0333d16c(0,1);
          *(long *)(lVar6 + 0x38d490) = lVar3;
        }
        plVar4 = *(long **)(*(long *)(lVar3 + 8) + 0x58);
        (**(code **)(*plVar4 + 0x18))(plVar4,lVar7,0x30);
      }
      plVar8 = plVar8 + 1;
      lVar9 = lVar9 + -8;
      if (lVar9 == 0) break;
      lVar7 = *plVar8;
    }
    iVar2 = *(int *)(param_1 + 0x24);
  }
  if (0 < iVar2) {
    lVar9 = 0;
    uVar5 = (ulong)(iVar2 + 1);
    do {
      if (*(long *)(*(long *)(param_1 + 0x18) + lVar9) != -1) {
        *(undefined8 *)(*(long *)(param_1 + 0x18) + lVar9) = 0xffffffffffffffff;
      }
      uVar5 = uVar5 - 1;
      lVar9 = lVar9 + 0x10;
    } while (uVar5 != 0);
  }
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0x80000000;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  return;
}


