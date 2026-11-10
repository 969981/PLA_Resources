/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0147f3a0; name: FUN_0147f3a0
 */


void FUN_0147f3a0(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  if (param_2 != param_1) {
    lVar6 = 0;
    do {
      lVar1 = param_2 + lVar6;
      lVar2 = param_3 + lVar6;
      *(undefined1 *)(lVar2 + -0x58) = *(undefined1 *)(lVar1 + -0x58);
      *(undefined8 *)(lVar2 + -0x50) = *(undefined8 *)(lVar1 + -0x50);
      uVar4 = *(undefined8 *)(lVar1 + -0x40);
      plVar3 = *(long **)(lVar2 + -0x20);
      *(undefined8 *)(lVar2 + -0x48) = *(undefined8 *)(lVar1 + -0x48);
      *(undefined8 *)(lVar2 + -0x40) = uVar4;
      *(undefined8 *)(lVar2 + -0x38) = *(undefined8 *)(lVar1 + -0x38);
      *(undefined8 *)(lVar2 + -0x30) = *(undefined8 *)(lVar1 + -0x30);
      *(undefined8 *)(lVar2 + -0x28) = *(undefined8 *)(lVar1 + -0x28);
      *(undefined8 *)(lVar2 + -0x20) = 0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x20))();
      }
      uVar4 = *(undefined8 *)(lVar1 + -0x20);
      *(undefined8 *)(lVar1 + -0x20) = 0;
      *(undefined8 *)(lVar2 + -0x20) = uVar4;
      uVar4 = *(undefined8 *)(lVar1 + -0x10);
      uVar5 = *(undefined8 *)(lVar1 + -8);
      lVar6 = lVar6 + -0x58;
      *(undefined8 *)(lVar2 + -0x18) = *(undefined8 *)(lVar1 + -0x18);
      *(undefined8 *)(lVar2 + -0x10) = uVar4;
      *(undefined8 *)(lVar2 + -8) = uVar5;
    } while (param_1 - param_2 != lVar6);
  }
  return;
}


