/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01540a78; name: FUN_01540a78
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_01540a78(undefined8 param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined8 local_28;
  
  puVar1 = (undefined8 *)FUN_02ad8108();
  local_28 = FUN_02b1f8b0(*puVar1,param_1);
  uVar2 = FUN_02b21278(*puVar1,&local_28);
  auVar3._8_8_ = _UNK_0388a138;
  auVar3._0_8_ = _DAT_0388a130;
  if ((uVar2 & 1) != 0) {
    auVar3 = FUN_02b22358(*puVar1,&local_28);
  }
  return auVar3;
}


