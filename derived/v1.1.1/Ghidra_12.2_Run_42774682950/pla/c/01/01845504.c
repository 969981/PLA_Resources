/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01845504; name: FUN_01845504
 */


bool FUN_01845504(long param_1,undefined1 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long *plVar5;
  undefined1 *puVar6;
  long *plVar7;
  
  if (param_2 == &DAT_cbf29ce484222645) {
    return false;
  }
  puVar4 = *(undefined1 **)(param_1 + 0xa8);
  if (puVar4 != (undefined1 *)0x0) {
    uVar2 = (long)puVar4 - ((ulong)puVar4 >> 1 & 0x5555555555555555);
    uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
    uVar2 = (uVar2 + (uVar2 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar2 < 2) {
      puVar3 = (undefined1 *)((ulong)(puVar4 + -1) & (ulong)param_2);
    }
    else {
      puVar3 = param_2;
      if (puVar4 <= param_2) {
        uVar1 = 0;
        if (puVar4 != (undefined1 *)0x0) {
          uVar1 = (ulong)param_2 / (ulong)puVar4;
        }
        puVar3 = param_2 + -(uVar1 * (long)puVar4);
      }
    }
    plVar5 = *(long **)(*(long *)(param_1 + 0xa0) + (long)puVar3 * 8);
    if ((plVar5 != (long *)0x0) && (plVar5 = (long *)*plVar5, plVar5 != (long *)0x0)) {
      if (uVar2 < 2) {
        do {
          if ((undefined1 *)plVar5[1] == param_2) {
            if ((undefined1 *)plVar5[2] == param_2) goto LAB_018455c8;
          }
          else if ((undefined1 *)((ulong)plVar5[1] & (ulong)(puVar4 + -1)) != puVar3)
          goto LAB_01845618;
          plVar5 = (long *)*plVar5;
          plVar7 = (long *)0x0;
        } while (plVar5 != (long *)0x0);
        goto LAB_0184561c;
      }
      do {
        puVar6 = (undefined1 *)plVar5[1];
        if (puVar6 == param_2) {
          if ((undefined1 *)plVar5[2] == param_2) goto LAB_018455c8;
        }
        else {
          if (puVar4 <= puVar6) {
            uVar2 = 0;
            if (puVar4 != (undefined1 *)0x0) {
              uVar2 = (ulong)puVar6 / (ulong)puVar4;
            }
            puVar6 = puVar6 + -(uVar2 * (long)puVar4);
          }
          if (puVar6 != puVar3) break;
        }
        plVar5 = (long *)*plVar5;
      } while (plVar5 != (long *)0x0);
    }
  }
LAB_01845618:
  plVar7 = (long *)0x0;
LAB_0184561c:
  return plVar7 != (long *)0x0;
LAB_018455c8:
  plVar7 = plVar5;
  goto LAB_0184561c;
}


