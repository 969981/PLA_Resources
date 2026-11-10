/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0083d430; name: FUN_0083d430
 */


undefined8 FUN_0083d430(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [16];
  int local_58 [4];
  int local_48 [4];
  undefined1 auStack_38 [16];
  undefined4 local_28 [2];
  
  uVar2 = FUN_0083cff0();
  if (((uVar2 & 1) == 0) ||
     (uVar2 = FUN_0083d1e8(param_1), puVar1 = PTR_DAT_04377550, (uVar2 & 1) == 0)) {
    return 1;
  }
  if ((*(long *)(param_1 + 0x58) == 0) || (*(char *)(*(long *)(param_1 + 0x58) + 0x28) == '\0')) {
    uVar2 = (**(code **)(**(long **)(*(long *)PTR_DAT_04377550 + 0x18) + 0xf0))();
    if ((uVar2 & 1) != 0) {
      FUN_0082b294(*(undefined8 *)puVar1,1);
      uVar3 = *(undefined8 *)(param_1 + 0x58);
      local_48[0] = 0;
      local_58[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_58);
      FUN_007ee578(auStack_38,local_48);
      FUN_007e5c40(uVar3,auStack_38);
      *(undefined8 *)(param_1 + 0x58) = 0;
      return 1;
    }
    (**(code **)(**(long **)(param_1 + 0x90) + 0x88))
              (local_48,*(long **)(param_1 + 0x90),param_1 + 0x60);
    puVar1 = PTR_LAB_04377f08;
    if (local_48[0] == 0) {
      *(char **)(param_1 + 0x40) = "OpenCloseParticipationJob::WaitOpenParticipation";
      *(undefined **)(param_1 + 0x30) = puVar1;
      *(undefined8 *)(param_1 + 0x38) = 0;
    }
    else {
      local_58[0] = 0x4c11;
      local_28[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_28);
      if (local_48[0] != local_58[0]) {
        uVar3 = *(undefined8 *)(param_1 + 0x58);
        FUN_007ee578(auStack_68,local_48);
        FUN_007e5cac(uVar3,auStack_68);
        goto LAB_0083d558;
      }
    }
    uVar3 = 5;
  }
  else {
    FUN_007e5d18();
LAB_0083d558:
    *(undefined8 *)(param_1 + 0x58) = 0;
    uVar3 = 1;
  }
  return uVar3;
}


