/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001f3bd8; name: FUN_001f3bd8
 */


/* WARNING: Removing unreachable block (ram,0x001f3c2c) */
/* WARNING: Removing unreachable block (ram,0x001f3c34) */

undefined4
FUN_001f3bd8(long param_1,int param_2,undefined8 param_3,undefined8 param_4,long *param_5)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = (**(code **)(param_1 + (ulong)(*(int *)(param_1 + 0x25c) == param_2) * 8 + 0x280))();
  uVar1 = 0;
  *param_5 = lVar2;
  if (lVar2 < 0) {
    uVar1 = 0x37;
  }
  return uVar1;
}


