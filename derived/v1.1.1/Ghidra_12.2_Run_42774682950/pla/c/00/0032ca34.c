/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0032ca34; name: FUN_0032ca34
 */


void FUN_0032ca34(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x10) == *(long *)(param_1 + 0x20)) {
    lVar2 = *(long *)(lVar1 + 0x18);
LAB_0032ca7c:
    puVar3 = *(undefined8 **)(lVar2 + 0x38);
    if (puVar3 == *(undefined8 **)(lVar2 + 0x40)) {
      FUN_0032c6b4(lVar2,param_2);
      return;
    }
    *puVar3 = param_2;
    puVar3[1] = param_3;
    *(undefined8 **)(lVar2 + 0x38) = puVar3 + 2;
    return;
  }
  lVar2 = *(long *)(param_1 + 8);
  if ((lVar2 != 0) && (*(long *)(lVar2 + 8) == lVar1 + 0x10)) goto LAB_0032ca7c;
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x10) == *(long *)(param_1 + 0x20)) {
    lVar2 = *(long *)(lVar1 + 0x18);
  }
  else {
    lVar2 = *(long *)(param_1 + 8);
    if ((lVar2 == 0) || (*(long *)(lVar2 + 8) != lVar1 + 0x10)) {
      lVar2 = FUN_0032cc90(param_1,lVar1 + 0x10);
      puVar3 = *(undefined8 **)(lVar2 + 0x38);
      if (puVar3 == *(undefined8 **)(lVar2 + 0x40)) goto LAB_0032cbc0;
      goto LAB_0032cb40;
    }
  }
  puVar3 = *(undefined8 **)(lVar2 + 0x38);
  if (puVar3 == *(undefined8 **)(lVar2 + 0x40)) {
LAB_0032cbc0:
    FUN_0032c6b4(lVar2,param_2);
    return;
  }
LAB_0032cb40:
  *puVar3 = param_2;
  puVar3[1] = param_3;
  *(undefined8 **)(lVar2 + 0x38) = puVar3 + 2;
  return;
}


