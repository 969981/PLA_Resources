/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033065e0; name: FUN_033065e0
 */


void FUN_033065e0(long *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong local_38 [3];
  
  FUN_032e42b4(local_38,*param_1);
  if (1 < local_38[0]) {
    *param_1 = *(long *)(*param_1 + 8);
  }
  local_38[0] = 0;
  local_38[1] = 0;
  local_38[2] = 0;
  uVar1 = FUN_03306530(param_1,local_38);
  if ((local_38[2] & 1) != 0) {
    FUN_032e0c40(local_38[2] & 0xfffffffffffffffe);
  }
  lVar3 = *param_1;
  puVar2 = (undefined8 *)FUN_032e20b0(lVar3,0x40);
  if ((puVar2 != (undefined8 *)0x0) && ((code *)*puVar2 != (code *)0x0)) {
    (*(code *)*puVar2)(uVar1,lVar3,1);
  }
  return;
}


