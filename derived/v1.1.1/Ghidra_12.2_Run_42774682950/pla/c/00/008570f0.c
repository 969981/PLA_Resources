/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008570f0; name: FUN_008570f0
 */


void FUN_008570f0(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  int *piVar4;
  int local_50 [4];
  int local_40 [4];
  undefined4 local_28 [2];
  
  puVar1 = PTR_DAT_043773c0;
  piVar4 = local_50;
  if (*(char *)(param_2 + 8) == '\0') {
LAB_008571c8:
    local_40[0] = 0x10408;
    local_50[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_50);
  }
  else {
    lVar3 = FUN_008551bc(*(undefined8 *)PTR_DAT_043773c0);
    if (lVar3 == 0) goto LAB_008571c8;
    local_40[0] = 0;
    local_50[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_50);
    FUN_00857208(local_50,param_2);
    FUN_007ee660(local_40,local_50);
    if (local_40[0] == 0) {
      FUN_00857600(local_50,param_2);
      FUN_007ee660(local_40,local_50);
      if (local_40[0] == 0) {
        lVar3 = *(long *)puVar1;
        *(undefined4 *)(param_2 + 0x68d4) = *(undefined4 *)(lVar3 + 0xb4);
        *(undefined4 *)(lVar3 + 0xb4) = 0;
        uVar2 = FUN_0085500c();
        *(undefined4 *)(param_2 + 0x68d8) = uVar2;
        uVar2 = FUN_00855038(*(undefined8 *)puVar1);
        *(undefined4 *)(param_2 + 0x68dc) = uVar2;
        local_50[0] = 0;
        local_28[0] = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_28);
        goto LAB_008571ec;
      }
    }
  }
  piVar4 = local_40;
LAB_008571ec:
  FUN_007ee578(param_1,piVar4);
  return;
}


