/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f1f4c8; name: FUN_01f1f4c8
 */


void FUN_01f1f4c8(uint *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  
  lVar7 = (long)(int)*param_1;
  if (*param_1 < 0x100) {
    *(undefined8 *)(param_1 + lVar7 * 0x18 + 2) = *param_2;
    *(undefined8 *)(param_1 + lVar7 * 0x18 + 4) = param_2[1];
    *(undefined8 *)(param_1 + lVar7 * 0x18 + 6) = param_2[2];
    plVar6 = (long *)param_2[3];
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
    plVar4 = *(long **)(param_1 + lVar7 * 0x18 + 8);
    *(long **)(param_1 + lVar7 * 0x18 + 8) = plVar6;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x20))();
    }
    *(undefined8 *)(param_1 + lVar7 * 0x18 + 10) = param_2[4];
    *(undefined8 *)(param_1 + lVar7 * 0x18 + 0xc) = param_2[5];
    *(undefined8 *)(param_1 + lVar7 * 0x18 + 0xe) = param_2[6];
    plVar6 = (long *)param_2[7];
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
    plVar4 = *(long **)(param_1 + lVar7 * 0x18 + 0x10);
    *(long **)(param_1 + lVar7 * 0x18 + 0x10) = plVar6;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x20))();
    }
    uVar5 = param_2[10];
    uVar1 = param_2[8];
    uVar2 = param_2[9];
    param_1[lVar7 * 0x18 + 0x18] = *(uint *)(param_2 + 0xb);
    *(undefined8 *)(param_1 + lVar7 * 0x18 + 0x14) = uVar2;
    *(undefined8 *)(param_1 + lVar7 * 0x18 + 0x16) = uVar5;
    *(undefined8 *)(param_1 + lVar7 * 0x18 + 0x12) = uVar1;
    uVar3 = *param_1;
    if (uVar3 < 0x100) {
      param_1[(long)(int)uVar3 * 0x18 + 0x18] = uVar3;
      *param_1 = *param_1 + 1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f22c10();
}


