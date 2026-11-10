/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00185698; name: FUN_00185698
 */


void FUN_00185698(long param_1,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = *(long *)(param_1 + 0x48);
  lVar1 = 0;
  if (lVar3 != 0) {
    lVar1 = lVar3 + param_1 + 0x48;
  }
  uVar4 = *(undefined8 *)(lVar1 + 0x30);
  param_2[1] = *(undefined8 *)(lVar1 + 0x38);
  *param_2 = uVar4;
  uVar4 = *(undefined8 *)(lVar1 + 0x40);
  param_2[3] = *(undefined8 *)(lVar1 + 0x48);
  param_2[2] = uVar4;
  uVar2 = FUN_0333dee0(param_2);
  if ((uVar2 & 1) == 0) {
    param_2[2] = 0;
    param_2[3] = 0;
    *param_2 = 0;
    param_2[1] = 0;
  }
  return;
}


