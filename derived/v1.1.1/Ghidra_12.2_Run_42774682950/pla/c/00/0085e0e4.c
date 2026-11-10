/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0085e0e4; name: FUN_0085e0e4
 */


undefined8 FUN_0085e0e4(long param_1)

{
  undefined1 *puVar1;
  long lVar2;
  undefined4 local_78 [4];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  ulong local_48 [2];
  undefined1 auStack_38 [16];
  undefined4 local_28 [2];
  
  local_48[0] = 0;
  FUN_007ecf14(local_48);
  if (*(ulong *)(param_1 + 0x68) < local_48[0]) {
    FUN_0085cdf8(*(undefined8 *)(param_1 + 0x58));
    lVar2 = *(long *)(param_1 + 0x60);
    local_48[0] = local_48[0] & 0xffffffff00000000;
    local_78[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_78);
    FUN_007ee578(auStack_38,local_48);
    puVar1 = auStack_38;
  }
  else {
    FUN_007ee578(local_48,*(long *)(param_1 + 0x58) + 0x1a8);
    lVar2 = *(long *)(param_1 + 0x60);
    if ((int)local_48[0] != 0) {
      FUN_007ee578(auStack_58,local_48);
      FUN_007e5cac(lVar2,auStack_58);
      goto LAB_0085e198;
    }
    if (*(char *)(lVar2 + 0x28) != '\0') {
      FUN_007e5d18(lVar2);
      goto LAB_0085e198;
    }
    if (*(char *)(*(long *)(param_1 + 0x58) + 0x1370) == '\0') {
      return 5;
    }
    local_78[0] = 0;
    local_28[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_78 | 4),(Result *)local_28);
    FUN_007ee578(auStack_68,local_78);
    puVar1 = auStack_68;
  }
  FUN_007e5c40(lVar2,puVar1);
LAB_0085e198:
  *(undefined8 *)(param_1 + 0x60) = 0;
  return 1;
}


