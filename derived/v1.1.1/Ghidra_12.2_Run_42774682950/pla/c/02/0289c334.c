/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0289c334; name: FUN_0289c334
 */


void FUN_0289c334(ulong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x38d490);
  if (lVar4 == 0) {
    lVar4 = FUN_0333d16c(0,1);
    *(long *)(lVar1 + 0x38d490) = lVar4;
  }
  plVar2 = *(long **)(*(long *)(lVar4 + 8) + 0x58);
  puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x10))(plVar2,0x28,0);
  *puVar3 = &PTR_LAB_04272198;
  puVar3[1] = *param_1 & 0xfffffffffffffffc;
  puVar3[2] = param_2;
  *param_1 = *param_1 & 3 | (ulong)puVar3;
  *puVar3 = &PTR_LAB_04272358;
  puVar3[3] = param_3;
  puVar3[4] = param_4;
  return;
}


