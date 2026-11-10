/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ec4fac; name: FUN_02ec4fac
 */


void FUN_02ec4fac(long *param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  
  uVar3 = *(uint *)(param_1 + 1);
  if (uVar3 != 0) {
    uVar4 = 0;
    uVar6 = (uint)*param_2;
    if (uVar3 != 0) {
      uVar4 = uVar6 / uVar3;
    }
    for (lVar7 = *(long *)(*param_1 + (ulong)(uVar6 - uVar4 * uVar3) * 8); lVar7 != 0;
        lVar7 = *(long *)(lVar7 + 0x18)) {
      if (*(long *)(lVar7 + 0x10) == *param_2) {
        lVar1 = *param_2;
        lVar2 = param_2[1];
        lVar8 = param_2[2];
        plVar5 = (long *)FUN_02ec6414(param_3);
        if (plVar5 == (long *)0x0) {
          return;
        }
        *plVar5 = lVar1;
        plVar5[1] = lVar2;
        plVar5[2] = lVar8;
        plVar5[3] = lVar7;
        return;
      }
    }
  }
  return;
}


