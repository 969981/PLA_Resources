/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011b386c; name: FUN_011b386c
 */


long FUN_011b386c(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  
  plVar7 = *(long **)(param_1 + 0x70);
  plVar2 = *(long **)(param_1 + 0x78);
  lVar8 = *param_2;
  plVar5 = (long *)param_2[3];
  plVar3 = (long *)PTR_DAT_04379c88;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))(plVar5);
    plVar3 = (long *)PTR_DAT_04379c88;
  }
  PTR_DAT_04379c88 = (undefined *)plVar3;
  if (plVar7 != plVar2) {
    do {
      plVar6 = *(long **)(*plVar7 + 0x5a0);
      plVar1 = plVar3;
      if (plVar6 != (long *)0x0) {
        plVar1 = plVar6 + 0xb;
      }
      lVar9 = *plVar1;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x18))(plVar6);
        (**(code **)(*plVar6 + 0x20))(plVar6);
      }
      if (lVar9 == lVar8) goto LAB_011b38fc;
      plVar7 = plVar7 + 1;
    } while (plVar2 != plVar7);
    plVar7 = plVar2;
  }
LAB_011b38fc:
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))(plVar5);
  }
  if ((plVar7 == *(long **)(param_1 + 0x78)) || (lVar8 = *plVar7, lVar8 == 0)) {
    lVar8 = 0;
  }
  else {
    (*(code *)**(undefined8 **)(lVar8 + 0x50))();
    uVar4 = FUN_011b397c();
    if ((uVar4 & 1) == 0) {
      lVar8 = 0;
    }
  }
  return lVar8;
}


