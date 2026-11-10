/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00801270; name: FUN_00801270
 */


undefined8 FUN_00801270(long param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  ulong local_48 [2];
  undefined1 auStack_38 [16];
  undefined4 local_28 [2];
  
  uVar4 = *(undefined8 *)(param_1 + 0x58);
  local_48[0] = local_48[0] & 0xffffffff00000000;
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_28);
  FUN_007ee578(auStack_38,local_48);
  FUN_007e5c40(uVar4,auStack_38);
  *(undefined8 *)(param_1 + 0x58) = 0;
  local_48[0] = 0;
  FUN_007ecf14(local_48);
  uVar2 = local_48[0];
  lVar5 = *(long *)(param_1 + 0xc0);
  plVar3 = (long *)FUN_007ecfa4();
  if (5 < *(uint *)(param_1 + 200)) {
    local_48[0] = 0;
    FUN_007ecf14(local_48);
    *(ulong *)(param_1 + 0xc0) = local_48[0];
    return 1;
  }
  lVar1 = 0;
  if (*plVar3 != 0) {
    lVar1 = (long)(uVar2 - lVar5) / *plVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x008012fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (*(code *)(&UNK_00801300 + (ulong)(byte)(&DAT_03a729cd)[*(uint *)(param_1 + 200)] * 4))
                    (lVar1);
  return uVar4;
}


