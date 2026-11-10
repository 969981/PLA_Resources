/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e96390; name: FUN_02e96390
 */


undefined8 * FUN_02e96390(long param_1,uint param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  float fVar8;
  
  uVar4 = *(uint *)(param_1 + 0x10);
  if ((uVar4 == 0) ||
     (fVar8 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x18)), 0.9 < fVar8 / (float)uVar4)) {
    FUN_02e97310(param_1);
    uVar4 = *(uint *)(param_1 + 0x10);
    if (uVar4 == 0) {
      return (undefined8 *)0x0;
    }
  }
  uVar1 = 0;
  if (uVar4 != 0) {
    uVar1 = param_2 / uVar4;
  }
  uVar7 = (ulong)(param_2 - uVar1 * uVar4);
  plVar5 = *(long **)(*(long *)(param_1 + 8) + uVar7 * 8);
  while( true ) {
    if (plVar5 == (long *)0x0) {
      puVar2 = (undefined8 *)(*DAT_0442d138)(0,0x38);
      puVar3 = puVar2;
      if (puVar2 != (undefined8 *)0x0) {
        lVar6 = uVar7 * 8;
        *puVar2 = *(undefined8 *)(*(long *)(param_1 + 8) + lVar6);
        *(uint *)(puVar2 + 1) = param_2;
        puVar3 = puVar2 + 2;
        *puVar3 = 0;
        puVar2[3] = 0xffffffff00000000;
        puVar2[4] = 0;
        puVar2[5] = 0;
        *(undefined4 *)(puVar2 + 6) = 1;
        *(undefined8 **)(*(long *)(param_1 + 8) + lVar6) = puVar2;
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      }
      return puVar3;
    }
    if (*(uint *)(plVar5 + 1) == param_2) break;
    plVar5 = (long *)*plVar5;
  }
  return plVar5 + 2;
}


