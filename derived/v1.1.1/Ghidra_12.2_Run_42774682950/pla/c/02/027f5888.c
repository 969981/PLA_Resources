/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027f5888; name: FUN_027f5888
 */


void FUN_027f5888(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined1 *local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  
  local_38 = (long *)0x0;
  local_50 = &DAT_753f74378b49da9c;
  pcStack_48 = "View_Top";
  local_40 = 8;
  lVar3 = FUN_027f4740(*(undefined8 *)(param_1 + 0x4c8),&local_50);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  lVar4 = *(long *)(lVar3 + 0x440);
  if ((lVar4 != 0) && (*(char *)(lVar4 + 0x62) == '\0')) {
    *(undefined1 *)(lVar4 + 0x60) = 0;
    FUN_02831b48(*(undefined8 *)(lVar4 + 0x58),0);
  }
  FUN_00d42438(lVar3,0,1);
  FUN_00d42690(lVar3,0,1);
  *(undefined1 *)(lVar3 + 0x5ab) = 1;
  lVar3 = *(long *)(param_1 + 0x4c8);
  if (lVar3 != 0) {
    plVar2 = *(long **)(lVar3 + 0x78);
    for (plVar1 = *(long **)(lVar3 + 0x70); plVar1 != plVar2; plVar1 = plVar1 + 1) {
      lVar3 = *(long *)(*plVar1 + 0x2c8);
      if ((lVar3 != 0) && (lVar4 = *(long *)(lVar3 + 0xf8), lVar4 != 0)) {
        lVar3 = *(long *)(lVar3 + 0xf0);
        *(undefined1 *)(*(long *)(lVar3 + 0x20) + 0x670) = 1;
        if ((lVar4 != 1) && (*(undefined1 *)(*(long *)(lVar3 + 0x48) + 0x670) = 1, lVar4 != 2)) {
          lVar4 = lVar4 * 0x28 + -0x50;
          plVar5 = (long *)(lVar3 + 0x70);
          do {
            lVar4 = lVar4 + -0x28;
            *(undefined1 *)(*plVar5 + 0x670) = 1;
            plVar5 = plVar5 + 5;
          } while (lVar4 != 0);
        }
      }
    }
    *(undefined1 *)(param_1 + 0x362) = 1;
  }
  return;
}


