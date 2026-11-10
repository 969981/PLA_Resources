/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0087c958; name: FUN_0087c958
 */


void FUN_0087c958(long param_1,undefined8 param_2,undefined8 *param_3,long param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  
  lVar5 = *(long *)(param_1 + 0x28);
  if (param_3 == (undefined8 *)0x0) {
    puVar6 = *(undefined8 **)(lVar5 + 0x20);
    FUN_00878498(puVar6,param_2,lVar5);
    *(undefined8 **)(lVar5 + 0x30) = puVar6;
    lVar3 = (**(code **)PTR_DAT_04378968)(*puVar6);
    uVar1 = *(uint *)(param_1 + 0x1c);
    plVar2 = (long *)PTR_DAT_04372850;
  }
  else {
    *(undefined8 **)(lVar5 + 0x30) = param_3;
    lVar7 = *(long *)(lVar5 + 8);
    lVar3 = (**(code **)PTR_DAT_04378968)(*param_3);
    lVar3 = (param_4 - param_1) + lVar7 + lVar3;
    uVar1 = *(uint *)(param_1 + 0x1c);
    plVar2 = (long *)PTR_DAT_04372850;
  }
  PTR_DAT_04372850 = (undefined *)plVar2;
  if (0 < (int)uVar1) {
    uVar9 = (ulong)uVar1;
    lVar7 = 0;
    do {
      lVar8 = *(long *)(*(long *)(param_1 + 0x20) + *plVar2 + lVar7);
      if (lVar8 != 0) {
        plVar4 = (long *)FUN_0087cb60(lVar8,0);
        if (plVar4 != (long *)0x0) {
          *plVar4 = (lVar3 - *(long *)(lVar5 + 8)) + plVar4[2];
        }
        plVar4 = (long *)FUN_0087cb60(lVar8,1);
        if (plVar4 != (long *)0x0) {
          *plVar4 = (lVar3 - *(long *)(lVar5 + 8)) + plVar4[2];
        }
        plVar4 = (long *)FUN_0087cb60(lVar8,2);
        if (plVar4 != (long *)0x0) {
          *plVar4 = (lVar3 - *(long *)(lVar5 + 8)) + plVar4[2];
        }
        plVar4 = (long *)FUN_0087cb60(lVar8,3);
        if (plVar4 != (long *)0x0) {
          *plVar4 = (lVar3 - *(long *)(lVar5 + 8)) + plVar4[2];
        }
        plVar4 = (long *)FUN_0087cb60(lVar8,4);
        if (plVar4 != (long *)0x0) {
          *plVar4 = (lVar3 - *(long *)(lVar5 + 8)) + plVar4[2];
        }
        plVar4 = (long *)FUN_0087cb60(lVar8,5);
        if (plVar4 != (long *)0x0) {
          *plVar4 = (lVar3 - *(long *)(lVar5 + 8)) + plVar4[2];
        }
      }
      lVar7 = lVar7 + 0x40;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  *(undefined1 *)(param_1 + 0x14) = 0;
  return;
}


