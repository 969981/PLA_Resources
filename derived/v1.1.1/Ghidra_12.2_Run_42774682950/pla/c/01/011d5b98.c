/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011d5b98; name: FUN_011d5b98
 */


void FUN_011d5b98(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  byte bVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined8 local_40;
  undefined *puStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  if (param_2 == 0) {
    plVar2 = *(long **)(*param_1 + 0x148);
    lVar3 = *(long *)(*param_1 + 0x150);
    if ((lVar3 == 0) || (*plVar2 == *(long *)(&DAT_041f83e8 + (ulong)*(byte *)(param_1 + 2) * 0x18))
       ) {
      plVar6 = plVar2;
    }
    else {
      lVar5 = lVar3 * 0x30;
      plVar7 = plVar2;
      do {
        lVar5 = lVar5 + -0x30;
        if (lVar5 == 0) {
          return;
        }
        plVar1 = plVar7 + 6;
        plVar6 = plVar7 + 6;
        plVar7 = plVar7 + 6;
      } while (*plVar1 != *(long *)(&DAT_041f83e8 + (ulong)*(byte *)(param_1 + 2) * 0x18));
    }
    if (plVar6 == plVar2 + lVar3 * 6) {
      return;
    }
    lVar3 = plVar6[4];
    if (lVar3 == 0) {
      return;
    }
    bVar4 = *(byte *)(lVar3 + 0x58) & 0xfe;
  }
  else {
    if (param_1[1] == 0) {
      return;
    }
    FUN_0284ef04(param_1[1] + (ulong)*(byte *)(param_1 + 2) * 0xd0,
                 *(undefined8 *)(*(long *)(param_2 + 0x70) + 0x60),0,0);
    lVar3 = (ulong)*(byte *)(param_1 + 2) * 0x18;
    local_40 = *(undefined8 *)(&DAT_041f8370 + lVar3);
    puStack_38 = (&PTR_s_anime_L_poke_00_condition_00_041f8378)[(ulong)*(byte *)(param_1 + 2) * 3];
    local_30 = *(undefined8 *)(&DAT_041f8380 + lVar3);
    uStack_28 = 0;
    FUN_0283b1e8(*param_1,&local_40);
    plVar2 = *(long **)(*param_1 + 0x148);
    lVar3 = *(long *)(*param_1 + 0x150);
    if ((lVar3 == 0) || (*plVar2 == *(long *)(&DAT_041f83e8 + (ulong)*(byte *)(param_1 + 2) * 0x18))
       ) {
      plVar6 = plVar2;
    }
    else {
      lVar5 = lVar3 * 0x30;
      plVar7 = plVar2;
      do {
        lVar5 = lVar5 + -0x30;
        if (lVar5 == 0) {
          return;
        }
        plVar1 = plVar7 + 6;
        plVar6 = plVar7 + 6;
        plVar7 = plVar7 + 6;
      } while (*plVar1 != *(long *)(&DAT_041f83e8 + (ulong)*(byte *)(param_1 + 2) * 0x18));
    }
    if (plVar6 == plVar2 + lVar3 * 6) {
      return;
    }
    lVar3 = plVar6[4];
    if (lVar3 == 0) {
      return;
    }
    bVar4 = *(byte *)(lVar3 + 0x58) | 1;
  }
  *(byte *)(lVar3 + 0x58) = bVar4;
  return;
}


