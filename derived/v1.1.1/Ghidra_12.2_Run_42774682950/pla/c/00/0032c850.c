/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0032c850; name: FUN_0032c850
 */


undefined8 FUN_0032c850(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar2 = tpidr_el0;
  if (*(long *)(lVar2 + 0x10) == *(long *)(param_1 + 0x20)) {
    lVar4 = *(long *)(lVar2 + 0x18);
  }
  else {
    lVar4 = *(long *)(param_1 + 8);
    if ((lVar4 == 0) || (*(long *)(lVar4 + 8) != lVar2 + 0x10)) {
      lVar2 = tpidr_el0;
      if (*(long *)(lVar2 + 0x10) == *(long *)(param_1 + 0x20)) {
        lVar4 = *(long *)(lVar2 + 0x18);
      }
      else {
        lVar4 = *(long *)(param_1 + 8);
        if ((lVar4 == 0) || (*(long *)(lVar4 + 8) != lVar2 + 0x10)) {
          lVar4 = FUN_0032cc90(param_1,lVar2 + 0x10);
        }
      }
      uVar3 = FUN_0032c744(lVar4,param_2);
      puVar1 = *(undefined8 **)(lVar4 + 0x38);
      if (puVar1 == *(undefined8 **)(lVar4 + 0x40)) {
        FUN_0032c6b4(lVar4,uVar3,param_3);
        return uVar3;
      }
      *puVar1 = uVar3;
      puVar1[1] = param_3;
      *(undefined8 **)(lVar4 + 0x38) = puVar1 + 2;
      return uVar3;
    }
  }
  uVar3 = FUN_0032c744(lVar4,param_2);
  puVar1 = *(undefined8 **)(lVar4 + 0x38);
  if (puVar1 == *(undefined8 **)(lVar4 + 0x40)) {
    FUN_0032c6b4(lVar4,uVar3,param_3);
    return uVar3;
  }
  *puVar1 = uVar3;
  puVar1[1] = param_3;
  *(undefined8 **)(lVar4 + 0x38) = puVar1 + 2;
  return uVar3;
}


