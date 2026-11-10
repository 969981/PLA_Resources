/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004e3da0; name: FUN_004e3da0
 */


undefined8 FUN_004e3da0(long param_1,uint param_2,long param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  uint *puVar8;
  ulong uVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined1 auStack_48 [8];
  
  uVar3 = 1;
  if ((param_2 & 0x80) == 0) {
    uVar3 = (param_2 >> 7 ^ 0xffffffff) & 2;
  }
  lVar7 = *(long *)(*(long *)(param_1 + 0x488) + 0x1f0);
  if (lVar7 == -0x1a) {
LAB_004e3e70:
    uVar6 = 1;
  }
  else {
    uVar9 = 0;
    puVar10 = (undefined4 *)(param_3 + 0x18);
    puVar11 = &DAT_041830dc;
    if (*(int *)(param_3 + 0x10) != 0) goto LAB_004e3e1c;
    do {
      while( true ) {
        do {
          uVar9 = uVar9 + 1;
          puVar2 = puVar10 + 10;
          puVar11 = puVar11 + 0xe;
          if (lVar7 + 0x1aU == uVar9) goto LAB_004e3e70;
          piVar1 = puVar10 + 8;
          puVar10 = puVar2;
        } while (*piVar1 == 0);
LAB_004e3e1c:
        puVar8 = puVar11;
        if (0x19 < uVar9) {
          lVar5 = FUN_004e32a0(*(long *)(param_1 + 0x488) + 0x1e8,uVar3,*puVar10,auStack_48);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00404dd0("Assertion failed: meth != NULL","external/openssl/ssl/statem/extensions.c"
                         ,0x1b5);
          }
          puVar8 = (uint *)(lVar5 + 8);
        }
        uVar4 = *puVar8;
        if ((uVar4 & param_2) == 0) goto LAB_004e3e68;
        if ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x60) >> 3 & 1) != 0) break;
        if ((uVar4 >> 1 & 1) != 0) goto LAB_004e3e68;
      }
    } while ((uVar4 & 1) == 0);
LAB_004e3e68:
    uVar6 = 0;
  }
  return uVar6;
}


