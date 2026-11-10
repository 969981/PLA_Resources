/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e50f04; name: FUN_02e50f04
 */


void FUN_02e50f04(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  
  lVar1 = -4;
  if (*(long *)(param_1 + 0x40) != -1) {
    lVar1 = *(long *)(param_1 + 0x40);
  }
  puVar3 = (undefined8 *)
           FUN_02e4ff70(lVar1,*(undefined4 *)(param_1 + 0x60),
                        *(undefined8 *)(*(long *)(param_2 + 8) + 0x48));
  if ((puVar3 == (undefined8 *)0x0) ||
     (iVar2 = *(int *)(puVar3 + 10), *(int *)(puVar3 + 10) = iVar2 + -1, iVar2 + -1 != 0)) {
    return;
  }
  (**(code **)*puVar3)(puVar3);
  FUN_02f59e60(4,puVar3);
  return;
}


