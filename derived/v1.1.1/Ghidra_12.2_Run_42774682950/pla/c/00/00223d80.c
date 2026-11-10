/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00223d80; name: FUN_00223d80
 */


/* WARNING: Removing unreachable block (ram,0x00223db0) */

void FUN_00223d80(undefined8 *param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  uVar1 = *(int *)(param_1 + 3) - 1;
  lVar2 = param_1[2];
  *param_1 = 0;
  param_1[1] = lVar2;
  if (0 < (int)uVar1) {
    if (uVar1 == 1) {
      lVar4 = 0;
    }
    else {
      lVar4 = 0;
      plVar3 = (long *)(lVar2 + 0x58);
      do {
        lVar4 = lVar4 + 2;
        plVar3[-0xb] = (long)plVar3;
        *plVar3 = (long)(plVar3 + 0xb);
        plVar3 = plVar3 + 0x16;
      } while ((ulong)uVar1 - ((ulong)uVar1 & 1) != lVar4);
      if ((uVar1 & 1) == 0) goto LAB_00223dec;
    }
    plVar3 = (long *)(lVar2 + lVar4 * 0x58);
    *plVar3 = (long)(plVar3 + 0xb);
  }
LAB_00223dec:
  *(undefined8 *)(lVar2 + (long)(int)(uVar1 * 0xb) * 8) = 0;
  param_1[2] = lVar2;
  return;
}


