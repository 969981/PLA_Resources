/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002233d0; name: FUN_002233d0
 */


/* WARNING: Removing unreachable block (ram,0x00223428) */

void FUN_002233d0(undefined8 *param_1,code *param_2,undefined8 param_3,uint param_4)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  *param_1 = 0;
  *(uint *)(param_1 + 3) = param_4;
  lVar1 = (*param_2)((ulong)param_4 * 0x58,8);
  param_4 = param_4 - 1;
  param_1[1] = lVar1;
  if (0 < (int)param_4) {
    if (param_4 == 1) {
      lVar3 = 0;
    }
    else {
      lVar3 = 0;
      plVar2 = (long *)(lVar1 + 0x58);
      do {
        lVar3 = lVar3 + 2;
        plVar2[-0xb] = (long)plVar2;
        *plVar2 = (long)(plVar2 + 0xb);
        plVar2 = plVar2 + 0x16;
      } while ((ulong)param_4 - ((ulong)param_4 & 1) != lVar3);
      if ((param_4 & 1) == 0) goto LAB_00223464;
    }
    plVar2 = (long *)(lVar1 + lVar3 * 0x58);
    *plVar2 = (long)(plVar2 + 0xb);
  }
LAB_00223464:
  *(undefined8 *)(lVar1 + (long)(int)(param_4 * 0xb) * 8) = 0;
  param_1[2] = lVar1;
  return;
}


