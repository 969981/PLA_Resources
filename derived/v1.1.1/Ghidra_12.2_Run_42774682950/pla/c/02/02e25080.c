/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e25080; name: FUN_02e25080
 */


void FUN_02e25080(long *param_1)

{
  long lVar1;
  void *pvVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  int *piVar6;
  uint *puVar7;
  long *plVar8;
  ulong uVar9;
  
  lVar5 = *param_1;
  if ((lVar5 != 0) && (*(int *)((long)param_1 + 0x14) != 0)) {
    uVar4 = 0;
    while( true ) {
      piVar6 = (int *)(lVar5 + uVar4 * 0x18 + 8);
      if (*piVar6 != 0) {
        puVar7 = (uint *)(lVar5 + uVar4 * 0x18 + 0x10);
        uVar3 = *puVar7;
        if (uVar3 != 0) {
          plVar8 = (long *)(lVar5 + uVar4 * 0x18);
          pvVar2 = *(void **)*plVar8;
          if (pvVar2 != (void *)0x0) {
            memset(pvVar2,0,(ulong)(uint)(*piVar6 << 2));
            uVar3 = *puVar7;
          }
          if (1 < uVar3) {
            uVar9 = 1;
            do {
              pvVar2 = *(void **)(*plVar8 + uVar9 * 8);
              if (pvVar2 != (void *)0x0) {
                memset(pvVar2,0,(ulong)(uint)(*piVar6 << 2));
                uVar3 = *puVar7;
              }
              uVar9 = uVar9 + 1;
            } while (uVar9 < uVar3);
          }
        }
      }
      lVar1 = uVar4 * 0x18;
      uVar4 = uVar4 + 1;
      *(undefined4 *)(lVar5 + lVar1 + 0xc) = 0;
      if (*(uint *)((long)param_1 + 0x14) <= uVar4) break;
      lVar5 = *param_1;
    }
  }
  return;
}


