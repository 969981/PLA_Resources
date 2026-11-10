/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01053d50; name: FUN_01053d50
 */


undefined8 FUN_01053d50(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  
  lVar1 = FUN_001511d0(param_1,1);
  uVar3 = *(ulong *)(*(long *)(lVar1 + ((ulong)(uint)-(int)lVar1 & 7)) + 0x30);
  if ((uVar3 & 1) != 0) {
    lVar1 = tpidr_el0;
    lVar4 = *(long *)(lVar1 + 0x38d490);
    if (lVar4 == 0) {
      lVar4 = FUN_0333d16c(0,1);
      *(long *)(lVar1 + 0x38d490) = lVar4;
    }
    plVar2 = *(long **)(*(long *)(lVar4 + 8) + 0x58);
    *(undefined8 *)(uVar3 - 0x11) = 0;
    (**(code **)(*plVar2 + 0x18))
              (plVar2,(undefined8 *)(uVar3 - 0x11),(long)*(int *)(uVar3 - 9) + 0x10);
  }
  return 0;
}


