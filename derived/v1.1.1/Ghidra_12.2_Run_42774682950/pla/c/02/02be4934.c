/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02be4934; name: FUN_02be4934
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_02be4934(long param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined8 local_30;
  undefined8 uStack_28;
  
  lVar1 = *(long *)(param_1 + 0xd0);
  if (lVar1 == 0) {
    local_30 = _DAT_0388a130;
    uStack_28 = _UNK_0388a138;
  }
  else {
    FUN_0333e220(lVar1 + 0x60,lVar1 + 0xa0,&local_30);
  }
  auVar2._8_8_ = uStack_28;
  auVar2._0_8_ = local_30;
  return auVar2;
}


