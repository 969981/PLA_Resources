/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001594c0; name: FUN_001594c0
 */


undefined8 FUN_001594c0(long param_1,byte *param_2,long param_3)

{
  byte *pbVar1;
  byte bVar2;
  char *pcVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined4 local_70 [2];
  undefined4 local_68;
  
  if (*(char *)(param_1 + 0xc) == '\x01') {
    plVar5 = *(long **)(param_1 + 0x20);
    lVar8 = *plVar5;
    *plVar5 = *(long *)(param_1 + 0x38) + plVar5[7];
    plVar5[7] = lVar8 - *(long *)(param_1 + 0x38);
  }
  if (*param_2 == 0x3e) {
    plVar5 = (long *)(*(long *)(param_1 + 0x10) + -0x10);
    param_2 = param_2 + 1;
    *(long **)(param_1 + 0x10) = plVar5;
  }
  else {
    plVar5 = (long *)**(undefined8 **)(param_3 + 0x78);
  }
  if ((*(uint *)(plVar5 + 1) & 0x1f) == 6) {
    lVar8 = *plVar5;
  }
  else {
    lVar8 = 0;
  }
  uVar10 = 1;
  bVar2 = *param_2;
  pbVar1 = param_2;
  while( true ) {
    if (bVar2 - 0x4c < 0x2a) {
                    /* WARNING: Could not recover jumptable at 0x001595c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar10 = (*(code *)((ulong)(byte)(&DAT_039c5a34)[bVar2 - 0x4c] * 4 + 0x1595a8))();
      return uVar10;
    }
    if (bVar2 == 0) break;
    uVar10 = 0;
    pbVar1 = pbVar1 + 1;
    bVar2 = *pbVar1;
  }
  pcVar3 = strchr((char *)param_2,0x66);
  if (pcVar3 != (char *)0x0) {
    plVar6 = *(long **)(param_1 + 0x10);
    lVar9 = plVar5[1];
    *plVar6 = *plVar5;
    plVar6[1] = lVar9;
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  }
  if (*(char *)(param_1 + 0xc) == '\x01') {
    plVar5 = *(long **)(param_1 + 0x20);
    lVar9 = *plVar5;
    *plVar5 = *(long *)(param_1 + 0x38) + plVar5[7];
    plVar5[7] = lVar9 - *(long *)(param_1 + 0x38);
  }
  pcVar3 = strchr((char *)param_2,0x4c);
  if (pcVar3 != (char *)0x0) {
    if ((lVar8 == 0) || (*(char *)(lVar8 + 8) == '&')) {
      *(undefined4 *)(*(long *)(param_1 + 0x10) + 8) = 0;
      *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
    }
    else {
      lVar9 = *(long *)(*(long *)(lVar8 + 0x18) + 0x48);
      uVar4 = FUN_00171cf0(param_1);
      puVar7 = *(undefined8 **)(param_1 + 0x10);
      *puVar7 = uVar4;
      *(undefined4 *)(puVar7 + 1) = 0x45;
      *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
      local_68 = 1;
      local_70[0] = 1;
      if (0 < *(int *)(*(long *)(lVar8 + 0x18) + 0x1c)) {
        lVar11 = 0;
        do {
          FUN_00171ba0(param_1,uVar4,(long)*(int *)(lVar9 + lVar11 * 4),local_70);
          lVar11 = lVar11 + 1;
        } while (lVar11 < *(int *)(*(long *)(lVar8 + 0x18) + 0x1c));
      }
    }
  }
  return uVar10;
}


