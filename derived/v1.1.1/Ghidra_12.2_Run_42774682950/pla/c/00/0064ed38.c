/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0064ed38; name: FUN_0064ed38
 */


void FUN_0064ed38(long *param_1,char *param_2)

{
  long *plVar1;
  undefined *puVar2;
  size_t sVar3;
  ulong *puVar4;
  long lVar5;
  undefined *puVar6;
  
  lVar5 = *param_1;
  if (lVar5 == 0) {
    lVar5 = FUN_002e2e80(PTR_FUN_04373078,0x28);
    if (lVar5 != 0) {
                    /* try { // try from 0064ed6c to 0064ed77 has its CatchHandler @ 0064ee10 */
      FUN_00696378(lVar5,0);
    }
    *param_1 = lVar5;
  }
  puVar2 = PTR_DAT_043730c0;
  if (*(int *)(lVar5 + 0x24) != 6) {
                    /* try { // try from 0064ed90 to 0064edeb has its CatchHandler @ 0064ee14 */
    FUN_006962a8(lVar5);
    *(undefined4 *)(lVar5 + 0x24) = 6;
    *(undefined **)(lVar5 + 0x18) = puVar2;
  }
  plVar1 = (long *)(lVar5 + 0x18);
  puVar4 = (ulong *)(*(ulong *)(lVar5 + 8) & 0xfffffffffffffffe);
  if ((*(ulong *)(lVar5 + 8) & 1) == 0) {
    puVar6 = (undefined *)*plVar1;
  }
  else {
    puVar4 = (ulong *)*puVar4;
    puVar6 = (undefined *)*plVar1;
  }
  if (puVar6 == puVar2) {
    FUN_0029175c(plVar1,puVar4,PTR_DAT_043730c0);
    puVar6 = (undefined *)*plVar1;
  }
  sVar3 = strlen(param_2);
  FUN_00291910(puVar6,param_2,sVar3);
  return;
}


