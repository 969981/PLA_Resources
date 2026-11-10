/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032ce020; name: FUN_032ce020
 */


long FUN_032ce020(long param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  puVar4 = *(undefined8 **)(param_1 + 0x20);
  if (puVar4 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x20) = *puVar4;
    *(undefined8 *)(param_1 + 0x40) = puVar4[2];
    *(long *)(param_1 + 0x48) = puVar4[2] + *(long *)(param_1 + 8) * puVar4[3];
    *puVar4 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 **)(param_1 + 0x18) = puVar4;
    lVar7 = *(long *)(param_1 + 0x68);
    lVar3 = *(long *)(param_1 + 0x40);
    goto LAB_032ce0fc;
  }
  lVar7 = *(long *)(param_1 + 0x28);
  if (lVar7 == 0) {
    uVar5 = *(ulong *)(param_1 + 8);
    uVar2 = 0;
    if (uVar5 != 0) {
      uVar2 = 0x100 / uVar5;
    }
    if (0x100 < uVar5) {
      uVar2 = 1;
    }
    lVar7 = 0x20;
    if (0x10 < *(ulong *)(param_1 + 0x30)) {
      lVar7 = *(ulong *)(param_1 + 0x30) + 0x10;
    }
    lVar7 = lVar7 + uVar2 * uVar5;
    *(long *)(param_1 + 0x28) = lVar7;
    plVar1 = *(long **)(param_1 + 0x58);
    if (plVar1 == (long *)0x0) goto LAB_032ce1a8;
LAB_032ce04c:
    puVar4 = (undefined8 *)(**(code **)(*plVar1 + 0x10))(plVar1,0x20,0);
    if (puVar4 == (undefined8 *)0x0) {
      return 0;
    }
    lVar7 = *(long *)(param_1 + 0x28);
    uVar2 = (**(code **)(**(long **)(param_1 + 0x50) + 0x10))(*(long **)(param_1 + 0x50),lVar7,0);
    if (uVar2 == 0) {
      (**(code **)(**(long **)(param_1 + 0x58) + 0x18))(*(long **)(param_1 + 0x58),puVar4,0x20);
      return 0;
    }
    puVar4[1] = uVar2;
    uVar5 = (uVar2 + *(long *)(param_1 + 0x30)) - 1 & -*(long *)(param_1 + 0x30);
    if ((uVar2 == uVar5) && (lVar7 == *(long *)(param_1 + 0x28))) {
      uVar6 = *(ulong *)(param_1 + 0x38);
      uVar5 = uVar2;
    }
    else {
      uVar6 = 0;
      if (*(ulong *)(param_1 + 8) != 0) {
        uVar6 = ((uVar2 + lVar7) - uVar5) / *(ulong *)(param_1 + 8);
      }
    }
  }
  else {
    plVar1 = *(long **)(param_1 + 0x58);
    if (plVar1 != (long *)0x0) goto LAB_032ce04c;
LAB_032ce1a8:
    puVar4 = (undefined8 *)
             (**(code **)(**(long **)(param_1 + 0x50) + 0x10))(*(long **)(param_1 + 0x50),lVar7,0);
    if (puVar4 == (undefined8 *)0x0) {
      return 0;
    }
    lVar3 = *(long *)(param_1 + 0x30);
    puVar4[1] = 0;
    uVar5 = (long)puVar4 + lVar3 + 0x1f & -lVar3;
    uVar6 = 0;
    if (*(ulong *)(param_1 + 8) != 0) {
      uVar6 = ((long)puVar4 + (lVar7 - uVar5)) / *(ulong *)(param_1 + 8);
    }
  }
  puVar4[2] = uVar5;
  puVar4[3] = uVar6;
  *(ulong *)(param_1 + 0x40) = uVar5;
  *(long *)(param_1 + 0x48) = puVar4[2] + *(long *)(param_1 + 8) * puVar4[3];
  *puVar4 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 **)(param_1 + 0x18) = puVar4;
  lVar3 = *(long *)(param_1 + 0x40);
  *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x60) + puVar4[3];
  lVar7 = puVar4[3] + *(long *)(param_1 + 0x68);
LAB_032ce0fc:
  *(long *)(param_1 + 0x68) = lVar7 + -1;
  *(long *)(param_1 + 0x40) = lVar3 + *(long *)(param_1 + 8);
  return lVar3;
}


