/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005576f8; name: FUN_005576f8
 */


void FUN_005576f8(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  
  lVar9 = *(long *)(param_1 + 0x48);
  if (lVar9 != 0) {
    FUN_00552710(lVar9);
    FUN_002e2ea0(PTR_LAB_04373088,lVar9);
  }
  lVar9 = *(long *)(param_1 + 0x50);
  if (lVar9 != 0) {
    FUN_00552710(lVar9);
    FUN_002e2ea0(PTR_LAB_04373088,lVar9);
  }
  puVar3 = PTR_LAB_04373088;
  plVar5 = *(long **)(param_1 + 0xc0);
  puVar2 = PTR_LAB_04373088;
  while (PTR_LAB_04373088 = puVar2, plVar5 != (long *)0x0) {
    puVar1 = plVar5 + 2;
    plVar5 = (long *)*plVar5;
    FUN_002e2ea0(puVar3,*puVar1);
    puVar2 = PTR_LAB_04373088;
  }
  if (*(long *)(param_1 + 200) != 0) {
    plVar5 = *(long **)(param_1 + 0xc0);
    while (plVar5 != (long *)0x0) {
      plVar5 = (long *)*plVar5;
      FUN_002e2ea0(puVar2);
    }
    uVar7 = *(ulong *)(param_1 + 0xb8);
    *(undefined8 *)(param_1 + 0xc0) = 0;
    if (uVar7 != 0) {
      uVar6 = uVar7 & 3;
      if (uVar7 - 1 < 3) {
        lVar9 = 0;
      }
      else {
        lVar9 = 0;
        do {
          lVar8 = lVar9 * 8;
          lVar9 = lVar9 + 4;
          *(undefined8 *)(*(long *)(param_1 + 0xb0) + lVar8) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0xb0) + lVar8 + 8) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0xb0) + lVar8 + 0x10) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0xb0) + lVar8 + 0x18) = 0;
        } while (uVar7 - uVar6 != lVar9);
      }
      if (uVar6 != 0) {
        lVar9 = lVar9 << 3;
        do {
          *(undefined8 *)(*(long *)(param_1 + 0xb0) + lVar9) = 0;
          uVar6 = uVar6 - 1;
          lVar9 = lVar9 + 8;
        } while (uVar6 != 0);
      }
    }
    *(undefined8 *)(param_1 + 200) = 0;
  }
  puVar2 = PTR_LAB_04373088;
  plVar5 = *(long **)(param_1 + 0xc0);
  while (plVar5 != (long *)0x0) {
    plVar5 = (long *)*plVar5;
    FUN_002e2ea0(puVar2);
  }
  lVar9 = *(long *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  if (lVar9 != 0) {
    FUN_002e2ea0(PTR_LAB_04373088);
  }
                    /* try { // try from 00557864 to 00557867 has its CatchHandler @ 005578a8 */
  iVar4 = pthread_rwlock_destroy((pthread_rwlock_t *)(param_1 + 0x68));
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0055789c to 0055789f has its CatchHandler @ 005578a8 */
    abort();
  }
  lVar9 = *(long *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = 0;
  if (lVar9 != 0) {
    FUN_002e2ea0(PTR_LAB_04373088);
  }
                    /* try { // try from 00557888 to 0055788b has its CatchHandler @ 005578a4 */
  iVar4 = pthread_rwlock_destroy((pthread_rwlock_t *)(param_1 + 0x10));
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 005578a0 to 005578a3 has its CatchHandler @ 005578a4 */
    abort();
  }
  return;
}


