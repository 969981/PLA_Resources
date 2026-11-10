/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02838ee0; name: FUN_02838ee0
 */


void FUN_02838ee0(long param_1,int param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  undefined *puVar4;
  
  uVar1 = param_2 - 1;
  if ((9 < (uVar1 & 0xff)) || ((0x3dfU >> (ulong)(uVar1 & 0x1f) & 1) == 0)) {
    return;
  }
  puVar4 = (&PTR_s_icon_lang_jpn_00_q_0426f540)[*(long *)(&DAT_03a7e450 + (long)(char)uVar1 * 8)];
  if ((*(long *)(param_1 + 0x68) == 0) || (*(char *)(*(long *)(param_1 + 0x68) + 0x1e1) == '\0')) {
    return;
  }
  plVar2 = (long *)FUN_02c3c370(*(undefined8 *)(param_1 + 0x90));
  lVar3 = (**(code **)(*plVar2 + 0x38))();
  if (lVar3 != 0) {
    FUN_02c3c390(*(undefined8 *)(param_1 + 0x90),plVar2,puVar4);
  }
  lVar3 = (**(code **)(*param_3 + 0x58))(param_3,0);
  *(long **)(*(long *)(lVar3 + 0x18) + 8) = plVar2;
  FUN_02c3bc38(*(undefined8 *)(param_1 + 0x90));
  return;
}


