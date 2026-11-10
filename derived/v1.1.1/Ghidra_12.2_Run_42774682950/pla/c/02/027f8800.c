/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027f8800; name: FUN_027f8800
 */


void FUN_027f8800(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 *local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  
  if (*(int *)(param_1 + 0x130) == 0) {
    lVar5 = *(long *)(param_1 + 200);
    *(undefined8 *)(param_1 + 0x120) = 0;
    lVar3 = *(long *)(lVar5 + 0x4c8);
    if (lVar3 != 0) {
      plVar1 = *(long **)(lVar3 + 0x70);
      plVar2 = *(long **)(lVar3 + 0x78);
      if (plVar1 != plVar2) {
        if (*(long *)(*plVar1 + 0x2c8) != 0) {
          FUN_0283c7cc(*(long *)(*plVar1 + 0x2c8),0);
        }
        if (plVar1 + 1 != plVar2) {
          lVar3 = *(long *)(plVar1[1] + 0x2c8);
          if (lVar3 != 0) {
            FUN_0283c7cc(lVar3,0);
          }
          if (plVar1 + 2 != plVar2) {
            lVar3 = *(long *)(plVar1[2] + 0x2c8);
            if (lVar3 != 0) {
              FUN_0283c7cc(lVar3,0);
            }
            for (plVar1 = plVar1 + 3; plVar1 != plVar2; plVar1 = plVar1 + 1) {
              if (*(long *)(*plVar1 + 0x2c8) != 0) {
                FUN_0283c7cc(*(long *)(*plVar1 + 0x2c8),0);
              }
            }
          }
        }
        lVar3 = *(long *)(lVar5 + 0x4c8);
      }
    }
    local_50 = &DAT_753f74378b49da9c;
    pcStack_48 = "View_Top";
    local_40 = 8;
    local_38 = (long *)0x0;
    uVar4 = FUN_027f4740(lVar3,&local_50);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    FUN_02805584(uVar4);
    *(undefined4 *)(lVar5 + 0x4e0) = 0;
    *(undefined8 *)(param_1 + 0x150) = 0;
  }
  return;
}


