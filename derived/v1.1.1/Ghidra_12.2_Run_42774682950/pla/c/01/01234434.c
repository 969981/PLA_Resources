/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01234434; name: FUN_01234434
 */


void FUN_01234434(long param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  
  if ((param_2 < 7) &&
     (puVar1 = (undefined4 *)
               (param_1 + (long)*(int *)(&DAT_03a7a230 + (ulong)param_2 * 8) * 0x58 + 0x10),
     puVar1 != (undefined4 *)0x0)) {
    lVar8 = (long)*(int *)(&DAT_03a7a230 + (ulong)param_2 * 8);
    lVar4 = param_1 + lVar8 * 0x58;
    *puVar1 = *(undefined4 *)(lVar4 + 0x430);
    plVar7 = *(long **)(lVar4 + 0x438);
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
    plVar3 = *(long **)(puVar1 + 2);
    *(long **)(puVar1 + 2) = plVar7;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x20))();
    }
    lVar4 = param_1 + lVar8 * 0x58;
    *(undefined1 *)(puVar1 + 4) = *(undefined1 *)(lVar4 + 0x440);
    plVar7 = *(long **)(lVar4 + 0x448);
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
    plVar3 = *(long **)(puVar1 + 6);
    *(long **)(puVar1 + 6) = plVar7;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x20))();
    }
    plVar7 = *(long **)(param_1 + lVar8 * 0x58 + 0x450);
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
    plVar3 = *(long **)(puVar1 + 8);
    *(long **)(puVar1 + 8) = plVar7;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x20))();
    }
    lVar4 = param_1 + lVar8 * 0x58;
    *(undefined8 *)(puVar1 + 10) = *(undefined8 *)(lVar4 + 0x458);
    plVar7 = *(long **)(lVar4 + 0x460);
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
    plVar3 = *(long **)(puVar1 + 0xc);
    *(long **)(puVar1 + 0xc) = plVar7;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x20))();
    }
    param_1 = param_1 + lVar8 * 0x58;
    uVar5 = *(undefined8 *)(param_1 + 0x470);
    uVar6 = *(undefined8 *)(param_1 + 0x478);
    *(undefined8 *)(puVar1 + 0xe) = *(undefined8 *)(param_1 + 0x468);
    *(undefined8 *)(puVar1 + 0x10) = uVar5;
    *(undefined8 *)(puVar1 + 0x12) = uVar6;
    uVar2 = *(undefined4 *)(param_1 + 0x480);
    *(undefined1 *)(puVar1 + 0x15) = *(undefined1 *)(param_1 + 0x484);
    puVar1[0x14] = uVar2;
  }
  return;
}


