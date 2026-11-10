/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00173900; name: FUN_00173900
 */


undefined8 * FUN_00173900(long param_1,long *param_2,uint param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  
  iVar2 = (int)((ulong)*(uint *)(param_2 + 1) & 0xf);
  if (iVar2 == 7) {
    lVar3 = *(long *)(*param_2 + 0x10);
  }
  else if (iVar2 == 5) {
    lVar3 = *(long *)(*param_2 + 0x28);
  }
  else {
    lVar3 = *(long *)(*(long *)(param_1 + 0x18) + ((ulong)*(uint *)(param_2 + 1) & 0xf) * 8 + 0x1a0)
    ;
  }
  if (lVar3 == 0) {
    return &DAT_039c5c28;
  }
  puVar1 = (undefined8 *)
           FUN_001723b0(lVar3,*(undefined8 *)(*(long *)(param_1 + 0x18) + (ulong)param_3 * 8 + 0xe0)
                       );
  return puVar1;
}


