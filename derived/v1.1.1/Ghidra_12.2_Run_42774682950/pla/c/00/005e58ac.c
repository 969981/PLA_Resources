/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005e58ac; name: FUN_005e58ac
 */


void FUN_005e58ac(long param_1,long *param_2,undefined8 *param_3)

{
  ulong uVar1;
  long *plVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  void *__ptr;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  char *pcVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  lVar6 = *param_2;
  if (lVar6 == 0) {
    uVar7 = (ulong)*(byte *)(param_2 + 1);
    lVar6 = (long)param_2 + 9;
LAB_005e5918:
    uVar5 = FUN_003da780(lVar6,uVar7,*(undefined4 *)PTR_DAT_043740a8);
    uVar7 = *(ulong *)(param_1 + 0x20);
  }
  else {
    if (*(int *)(lVar6 + 8) == 1) {
      uVar3 = *(uint *)(lVar6 + 0x68);
      uVar7 = *(ulong *)(param_1 + 0x20);
    }
    else {
      if (*(int *)(lVar6 + 8) != 0) {
        uVar7 = param_2[1];
        lVar6 = param_2[2];
        goto LAB_005e5918;
      }
      uVar3 = *(uint *)(PTR_DAT_043740a0 + (ulong)*(uint *)(lVar6 + 0x28) * 4);
      uVar7 = *(ulong *)(param_1 + 0x20);
    }
    uVar5 = (ulong)uVar3;
  }
  if (uVar7 != 0) {
    lVar6 = *(long *)(param_1 + 0x30);
    uVar11 = 0;
    do {
      uVar1 = (uVar5 & 0xffffffff) + uVar11;
      uVar4 = 0;
      if (uVar7 != 0) {
        uVar4 = uVar1 / uVar7;
      }
      lVar9 = uVar1 - uVar4 * uVar7;
      pcVar10 = (char *)(lVar6 + lVar9 * 0x30 + 0x28);
      if (*pcVar10 == '\0') {
        *pcVar10 = '\x01';
        lVar12 = *param_2;
        lVar14 = param_2[3];
        lVar13 = param_2[2];
        lVar9 = lVar9 * 0x30;
        plVar2 = (long *)(lVar6 + lVar9);
        plVar2[1] = param_2[1];
        *plVar2 = lVar12;
        plVar2[3] = lVar14;
        plVar2[2] = lVar13;
        lVar9 = *(long *)(param_1 + 0x30) + lVar9;
        uVar8 = *param_3;
        *param_3 = 0;
        __ptr = *(void **)(lVar9 + 0x20);
        *(undefined8 *)(lVar9 + 0x20) = uVar8;
        if (__ptr != (void *)0x0) {
                    /* try { // try from 005e59c4 to 005e59c7 has its CatchHandler @ 005e59e8 */
          free(__ptr);
        }
        if (*(ulong *)(param_1 + 0x28) < uVar11) {
          *(ulong *)(param_1 + 0x28) = uVar11;
        }
        return;
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar7);
  }
  FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/slice/slice_hash_table.h",0x94,2,
               "assertion failed: %s","false");
                    /* WARNING: Subroutine does not return */
  abort();
}


