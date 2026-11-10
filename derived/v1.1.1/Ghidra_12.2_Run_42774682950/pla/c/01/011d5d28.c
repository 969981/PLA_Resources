/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011d5d28; name: FUN_011d5d28
 */


void FUN_011d5d28(long *param_1,byte param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined8 local_50;
  undefined *puStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  lVar5 = (ulong)*(byte *)(param_1 + 2) * 0x18;
  local_50 = *(undefined8 *)(&DAT_041f8208 + lVar5);
  puStack_48 = (&PTR_s_anime_L_poke_00_waza_target_041f8210)[(ulong)*(byte *)(param_1 + 2) * 3];
  local_40 = *(undefined8 *)(&DAT_041f8218 + lVar5);
  uStack_38 = 0;
  FUN_0283b1e8(*param_1,&local_50);
  lVar5 = (ulong)*(byte *)(param_1 + 2) * 0x18;
  local_50 = *(undefined8 *)(&DAT_041f8208 + lVar5);
  puStack_48 = (&PTR_s_anime_L_poke_00_waza_target_041f8210)[(ulong)*(byte *)(param_1 + 2) * 3];
  local_40 = *(undefined8 *)(&DAT_041f8218 + lVar5);
  uStack_38 = 0;
  FUN_0283b748(0x3f800000,*param_1,&local_50);
  *(undefined1 *)((long)param_1 + 0x11) = 1;
  plVar3 = *(long **)(*param_1 + 0x148);
  lVar5 = *(long *)(*param_1 + 0x150);
  if ((lVar5 != 0) && (*plVar3 != *(long *)(&DAT_041f8280 + (ulong)*(byte *)(param_1 + 2) * 0x18)))
  {
    plVar4 = plVar3 + lVar5 * 6;
    lVar5 = lVar5 * 0x30;
    do {
      lVar5 = lVar5 + -0x30;
      if (lVar5 == 0) {
        plVar3 = plVar4;
        break;
      }
      plVar2 = plVar3 + 6;
      plVar1 = plVar3 + 6;
      plVar3 = plVar2;
    } while (*plVar1 != *(long *)(&DAT_041f8280 + (ulong)*(byte *)(param_1 + 2) * 0x18));
  }
  *(byte *)(plVar3[4] + 0x58) = *(byte *)(plVar3[4] + 0x58) & 0xfe | param_2 & 1;
  return;
}


