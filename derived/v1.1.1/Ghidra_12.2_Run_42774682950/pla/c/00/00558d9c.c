/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00558d9c; name: FUN_00558d9c
 */


void FUN_00558d9c(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  code *pcVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 local_30;
  undefined8 local_28;
  
  if (*(char *)(param_2 + 1) == '\0') {
    iVar4 = pthread_rwlock_unlock((pthread_rwlock_t *)*param_2);
    if ((iVar4 != 0) || (iVar4 = pthread_rwlock_wrlock((pthread_rwlock_t *)*param_2), iVar4 != 0)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined1 *)(param_2 + 1) = 1;
  }
  pcVar5 = (code *)FUN_005504a0();
  local_30 = *(undefined8 *)(param_1 + 0xa8);
  local_28 = *(undefined8 *)(param_1 + 200);
  (*pcVar5)(&local_30);
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  puVar3 = PTR_LAB_04373088;
  plVar6 = *(long **)(param_1 + 0xc0);
  puVar2 = PTR_LAB_04373088;
  while (PTR_LAB_04373088 = puVar2, plVar6 != (long *)0x0) {
    puVar1 = plVar6 + 2;
    plVar6 = (long *)*plVar6;
    FUN_002e2ea0(puVar3,*puVar1);
    puVar2 = PTR_LAB_04373088;
  }
  if (*(long *)(param_1 + 200) != 0) {
    plVar6 = *(long **)(param_1 + 0xc0);
    while (plVar6 != (long *)0x0) {
      plVar6 = (long *)*plVar6;
      FUN_002e2ea0(puVar2);
    }
    uVar9 = *(ulong *)(param_1 + 0xb8);
    *(undefined8 *)(param_1 + 0xc0) = 0;
    if (uVar9 != 0) {
      uVar7 = uVar9 & 3;
      if (uVar9 - 1 < 3) {
        lVar8 = 0;
      }
      else {
        lVar8 = 0;
        do {
          lVar10 = lVar8 * 8;
          lVar8 = lVar8 + 4;
          *(undefined8 *)(*(long *)(param_1 + 0xb0) + lVar10) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0xb0) + lVar10 + 8) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0xb0) + lVar10 + 0x10) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0xb0) + lVar10 + 0x18) = 0;
        } while (uVar9 - uVar7 != lVar8);
      }
      if (uVar7 != 0) {
        lVar8 = lVar8 << 3;
        do {
          *(undefined8 *)(*(long *)(param_1 + 0xb0) + lVar8) = 0;
          uVar7 = uVar7 - 1;
          lVar8 = lVar8 + 8;
        } while (uVar7 != 0);
      }
    }
    *(undefined8 *)(param_1 + 200) = 0;
  }
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_1 + 0xa8);
  return;
}


