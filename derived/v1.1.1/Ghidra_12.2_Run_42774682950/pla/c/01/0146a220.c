/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0146a220; name: FUN_0146a220
 */


long FUN_0146a220(long param_1,int param_2)

{
  long lVar1;
  byte *pbVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  byte local_70 [32];
  undefined1 *local_50;
  undefined1 *puStack_48;
  size_t local_40;
  long *local_38;
  
  puVar4 = &DAT_cbf29ce484222645;
  snprintf((char *)local_70,0x20,"PopupMessageView%02d",param_2);
  uVar3 = *(undefined8 *)(param_1 + 0x4c8);
  local_40 = strlen((char *)local_70);
  if (local_70[0] != 0) {
    pbVar2 = (byte *)((ulong)local_70 | 1);
    do {
      puVar4 = (undefined1 *)(((ulong)puVar4 ^ (ulong)local_70[0]) * 0x100000001b3);
      local_70[0] = *pbVar2;
      pbVar2 = pbVar2 + 1;
    } while (local_70[0] != 0);
  }
  local_38 = (long *)0x0;
  local_50 = puVar4;
  puStack_48 = local_70;
  lVar1 = FUN_01470e0c(uVar3,&local_50);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  return lVar1;
}


