/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029d6c80; name: FUN_029d6c80
 */


void FUN_029d6c80(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auStack_50 [8];
  long local_48;
  long lStack_40;
  long local_38;
  long lStack_30;
  undefined2 local_28;
  undefined1 local_26;
  
  local_38 = param_3[3];
  if (*(char *)(local_38 + 0x5a) != '\0') {
    lStack_30 = param_3[2];
    lStack_40 = *param_3;
    local_48 = param_3[1];
    local_26 = 0;
    local_28 = 0x3a;
    FUN_029d59d0(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x3a0),auStack_50,&local_48);
    if ((param_3[4] != 0) &&
       (((lVar3 = param_3[3], *(char *)(lVar3 + 0x5b) != '\0' || (*(char *)(lVar3 + 0x5d) != '\0'))
        && (*(char *)(lVar3 + 0x5a) == '\0')))) {
      uVar2 = (ulong)*(byte *)(*param_3 + 0x7d);
      lVar3 = *(long *)(param_1 + 0x20);
      if (uVar2 < 0x1e) {
        lVar1 = *(long *)(*(long *)(*(long *)(lVar3 + 0x20) + 0x10) + 0x128) + uVar2 * 4;
        *(uint *)(lVar1 + 8) = *(uint *)(lVar1 + 8) | 4;
      }
      FUN_02a3e6b8(*(undefined8 *)(lVar3 + 0x18),0x4f,uVar2,2);
      return;
    }
  }
  return;
}


