/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028ca1c4; name: FUN_028ca1c4
 */


void FUN_028ca1c4(undefined8 *param_1,int *param_2)

{
  uint *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  
  *param_1 = param_2;
  lVar2 = 0;
  if (param_2 != (int *)0x0) {
    if ((*(ushort *)((long)param_2 - (long)*param_2) < 5) ||
       (uVar3 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[2], uVar3 == 0)) {
      lVar2 = 0;
    }
    else {
      puVar1 = (uint *)((long)param_2 + uVar3);
      lVar2 = (long)puVar1 + (ulong)*puVar1;
    }
  }
  FUN_028ca298(param_1 + 1,lVar2);
  piVar4 = (int *)*param_1;
  if (((piVar4 == (int *)0x0) || (*(ushort *)((long)piVar4 - (long)*piVar4) < 7)) ||
     (uVar3 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[3], uVar3 == 0)) {
    lVar2 = 0;
  }
  else {
    puVar1 = (uint *)((long)piVar4 + uVar3);
    lVar2 = (long)puVar1 + (ulong)*puVar1;
  }
  FUN_028ca298(param_1 + 0x16,lVar2);
  piVar4 = (int *)*param_1;
  if (((piVar4 == (int *)0x0) || (*(ushort *)((long)piVar4 - (long)*piVar4) < 9)) ||
     (uVar3 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[4], uVar3 == 0)) {
    lVar2 = 0;
  }
  else {
    puVar1 = (uint *)((long)piVar4 + uVar3);
    lVar2 = (long)puVar1 + (ulong)*puVar1;
  }
  FUN_028caf3c(param_1 + 0x2b,lVar2);
  return;
}


