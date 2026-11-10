/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e4b1b8; name: FUN_02e4b1b8
 */


/* WARNING: Removing unreachable block (ram,0x02e4b224) */
/* WARNING: Removing unreachable block (ram,0x02e4b25c) */
/* WARNING: Removing unreachable block (ram,0x02e4b26c) */
/* WARNING: Removing unreachable block (ram,0x02e4b2a8) */
/* WARNING: Removing unreachable block (ram,0x02e4b278) */
/* WARNING: Removing unreachable block (ram,0x02e4b2d8) */
/* WARNING: Removing unreachable block (ram,0x02e4b280) */
/* WARNING: Removing unreachable block (ram,0x02e4b230) */
/* WARNING: Removing unreachable block (ram,0x02e4b234) */

undefined8 FUN_02e4b1b8(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = FUN_02e4b320();
  if ((uVar1 & 1) == 0) {
    lVar3 = *param_4;
    if ((*(int *)(lVar3 + 0x280) == 1) && (0 < *(int *)(lVar3 + 0x284))) {
      lVar3 = *(long *)(lVar3 + 0x200);
      FUN_02e46974(param_1 + 0x18);
      uVar2 = 0;
      *param_4 = lVar3;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


