/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0020c7f0; name: FUN_0020c7f0
 */


void FUN_0020c7f0(ulong *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = FUN_00205748(param_2);
  *param_1 = uVar2 >> 8 & 0xffffff;
  *(undefined1 *)((long)param_1 + 0xc) = *(undefined1 *)(param_2 + 3);
  *(undefined1 *)((long)param_1 + 0xd) = *(undefined1 *)(param_2 + 4);
  uVar1 = FUN_00205748(param_2 + 5);
  *(uint *)(param_1 + 1) = uVar1 & 0x7fffffff;
  *(undefined1 *)((long)param_1 + 0xe) = 0;
  return;
}


