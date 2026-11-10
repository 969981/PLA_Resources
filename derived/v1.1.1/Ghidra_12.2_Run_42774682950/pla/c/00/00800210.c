/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00800210; name: FUN_00800210
 */


undefined8 FUN_00800210(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_48 [16];
  long local_38 [2];
  undefined4 local_28 [2];
  
  lVar4 = *(long *)(param_1 + 0x58);
  if (*(char *)(lVar4 + 0x28) == '\0') {
    local_38[0] = CONCAT44(local_38[0]._4_4_,0x6c05);
    local_28[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
    lVar4 = *(long *)(param_1 + 0x58);
    if (*(int *)(param_1 + 0x80) != (int)local_38[0]) {
      FUN_007ee578(auStack_48,param_1 + 0x80);
      FUN_007e5cac(lVar4,auStack_48);
      goto LAB_00800264;
    }
  }
  FUN_007e5d18(lVar4);
LAB_00800264:
  local_38[0] = 0;
  FUN_007ecf14(local_38);
  lVar4 = local_38[0];
  lVar5 = *(long *)(param_1 + 0xc0);
  plVar2 = (long *)FUN_007ecfa4();
  if (5 < *(uint *)(param_1 + 200)) {
    local_38[0] = 0;
    FUN_007ecf14(local_38);
    *(long *)(param_1 + 0xc0) = local_38[0];
    *(undefined8 *)(param_1 + 0x58) = 0;
    return 1;
  }
  lVar1 = 0;
  if (*plVar2 != 0) {
    lVar1 = (lVar4 - lVar5) / *plVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x008002a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*(code *)(&UNK_008002ac + (ulong)(byte)(&DAT_03a729c7)[*(uint *)(param_1 + 200)] * 4))
                    (lVar1);
  return uVar3;
}


