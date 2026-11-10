/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002418b0; name: FUN_002418b0
 */


void FUN_002418b0(long param_1,long param_2)

{
  byte *pbVar1;
  uint uVar2;
  undefined *puVar3;
  
  puVar3 = PTR_DAT_04372cf8;
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 >> 9 & 1) == 0) {
    FUN_00877788(param_2,*(undefined8 *)(param_1 + 0x40));
    return;
  }
  pbVar1 = (byte *)(*(long *)(param_1 + 0x18) +
                   ((ulong)(uVar2 << 4) & 0x30) + ((ulong)uVar2 & 0x30) +
                   ((ulong)(uVar2 >> 2) & 3) * 0x14);
  (**(code **)PTR_DAT_04372cf8)
            (*(long *)(param_1 + 0x40) + 8,*(undefined4 *)(&DAT_038881c0 + (ulong)*pbVar1 * 4));
  (**(code **)PTR_DAT_04372d00)(*(undefined4 *)(pbVar1 + 4),*(undefined8 *)(param_2 + 0xb0));
  FUN_00877788(param_2,*(undefined8 *)(param_1 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00241974. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)puVar3)(*(long *)(param_1 + 0x40) + 8,8);
  return;
}


