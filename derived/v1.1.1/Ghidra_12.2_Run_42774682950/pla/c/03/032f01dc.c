/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032f01dc; name: FUN_032f01dc
 */


void FUN_032f01dc(long *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *param_1;
  if (lVar5 != 0) {
    lVar4 = param_1[1];
    if ((int)lVar4 != 0) {
      lVar6 = param_1[2];
      puVar3 = (undefined8 *)FUN_032e20b0(lVar6,0x100);
      if ((puVar3 != (undefined8 *)0x0) && ((code *)*puVar3 != (code *)0x0)) {
        (*(code *)*puVar3)(lVar5,lVar6,(int)lVar4);
      }
    }
    if ((*param_1 != 0) && (-1 < *(int *)((long)param_1 + 0xc))) {
      iVar2 = FUN_032e2120(param_1[2]);
      iVar1 = *(int *)((long)param_1 + 0xc);
      lVar6 = *param_1;
      lVar5 = tpidr_el0;
      lVar4 = *(long *)(lVar5 + 0x38d490);
      if (lVar4 == 0) {
        lVar4 = FUN_0333d16c(0,1);
        *(long *)(lVar5 + 0x38d490) = lVar4;
      }
      FUN_032cf368(*(undefined8 *)(*(long *)(lVar4 + 8) + 0x58),lVar6,1,iVar1 * iVar2);
    }
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}


