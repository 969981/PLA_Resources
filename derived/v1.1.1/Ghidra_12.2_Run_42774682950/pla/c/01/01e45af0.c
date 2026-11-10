/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e45af0; name: FUN_01e45af0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01e45af0(undefined8 param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 local_30;
  undefined8 uStack_28;
  
  uVar2 = FUN_01e46770(param_1,PTR_DAT_04382320);
  if ((uVar2 & 1) != 0) {
    uStack_28 = _UNK_03888db8;
    local_30 = _DAT_03888db0;
    uVar2 = FUN_01e46770(param_1,&local_30);
    if (((uVar2 & 1) != 0) && (uVar2 = FUN_01e46770(param_1,PTR_DAT_0437a100), (uVar2 & 1) != 0)) {
      uStack_28 = _UNK_03889fd8;
      local_30 = _DAT_03889fd0;
      uVar2 = FUN_01e46770(param_1,&local_30);
      if (((uVar2 & 1) != 0) && (uVar2 = FUN_01e46770(param_1,PTR_DAT_0437a0f8), (uVar2 & 1) != 0))
      {
        uStack_28 = _UNK_03888d28;
        local_30 = _DAT_03888d20;
        uVar1 = FUN_01e46770(param_1,&local_30);
        goto LAB_01e45b94;
      }
    }
  }
  uVar1 = 0;
LAB_01e45b94:
  return uVar1 & 1;
}


