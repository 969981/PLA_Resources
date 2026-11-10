/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007e6364; name: FUN_007e6364
 */


undefined8 FUN_007e6364(long param_1)

{
  undefined2 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined1 auStack_98 [16];
  undefined8 local_88;
  undefined1 auStack_78 [16];
  long local_68;
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [32];
  undefined4 local_18 [2];
  
  FUN_007e3400(auStack_40);
  FUN_007e3400(auStack_60);
  local_68 = 0;
  FUN_007ecf14(&local_68);
  uVar2 = FUN_007ec6e4(param_1 + 0x90);
  uVar3 = FUN_007ec198(uVar2,0,2,auStack_40,auStack_60);
  if ((uVar3 & 1) == 0) {
    local_88 = CONCAT44(local_88._4_4_,0x6486);
    local_18[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)&local_88 | 4),(Result *)local_18);
    FUN_007ee578(auStack_78,&local_88);
    FUN_007e5cac(param_1 + 0x58,auStack_78);
    if (*(long *)(param_1 + 0x88) != 0) {
      FUN_007e4464();
    }
  }
  else {
    local_88 = (ulong)local_88._4_4_ << 0x20;
    local_18[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)&local_88 | 4),(Result *)local_18);
    FUN_007ee578(auStack_98,&local_88);
    FUN_007e5c40(param_1 + 0x58,auStack_98);
    if (*(long *)(param_1 + 0x88) != 0) {
      uVar3 = FUN_007e3604(auStack_60);
      if ((uVar3 & 1) != 0) {
        FUN_007e346c(*(undefined8 *)(param_1 + 0x88),auStack_60);
      }
      *(undefined2 *)(*(long *)(param_1 + 0x88) + 0x18) = 0x8627;
    }
  }
  local_88 = 0;
  FUN_007ecf14(&local_88);
  lVar5 = local_88 - local_68;
  plVar4 = (long *)FUN_007ecfa4();
  uVar1 = 0;
  if (*plVar4 != 0) {
    uVar1 = (undefined2)(lVar5 / *plVar4);
  }
  *(undefined2 *)(PTR_DAT_043773b8 + 0xb0) = uVar1;
  FUN_007e34a4(auStack_60);
  FUN_007e34a4(auStack_40);
  return 1;
}


