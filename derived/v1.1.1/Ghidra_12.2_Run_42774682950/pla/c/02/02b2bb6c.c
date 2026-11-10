/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b2bb6c; name: FUN_02b2bb6c
 */


void FUN_02b2bb6c(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  long *plStack_68;
  
  uVar4 = (*(long *)(*param_2 + 0xb8) - *(long *)(*param_2 + 0xb0) >> 4) * 0xc4ec4ec5;
  plVar9 = *(long **)(param_1 + 0x150);
  plVar2 = *(long **)(param_1 + 0x158);
  if (plVar9 != plVar2 && (int)uVar4 != 0) {
    do {
      uVar10 = 0;
      do {
        plVar5 = (long *)(*(long *)(*(long *)(param_1 + 0xd0) + 0xb0) + uVar10 * 0xd0);
        lVar8 = *plVar5;
        plVar5 = (long *)plVar5[3];
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x18))(plVar5);
        }
        uVar7 = *(long *)(param_1 + 0x120) - *(long *)(param_1 + 0x118);
        if ((int)(uVar7 >> 5) != 0) {
          uVar6 = 0;
          do {
            if (*(long *)(*(long *)(param_1 + 0x118) + uVar6 * 0x20) == lVar8) {
              lVar8 = *(long *)(*plVar9 + 0xe0);
              if ((uVar6 & 0xffffffff) < (ulong)(*(long *)(*plVar9 + 0xe8) - lVar8 >> 3)) {
                plVar1 = (long *)(lVar8 + (uVar6 & 0xffffffff) * 8);
                lVar8 = *(long *)(*(long *)(*param_2 + 0xb0) + uVar10 * 0xd0 + 0x48);
                local_80 = *(undefined8 *)(lVar8 + 8);
                local_78 = *(undefined8 *)(lVar8 + 0x10);
                local_70 = *(undefined8 *)(lVar8 + 0x18);
                plVar3 = *(long **)(lVar8 + 0x20);
                plStack_68 = plVar3;
                if (plVar3 != (long *)0x0) {
                  (**(code **)(*plVar3 + 0x18))(plVar3);
                }
                lVar8 = *plVar1;
                FUN_02b2cafc(param_1,lVar8 + 0x60,&local_80,*(long *)(lVar8 + 0x68) + 0x60);
                (**(code **)(*DAT_043ef740 + 0x78))(DAT_043ef740,plVar1);
                if (plVar3 != (long *)0x0) {
                  (**(code **)(*plVar3 + 0x20))(plVar3);
                }
              }
              break;
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 != (uVar7 >> 5 & 0xffffffff));
        }
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x20))(plVar5);
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 != (uVar4 & 0xffffffff));
      plVar9 = plVar9 + 1;
    } while (plVar9 != plVar2);
  }
  return;
}


