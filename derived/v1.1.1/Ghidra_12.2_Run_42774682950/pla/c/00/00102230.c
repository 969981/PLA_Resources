/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00102230; name: FUN_00102230
 */


/* WARNING: Removing unreachable block (ram,0x00102c60) */
/* WARNING: Removing unreachable block (ram,0x00102e34) */
/* WARNING: Removing unreachable block (ram,0x00102e40) */
/* WARNING: Removing unreachable block (ram,0x00102e4c) */
/* WARNING: Removing unreachable block (ram,0x00102e5c) */
/* WARNING: Removing unreachable block (ram,0x00102ebc) */
/* WARNING: Removing unreachable block (ram,0x00102ec8) */
/* WARNING: Removing unreachable block (ram,0x00102ed0) */
/* WARNING: Removing unreachable block (ram,0x00102ee4) */
/* WARNING: Removing unreachable block (ram,0x00102e64) */
/* WARNING: Removing unreachable block (ram,0x00102e74) */
/* WARNING: Removing unreachable block (ram,0x00102e7c) */
/* WARNING: Removing unreachable block (ram,0x00102e84) */
/* WARNING: Removing unreachable block (ram,0x00102ea8) */
/* WARNING: Removing unreachable block (ram,0x00102dfc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_00102230(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
            undefined8 *param_5)

{
  uint uVar1;
  undefined8 uVar2;
  
  *param_5 = 0;
  *param_3 = 0;
  uVar1 = *(uint *)(param_1 + 0x24);
  while (0xe < uVar1) {
    uVar1 = *(uint *)(param_1 + 0x24);
  }
                    /* WARNING: Could not recover jumptable at 0x0010230c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)(&UNK_00102310 + (ulong)*(ushort *)(&DAT_0388a560 + (ulong)uVar1 * 2) * 4))();
  return uVar2;
}


