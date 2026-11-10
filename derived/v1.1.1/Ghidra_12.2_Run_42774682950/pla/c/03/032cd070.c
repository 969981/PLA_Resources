/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032cd070; name: FUN_032cd070
 */


undefined8 FUN_032cd070(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  
  uVar2 = FUN_032cd128();
  if ((uVar2 == param_1[0xd]) && (uVar2 = FUN_032cd17c(param_1), uVar2 == param_1[0xc])) {
    puVar4 = (ulong *)*param_1;
    if (puVar4 == (ulong *)0x0) {
      uVar3 = 1;
    }
    else {
      uVar3 = 1;
      do {
        if (((param_1[6] - 1 & (ulong)puVar4) != 0) ||
           (puVar5 = (ulong *)param_1[3], puVar5 == (ulong *)0x0)) goto LAB_032cd110;
        uVar2 = param_1[1];
        while ((uVar6 = puVar5[2], puVar4 < uVar6 || (uVar6 + puVar5[3] * uVar2 <= puVar4))) {
          puVar5 = (ulong *)*puVar5;
          if (puVar5 == (ulong *)0x0) goto LAB_032cd110;
        }
        uVar1 = 0;
        if (uVar2 != 0) {
          uVar1 = ((long)puVar4 - uVar6) / uVar2;
        }
        if ((long)puVar4 - uVar6 != uVar1 * uVar2) goto LAB_032cd110;
        puVar4 = (ulong *)*puVar4;
      } while (puVar4 != (ulong *)0x0);
    }
  }
  else {
LAB_032cd110:
    uVar3 = 0;
  }
  return uVar3;
}


