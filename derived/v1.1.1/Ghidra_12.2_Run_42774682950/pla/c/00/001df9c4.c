/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001df9c4; name: FUN_001df9c4
 */


undefined4 FUN_001df9c4(undefined8 *param_1,undefined8 *param_2)

{
  char *pcVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  
  iVar3 = FUN_00212db8(param_1[0xa6]);
  uVar4 = 0;
  if ((param_2 != (undefined8 *)0x0) && (iVar3 != 0)) {
    lVar5 = param_1[0xa6];
    uVar4 = FUN_001e0f40(param_1,*(undefined4 *)(lVar5 + 0x34),*(undefined8 *)(lVar5 + 0x38));
    *(undefined8 *)(lVar5 + 0x38) = 0;
  }
  *(byte *)(param_1 + 0xa7) = *(byte *)(param_1 + 0xa7) | 1;
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = param_1[0xa4];
  }
  if (param_1[0xa4] == 0) {
    bVar2 = (*(uint *)((long)param_1 + 0x3fc) & 0x20) != 0;
    pcVar1 = "host";
    if (bVar2) {
      pcVar1 = "proxy";
    }
    uVar4 = 5;
    if (!bVar2) {
      uVar4 = 6;
    }
    FUN_001f3ae0(*param_1,"Could not resolve %s: %s",pcVar1,param_1[0xa2]);
  }
  FUN_001df8e8(param_1 + 0xa2);
  if (param_1[0xa4] == 0) {
    FUN_001dee08(param_1,1);
  }
  return uVar4;
}


