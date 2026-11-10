/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010db560; name: FUN_010db560
 */


undefined8 FUN_010db560(long param_1,uint param_2,uint param_3,uint param_4)

{
  ushort *puVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  code *pcVar5;
  uint uVar6;
  ushort *puVar7;
  undefined1 auStack_50 [16];
  
  if (param_2 == 0) {
    return 0;
  }
  if (param_3 == 0) {
    return 0;
  }
  FUN_02c4fb44(auStack_50);
  uVar4 = FUN_02c4fc60(auStack_50,0xe);
  iVar2 = (int)uVar4;
  uVar3 = FUN_010dac08(uVar4,uVar4 & 0xffffffff);
  if (iVar2 == 0) {
    puVar1 = (ushort *)(param_1 + 0x68);
  }
  else if (iVar2 == 1) {
    puVar1 = (ushort *)(param_1 + 0xaf4);
  }
  else {
    if (iVar2 != 2) {
      return 0;
    }
    puVar1 = (ushort *)(param_1 + 0xc84);
  }
  if ((uVar3 <= param_4) && (uVar3 != 0)) {
    uVar4 = 0;
    puVar7 = puVar1;
    do {
      if (*puVar7 == param_2) {
        param_4 = (uint)uVar4;
        break;
      }
      uVar4 = uVar4 + 1;
      puVar7 = puVar7 + 2;
    } while (uVar3 != uVar4);
  }
  if ((param_4 < uVar3) && (puVar1[(ulong)param_4 * 2] == param_2)) {
    uVar6 = (uint)puVar1[(ulong)param_4 * 2 + 1];
    uVar3 = uVar6 - param_3;
    if (param_3 <= uVar6) {
      puVar1[(ulong)param_4 * 2 + 1] = (ushort)uVar3;
      if ((uVar3 & 0xffff) == 0) {
        puVar1[(ulong)param_4 * 2] = 0;
        pcVar5 = *(code **)(param_1 + 0xda0);
      }
      else {
        pcVar5 = *(code **)(param_1 + 0xda0);
      }
      if (pcVar5 != (code *)0x0) {
        (*pcVar5)(param_1 + 0xdc0);
      }
      return 1;
    }
  }
  return 0;
}


