/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0086f14c; name: FUN_0086f14c
 */


undefined1 FUN_0086f14c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined1 uVar4;
  long lVar5;
  undefined4 local_88 [4];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [32];
  undefined8 local_48 [4];
  undefined4 local_28 [2];
  
  puVar1 = PTR_FUN_043783e8;
  if ((*(long *)(param_1 + 0x60) == 0) || (*(char *)(*(long *)(param_1 + 0x60) + 0x28) == '\0')) {
    local_48[0] = 0;
    FUN_007ecf14(local_48);
    *(undefined8 *)(param_1 + 0x80) = local_48[0];
    FUN_007e3400(local_48);
    FUN_007e3400(auStack_68);
    uVar2 = FUN_007ec6e4(*(long *)(param_1 + 0x68) + 0x430);
    uVar3 = FUN_007ec198(uVar2,0,2,0,auStack_68);
    uVar4 = (uVar3 & 1) == 0;
    if ((bool)uVar4) {
      uVar2 = *(undefined8 *)(param_1 + 0x58);
      local_88[0] = 0xc436;
      local_28[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_88 | 4),(Result *)local_28);
      FUN_007ee578(auStack_78,local_88);
      FUN_007e5cac(uVar2,auStack_78);
      FUN_0086e2e4(*(undefined8 *)(param_1 + 0x68));
      *(undefined8 *)(param_1 + 0x68) = 0;
    }
    else {
      lVar5 = *(long *)(param_1 + 0x68);
      FUN_007e346c(lVar5 + 0x898,local_48);
      *(undefined2 *)(lVar5 + 0x8b0) = *(undefined2 *)(lVar5 + 0x890);
      FUN_007e346c(lVar5 + 0x8b8,auStack_68);
      *(undefined2 *)(lVar5 + 0x8d0) = *(undefined2 *)(lVar5 + 0x890);
      FUN_007e346c(lVar5 + 0x918,local_48);
      FUN_007e346c(lVar5 + 0x938,auStack_68);
      *(undefined2 *)(lVar5 + 0x930) = 0x8236;
      puVar1 = PTR_LAB_043783f0;
      *(undefined2 *)(lVar5 + 0x950) = 0x8236;
      *(char **)(param_1 + 0x40) = "NatCheckJob::StepResolveSecondaryAddress";
      *(undefined **)(param_1 + 0x30) = puVar1;
      *(undefined8 *)(param_1 + 0x38) = 0;
    }
    FUN_007e34a4(auStack_68);
    FUN_007e34a4(local_48);
  }
  else {
    *(char **)(param_1 + 0x40) = "NatCheckJob::StepComplete";
    uVar4 = 6;
    *(undefined **)(param_1 + 0x30) = puVar1;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  return uVar4;
}


