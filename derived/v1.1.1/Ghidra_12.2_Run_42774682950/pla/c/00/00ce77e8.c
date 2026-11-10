/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ce77e8; name: FUN_00ce77e8
 */


bool FUN_00ce77e8(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined1 *puVar7;
  
  uVar4 = *(ulong *)(param_1 + 0xa8);
  lVar3 = *(long *)(param_1 + 0x70);
  plVar6 = (long *)(lVar3 + (uVar4 >> 4 & 0xffffffffffffff8));
  if (*(long *)(param_1 + 0x78) == lVar3) {
    lVar5 = 0;
  }
  else {
    uVar1 = *(long *)(param_1 + 0xb0) + uVar4;
    lVar5 = *plVar6 + (uVar4 & 0x7f) * 0x20;
    lVar2 = *(long *)(lVar3 + (uVar1 >> 4 & 0xffffffffffffff8)) + (uVar1 & 0x7f) * 0x20;
    if (lVar2 != lVar5) {
      puVar7 = (undefined1 *)*param_2;
      if ((undefined1 *)*param_3 == &DAT_cbf29ce484222645) {
        if (puVar7 != &DAT_cbf29ce484222645) {
          do {
            if (puVar7 == *(undefined1 **)(lVar5 + 8)) break;
            lVar5 = lVar5 + 0x20;
            if (lVar5 - *plVar6 == 0x1000) {
              plVar6 = plVar6 + 1;
              lVar5 = *plVar6;
            }
          } while (lVar2 != lVar5);
        }
      }
      else {
        do {
          while( true ) {
            if ((puVar7 == &DAT_cbf29ce484222645 || puVar7 == *(undefined1 **)(lVar5 + 8)) &&
               ((undefined1 *)*param_3 == *(undefined1 **)(lVar5 + 0x18))) goto LAB_00ce7898;
            lVar5 = lVar5 + 0x20;
            if (lVar5 - *plVar6 == 0x1000) break;
            if (lVar2 == lVar5) goto LAB_00ce7898;
          }
          plVar6 = plVar6 + 1;
          lVar5 = *plVar6;
        } while (lVar2 != lVar5);
      }
    }
  }
LAB_00ce7898:
  if (*(long *)(param_1 + 0x78) == lVar3) {
    lVar3 = 0;
  }
  else {
    uVar4 = *(long *)(param_1 + 0xb0) + uVar4;
    lVar3 = *(long *)(lVar3 + (uVar4 >> 4 & 0xffffffffffffff8)) + (uVar4 & 0x7f) * 0x20;
  }
  return lVar3 != lVar5;
}


