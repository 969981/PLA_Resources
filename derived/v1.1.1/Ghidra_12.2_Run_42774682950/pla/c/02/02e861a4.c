/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e861a4; name: FUN_02e861a4
 */


void FUN_02e861a4(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)param_1[8];
  *param_1 = &PTR_LAB_042a7278;
  if ((puVar3 == (undefined8 *)0x0) ||
     (iVar1 = *(int *)(puVar3 + 10), *(int *)(puVar3 + 10) = iVar1 + -1, iVar1 + -1 != 0)) {
    lVar2 = *(long *)((long)param_1 + 0x1c);
  }
  else {
    (**(code **)*puVar3)(puVar3);
    (*DAT_0442d150)(4,puVar3);
    lVar2 = *(long *)((long)param_1 + 0x1c);
  }
  if (lVar2 == 0) {
    return;
  }
  FUN_02e771a8();
  return;
}


